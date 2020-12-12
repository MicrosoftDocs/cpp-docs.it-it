---
description: 'Altre informazioni su: primitive a virgola mobile'
title: Primitive a virgola mobile
ms.date: 4/2/2020
api_name:
- _dclass
- _ldclass
- _fdclass
- _dsign
- _ldsign
- _fdsign
- _dpcomp
- _ldpcomp
- _fdpcomp
- _dtest
- _ldtest
- _fdtest
- _d_int
- _ld_int
- _fd_int
- _dscale
- _ldscale
- _fdscale
- _dunscale
- _ldunscale
- _fdunscale
- _dexp
- _ldexp
- _fdexp
- _dnorm
- _fdnorm
- _dpoly
- _ldpoly
- _fdpoly
- _dlog
- _ldlog
- _fdlog
- _dsin
- _ldsin
- _fdsin
- _o__d_int
- _o__dclass
- _o__dlog
- _o__dnorm
- _o__dpcomp
- _o__dpoly
- _o__dscale
- _o__dsign
- _o__dsin
- _o__dtest
- _o__dunscale
- _o__fd_int
- _o__fdclass
- _o__fdexp
- _o__fdlog
- _o__fdpcomp
- _o__fdpoly
- _o__fdscale
- _o__fdsign
- _o__fdsin
- _o__ld_int
- _o__ldclass
- _o__ldexp
- _o__ldlog
- _o__ldpcomp
- _o__ldpoly
- _o__ldscale
- _o__ldsign
- _o__ldsin
- _o__ldtest
- _o__ldunscale
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-math-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _dclass
- _ldclass
- _fdclass
- _dsign
- _ldsign
- _fdsign
- _dpcomp
- _ldpcomp
- _fdpcomp
- _dtest
- _ldtest
- _fdtest
- _d_int
- _ld_int
- _fd_int
- _dscale
- _ldscale
- _fdscale
- _dunscale
- _ldunscale
- _fdunscale
- _dexp
- _ldexp
- _fdexp
- _dnorm
- _fdnorm
- _dpoly
- _ldpoly
- _fdpoly
- _dlog
- _ldlog
- _fdlog
- _dsin
- _ldsin
- _fdsin
helpviewer_keywords:
- _dclass
- _ldclass
- _fdclass
- _dsign
- _ldsign
- _fdsign
- _dpcomp
- _ldpcomp
- _fdpcomp
- _dtest
- _ldtest
- _fdtest
- _d_int
- _ld_int
- _fd_int
- _dscale
- _ldscale
- _fdscale
- _dunscale
- _ldunscale
- _fdunscale
- _dexp
- _ldexp
- _fdexp
- _dnorm
- _fdnorm
- _dpoly
- _ldpoly
- _fdpoly
- _dlog
- _ldlog
- _fdlog
- _dsin
- _ldsin
- _fdsin
ms.openlocfilehash: 05422620a4da907820ed86a61d4e8dc16b37d3f5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97268964"
---
# <a name="floating-point-primitives"></a>Primitive a virgola mobile

Funzioni primitive specifiche di Microsoft utilizzate per implementare alcune funzioni a virgola mobile di libreria di runtime C (CRT) standard. Sono documentati qui per completezza, ma non sono consigliati per l'uso. Alcune di queste funzioni vengono indicate come inutilizzate, perché si noti che presentano problemi di precisione, gestione delle eccezioni e conformità al comportamento IEEE-754. Sono presenti nella libreria solo per compatibilità con le versioni precedenti. Per un comportamento corretto, la portabilità e la conformità agli standard, preferisce le funzioni a virgola mobile standard su queste funzioni.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="_dclass-_ldclass-_fdclass"></a>_dclass, _ldclass, _fdclass

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dclass(double x);
short __cdecl _ldclass(long double x);
short __cdecl _fdclass(float x);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Argomento della funzione a virgola mobile.

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile implementano le versioni C della macro CRT [fpclassify](fpclassify.md) per i tipi a virgola mobile. La classificazione dell'argomento *x* viene restituita come una di queste costanti, definita in Math. h:

|Valore|Description|
|-----------|-----------------|
| **FP_NAN** | NaN silenzioso, segnalatore o indeterminato |
| **FP_INFINITE** | Infinito positivo o negativo |
| **FP_NORMAL** | Valore diverso da zero normalizzato positivo o negativo |
| **FP_SUBNORMAL** | Valore negativo (denormalizzato) positivo o negativo |
| **FP_ZERO** | Valore zero positivo o negativo |

Per ulteriori dettagli, è possibile utilizzare le funzioni di [_fpclassf _fpclass](fpclass-fpclassf.md) specifiche di Microsoft. Usare la funzione o la macro [fpclassify](fpclassify.md) per la portabilità.

## <a name="_dsign-_ldsign-_fdsign"></a>_dsign, _ldsign, _fdsign

### <a name="syntax"></a>Sintassi

```C
int __cdecl _dsign(double x);
int __cdecl _ldsign(long double x);
int __cdecl _fdsign(float x);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Argomento della funzione a virgola mobile.

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile implementano la macro o la funzione [signbit](signbit.md) in CRT. Restituiscono un valore diverso da zero se il bit di segno è impostato in separatore (mantissa) dell'argomento *x* e 0 se il bit di segno non è impostato.

## <a name="_dpcomp-_ldpcomp-_fdpcomp"></a>_dpcomp, _ldpcomp, _fdpcomp

### <a name="syntax"></a>Sintassi

```C
int __cdecl _dpcomp(double x, double y);
int __cdecl _ldpcomp(long double x, long double y);
int __cdecl _fdpcomp(float x, float y);
```

### <a name="parameters"></a>Parametri

*x*, *y*<br/>
Argomenti della funzione a virgola mobile.

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile accettano due argomenti, *x* e *y*, e restituiscono un valore che mostra la relazione di ordinamento, espresso come or bit per bit di queste costanti, definito in Math. h:

| Valore | Description |
|------------|-----------------|
| **_FP_LT** | *x* può essere considerato minore di *y* |
| **_FP_EQ** | *x* può essere considerato uguale a *y* |
| **_FP_GT** | *x* può essere considerato maggiore di *y* |

Queste primitive implementano le macro e le funzioni [isgreaterequal, islessequal, islessgreater e isunordered](floating-point-ordering.md) in CRT.

## <a name="_dtest-_ldtest-_fdtest"></a>_dtest, _ldtest, _fdtest

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dtest(double* px);
short __cdecl _ldtest(long double* px);
short __cdecl _fdtest(float* px);
```

### <a name="parameters"></a>Parametri

*px*<br/>
Puntatore a un argomento a virgola mobile.

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile implementano le versioni C++ della funzione CRT [fpclassify](fpclassify.md) per i tipi a virgola mobile. L'argomento *x* viene valutato e la classificazione viene restituita come una di queste costanti, definita in Math. h:

|Valore|Description|
|-----------|-----------------|
| **FP_NAN** | NaN silenzioso, segnalatore o indeterminato |
| **FP_INFINITE** | Infinito positivo o negativo |
| **FP_NORMAL** | Valore diverso da zero normalizzato positivo o negativo |
| **FP_SUBNORMAL** | Valore negativo (denormalizzato) positivo o negativo |
| **FP_ZERO** | Valore zero positivo o negativo |

Per ulteriori dettagli, è possibile utilizzare le funzioni di [_fpclassf _fpclass](fpclass-fpclassf.md) specifiche di Microsoft. Utilizzare la funzione [fpclassify](fpclassify.md) per la portabilità.

## <a name="_d_int-_ld_int-_fd_int"></a>_d_int, _ld_int, _fd_int

### <a name="syntax"></a>Sintassi

```C
short __cdecl _d_int(double* px, short exp);
short __cdecl _ld_int(long double* px, short exp);
short __cdecl _fd_int(float* px, short exp);
```

### <a name="parameters"></a>Parametri

*px*<br/>
Puntatore a un argomento a virgola mobile.

*exp*<br/>
Esponente come tipo integrale.

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile accettano un puntatore a un valore a virgola mobile *px* e un valore dell'esponente *Exp* e rimuovono la parte frazionaria del valore a virgola mobile al di sotto dell'esponente specificato, se possibile. Il valore restituito è il risultato di **fpclassify** sul valore di input in *px* se è NaN o infinito e in caso contrario sul valore di output in *px* .

## <a name="_dscale-_ldscale-_fdscale"></a>_dscale, _ldscale, _fdscale

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dscale(double* px, long exp);
short __cdecl _ldscale(long double* px, long exp);
short __cdecl _fdscale(float* px, long exp);
```

### <a name="parameters"></a>Parametri

*px*<br/>
Puntatore a un argomento a virgola mobile.

*exp*<br/>
Esponente come tipo integrale.

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile accettano un puntatore a un valore a virgola mobile *px* e un valore dell'esponente *Exp* e ridimensionano il valore in *px* di 2 <sup>*Exp*</sup>, se possibile. Il valore restituito è il risultato di **fpclassify** sul valore di input in *px* se è NaN o infinito e in caso contrario sul valore di output in *px* . Per la portabilità, preferire le funzioni [ldexp, ldexpf e ldexpl](ldexp.md) .

## <a name="_dunscale-_ldunscale-_fdunscale"></a>_dunscale, _ldunscale, _fdunscale

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dunscale(short* pexp, double* px);
short __cdecl _ldunscale(short* pexp, long double* px);
short __cdecl _fdunscale(short* pexp, float* px);
```

### <a name="parameters"></a>Parametri

*pexp*<br/>
Puntatore a un esponente come tipo integrale.

*px*<br/>
Puntatore a un argomento a virgola mobile.

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile suddividono il valore a virgola mobile a cui punta *px* in un separatore (mantissa) e un esponente, se possibile. Il separatore viene ridimensionato in modo che il valore assoluto sia maggiore o uguale a 0,5 e minore di 1,0. L'esponente è il valore *n*, in cui il valore a virgola mobile originale è uguale al valore di separatore in scala 2 <sup>*n*</sup>. Questo esponente integer *n* viene archiviato nella posizione a cui punta *pExp*. Il valore restituito è il risultato di **fpclassify** sul valore di input in *px* se è NaN o infinito e in caso contrario sul valore di output. Per la portabilità, preferire le funzioni [frexp, frexpf, frexpl](frexp.md) .

## <a name="_dexp-_ldexp-_fdexp"></a>_dexp, _ldexp, _fdexp

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dexp(double* px, double y, long exp);
short __cdecl _ldexp(long double* px, long double y, long exp);
short __cdecl _fdexp(float* px, float y, long exp);
```

### <a name="parameters"></a>Parametri

*y*<br/>
Argomento della funzione a virgola mobile.

*px*<br/>
Puntatore a un argomento a virgola mobile.

*exp*<br/>
Esponente come tipo integrale.

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile costruiscono un valore a virgola mobile nella posizione a cui punta *px* uguale a *y* * 2 <sup>*Exp*</sup>. Il valore restituito è il risultato di **fpclassify** sul valore di input in *y* se è NaN o infinito e in caso contrario sul valore di output in *px* . Per la portabilità, preferire le funzioni [ldexp, ldexpf e ldexpl](ldexp.md) .

## <a name="_dnorm-_fdnorm"></a>_dnorm, _fdnorm

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dnorm(unsigned short* ps);
short __cdecl _fdnorm(unsigned short* ps);
```

### <a name="parameters"></a>Parametri

*ps*<br/>
Puntatore alla rappresentazione bit per bit di un valore a virgola mobile espresso come matrice di **`unsigned short`** .

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile normalizzano la parte frazionaria di un valore a virgola mobile con propagazione e regolano la corrispondenza tra la *caratteristica*, o l'esponente distorta. Il valore viene passato come rappresentazione bit per bit del tipo a virgola mobile convertito in una matrice di **`unsigned short`** tramite `_double_val` il `_ldouble_val` tipo, `_float_val` o: crostacei Union dichiarata in Math. h. Il valore restituito è il risultato di **fpclassify** sul valore a virgola mobile di input se è NaN o infinito e in caso contrario sul valore di output.

## <a name="_dpoly-_ldpoly-_fdpoly"></a>_dpoly, _ldpoly, _fdpoly

### <a name="syntax"></a>Sintassi

```C
double __cdecl _dpoly(double x, double const* table, int n);
long double __cdecl _ldpoly(long double x, long double const* table, int n);
float __cdecl _fdpoly(float x, _float const* table, int n);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Argomento della funzione a virgola mobile.

*tabella*<br/>
Puntatore a una tabella di coefficienti costanti per un polinomiale.

*n*<br/>
Ordine del polinomiale da valutare.

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile restituiscono la valutazione di *x* nel polinomio dell'ordine *n* i cui coefficienti sono rappresentati dai valori costanti corrispondenti nella *tabella*. Se, ad esempio, la *tabella* \[ 0] = 3,0, *tabella* \[ 1] = 4,0, *tabella* \[ 2] = 5,0 e *n* = 2, rappresenta il polinomiale 5.0 x <sup>2</sup> + 4.0 x + 3,0. Se questo polinomi viene valutato per *x* di 2,0, il risultato è 31,0. Queste funzioni non vengono utilizzate internamente.

## <a name="_dlog-_dlog-_dlog"></a>_dlog, _dlog, _dlog

### <a name="syntax"></a>Sintassi

```C
double __cdecl _dlog(double x, int base_flag);
long double __cdecl _ldlog(long double x, int base_flag);
float __cdecl _fdlog(float x, int base_flag);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Argomento della funzione a virgola mobile.

*base_flag*<br/>
Flag che controlla la base da usare, 0 per la base *e e diverso* da zero per la base 10.

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile restituiscono il log naturale di *x*, ln (*x*) o log <sub>*e*</sub>(*x*), quando *base_flag* è 0. Restituiscono il logaritmo in base 10 di *x* o log <sub>10</sub>(*x*) quando *base_flag* è diverso da zero. Queste funzioni non vengono utilizzate internamente. Per la portabilità, preferire le funzioni [log, logf, logl, log10, log10f e log10l](log-logf-log10-log10f.md).

## <a name="_dsin-_ldsin-_fdsin"></a>_dsin, _ldsin, _fdsin

### <a name="syntax"></a>Sintassi

```C
double __cdecl _dsin(double x, unsigned int quadrant);
long double __cdecl _ldsin(long double x, unsigned int quadrant);
float __cdecl _fdsin(float x, unsigned int quadrant);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Argomento della funzione a virgola mobile.

*Quadrant*<br/>
Offset del quadrante di 0, 1, 2 o 3 da usare per produrre `sin` `cos` `-sin` i risultati,, e `-cos` .

### <a name="remarks"></a>Commenti

Queste primitive a virgola mobile restituiscono il seno dell'offset *x* dal *quadrante* modulo 4. In effetti, restituiscono il seno, il coseno, il seno e il coseno di *x* quando il *quadrante* modulo 4 è 0, 1, 2 o 3 rispettivamente. Queste funzioni non vengono utilizzate internamente. Per la portabilità, preferire le funzioni [sin, sinf, sinl](sin-sinf-sinl.md), [cos, cosf e cosl](cos-cosf-cosl.md) .

## <a name="requirements"></a>Requisiti

Intestazione: \<math.h>

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Supporto delle funzioni a virgola mobile](../floating-point-support.md)<br/>
[fpclassify](fpclassify.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
[isfinite, _finite, _finitef](finite-finitef.md)<br/>
[isinf](isinf.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
[isnormal](isnormal.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[frexp, frexpf, frexpl](frexp.md)<br/>
[ldexp, ldexpf e ldexpl](ldexp.md)<br/>
[log, logf, logl, log10, log10f, log10l](log-logf-log10-log10f.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
