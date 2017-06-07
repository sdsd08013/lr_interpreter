#ifndef _TERMINAL_EXPRESSION_H_
#define _TERMINAL_EXPRESSION_H_
#include "abstract_expression.h"
class TerminalExpression: public AbstractExpression {
  public:
    virtual int interpret();
};
#endif //_TERMINAL_EXPRESSION_H_
