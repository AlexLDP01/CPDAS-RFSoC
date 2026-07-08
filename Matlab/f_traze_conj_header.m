function f_traze_conj_header(fft_conj, file_name)
    % fft_conj: matriz compleja [RBINS x NUM_WIN] o vector
    % Exporta interleaved int16: Re0,Im0,Re1,Im1,...
    v = fft_conj(:);  % a vector

    % Escalado Q15 para int16
    s = max([abs(real(v)); abs(imag(v))]);
    if s == 0, s = 1; end
    vq = v / s * (2^15-1);

    out = zeros(2*numel(v), 1, 'int16');
    out(1:2:end) = int16(round(real(vq)));
    out(2:2:end) = int16(round(imag(vq)));

    fid = fopen(file_name + ".h",'w');
    fprintf(fid, "#pragma once\n#include <stdint.h>\n\n");
    fprintf(fid, "#define %s_LEN %d\n\n", upper(file_name), numel(out));
    fprintf(fid, "static const int16_t %s_int16[%s_LEN] = {\n", file_name, upper(file_name));

    for i = 1:numel(out)
        if i < numel(out), fprintf(fid, "%d,", out(i));
        else, fprintf(fid, "%d", out(i)); end
        if mod(i,16)==0, fprintf(fid, "\n"); end
    end
    fprintf(fid, "\n};\n");
    fclose(fid);
end