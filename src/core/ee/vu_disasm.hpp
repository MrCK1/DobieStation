#ifndef VU_DISASM_HPP
#define VU_DISASM_HPP
#include <string>

namespace VU_Disasm
{
    std::string get_field(uint8_t field);
    std::string get_fsf(int fsf);

    std::string upper_simple(const std::string op, uint32_t instr);
    std::string upper_bc(const std::string op, uint32_t instr);
    std::string upper_i(const std::string op, uint32_t instr);
    std::string upper_q(const std::string op, uint32_t instr);
    std::string upper(uint32_t PC, uint32_t instr);

    std::string upper_acc(const std::string op, uint32_t instr);
    std::string upper_acc_bc(const std::string op, uint32_t instr);
    std::string upper_acc_i(const std::string op, uint32_t instr);
    std::string upper_conversion(const std::string op, uint32_t instr);
    std::string upper_itof(const std::string op, uint32_t instr);
    std::string upper_special(uint32_t PC, uint32_t instr);
    std::string clip(uint32_t instr);
    std::string opmula(uint32_t instr);

    std::string loi(uint32_t lower);

    bool is_branch(uint32_t instr);
    std::string lower(uint32_t PC, uint32_t instr);
    std::string lower1(uint32_t PC, uint32_t instr);
    std::string lower1_regi(const std::string op, uint32_t instr);
    std::string lower1_immi(const std::string op, uint32_t instr);

    std::string lower1_special(uint32_t PC, uint32_t instr);
    std::string move(uint32_t instr);
    std::string lqi(uint32_t instr);
    std::string sqi(uint32_t instr);
    std::string div(uint32_t instr);
    std::string mtir(uint32_t instr);
    std::string mfir(uint32_t instr);
    std::string ilwr(uint32_t instr);
    std::string mfp(uint32_t instr);
    std::string xtop(uint32_t instr);
    std::string xitop(uint32_t instr);
    std::string xgkick(uint32_t instr);
    std::string eleng(uint32_t instr);
    std::string esqrt(uint32_t instr);

    std::string lower2(uint32_t PC, uint32_t instr);
    std::string loadstore_imm(const std::string op, uint32_t instr);
    std::string arithu(const std::string op, uint32_t instr);
    std::string branch(const std::string op, uint32_t PC, uint32_t instr);
    std::string branch_zero(const std::string op, uint32_t PC, uint32_t instr);
    std::string lq(uint32_t instr);
    std::string sq(uint32_t instr);
    std::string fcset(uint32_t instr);
    std::string fcand(uint32_t instr);
    std::string fmand(uint32_t instr);
    std::string fcget(uint32_t instr);
    std::string b(uint32_t PC, uint32_t instr);
    std::string bal(uint32_t PC, uint32_t instr);
    std::string jr(uint32_t instr);
};

#endif // VU_DISASM_HPP
