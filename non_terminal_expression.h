#ifndef _NON_TERMINAL_EXPRESSION_H_
#define _NON_TERMINAL_EXPRESSION_H_
#include "abstract_expression.h"
class NonTerminalExpression: public AbstractExpression {
  public:
    virtual int interpret();
};
#endif //_NON_TERMINAL_EXPRESSION_H_
