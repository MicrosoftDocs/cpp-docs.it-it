---
title: Primitivi a virgola mobile
ms.date: 01/31/2019
apiname:
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
apilocation:
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
apitype: DLLExport
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
ms.openlocfilehash: 230d0def145bcb443437b59303b2b36e348da2bb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62333612"
---
# <a name="floating-point-primitives"></a>Primitivi a virgola mobile

Specifiche di Microsoft funzioni primitive che vengono usate per implementare alcuni standard funzioni a virgola mobile di C runtime library (CRT). È documentati qui per completezza, ma non sono consigliati per l'uso. Alcune di queste funzioni sono indicati come inutilizzato, perché se note per avere problemi di precisione, la gestione delle eccezioni e della conformità al comportamento IEEE 754. Sono presenti nella libreria solo per compatibilità con le versioni precedenti. Preferire le funzioni a virgola mobile standard per il corretto comportamento, portabilità e la conformità agli standard, queste funzioni.

## <a name="dclass-ldclass-fdclass"></a>_dclass, _ldclass, _fdclass

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dclass(double x);
short __cdecl _ldclass(long double x);
short __cdecl _fdclass(float x);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Argomento della funzione a virgola mobile.

### <a name="remarks"></a>Note

Queste primitive a virgola mobile e implementano le versioni di C della macro CRT [fpclassify](fpclassify.md) per tipi a virgola mobile. La classificazione dell'argomento *x* viene restituito come una di queste costanti, definite in Math. h:

|Value|Descrizione|
|-----------|-----------------|
| **FP_NAN** | NaN silenzioso, segnalatore o indeterminato |
| **FP_INFINITE** | Infinito positivo o negativo |
| **FP_NORMAL** | Valore diverso da zero normalizzato positivo o negativo |
| **FP_SUBNORMAL** | Valore positivo o negativo subnormal (denormalizzato) |
| **FP_ZERO** | Valore zero positivo o negativo |

Per altri dettagli, è possibile usare le specifiche di Microsoft [fpclass, _fpclassf](fpclass-fpclassf.md) funzioni. Usare la [fpclassify](fpclassify.md) macro o una funzione per la portabilità.

## <a name="dsign-ldsign-fdsign"></a>_dsign, _ldsign, _fdsign

### <a name="syntax"></a>Sintassi

```C
int __cdecl _dsign(double x);
int __cdecl _ldsign(long double x);
int __cdecl _fdsign(float x);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Argomento della funzione a virgola mobile.

### <a name="remarks"></a>Note

Queste primitive a virgola mobile e implementano il [signbit](signbit.md) macro o una funzione in CRT. Restituiscono un valore diverso da zero se il bit di segno è impostato nel significando (mantissa) dell'argomento *x*e 0 se non è impostato il bit di segno.

## <a name="dpcomp-ldpcomp-fdpcomp"></a>_dpcomp, _ldpcomp, _fdpcomp

### <a name="syntax"></a>Sintassi

```C
int __cdecl _dpcomp(double x, double y);
int __cdecl _ldpcomp(long double x, long double y);
int __cdecl _fdpcomp(float x, float y);
```

### <a name="parameters"></a>Parametri

*x*, *y*<br/>
Argomenti della funzione a virgola mobile.

### <a name="remarks"></a>Note

Queste primitive a virgola mobile e accettano due argomenti, *x* e *y*e restituisce un valore che indica la relazione di gestione degli ordini, espressa come bit per bit o di queste costanti, definite in Math. h:

| Value | Descrizione |
|------------|-----------------|
| **_FP_LT** | *x* possono essere considerati meno *y* |
| **_FP_EQ** | *x* può essere considerato uguale a *y* |
| **_FP_GT** | *x* può essere considerato maggiore *y* |

Queste primitive implementano il [isgreater, isgreaterequal, isless, islessequal, islessgreater e isunordered](floating-point-ordering.md) macro e funzioni in CRT.

## <a name="dtest-ldtest-fdtest"></a>_dtest, _ldtest, _fdtest

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dtest(double* px);
short __cdecl _ldtest(long double* px);
short __cdecl _fdtest(float* px);
```

### <a name="parameters"></a>Parametri

*px*<br/>
Puntatore a un argomento a virgola mobile.

### <a name="remarks"></a>Note

Implementano di queste primitive a virgola mobile C++ delle versioni della funzione CRT [fpclassify](fpclassify.md) per tipi a virgola mobile. L'argomento *x* viene valutata e la classificazione viene restituita come una delle costanti seguenti, definite in Math. h:

|Value|Descrizione|
|-----------|-----------------|
| **FP_NAN** | NaN silenzioso, segnalatore o indeterminato |
| **FP_INFINITE** | Infinito positivo o negativo |
| **FP_NORMAL** | Valore diverso da zero normalizzato positivo o negativo |
| **FP_SUBNORMAL** | Valore positivo o negativo subnormal (denormalizzato) |
| **FP_ZERO** | Valore zero positivo o negativo |

Per altri dettagli, è possibile usare le specifiche di Microsoft [fpclass, _fpclassf](fpclass-fpclassf.md) funzioni. Usare la [fpclassify](fpclassify.md) funzione per la portabilità.

## <a name="dint-ldint-fdint"></a>_d_int, _ld_int, _fd_int

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
Un esponente come un tipo integrale.

### <a name="remarks"></a>Note

Queste primitive a virgola mobile e accettano un puntatore a un valore a virgola mobile *px* e un valore dell'esponente *exp*e rimuovere la parte frazionaria del valore a virgola mobile di sotto dell'esponente specificato, se possibile . Il valore restituito è il risultato del **fpclassify** sul valore di input *px* se si tratta di un NaN o infinito e sul valore di output *px* in caso contrario.

## <a name="dscale-ldscale-fdscale"></a>_dscale, _ldscale, _fdscale

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
Un esponente come un tipo integrale.

### <a name="remarks"></a>Note

Queste primitive a virgola mobile e accettano un puntatore a un valore a virgola mobile *px* e un valore dell'esponente *exp*, e il valore in scala *px* da 2<sup> *exp*</sup>, se possibile. Il valore restituito è il risultato del **fpclassify** sul valore di input *px* se si tratta di un NaN o infinito e sul valore di output *px* in caso contrario. Per la portabilità, preferisce le [ldexp, ldexpf e ldexpl](ldexp.md) funzioni.

## <a name="dunscale-ldunscale-fdunscale"></a>_dunscale, _ldunscale, _fdunscale

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dunscale(short* pexp, double* px);
short __cdecl _ldunscale(short* pexp, long double* px);
short __cdecl _fdunscale(short* pexp, float* px);
```

### <a name="parameters"></a>Parametri

*pexp*<br/>
Puntatore a un esponente come un tipo integrale.

*px*<br/>
Puntatore a un argomento a virgola mobile.

### <a name="remarks"></a>Note

Queste primitive a virgola mobile a suddividono il valore a virgola mobile a cui punta *px* in un significando a (mantissa) e un esponente, se possibile. Il significando viene ridimensionato in modo che il valore assoluto è maggiore o uguale a 0,5 e minore di 1,0. L'esponente è il valore *n*, dove il valore a virgola mobile originale è uguale a significando scalato volte 2<sup>*n*</sup>. L'esponente intero *n* viene archiviato in corrispondenza della posizione a cui punta *pexp*. Il valore restituito è il risultato del **fpclassify** sul valore di input *px* se si tratta di un NaN o infinito e il valore di output in caso contrario. Per la portabilità, preferisce le [frexp, frexpf, frexpl](frexp.md) funzioni.

## <a name="dexp-ldexp-fdexp"></a>_dexp, _ldexp, _fdexp

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
Un esponente come un tipo integrale.

### <a name="remarks"></a>Note

Queste primitive a virgola mobile a costruire un valore a virgola mobile nella posizione a cui punta *px* uguale a *y* * 2<sup>*exp*</sup>. Il valore restituito è il risultato del **fpclassify** sul valore di input *y* se si tratta di un NaN o infinito e sul valore di output *px* in caso contrario. Per la portabilità, preferisce le [ldexp, ldexpf e ldexpl](ldexp.md) funzioni.

## <a name="dnorm-fdnorm"></a>_dnorm, _fdnorm

### <a name="syntax"></a>Sintassi

```C
short __cdecl _dnorm(unsigned short* ps);
short __cdecl _fdnorm(unsigned short* ps);
```

### <a name="parameters"></a>Parametri

*ps*<br/>
Puntatore alla rappresentazione di un valore a virgola mobile espresso come una matrice di bit per bit **unsigned** **breve**.

### <a name="remarks"></a>Note

Queste primitive a virgola mobile e normalizzare la parte frazionaria di un valore a virgola mobile underflowed e regolare il *caratteristica*, o distorta esponente, in modo che corrispondano. Il valore viene passato come la rappresentazione del tipo a virgola mobile e convertito in una matrice di bit per bit **unsigned** **breve** tramite il `_double_val`, `_ldouble_val`, o `_float_val` tipo unione punning dichiarato in Math. h. Il valore restituito è il risultato del **fpclassify** nel valore di input a virgola mobile in caso di un NaN o infinito e il valore di output in caso contrario.

## <a name="dpoly-ldpoly-fdpoly"></a>_dpoly, _ldpoly, _fdpoly

### <a name="syntax"></a>Sintassi

```C
double __cdecl _dpoly(double x, double const* table, int n);
long double __cdecl _ldpoly(long double x, long double const* table, int n);
float __cdecl _fdpoly(float x, _float const* table, int n);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Argomento della funzione a virgola mobile.

*table*<br/>
Puntatore a una tabella di coefficienti costante per un polinomiale.

*n*<br/>
Ordine del polinomio da valutare.

### <a name="remarks"></a>Note

Queste primitive a virgola mobile e restituiscono la valutazione del *x* in polinomio dell'ordine *n* cui coefficienti sono rappresentate in base ai corrispondenti valori costanti *tabella*. Ad esempio, se *tabella*\[0] = 3.0 *tabella*\[1] = 4.0 *tabella*\[2] = 5.0, e *n* = 2, rappresenta la versione 5.0 x polinomiale<sup>2</sup> + 4.0 x + 3.0. Se questo polinomiale viene valutata per *x* 2.0, il risultato è 31,0. Queste funzioni non vengono usate internamente.

## <a name="dlog-dlog-dlog"></a>_dlog, _dlog, _dlog

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
Flag che determina la base da utilizzare, 0 per la base *elettronica* e diverso da zero per la base 10.

### <a name="remarks"></a>Note

Queste primitive a virgola mobile e restituiscono il logaritmo naturale di *x*, ln (*x*) o di log<sub>*elettronica*</sub>(*x*), Quando *base_flag* è 0. Restituiscono log base 10 del *x*, o di log<sub>10</sub>(*x*), quando *base_flag* è diverso da zero. Queste funzioni non vengono usate internamente. Per la portabilità, preferisce le funzioni [log logf, logl, log10, log10f e log10l](log-logf-log10-log10f.md).

## <a name="dsin-ldsin-fdsin"></a>_dsin, _ldsin, _fdsin

### <a name="syntax"></a>Sintassi

```C
double __cdecl _dsin(double x, unsigned int quadrant);
long double __cdecl _ldsin(long double x, unsigned int quadrant);
float __cdecl _fdsin(float x, unsigned int quadrant);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Argomento della funzione a virgola mobile.

*quadrant*<br/>
Offset del quadrante di 0, 1, 2 o 3 da usare per produrre `sin`, `cos`, `-sin`, e `-cos` risultati.

### <a name="remarks"></a>Note

Queste primitive a virgola mobile restituiscono il seno di *x* offset per il *quadrante* modulo 4. In effetti, restituiscono il seno, coseno, - seno e - coseno *x* quando *quadrante* modulo 4 è 0, 1, 2 o 3, rispettivamente. Queste funzioni non vengono usate internamente. Per la portabilità, preferisce le [sin, sinf, sinl](sin-sinf-sinl.md), [cos, cosf e cosl](cos-cosf-cosl.md) funzioni.

## <a name="requirements"></a>Requisiti

Intestazione: \<Math. h >

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
[ldexp ldexpf e ldexpl](ldexp.md)<br/>
[log, logf, logl, log10, log10f, log10l](log-logf-log10-log10f.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
