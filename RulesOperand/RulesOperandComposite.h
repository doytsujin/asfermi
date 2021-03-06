#ifndef RulesOperandCompositeDefined
#define RulesOperandCompositeDefined

struct OperandRuleMOVStyle;
extern OperandRuleMOVStyle OPRMOVStyle;


struct OperandRuleFADDStyle;
extern OperandRuleFADDStyle OPRFADDStyle, OPRFMULStyle;

struct OperandRuleFAllowNegative;
extern OperandRuleFAllowNegative OPRFMULAllowNegative, OPRFFMAAllowNegative;

struct OperandRuleIADDStyle;
extern OperandRuleIADDStyle OPRIADDStyle, OPRIMULStyle;

struct OperandRuleMAD3;
extern OperandRuleMAD3 OPRMAD3;

struct OperandRuleIAllowNegative;
extern OperandRuleIAllowNegative OPRISCADDAllowNegative;

struct OperandRuleFADDCompositeWithOperator;
extern OperandRuleFADDCompositeWithOperator OPRFADDCompositeWithOperator;

extern bool LabelProcessing;
extern int LabelAbsoluteAddr;
struct OperandRuleInstructionAddress;
extern OperandRuleInstructionAddress OPRInstructionAddress;

struct OperandRuleBAR;
extern OperandRuleBAR OPRBAR, OPRBARNoRegister;

struct OperandRuleTCount;
extern OperandRuleTCount OPRTCount;

struct OperandRuleCompositeForVADD;
extern OperandRuleCompositeForVADD OPRCompositeForVADD;

#endif
