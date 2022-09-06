#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_3(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_19(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_3901172953589034962);
void live_err_fun(double *nom_x, double *delta_x, double *out_8798286348881351678);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_5133684250658072430);
void live_H_mod_fun(double *state, double *out_3743498976886491800);
void live_f_fun(double *state, double dt, double *out_6872262971707588925);
void live_F_fun(double *state, double dt, double *out_8400530807262952509);
void live_h_3(double *state, double *unused, double *out_3820793217678628256);
void live_H_3(double *state, double *unused, double *out_3242113669202485506);
void live_h_4(double *state, double *unused, double *out_4819210009194206744);
void live_H_4(double *state, double *unused, double *out_7094626997272516779);
void live_h_9(double *state, double *unused, double *out_1543836948999461612);
void live_H_9(double *state, double *unused, double *out_9029611532566178867);
void live_h_10(double *state, double *unused, double *out_3788288205831826157);
void live_H_10(double *state, double *unused, double *out_2742641224619544037);
void live_h_12(double *state, double *unused, double *out_5236825762511774014);
void live_H_12(double *state, double *unused, double *out_9201182509011726348);
void live_h_31(double *state, double *unused, double *out_3191103570868722309);
void live_H_31(double *state, double *unused, double *out_7522293956856876961);
void live_h_32(double *state, double *unused, double *out_202027160999963903);
void live_H_32(double *state, double *unused, double *out_8973948395204923008);
void live_h_13(double *state, double *unused, double *out_5471422452616185582);
void live_H_13(double *state, double *unused, double *out_8295562840870808847);
void live_h_14(double *state, double *unused, double *out_1543836948999461612);
void live_H_14(double *state, double *unused, double *out_9029611532566178867);
void live_h_19(double *state, double *unused, double *out_4767017862671830804);
void live_H_19(double *state, double *unused, double *out_198574298479379558);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}