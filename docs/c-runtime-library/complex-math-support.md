---
title: Supporto di operazioni matematiche complesse C
ms.date: 05/14/2019
f1_keywords:
- c.complex
helpviewer_keywords:
- complex numbers, math routines
- math routines
- complex numbers
ms.openlocfilehash: dac032940ed9d96764b64809c5f8901ac273898b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215179"
---
# <a name="c-complex-math-support"></a>Supporto di operazioni matematiche complesse C

La libreria di runtime di Microsoft C (CRT) include funzioni della libreria delle operazioni matematiche complesse, comprese tutte quelle richieste dallo standard ISO C99. Il compilatore non supporta direttamente una **`complex`** **`_Complex`** parola chiave o, pertanto l'implementazione Microsoft usa i tipi di struttura per rappresentare numeri complessi.

L'implementazione di queste funzioni consente di bilanciare prestazioni e correttezza. Dato che generare un risultato con il corretto arrotondamento può avere costi proibitivi, queste funzioni sono progettate per ottenere in modo efficiente un'approssimazione molto vicina al risultato arrotondato correttamente. Nella maggior parte dei casi, il risultato prodotto è compreso entro +/-1 ulp rispetto al risultato arrotondato correttamente, sebbene in alcuni casi possa esistere un'imprecisione maggiore.

Le routine matematiche complesse si basano sulle funzioni della libreria delle operazioni matematiche a virgola mobile per la loro attuazione. Queste funzioni hanno implementazioni diverse per architetture della CPU differenti. La versione di CRT x86 a 32 bit, ad esempio, può avere un'implementazione diversa di CRT x64 a 64 bit. Alcune funzioni potrebbero inoltre avere più implementazioni per una particolare architettura della CPU. L'implementazione più efficiente viene selezionata in modo dinamico in fase di esecuzione a seconda del set di istruzioni supportate dalla CPU. Ad esempio, in CRT x86 a 32 bit alcune funzioni hanno sia un'implementazione x87 che un'implementazione SSE2. In caso di esecuzione su una CPU che supporta SSE2, viene usata l'implementazione SSE2 più veloce. Per l'esecuzione su una CPU che non supporta SSE2 viene usata l'implementazione x87 più lenta. Dato che implementazioni diverse delle funzioni della libreria delle operazioni matematiche possono usare istruzioni diverse della CPU e algoritmi differenti per produrre i risultati, le funzioni possono produrre risultati diversi con CPU differenti. Nella maggior parte dei casi, i risultati sono compresi entro +/-1 ulp rispetto al risultato arrotondato correttamente, ma i risultati effettivi possono variare tra CPU diverse.

## <a name="types-used-in-complex-math"></a>Tipi usati nelle operazioni matematiche complesse

L'implementazione Microsoft dell'intestazione complex.h definisce questi tipi come equivalenti dei tipi complessi nativi standard C99:

|Tipo standard|Tipo Microsoft|
|-|-|
|**`float complex`** o**`float _Complex`**|**_Fcomplex**|
|**`double complex`** o**`double _Complex`**|**_Dcomplex**|
|**`long double complex`** o**`long double _Complex`**|**_Lcomplex**|

L'intestazione math.h definisce un tipo separato, **struct _complex**, usato per la funzione [_cabs](../c-runtime-library/reference/cabs.md). Il tipo **struct _complex** non viene usato dalle funzioni matematiche complesse equivalenti [cabs, cabsf, cabsl](../c-runtime-library/reference/cabs-cabsf-cabsl.md).

## <a name="complex-constants-and-macros"></a>Costanti e macro complesse

**I** è definito come tipo complesso **_Fcomplex** inizializzato da `{ 0.0f, 1.0f }` .

## <a name="trigonometric-functions"></a>Funzioni trigonometriche

|Funzione|Descrizione|
|-|-|
|[cacos, cacosf, cacosl](../c-runtime-library/reference/cacos-cacosf-cacosl.md)|Calcola l'arcocoseno complesso di un numero complesso|
|[casin, casinf, casinl](../c-runtime-library/reference/casin-casinf-casinl.md)|Calcola l'arcoseno complesso di un numero complesso|
|[catan, catanf, catanl](../c-runtime-library/reference/catan-catanf-catanl.md)|Calcola l'arcotangente complessa di un numero complesso|
|[ccos, ccosf, ccosl](../c-runtime-library/reference/ccos-ccosf-ccosl.md)|Calcola l'arcoseno complesso di un numero complesso|
|[csin, csinf, csinl](../c-runtime-library/reference/csin-csinf-csinl.md)|Calcola il seno complesso di un numero complesso|
|[ctan, ctanf, ctanl](../c-runtime-library/reference/ctan-ctanf-ctanl.md)|Calcola la tangente complessa di un numero complesso|

## <a name="hyperbolic-functions"></a>Funzioni iperboliche

|Funzione|Descrizione|
|-|-|
|[cacosh, cacoshf, cacoshl](../c-runtime-library/reference/cacosh-cacoshf-cacoshl.md)|Calcola l'arcocoseno iperbolico complesso di un numero complesso|
|[casinh, casinhf, casinhl](../c-runtime-library/reference/casinh-casinhf-casinhl.md)|Calcola il seno iperbolico complesso di un numero complesso|
|[catanh, catanhf, catanhl](../c-runtime-library/reference/catanh-catanhf-catanhl.md)|Calcola l'arcotangente iperbolica complessa di un numero complesso|
|[ccosh, ccoshf, ccoshl](../c-runtime-library/reference/ccosh-ccoshf-ccoshl.md)|Calcola il coseno iperbolico complesso di un numero complesso|
|[csinh, csinhf, csinhl](../c-runtime-library/reference/csinh-csinhf-csinhl.md)|Calcola il seno iperbolico complesso di un numero complesso|
|[ctanh, ctanhf, ctanhl](../c-runtime-library/reference/ctanh-ctanhf-ctanhl.md)|Calcola la tangente iperbolica complessa di un numero complesso|

## <a name="exponential-and-logarithmic-functions"></a>Funzioni esponenziali e logaritmiche

|Funzione|Descrizione|
|-|-|
|[cexp, cexpf, cexpl](../c-runtime-library/reference/cexp-cexpf-cexpl.md)|Calcola l'esponenziale in base *e* complesso di un numero complesso|
|[clog, clogf, clogl](../c-runtime-library/reference/clog-clogf-clogl.md)|Calcola il logaritmo naturale complesso (in base *e*) di un numero complesso|
|[clog10, clog10f, clog10l](../c-runtime-library/reference/clog10-clog10f-clog10l.md)|Calcola il logaritmo naturale complesso in base 10 di un numero complesso|

## <a name="power-and-absolute-value-functions"></a>Funzioni di potenza e valore assoluto

|Funzione|Descrizione|
|-|-|
|[cabs, cabsf, cabsl](../c-runtime-library/reference/cabs-cabsf-cabsl.md)|Calcola il valore assoluto complesso (denominato anche norma, modulo o grandezza) di un numero complesso|
|[cpow, cpowf, cpowl](../c-runtime-library/reference/cpow-cpowf-cpowl.md)|Calcola la funzione di potenza complessa x<sup>y</sup>|
|[csqrt, csqrtf, csqrtl](../c-runtime-library/reference/csqrt-csqrtf-csqrtl.md)|Calcola la radice quadrata complessa di un numero complesso|

## <a name="manipulation-functions"></a>Funzioni di manipolazione

|Funzione|Descrizione|
|-|-|
|[_Cbuild, _FCbuild, _LCbuild](../c-runtime-library/reference/cbuild-fcbuild-lcbuild.md)|Costruisce un numero complesso da parti reali e immaginarie|
|[carg, cargf, cargl](../c-runtime-library/reference/carg-cargf-cargl.md)|Calcola l'argomento (detto anche angolo di fase) di un numero complesso|
|[cimag, cimagf, cimagl](../c-runtime-library/reference/cimag-cimagf-cimagl.md)|Calcola la parte immaginaria di un numero complesso|
|[conj, conjf, conjl](../c-runtime-library/reference/conj-conjf-conjl.md)|Calcola il complesso coniugato di un numero complesso|
|[cproj, cprojf, cprojl](../c-runtime-library/reference/cproj-cprojf-cprojl.md)|Calcola la proiezione di un numero complesso sulla sfera di Riemann|
|[creal, crealf, creall](../c-runtime-library/reference/creal-crealf-creall.md)|Calcola la parte reale di un numero complesso|
|[norm, normf, norml](../c-runtime-library/reference/norm-normf-norml1.md)|Calcola la grandezza al quadrato di un numero complesso|

## <a name="operation-functions"></a>Funzioni di operatività

Poiché i numeri complessi non sono un tipo nativo nel compilatore Microsoft, gli operatori aritmetici standard non sono definiti nei tipi complessi. Per praticità, queste funzioni della libreria di operazioni matematiche complesse vengono fornite per consentire la manipolazione limitata di numeri complessi nel codice utente:

|Funzione|Descrizione|
|-|-|
|[_Cmulcc, _FCmulcc, _LCmulcc](../c-runtime-library/reference/cmulcc-fcmulcc-lcmulcc.md)|Moltiplicare due numeri complessi|
|[_Cmulcr, _FCmulcr, _LCmulcr](../c-runtime-library/reference/cmulcr-fcmulcr-lcmulcr.md)|Moltiplica un numero complesso e un numero a virgola mobile|

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
