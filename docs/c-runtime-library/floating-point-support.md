---
title: Supporto delle funzioni matematiche e a virgola mobile
description: Viene descritto il supporto della virgola mobile nella libreria di runtime di Microsoft Universal C (UCRT)
ms.date: 9/14/2020
f1_keywords:
- c.math
helpviewer_keywords:
- floating-point numbers, math routines
- math routines
- floating-point numbers
ms.assetid: e4fcaf69-5c8e-4854-a9bb-1f412042131e
ms.openlocfilehash: d1caaf5c9c0cfc7a3b6650bcb72a66b4c0028e28
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91502109"
---
# <a name="math-and-floating-point-support"></a>Supporto delle funzioni matematiche e a virgola mobile

La libreria di Universal C Runtime (UCRT) include molte funzioni della libreria delle operazioni matematiche con numeri interi e a virgola mobile, incluse tutte quelle richieste dallo standard ISO C99. L'implementazione delle funzioni a virgola mobile consente di bilanciare prestazioni e correttezza. Dato che generare un risultato con il corretto arrotondamento può avere costi proibitivi, queste funzioni sono progettate per ottenere in modo efficiente un'approssimazione molto vicina al risultato arrotondato correttamente. Nella maggior parte dei casi, il risultato prodotto è compreso entro +/-1 ulp rispetto al risultato arrotondato correttamente, sebbene in alcuni casi possa esistere un'imprecisione maggiore.

Per ISO C standard 11 (C11) e versioni successive, l' \<tgmath.h> intestazione, oltre a includere \<math.h> e \<complex.h> , fornisce macro che richiamano una funzione matematica corrispondente in base ai tipi dei parametri. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](tgmath.md) .

Molte delle funzioni della libreria delle operazioni matematiche a virgola mobile hanno implementazioni diverse per architetture della CPU differenti. La versione di CRT x86 a 32 bit, ad esempio, può avere un'implementazione diversa di CRT x64 a 64 bit. Alcune funzioni potrebbero inoltre avere più implementazioni per una particolare architettura della CPU. L'implementazione più efficiente viene selezionata in modo dinamico in fase di esecuzione a seconda del set di istruzioni supportate dalla CPU. Ad esempio, in CRT x86 a 32 bit alcune funzioni hanno sia un'implementazione x87 che un'implementazione SSE2. In caso di esecuzione su una CPU che supporta SSE2, viene usata l'implementazione SSE2 più veloce. Per l'esecuzione su una CPU che non supporta SSE2 viene usata l'implementazione x87 più lenta. Dato che implementazioni diverse delle funzioni della libreria delle operazioni matematiche possono usare istruzioni diverse della CPU e algoritmi differenti per produrre i risultati, le funzioni possono produrre risultati diversi con CPU differenti. Nella maggior parte dei casi, i risultati sono compresi entro +/-1 ulp rispetto al risultato arrotondato correttamente, ma i risultati effettivi possono variare tra CPU diverse.

Le versioni precedenti a 16 bit di Microsoft C/C++ e Microsoft Visual C++ supportano il **`long double`** tipo come tipo di dati a virgola mobile con precisione a 80 bit. Nelle versioni successive di Visual C++, il **`long double`** tipo di dati è un tipo di dati a virgola mobile con precisione a 64 bit identico al **`double`** tipo. Il compilatore considera **`long double`** e **`double`** come tipi distinti, ma le **`long double`** funzioni sono identiche alle rispettive **`double`** controparti. CRT fornisce le **`long double`** versioni delle funzioni matematiche per la compatibilità del codice sorgente ISO C99, ma si noti che la rappresentazione binaria può differire da altri compilatori.

## <a name="supported-math-and-floating-point-routines"></a>Routine matematiche e a virgola mobile supportate

|Routine|Usa|
|-|-|
[abs, labs, llabs, _abs64](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|Calcola il valore assoluto di un tipo Integer
[acos, acosf, acosl](../c-runtime-library/reference/acos-acosf-acosl.md)|Calcola l'arcocoseno
[acosh, acoshf, acoshl](../c-runtime-library/reference/acosh-acoshf-acoshl.md)|Calcola l'arcocoseno iperbolico
[asin, asinf, asinl](../c-runtime-library/reference/asin-asinf-asinl.md)|Calcola l'arcoseno
[asinh, asinhf, asinhl](../c-runtime-library/reference/asinh-asinhf-asinhl.md)|Calcola l'arcoseno iperbolico
[atan, atanf, atanl, atan2, atan2f, atan2l](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|Calcola l'arcotangente
[atanh, atanhf, atanhl](../c-runtime-library/reference/atanh-atanhf-atanhl.md)|Calcola l'arcotangente iperbolica
[_atodbl, _atodbl_l](../c-runtime-library/reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)|Converte una stringa specifica delle impostazioni locali in un oggetto **`double`**
[atof, _atof_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)|Converte una stringa in un oggetto. **`double`**
[_atoflt, _atoflt_l, _atoldbl, _atoldbl_l](../c-runtime-library/reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)|Converte una stringa specifica delle impostazioni locali in un oggetto **`float`** o **`long double`**
[cbrt, cbrtf, cbrtl](../c-runtime-library/reference/cbrt-cbrtf-cbrtl.md)|Calcola la radice cubica
[ceil, ceilf, ceill](../c-runtime-library/reference/ceil-ceilf-ceill.md)|Calcola il limite massimo
[_chgsign, _chgsignf, _chgsignl](../c-runtime-library/reference/chgsign-chgsignf-chgsignl.md)|Calcola l'inverso additivo
[_clear87, _clearfp](../c-runtime-library/reference/clear87-clearfp.md)|Ottiene e cancella il registro di stato a virgola mobile
[_control87, \__control87_2, _controlfp](../c-runtime-library/reference/control87-controlfp-control87-2.md)|Ottiene e imposta la parola di controllo a virgola mobile
[_controlfp_s](../c-runtime-library/reference/controlfp-s.md)|Versione sicura di **_controlfp**
[copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl](../c-runtime-library/reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md)|Restituisce un valore che ha la grandezza di un argomento e il segno di un altro
[cos, cosf, cosl](../c-runtime-library/reference/cos-cosf-cosl.md)|Calcola il seno
[cosh, coshf, coshl](../c-runtime-library/reference/cosh-coshf-coshl.md)|Calcola il seno iperbolico
[div, ldiv, lldiv](../c-runtime-library/reference/div.md)|Calcola il quoziente e il resto di due valori Integer
[_ecvt](../c-runtime-library/reference/ecvt.md), [ecvt](../c-runtime-library/reference/posix-ecvt.md)|Converte un oggetto **`double`** in una stringa
[_ecvt_s](../c-runtime-library/reference/ecvt-s.md)|Versione sicura di **_ecvt**
[erf, erff, erfl](../c-runtime-library/reference/erf-erff-erfl-erfc-erfcf-erfcl.md)|Calcola la funzione di errore
[erfc, erfcf, erfcl](../c-runtime-library/reference/erf-erff-erfl-erfc-erfcf-erfcl.md)|Calcola la funzione di errore complementare
[exp, expf, expl](../c-runtime-library/reference/exp-expf.md)|Calcola l'esponenziale *e*<sup>x</sup>
[exp2, exp2f, exp2l](../c-runtime-library/reference/exp2-exp2f-exp2l.md)|Calcola l'esponenziale 2<sup>x</sup>
[expm1, expm1f, expm1l](../c-runtime-library/reference/expm1-expm1f-expm1l.md)|Calcola *e*<sup>x</sup>-1
[fabs, fabsf, fabsl](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|Calcola il valore assoluto di un tipo a virgola mobile
[_fcvt](../c-runtime-library/reference/fcvt.md), [fcvt](../c-runtime-library/reference/posix-fcvt.md)|Converte un numero a virgola mobile in una stringa
[_fcvt_s](../c-runtime-library/reference/fcvt-s.md)|Versione sicura di **_fcvt**
[fdim, fdimf, fdiml](../c-runtime-library/reference/fdim-fdimf-fdiml.md)|Determina la differenza positiva tra due valori
[feclearexcept](../c-runtime-library/reference/feclearexcept1.md)|Cancella le eccezioni a virgola mobile specificate
[fegetenv](../c-runtime-library/reference/fegetenv1.md)|Archivia l'ambiente a virgola mobile corrente
[fegetexceptflag](../c-runtime-library/reference/fegetexceptflag2.md)|Ottiene lo stato delle eccezioni a virgola mobile specificate
[fegetround](../c-runtime-library/reference/fegetround-fesetround2.md)|Ottiene la modalità di arrotondamento a virgola mobile
[feholdexcept](../c-runtime-library/reference/feholdexcept2.md)|Imposta la modalità di eccezione a virgola mobile senza interruzioni
[feraiseexcept](../c-runtime-library/reference/feraiseexcept.md)|Genera le eccezioni a virgola mobile specificate
[fesetenv](../c-runtime-library/reference/fesetenv1.md)|Imposta l'ambiente a virgola mobile corrente
[fesetexceptflag](../c-runtime-library/reference/fesetexceptflag2.md)|Imposta i flag di stato a virgola mobile specificati
[fesetround](../c-runtime-library/reference/fegetround-fesetround2.md)|Imposta la modalità di arrotondamento a virgola mobile specificata
[fetestexcept](../c-runtime-library/reference/fetestexcept1.md)|Determina quali flag di stato delle eccezioni a virgola mobile sono impostati
[feupdateenv](../c-runtime-library/reference/feupdateenv.md)|Ripristina un ambiente a virgola mobile e quindi genera le eccezioni precedenti
[floor, floorf, floorl](../c-runtime-library/reference/floor-floorf-floorl.md)|Calcola il limite minimo
[fma, fmaf, fmal](../c-runtime-library/reference/fma-fmaf-fmal.md)|Calcola un'operazione congiunta di moltiplicazione e addizione
[fmax, fmaxf, fmaxl](../c-runtime-library/reference/fmax-fmaxf-fmaxl.md)|Calcola il valore massimo degli argomenti
[fmin, fminf, fminl](../c-runtime-library/reference/fmin-fminf-fminl.md)|Calcola il numero minimo di argomenti
[fmod, fmodf, fmodl](../c-runtime-library/reference/fmod-fmodf.md)|Calcola il resto a virgola mobile
[_fpclass, _fpclassf](../c-runtime-library/reference/fpclass-fpclassf.md)|Restituisce la classificazione di un valore a virgola mobile
[fpclassify](../c-runtime-library/reference/fpclassify.md)|Restituisce la classificazione di un valore a virgola mobile
[_fpieee_flt](../c-runtime-library/reference/fpieee-flt.md)|Imposta un gestore per le eccezioni a virgola mobile
[_fpreset](../c-runtime-library/reference/fpreset.md)|Reimposta l'ambiente a virgola mobile
[frexp, frexpf, frexpl](../c-runtime-library/reference/frexp.md)|Ottiene la mantissa e l'esponente di un numero a virgola mobile
[_gcvt](../c-runtime-library/reference/gcvt.md), [gcvt](../c-runtime-library/reference/posix-gcvt.md)|Converte un numero a virgola mobile in una stringa
[_gcvt_s](../c-runtime-library/reference/gcvt-s.md)|Versione sicura di **_gcvt**
[_get_FMA3_enable, _set_FMA3_enable](../c-runtime-library/reference/get-fma3-enable-set-fma3-enable.md)|Ottiene o imposta un flag per l'uso di istruzioni FMA3 su x64
[hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl](../c-runtime-library/reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md)|Calcola l'ipotenusa
[ilogb, ilogbf, ilogbl](../c-runtime-library/reference/ilogb-ilogbf-ilogbl2.md)|Calcola l'esponente in base 2 come valore Integer
[imaxabs](../c-runtime-library/reference/imaxabs.md)|Calcola il valore assoluto di un tipo Integer
[imaxdiv](../c-runtime-library/reference/imaxdiv.md)|Calcola il quoziente e il resto di due valori Integer
[isfinite, _finite, _finitef](../c-runtime-library/reference/finite-finitef.md)|Determina se un valore è finito
[isgreater, isgreaterequal, isless, islessequal, islessgreater, isunordered](../c-runtime-library/reference/floating-point-ordering.md)|Confrontare l'ordine di due valori a virgola mobile
[isinf](../c-runtime-library/reference/isinf.md)|Determina se un valore a virgola mobile è infinito
[isnan, _isnan, _isnanf](../c-runtime-library/reference/isnan-isnan-isnanf.md)|Verifica se un valore a virgola mobile è un valore NaN
[isnormal](../c-runtime-library/reference/isnormal.md)|Verifica se un valore a virgola mobile è sia finito sia non subnormale
[_j0, _j1, _jn](../c-runtime-library/reference/bessel-functions-j0-j1-jn-y0-y1-yn.md)|Calcola la funzione di Bessel
[ldexp, ldexpf, ldexpl](../c-runtime-library/reference/ldexp.md)|Calcola x*2<sup>n</sup>
[lgamma, lgammaf, lgammal](../c-runtime-library/reference/lgamma-lgammaf-lgammal.md)|Calcola il logaritmo naturale del valore assoluto della funzione gamma
[llrint, llrintf, llrintl](../c-runtime-library/reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)|Arrotonda un valore a virgola mobile al valore più vicino **`long long`**
[llround, llroundf, llroundl](../c-runtime-library/reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md)|Arrotonda un valore a virgola mobile al valore più vicino **`long long`**
[log, logf, logl, log10, log10f, log10l](../c-runtime-library/reference/log-logf-log10-log10f.md)|Calcola il logaritmo naturale o in base 10
[log1p, log1pf, log1pl](../c-runtime-library/reference/log1p-log1pf-log1pl2.md)|Calcola il logaritmo naturale di 1+x
[log2, log2f, log2l](../c-runtime-library/reference/log2-log2f-log2l.md)|Calcola il logaritmo in base 2
[logb, logbf, logbl, _logb, _logbf](../c-runtime-library/reference/logb-logbf-logbl-logb-logbf.md)|Restituisce l'esponente di un valore a virgola mobile
[lrint, lrintf, lrintl](../c-runtime-library/reference/lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)|Arrotonda un valore a virgola mobile al valore più vicino **`long`**
[_lrotl, _lrotr](../c-runtime-library/reference/lrotl-lrotr.md)|Ruota un valore Integer a sinistra o a destra
[lround, lroundf, lroundl](../c-runtime-library/reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md)|Arrotonda un valore a virgola mobile al valore più vicino **`long`**
[_matherr](../c-runtime-library/reference/matherr.md)|Gestore di errori matematici predefinito
[__max](../c-runtime-library/reference/max.md)|Macro che restituisce il maggiore di due valori
[__min](../c-runtime-library/reference/min.md)|Macro che restituisce il minore di due valori
[modf, modff, modfl](../c-runtime-library/reference/modf-modff-modfl.md)|Divide un valore a virgola mobile in parte frazionaria e parte intera
[nan, nanf, nanl](../c-runtime-library/reference/nan-nanf-nanl.md)|Restituisce un valore NaN non interattivo
[nearbyint, nearbyintf, nearbyintl](../c-runtime-library/reference/nearbyint-nearbyintf-nearbyintl1.md)|Restituisce il valore arrotondato
[nextafter, nextafterf, nextafterl, _nextafter, _nextafterf](../c-runtime-library/reference/nextafter-functions.md)|Restituisce il valore a virgola mobile rappresentabile successivo
[nexttoward, nexttowardf, nexttowardl](../c-runtime-library/reference/nextafter-functions.md)|Restituisce il valore a virgola mobile rappresentabile successivo
[pow, powf, powl](../c-runtime-library/reference/pow-powf-powl.md)|Restituisce il valore di *x*<sup>*y*</sup>
[remainder, remainderf, remainderl](../c-runtime-library/reference/remainder-remainderf-remainderl.md)|Calcola il resto del quoziente di due valori a virgola mobile
[remquo, remquof, remquol](../c-runtime-library/reference/remquo-remquof-remquol.md)|Calcola il resto di due valori Integer
[rint, rintf, rintl](../c-runtime-library/reference/rint-rintf-rintl.md)|Arrotonda un valore a virgola mobile
[_rotl, _rotl64, _rotr, _rotr64](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|Ruota i bit in tipi Integer
[round, roundf, roundl](../c-runtime-library/reference/round-roundf-roundl.md)|Arrotonda un valore a virgola mobile
[_scalb, _scalbf](../c-runtime-library/reference/scalb.md)|Eleva l'argomento alla potenza di 2
[scalbn, scalbnf, scalbnl, scalbln, scalblnf, scalblnl](../c-runtime-library/reference/scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md)|Moltiplica un numero a virgola mobile per una potenza integrale di **FLT_RADIX**
[_set_controlfp](../c-runtime-library/reference/set-controlfp.md)|Imposta la parola di controllo a virgola mobile
[_set_SSE2_enable](../c-runtime-library/reference/set-sse2-enable.md)|Abilita o disabilita le istruzioni SSE2
[signbit](../c-runtime-library/reference/signbit.md)|Verifica il bit più significativo di un valore a virgola mobile
[sin, sinf, sinl](../c-runtime-library/reference/sin-sinf-sinl.md)|Calcola il seno
[sinh, sinhf, sinhl](../c-runtime-library/reference/sinh-sinhf-sinhl.md)|Calcola il seno iperbolico
[sqrt, sqrtf, sqrtl](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|Calcola la radice quadrata
[_status87, _statusfp, _statusfp2](../c-runtime-library/reference/status87-statusfp-statusfp2.md)|Ottiene la parola di stato nelle operazioni a virgola mobile
[strtof, _strtof_l](../c-runtime-library/reference/strtof-strtof-l-wcstof-wcstof-l.md)|Converte una stringa in un oggetto. **`float`**
[strtold, _strtold_l](../c-runtime-library/reference/strtold-strtold-l-wcstold-wcstold-l.md)|Converte una stringa in un oggetto. **`long double`**
[tan, tanf, tanl](../c-runtime-library/reference/tan-tanf-tanl.md)|Calcola la tangente
[tanh, tanhf, tanhl](../c-runtime-library/reference/tanh-tanhf-tanhl.md)|Calcola la tangente iperbolica
[tgamma, tgammaf, tgammal](../c-runtime-library/reference/tgamma-tgammaf-tgammal.md)|Calcola la funzione gamma
[trunc, truncf, truncl](../c-runtime-library/reference/trunc-truncf-truncl.md)|Tronca la parte frazionaria
[_wtof, _wtof_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)|Converte una stringa di caratteri wide in un oggetto **`double`**
[_y0, _y1, _yn](../c-runtime-library/reference/bessel-functions-j0-j1-jn-y0-y1-yn.md)|Calcola la funzione di Bessel

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)\
[Primitive a virgola mobile](../c-runtime-library/reference/floating-point-primitives.md)
