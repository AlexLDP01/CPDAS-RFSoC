function [traze_int16] = untitled(traze_complex, file_name)
    fprintf("%s:", file_name);
    trace = abs(traze_complex(:));
    % trace = trace - mean(trace);
    max_from_trace = max(abs(trace))
    scale_factor = (2^(16-1)-1)/max(abs(trace))
    trace = trace*scale_factor;
    traze_int16 = int16(round(trace));

    % ---- export para Vitis (binario int16) ----
    fid = fopen(file_name+'_int16.bin','wb');
    fwrite(fid, traze_int16, 'int16');
    fclose(fid);

    % ---- export para Vitis (header .h con array int16_t) ----
    fid = fopen(file_name+".h",'w');
    fprintf(fid, "#pragma once\n");
    fprintf(fid, "#include <stdint.h>\n\n");
    fprintf(fid, "#define %s_LEN %d\n\n", file_name,numel(traze_int16));
    fprintf(fid, "static const int16_t %s_int16[%s_LEN] = {\n",file_name,file_name);

    for i = 1:numel(traze_int16)
        if i < numel(traze_int16)
            fprintf(fid, "%d,", traze_int16(i));
        else
            fprintf(fid, "%d", traze_int16(i));
        end
        if mod(i,16)==0
            fprintf(fid, "\n");
        end
    end

    fprintf(fid, "\n};\n");
    fclose(fid);
end