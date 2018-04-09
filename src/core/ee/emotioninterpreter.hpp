#ifndef EMOTIONINTERPRETER_HPP
#define EMOTIONINTERPRETER_HPP
#include "emotion.hpp"

namespace EmotionInterpreter
{
    void interpret(EmotionEngine& cpu, uint32_t instruction);

    void special(EmotionEngine& cpu, uint32_t instruction);
    void sll(EmotionEngine& cpu, uint32_t instruction);
    void srl(EmotionEngine& cpu, uint32_t instruction);
    void sra(EmotionEngine& cpu, uint32_t instruction);
    void sllv(EmotionEngine& cpu, uint32_t instruction);
    void srlv(EmotionEngine& cpu, uint32_t instruction);
    void srav(EmotionEngine& cpu, uint32_t instruction);
    void jr(EmotionEngine& cpu, uint32_t instruction);
    void jalr(EmotionEngine& cpu, uint32_t instruction);
    void movz(EmotionEngine& cpu, uint32_t instruction);
    void movn(EmotionEngine& cpu, uint32_t instruction);
    void syscall_ee(EmotionEngine& cpu, uint32_t instruction);
    void mfhi(EmotionEngine& cpu, uint32_t instruction);
    void mthi(EmotionEngine& cpu, uint32_t instruction);
    void mflo(EmotionEngine& cpu, uint32_t instruction);
    void mtlo(EmotionEngine& cpu, uint32_t instruction);
    void dsllv(EmotionEngine& cpu, uint32_t instruction);
    void dsrlv(EmotionEngine& cpu, uint32_t instruction);
    void dsrav(EmotionEngine& cpu, uint32_t instruction);
    void mult(EmotionEngine& cpu, uint32_t instruction);
    void multu(EmotionEngine& cpu, uint32_t instruction);
    void div(EmotionEngine& cpu, uint32_t instruction);
    void divu(EmotionEngine& cpu, uint32_t instruction);
    void add(EmotionEngine& cpu, uint32_t instruction);
    void addu(EmotionEngine& cpu, uint32_t instruction);
    void sub(EmotionEngine& cpu, uint32_t instruction);
    void subu(EmotionEngine& cpu, uint32_t instruction);
    void and_ee(EmotionEngine& cpu, uint32_t instruction);
    void or_ee(EmotionEngine& cpu, uint32_t instruction);
    void xor_ee(EmotionEngine& cpu, uint32_t instruction);
    void nor(EmotionEngine& cpu, uint32_t instruction);
    void mfsa(EmotionEngine& cpu, uint32_t instruction);
    void mtsa(EmotionEngine& cpu, uint32_t instruction);
    void slt(EmotionEngine& cpu, uint32_t instruction);
    void sltu(EmotionEngine& cpu, uint32_t instruction);
    void dadd(EmotionEngine& cpu, uint32_t instruction);
    void daddu(EmotionEngine& cpu, uint32_t instruction);
    void dsubu(EmotionEngine& cpu, uint32_t instruction);
    void dsll(EmotionEngine& cpu, uint32_t instruction);
    void dsrl(EmotionEngine& cpu, uint32_t instruction);
    void dsll32(EmotionEngine& cpu, uint32_t instruction);
    void dsrl32(EmotionEngine& cpu, uint32_t instruction);
    void dsra32(EmotionEngine& cpu, uint32_t instruction);

    void regimm(EmotionEngine& cpu, uint32_t instruction);
    void bltz(EmotionEngine& cpu, uint32_t instruction);
    void bltzl(EmotionEngine& cpu, uint32_t instruction);
    void bgez(EmotionEngine& cpu, uint32_t instruction);
    void bgezl(EmotionEngine& cpu, uint32_t instruction);
    void mtsah(EmotionEngine& cpu, uint32_t instruction);

    void j(EmotionEngine& cpu, uint32_t instruction);
    void jal(EmotionEngine& cpu, uint32_t instruction);
    void beq(EmotionEngine& cpu, uint32_t instruction);
    void bne(EmotionEngine& cpu, uint32_t instruction);
    void blez(EmotionEngine& cpu, uint32_t instruction);
    void bgtz(EmotionEngine& cpu, uint32_t instruction);
    void addi(EmotionEngine& cpu, uint32_t instruction);
    void addiu(EmotionEngine& cpu, uint32_t instruction);
    void slti(EmotionEngine& cpu, uint32_t instruction);
    void sltiu(EmotionEngine& cpu, uint32_t instruction);
    void andi(EmotionEngine& cpu, uint32_t instruction);
    void ori(EmotionEngine& cpu, uint32_t instruction);
    void xori(EmotionEngine& cpu, uint32_t instruction);
    void lui(EmotionEngine& cpu, uint32_t instruction);
    void beql(EmotionEngine& cpu, uint32_t instruction);
    void bnel(EmotionEngine& cpu, uint32_t instruction);
    void blezl(EmotionEngine& cpu, uint32_t instruction);
    void daddiu(EmotionEngine& cpu, uint32_t instruction);
    void ldl(EmotionEngine& cpu, uint32_t instruction);
    void ldr(EmotionEngine& cpu, uint32_t instruction);
    void lq(EmotionEngine& cpu, uint32_t instruction);
    void sq(EmotionEngine& cpu, uint32_t instruction);
    void lb(EmotionEngine& cpu, uint32_t instruction);
    void lh(EmotionEngine& cpu, uint32_t instruction);
    void lwl(EmotionEngine& cpu, uint32_t instruction);
    void lw(EmotionEngine& cpu, uint32_t instruction);
    void lbu(EmotionEngine& cpu, uint32_t instruction);
    void lhu(EmotionEngine& cpu, uint32_t instruction);
    void lwr(EmotionEngine& cpu, uint32_t instruction);
    void lwu(EmotionEngine& cpu, uint32_t instruction);
    void sb(EmotionEngine& cpu, uint32_t instruction);
    void sh(EmotionEngine& cpu, uint32_t instruction);
    void swl(EmotionEngine& cpu, uint32_t instruction);
    void sw(EmotionEngine& cpu, uint32_t instruction);
    void sdl(EmotionEngine& cpu, uint32_t instruction);
    void sdr(EmotionEngine& cpu, uint32_t instruction);
    void swr(EmotionEngine& cpu, uint32_t instruction);
    void lwc1(EmotionEngine& cpu, uint32_t instruction);
    void lqc2(EmotionEngine& cpu, uint32_t instruction);
    void ld(EmotionEngine& cpu, uint32_t instruction);
    void swc1(EmotionEngine& cpu, uint32_t instruction);
    void sqc2(EmotionEngine& cpu, uint32_t instruction);
    void sd(EmotionEngine& cpu, uint32_t instruction);

    void cop(EmotionEngine& cpu, uint32_t instruction);
    void cop_mfc(EmotionEngine& cpu, uint32_t instruction);
    void cop_mtc(EmotionEngine& cpu, uint32_t instruction);
    void cop_cfc(EmotionEngine& cpu, uint32_t instruction);
    void cop_ctc(EmotionEngine& cpu, uint32_t instruction);

    void cop_s(Cop1& fpu, uint32_t instruction);
    void fpu_add(Cop1& fpu, uint32_t instruction);
    void fpu_sub(Cop1& fpu, uint32_t instruction);
    void fpu_mul(Cop1& fpu, uint32_t instruction);
    void fpu_div(Cop1& fpu, uint32_t instruction);
    void fpu_abs(Cop1& fpu, uint32_t instruction);
    void fpu_mov(Cop1& fpu, uint32_t instruction);
    void fpu_neg(Cop1& fpu, uint32_t instruction);
    void fpu_adda(Cop1& fpu, uint32_t instruction);
    void fpu_madd(Cop1& fpu, uint32_t instruction);
    void fpu_cvt_w_s(Cop1& fpu, uint32_t instruction);
    void fpu_c_eq_s(Cop1& fpu, uint32_t instruction);
    void fpu_c_lt_s(Cop1& fpu, uint32_t instruction);
    void cop_bc1(EmotionEngine& cpu, uint32_t instruction);
    void cop_cvt_s_w(EmotionEngine& cpu, uint32_t instruction);

    void cop2_qmfc2(EmotionEngine& cpu, uint32_t instruction);
    void cop2_qmtc2(EmotionEngine& cpu, uint32_t instruction);
    void cop2_special(VectorUnit& vu0, uint32_t instruction);
    void cop2_vaddbc(VectorUnit& vu0, uint32_t instruction);
    void cop2_vsubbc(VectorUnit& vu0, uint32_t instruction);
    void cop2_vmaddbc(VectorUnit& vu0, uint32_t instruction);
    void cop2_vmulbc(VectorUnit& vu0, uint32_t instruction);
    void cop2_vmulq(VectorUnit& vu0, uint32_t instruction);
    void cop2_vaddq(VectorUnit& vu0, uint32_t instruction);
    void cop2_vadd(VectorUnit& vu0, uint32_t instruction);
    void cop2_vmul(VectorUnit& vu0, uint32_t instruction);
    void cop2_vsub(VectorUnit& vu0, uint32_t instruction);
    void cop2_viadd(VectorUnit& vu0, uint32_t instruction);
    void cop2_special2(VectorUnit& vu0, uint32_t instruction);
    void cop2_vmaddabc(VectorUnit& vu0, uint32_t instruction);
    void cop2_vftoi4(VectorUnit& vu0, uint32_t instruction);
    void cop2_vmulabc(VectorUnit& vu0, uint32_t instruction);
    void cop2_vsqi(VectorUnit& vu0, uint32_t instruction);
    void cop2_vrsqrt(VectorUnit& vu0, uint32_t instruction);
    void cop2_viswr(VectorUnit& vu0, uint32_t instruction);
    void cop2_vrnext(VectorUnit& vu0, uint32_t instruction);
    void cop2_vrinit(VectorUnit& vu0, uint32_t instruction);

    void mmi(EmotionEngine& cpu, uint32_t instruction);
    void plzcw(EmotionEngine& cpu, uint32_t instruction);
    void mmi0(EmotionEngine& cpu, uint32_t instruction);
    void psubb(EmotionEngine& cpu, uint32_t instruction);
    void pcgtb(EmotionEngine& cpu, uint32_t instruction);
    void mmi1(EmotionEngine& cpu, uint32_t instruction);
    void padduw(EmotionEngine& cpu, uint32_t instruction);
    void mmi2(EmotionEngine& cpu, uint32_t instruction);
    void pcpyld(EmotionEngine& cpu, uint32_t instruction);
    void pand(EmotionEngine& cpu, uint32_t instruction);
    void mfhi1(EmotionEngine& cpu, uint32_t instruction);
    void mthi1(EmotionEngine& cpu, uint32_t instruction);
    void mflo1(EmotionEngine& cpu, uint32_t instruction);
    void mtlo1(EmotionEngine& cpu, uint32_t instruction);
    void mult1(EmotionEngine& cpu, uint32_t instruction);
    void div1(EmotionEngine& cpu, uint32_t instruction);
    void divu1(EmotionEngine& cpu, uint32_t instruction);

    void mmi3(EmotionEngine& cpu, uint32_t instruction);
    void pcpyud(EmotionEngine& cpu, uint32_t instruction);
    void por(EmotionEngine& cpu, uint32_t instruction);
    void pnor(EmotionEngine& cpu, uint32_t instruction);
    void pcpyh(EmotionEngine& cpu, uint32_t instruction);

    void unknown_op(const char* type, uint32_t instruction, uint16_t op);
};

#endif // EMOTIONINTERPRETER_HPP
