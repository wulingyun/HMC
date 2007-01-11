
#include "Haplotype.h"

#include "MemLeak.h"


////////////////////////////////
//
// class Haplotype

Haplotype::Haplotype()
{
	m_id[0] = 0;
	m_weight = 1.0;
}

Haplotype::Haplotype(int len)
	: AlleleSequence(len)
{
	m_id[0] = 0;
	m_weight = 1.0;
}

Haplotype::Haplotype(const AlleleSequence &as)
	: AlleleSequence(as)
{
	m_id[0] = 0;
	m_weight = 1.0;
}

Haplotype::Haplotype(const Haplotype &h)
	: AlleleSequence(h)
{
	strcpy(m_id, h.m_id);
	m_weight = h.m_weight;
}
