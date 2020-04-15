---
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: d861fbf2b71d557354a60f65b8a76dc24ca1dd13
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81346706"
---
# <a name="floating-point-primitives"></a>Primitive a virgola mobile

Funzioni primitive specifiche di Microsoft utilizzate per implementare alcune funzioni a virgola mobile della libreria di runtime C (CRT) standard. Sono documentati qui per completezza, ma non sono consigliati per l'uso. Alcune di queste funzioni sono notate come inutilizzate, perché sono note per avere problemi di precisione, gestione delle eccezioni e conformità al comportamento IEEE-754. Esistono nella libreria solo per compatibilità con le versioni precedenti. Per un comportamento, una portabilità e un'aderenza agli standard, preferire le funzioni a virgola mobile standard rispetto a queste funzioni.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="_dclass-_ldclass-_fdclass"></a>_dclass, _ldclass, _fdclass

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dclass(double x);
short __cdecl _ldclass(long double x);
short __cdecl _fdclass(float x);
```

### <a name="parameters"></a>Parametri

*X*<br/>
Argomento della funzione a virgola mobile.

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile implementano le versioni C della macro CRT [fpclassify](fpclassify.md) per i tipi a virgola mobile. La classificazione dell'argomento *x* viene restituita come una di queste costanti, definita in math.h:

|valore|Descrizione|
|-----------|-----------------|
| **FP_NAN** | NaN silenzioso, segnalatore o indeterminato |
| **FP_INFINITE** | Infinito positivo o negativo |
| **FP_NORMAL** | Valore diverso da zero normalizzato positivo o negativo |
| **FP_SUBNORMAL** | Un valore subnormale positivo o negativo (denormalizzato) |
| **FP_ZERO** | Valore zero positivo o negativo |

Per ulteriori dettagli, è possibile utilizzare le funzioni [_fpclass, _fpclassf](fpclass-fpclassf.md) specifiche di Microsoft. Utilizzare la macro o la funzione [fpclassifica](fpclassify.md) per la portabilità.

## <a name="_dsign-_ldsign-_fdsign"></a>_dsign, _ldsign, _fdsign

### <a name="syntax"></a>Sintassi

```C
int __cdecl _dsign(double x);
int __cdecl _ldsign(long double x);
int __cdecl _fdsign(float x);
```

### <a name="parameters"></a>Parametri

*X*<br/>
Argomento della funzione a virgola mobile.

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile implementano la macro o la funzione [signbit](signbit.md) in CRT. Restituiscono un valore diverso da zero se il bit di segno è impostato nel significando (mantissa) dell'argomento *x*e 0 se il bit di segno non è impostato.

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

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile accettano due argomenti, *x* e *y*, e restituiscono un valore che mostra la relazione di ordinamento, espressa come bit per bit o di queste costanti, definita in math.h:

| valore | Descrizione |
|------------|-----------------|
| **_FP_LT** | *x* può essere considerato minore di *y* |
| **_FP_EQ** | *x* può essere considerato uguale a *y* |
| **_FP_GT** | *x* può essere considerato maggiore di *y* |

Queste primitive implementano le funzioni e le macro [isgreater, isgreaterequal, isless, islessequal, islessgreater e isunordered](floating-point-ordering.md) in CRT.

## <a name="_dtest-_ldtest-_fdtest"></a>_dtest, _ldtest, _fdtest

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dtest(double* px);
short __cdecl _ldtest(long double* px);
short __cdecl _fdtest(float* px);
```

### <a name="parameters"></a>Parametri

*Px*<br/>
Puntatore a un argomento a virgola mobile.

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile implementano le versioni di C, la funzione CRT [fpclassify](fpclassify.md) per i tipi a virgola mobile. L'argomento *x* viene valutato e la classificazione viene restituita come una di queste costanti, definita in math.h:

|valore|Descrizione|
|-----------|-----------------|
| **FP_NAN** | NaN silenzioso, segnalatore o indeterminato |
| **FP_INFINITE** | Infinito positivo o negativo |
| **FP_NORMAL** | Valore diverso da zero normalizzato positivo o negativo |
| **FP_SUBNORMAL** | Un valore subnormale positivo o negativo (denormalizzato) |
| **FP_ZERO** | Valore zero positivo o negativo |

Per ulteriori dettagli, è possibile utilizzare le funzioni [_fpclass, _fpclassf](fpclass-fpclassf.md) specifiche di Microsoft. Utilizzare la funzione [fpclassify](fpclassify.md) per la portabilità.

## <a name="_d_int-_ld_int-_fd_int"></a>_d_int, _ld_int, _fd_int

### <a name="syntax"></a>Sintassi

```C
short __cdecl _d_int(double* px, short exp);
short __cdecl _ld_int(long double* px, short exp);
short __cdecl _fd_int(float* px, short exp);
```

### <a name="parameters"></a>Parametri

*Px*<br/>
Puntatore a un argomento a virgola mobile.

*Exp*<br/>
Un esponente come tipo integrale.

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile accettano un puntatore a un valore a virgola mobile *px* e un valore esponente *exp*, e rimuovono la parte frazionaria del valore a virgola mobile al di sotto dell'esponente specificato, se possibile. Il valore restituito è il risultato di **fpclassify** sul valore di input in *px* se si tratta di un NaN o infinito e sul valore di output in *px* in caso contrario.

## <a name="_dscale-_ldscale-_fdscale"></a>_dscale, _ldscale, _fdscale

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dscale(double* px, long exp);
short __cdecl _ldscale(long double* px, long exp);
short __cdecl _fdscale(float* px, long exp);
```

### <a name="parameters"></a>Parametri

*Px*<br/>
Puntatore a un argomento a virgola mobile.

*Exp*<br/>
Un esponente come tipo integrale.

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile accettano un puntatore a un valore a virgola mobile *px* e un valore esponente *exp*, e scalare il valore in *px* di 2<sup>*exp*</sup>, se possibile. Il valore restituito è il risultato di **fpclassify** sul valore di input in *px* se si tratta di un NaN o infinito e sul valore di output in *px* in caso contrario. Per la portabilità, preferire le funzioni [ldexp, ldexpf e ldexpl.](ldexp.md)

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

*Px*<br/>
Puntatore a un argomento a virgola mobile.

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile scompongono il valore a virgola mobile indicato da *px* in un significando (mantissa) e un esponente, se possibile. Il significando viene scalato in modo che il valore assoluto sia maggiore o uguale a 0,5 e minore di 1,0. L'esponente è il valore *n*, dove il valore a virgola mobile originale è uguale al significando in scala per 2<sup>*n*</sup>. Questo esponente intero *n* viene memorizzato nella posizione a cui punta *pexp*. Il valore restituito è il risultato di **fpclassify** sul valore di input in *px* se si tratta di un NaN o infinito e sul valore di output in caso contrario. Per la portabilità, preferire le funzioni [frexp, frexpf, frexpl.](frexp.md)

## <a name="_dexp-_ldexp-_fdexp"></a>_dexp, _ldexp, _fdexp

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dexp(double* px, double y, long exp);
short __cdecl _ldexp(long double* px, long double y, long exp);
short __cdecl _fdexp(float* px, float y, long exp);
```

### <a name="parameters"></a>Parametri

*Y*<br/>
Argomento della funzione a virgola mobile.

*Px*<br/>
Puntatore a un argomento a virgola mobile.

*Exp*<br/>
Un esponente come tipo integrale.

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile costruiscono un valore a virgola mobile nella posizione indicata da *px* uguale a *y* e 2<sup>*exp*</sup>. Il valore restituito è il risultato di **fpclassify** sul valore di input in *y* se si tratta di un NaN o infinito e sul valore di output in *px* in caso contrario. Per la portabilità, preferire le funzioni [ldexp, ldexpf e ldexpl.](ldexp.md)

## <a name="_dnorm-_fdnorm"></a>_dnorm, _fdnorm

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dnorm(unsigned short* ps);
short __cdecl _fdnorm(unsigned short* ps);
```

### <a name="parameters"></a>Parametri

*Ps*<br/>
Puntatore alla rappresentazione bit per bit di un valore a virgola mobile espresso come matrice di **unsigned** **short**.

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile normalizzano la parte frazionaria di un valore a virgola mobile underflowed e regolano la *caratteristica*, o esponente di parte, in modo che corrisponda. Il valore viene passato come rappresentazione bit per bit del tipo a `_double_val`virgola `_ldouble_val`mobile convertito in una matrice di **unsigned** **short** tramite il , , o `_float_val` tipo punning union dichiarato in math.h. Il valore restituito è il risultato di **fpclassify** sul valore a virgola mobile di input se si tratta di Un NaN o infinito e sul valore di output in caso contrario.

## <a name="_dpoly-_ldpoly-_fdpoly"></a>_dpoly, _ldpoly, _fdpoly

### <a name="syntax"></a>Sintassi

```C
double __cdecl _dpoly(double x, double const* table, int n);
long double __cdecl _ldpoly(long double x, long double const* table, int n);
float __cdecl _fdpoly(float x, _float const* table, int n);
```

### <a name="parameters"></a>Parametri

*X*<br/>
Argomento della funzione a virgola mobile.

*tavolo*<br/>
Puntatore a una tabella di coefficienti costanti per un polinomio.

*N*<br/>
Ordine del polinomio da valutare.

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile restituiscono la valutazione di *x* nel polinomio dell'ordine *n* i cui coefficienti sono rappresentati dai corrispondenti valori costanti nella *tabella*. Ad esempio, se la *tabella*\[0] è 3,0, *la tabella*\[1] 4,0, la *tabella*\[2] - 5,0 e *n* è 2, rappresenta il polinomio 5,0x<sup>2</sup> , 4,0x , 3,0. Se questo polinomio viene valutato per *x* di 2.0, il risultato è 31,0. Queste funzioni non vengono utilizzate internamente.

## <a name="_dlog-_dlog-_dlog"></a>_dlog, _dlog, _dlog

### <a name="syntax"></a>Sintassi

```C
double __cdecl _dlog(double x, int base_flag);
long double __cdecl _ldlog(long double x, int base_flag);
float __cdecl _fdlog(float x, int base_flag);
```

### <a name="parameters"></a>Parametri

*X*<br/>
Argomento della funzione a virgola mobile.

*base_flag*<br/>
Flag che controlla la base da utilizzare, 0 per la base *e* e diverso da zero per la base 10.

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile restituiscono il log naturale di *x*, ln(*x*) o log<sub>*e*</sub>(*x*), quando *base_flag* è 0. Restituiscono il log base 10 di *x*o log<sub>10</sub>(*x*), quando *base_flag* è diverso da zero. Queste funzioni non vengono utilizzate internamente. Per la portabilità, preferire le funzioni [log, logf, logl, log10, log10f e log10l](log-logf-log10-log10f.md).

## <a name="_dsin-_ldsin-_fdsin"></a>_dsin, _ldsin, _fdsin

### <a name="syntax"></a>Sintassi

```C
double __cdecl _dsin(double x, unsigned int quadrant);
long double __cdecl _ldsin(long double x, unsigned int quadrant);
float __cdecl _fdsin(float x, unsigned int quadrant);
```

### <a name="parameters"></a>Parametri

*X*<br/>
Argomento della funzione a virgola mobile.

*Quadrante*<br/>
Offset quadrante di 0, 1, 2 `sin`o `cos` `-sin`3 `-cos` da utilizzare per produrre , , e i risultati.

### <a name="remarks"></a>Osservazioni

Queste primitive a virgola mobile restituiscono il seno di *x* offset dal *quadrante* modulo 4. Effettivamente, restituiscono il seno, il coseno, il -sine e il -cosino di *x* quando il *quadrante* modulo 4 è rispettivamente 0, 1, 2 o 3. Queste funzioni non vengono utilizzate internamente. Per la portabilità, preferisci le funzioni [sin, sinf, sinl](sin-sinf-sinl.md), [cos, cosf e cosl.](cos-cosf-cosl.md)

## <a name="requirements"></a>Requisiti

Intestazione: \<math.h>

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto a virgola mobile](../floating-point-support.md)<br/>
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
