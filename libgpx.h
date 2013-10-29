#ifndef LIBGPX_H

#ifdef __cplusplus
	extern "C" {
#endif

void gpx_setSuppressEpilogue(int suppress);
void gpx_clear_state();
void gpx_convert(const char *input, long input_len, unsigned char **output, long *output_len);

#ifdef __cplusplus
	} //extern "C"
#endif

#endif /* ! LIBGPX_H */
