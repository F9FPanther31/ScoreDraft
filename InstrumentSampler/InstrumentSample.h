#ifndef _InstrumentSample_h
#define _InstrumentSample_h

class InstrumentSample
{
public:
	InstrumentSample();
	~InstrumentSample();

	unsigned m_wav_length;
	unsigned m_chn;
	float *m_wav_samples;
	float m_max_v;
	float m_origin_freq;
	unsigned m_origin_sample_rate;

	bool LoadWav(const char* wav_path);

private:
	void _fetchOriginFreq(const char* wav_path);
};

#endif

