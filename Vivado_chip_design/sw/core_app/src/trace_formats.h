#ifndef TRACE_FORMATS_H
#define TRACE_FORMATS_H


#define SAMPLE_SIZE 		2    					// Bytes per sample (int16)
#define TRACE_WIN			1024					// next power of 2 from the equivalent of 10m (calcs below)
#define NFFT  				(TRACE_WIN*2)			// Window size with 0 padding = 2xtrace_window
#define RES_FFT_LEN			(NFFT/2 + 1)  // 1024 +1 for fft over real-valued signal (conjugate symmetry of the resulting spectrum)
#define TRANSFER_LENGTH 	(TRACE_WIN*SAMPLE_SIZE) // DMA transfer length  (in bytes)
//------------------------
//  Data from CPDAS
//------------------------
//	n_samples = 130767
//	fs = 10e9 samples/s
// ------------------------
//	t = n_samples/fs = 0,0000130767 s = 13,0767 us
//
//	e = v*t = c/n * t = 3e8/1,5 * 0,0000130767 = 2615m
//
//	z = e/2 = 1307m (=1km)
// ------------------------
//  z = 1307m 	->  130767 samples
//  z = 10m 	->  ¿? samples
//  samples = 130767/130,7 = 1.000,5 -> next power of 2 -> 1024
// ------------------------
#endif
