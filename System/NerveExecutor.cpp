/*!
 * @file
 * @brief Implementations for the Nerve executor.
 */

#include <System\NerveExecutor.hpp>

NerveExecutor::NerveExecutor(const char* tag)
{
	// tag unused in release build
	_04 = 0;
}
NerveExecutor::~NerveExecutor()
{}

void NerveExecutor::initNerve(Nerve const * pNerve)
{
	mpSpine = new Spine(this, pNerve);
}
void NerveExecutor::updateNerve()
{
	if (mpSpine)
		mpSpine->update();
}
void NerveExecutor::setNerve(Nerve const * pNerve)
{
	mpSpine->setNerve(pNerve);
}
bool NerveExecutor::isNerve(Nerve const * pNerve) const
{
	return pNerve == mpSpine->getCurrentNerve();
}
unk NerveExecutor::getNerveStep() const
{
	return mpSpine->_0C;
}
