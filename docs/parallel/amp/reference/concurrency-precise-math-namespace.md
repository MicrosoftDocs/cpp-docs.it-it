---
title: "Spazio dei nomi Concurrency::precise_math | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp_math/Concurrency::precise_math"
dev_langs: 
  - "C++"
ms.assetid: ba653308-dc28-4384-b2fd-6cd718a72f91
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Spazio dei nomi Concurrency::precise_math
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Le funzioni nello spazio dei nomi `precise_math` sono conformi a C99.  Sono incluse sia le versioni a precisione singola sia a precisione doppia di ogni funzione.  Ad esempio, `acos` è la versione a precisione doppia e `acosf` è la versione a precisione singola.  Queste funzioni, incluse le funzioni a singola precisione, richiedono il supporto a precisione doppia estesa sull'accelerator.  È possibile utilizzare [Membro dati accelerator::supports\_double\_precision](../Topic/accelerator::supports_double_precision%20Data%20Member.md) per determinare se è possibile eseguire queste funzioni su un accelerator specifico.  
  
## Sintassi  
  
```vb  
namespace precise_math;  
```  
  
#### Parametri  
  
## Membri  
  
### Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione acos](../Topic/acos%20Function.md)|Di overload.  Calcola l'arcocoseno dell'argomento|  
|[Funzione acosf](../Topic/acosf%20Function.md)|Calcola l'arcocoseno dell'argomento|  
|[Funzione acosh](../Topic/acosh%20Function.md)|Di overload.  Calcola il coseno iperbolico inverso dell'argomento|  
|[Funzione acoshf](../Topic/acoshf%20Function.md)|Calcola il coseno iperbolico inverso dell'argomento|  
|[Funzione asin](../Topic/asin%20Function.md)|Di overload.  Calcola l'arcoseno dell'argomento|  
|[Funzione asinf](../Topic/asinf%20Function.md)|Calcola l'arcoseno dell'argomento|  
|[Funzione asinh](../Topic/asinh%20Function.md)|Di overload.  Calcola il seno iperbolico inverso dell'argomento|  
|[Funzione asinhf](../Topic/asinhf%20Function.md)|Calcola il seno iperbolico inverso dell'argomento|  
|[Funzione atan](../Topic/atan%20Function.md)|Di overload.  Calcola l'arcotangente dell'argomento|  
|[Funzione atan2](../Topic/atan2%20Function.md)|Di overload.  Calcola l'arcotangente di \_Y\/\_X|  
|[Funzione atan2f](../Topic/atan2f%20Function.md)|Calcola l'arcotangente di \_Y\/\_X|  
|[Funzione atanf](../Topic/atanf%20Function.md)|Calcola l'arcotangente dell'argomento|  
|[Funzione atanh](../Topic/atanh%20Function.md)|Di overload.  Calcola la tangente iperbolica inversa dell'argomento|  
|[Funzione atanhf](../Topic/atanhf%20Function.md)|Calcola la tangente iperbolica inversa dell'argomento|  
|[Funzione cbrt](../Topic/cbrt%20Function.md)|Di overload.  Calcola la radice cubica effettiva dell'argomento|  
|[Funzione cbrtf](../Topic/cbrtf%20Function.md)|Calcola la radice cubica effettiva dell'argomento|  
|[Funzione ceil](../Topic/ceil%20Function.md)|Di overload.  Calcola l'intero superiore dell'argomento|  
|[Funzione ceilf](../Topic/ceilf%20Function.md)|Calcola l'intero superiore dell'argomento|  
|[Funzione copysign](../Topic/copysign%20Function.md)|Di overload.  Genera un valore con la grandezza di \_X e il segno di \_Y|  
|[Funzione copysignf](../Topic/copysignf%20Function.md)|Genera un valore con la grandezza di \_X e il segno di \_Y|  
|[Funzione cos](../Topic/cos%20Function.md)|Di overload.  Calcola il coseno dell'argomento|  
|[Funzione cosf](../Topic/cosf%20Function.md)|Calcola il coseno dell'argomento|  
|[Funzione cosh](../Topic/cosh%20Function.md)|Di overload.  Calcola il valore del coseno iperbolico dell'argomento|  
|[Funzione coshf](../Topic/coshf%20Function.md)|Calcola il valore del coseno iperbolico dell'argomento|  
|[Funzione cospi](../Topic/cospi%20Function.md)|Di overload.  Calcola il valore del coseno di pi greco \* \_X|  
|[Funzione cospif](../Topic/cospif%20Function.md)|Calcola il valore del coseno di pi greco \* \_X|  
|[Funzione erf](../Topic/erf%20Function.md)|Di overload.  Calcola la funzione di errore di \_X|  
|[Funzione erfc](../Topic/erfc%20Function.md)|Di overload.  Calcola la funzione complementare di errore di \_X|  
|[Funzione erfcf](../Topic/erfcf%20Function.md)|Calcola la funzione complementare di errore di \_X|  
|[Funzione erfcinv](../Topic/erfcinv%20Function.md)|Di overload.  Calcola la funzione inversa di errore complementare di \_X|  
|[Funzione erfcinvf](../Topic/erfcinvf%20Function.md)|Calcola la funzione inversa di errore complementare di \_X|  
|[Funzione erff](../Topic/erff%20Function.md)|Calcola la funzione di errore di \_X|  
|[Funzione erfinv](../Topic/erfinv%20Function.md)|Di overload.  Calcola l'inversa della funzione di errore di \_X|  
|[Funzione erfinvf](../Topic/erfinvf%20Function.md)|Calcola l'inversa della funzione di errore di \_X|  
|[Funzione exp](../Topic/exp%20Function.md)|Di overload.  Calcola l'esponenziale in base e dell'argomento|  
|[Funzione exp10](../Topic/exp10%20Function.md)|Di overload.  Calcola l'esponenziale in base 10 dell'argomento|  
|[Funzione exp10f](../Topic/exp10f%20Function.md)|Calcola l'esponenziale in base 10 dell'argomento|  
|[Funzione exp2](../Topic/exp2%20Function.md)|Di overload.  Calcola l'esponenziale in base 2 dell'argomento|  
|[Funzione exp2f](../Topic/exp2f%20Function.md)|Calcola l'esponenziale in base 2 dell'argomento|  
|[Funzione expf](../Topic/expf%20Function.md)|Calcola l'esponenziale in base e dell'argomento|  
|[Funzione expm1](../Topic/expm1%20Function.md)|Di overload.  Calcola l'esponenziale in base e dell'argomento, meno 1|  
|[Funzione expm1f](../Topic/expm1f%20Function.md)|Calcola l'esponenziale in base e dell'argomento, meno 1|  
|[Funzione fabs](../Topic/fabs%20Function.md)|Di overload.  Restituisce il valore assoluto dell'argomento|  
|[Funzione fabsf](../Topic/fabsf%20Function.md)|Restituisce il valore assoluto dell'argomento|  
|[Funzione fdim](../Topic/fdim%20Function.md)|Di overload.  Determina la differenza positiva tra gli argomenti|  
|[Funzione fdimf](../Topic/fdimf%20Function.md)|Determina la differenza positiva tra gli argomenti|  
|[Funzione floor](../Topic/floor%20Function.md)|Di overload.  Calcola l'intero inferiore dell'argomento|  
|[Funzione floorf](../Topic/floorf%20Function.md)|Calcola l'intero inferiore dell'argomento|  
|[Funzione fma](../Topic/fma%20Function.md)|Di overload.  Calcola \(\_X \* \_Y\) \+ \_Z, arrotondato come un'operazione ternaria|  
|[Funzione fmaf](../Topic/fmaf%20Function.md)|Calcola \(\_X \* \_Y\) \+ \_Z, arrotondato come un'operazione ternaria|  
|[Funzione fmax](../Topic/fmax%20Function.md)|Di overload.  Determina il massimo valore numerico tra gli argomenti.|  
|[Funzione fmaxf](../Topic/fmaxf%20Function.md)|Determina il massimo valore numerico tra gli argomenti.|  
|[Funzione fmin](../Topic/fmin%20Function.md)|Di overload.  Seleziona il minimo valore numerico tra gli argomenti.|  
|[Funzione fminf](../Topic/fminf%20Function.md)|Seleziona il minimo valore numerico tra gli argomenti.|  
|[Funzione fmod \(C\+\+ AMP\)](../Topic/fmod%20Function%20\(C++%20AMP\).md)|Di overload.  Calcola il resto in virgola mobile di \_X\/\_Y|  
|[Funzione fmodf](../Topic/fmodf%20Function.md)|Calcola il resto in virgola mobile di \_X\/\_Y|  
|[Funzione fpclassify](../Topic/fpclassify%20Function.md)|Di overload.  Classifica il valore dell'argomento come NaN, infinito, normale, sotto la regola, zero|  
|[Funzione frexp](../Topic/frexp%20Function.md)|Di overload.  Ottiene la mantissa e l'esponente di \_X|  
|[Funzione frexpf](../Topic/frexpf%20Function.md)|Ottiene la mantissa e l'esponente di \_X|  
|[Funzione hypot](../Topic/hypot%20Function.md)|Di overload.  Calcola la radice quadrata della somma dei quadrati di \_X e \_Y|  
|[Funzione hypotf](../Topic/hypotf%20Function.md)|Calcola la radice quadrata della somma dei quadrati di \_X e \_Y|  
|[Funzione ilogb](../Topic/ilogb%20Function.md)|Di overload.  Estrai l'esponente di \_X come valore signed int|  
|[Funzione ilogbf](../Topic/ilogbf%20Function.md)|Estrai l'esponente di \_X come valore signed int|  
|[Funzione isfinite](../Topic/isfinite%20Function.md)|Di overload.  Determina se l'argomento ha un valore finito|  
|[Funzione isinf](../Topic/isinf%20Function.md)|Di overload.  Determina se l'argomento è un numero infinito|  
|[Funzione isnan](../Topic/isnan%20Function.md)|Di overload.  Determina se l'argomento è NaN|  
|[Funzione isnormal](../Topic/isnormal%20Function.md)|Di overload.  Determina se l'argomento è un numero normale|  
|[Funzione ldexp](../Topic/ldexp%20Function.md)|Di overload.  Calcola un numero reale dalla mantissa e dall'esponente.|  
|[Funzione ldexpf](../Topic/ldexpf%20Function.md)|Calcola un numero reale dalla mantissa e dall'esponente.|  
|[Funzione lgamma](../Topic/lgamma%20Function.md)|Di overload.  Calcola il logaritmo naturale del valore assoluto di gamma dell'argomento|  
|[Funzione lgammaf](../Topic/lgammaf%20Function.md)|Calcola il logaritmo naturale del valore assoluto di gamma dell'argomento|  
|[Funzione log](../Topic/log%20Function.md)|Di overload.  Calcola il logaritmo in base e dell'argomento|  
|[Funzione log10](../Topic/log10%20Function.md)|Di overload.  Calcola il logaritmo in base 10 dell'argomento|  
|[Funzione log10f](../Topic/log10f%20Function.md)|Calcola il logaritmo in base 10 dell'argomento|  
|[Funzione log1p](../Topic/log1p%20Function.md)|Di overload.  Calcola il logaritmo in base e di 1 più l'argomento|  
|[Funzione log1pf](../Topic/log1pf%20Function.md)|Calcola il logaritmo in base e di 1 più l'argomento|  
|[Funzione log2](../Topic/log2%20Function.md)|Di overload.  Calcola il logaritmo in base 2 dell'argomento|  
|[Funzione log2f](../Topic/log2f%20Function.md)|Calcola il logaritmo in base 2 dell'argomento|  
|[Funzione logb](../Topic/logb%20Function.md)|Di overload.  Estrae l'esponente di \_X come un valore intero con segno con formato a virgola mobile|  
|[Funzione logbf](../Topic/logbf%20Function.md)|Estrae l'esponente di \_X come un valore intero con segno con formato a virgola mobile|  
|[Funzione logf](../Topic/logf%20Function.md)|Calcola il logaritmo in base e dell'argomento|  
|[Funzione modf](../Topic/modf%20Function.md)|Di overload.  Divide \_X nella parte frazionaria e nella parte intera.|  
|[Funzione modff](../Topic/modff%20Function.md)|Divide \_X nella parte frazionaria e nella parte intera.|  
|[Funzione nan](../Topic/nan%20Function.md)|Restituisce un quiet NaN|  
|[Funzione nanf](../Topic/nanf%20Function.md)|Restituisce un quiet NaN|  
|[Funzione nearbyint](../Topic/nearbyint%20Function.md)|Di overload.  Arrotonda l'argomento ad un valore intero in formato a virgola mobile, utilizzando la direzione di arrotondamento corrente.|  
|[Funzione nearbyintf](../Topic/nearbyintf%20Function.md)|Arrotonda l'argomento ad un valore intero in formato a virgola mobile, utilizzando la direzione di arrotondamento corrente.|  
|[Funzione nextafter](../Topic/nextafter%20Function.md)|Di overload.  Determina il prossimo valore rappresentabile, il tipo di funzione, dopo \_X in direzione di \_Y|  
|[Funzione nextafterf](../Topic/nextafterf%20Function.md)|Determina il prossimo valore rappresentabile, il tipo di funzione, dopo \_X in direzione di \_Y|  
|[Funzione phi](../Topic/phi%20Function.md)|Di overload.  Restituisce la funzione di distribuzione cumulativa dell'argomento|  
|[Funzione phif](../Topic/phif%20Function.md)|Restituisce la funzione di distribuzione cumulativa dell'argomento|  
|[Funzione pow](../Topic/pow%20Function.md)|Di overload.  Calcola \_X elevato alla potenza di \_Y|  
|[Funzione powf](../Topic/powf%20Function.md)|Calcola \_X elevato alla potenza di \_Y|  
|[Funzione probit](../Topic/probit%20Function.md)|Di overload.  Restituisce la funzione di ripartizione inversa dell'argomento|  
|[Funzione probitf](../Topic/probitf%20Function.md)|Restituisce la funzione di ripartizione inversa dell'argomento|  
|[Funzione rcbrt](../Topic/rcbrt%20Function.md)|Di overload.  Restituisce il reciproco della radice cubica dell'argomento|  
|[Funzione rcbrtf](../Topic/rcbrtf%20Function.md)|Restituisce il reciproco della radice cubica dell'argomento|  
|[Funzione remainder](../Topic/remainder%20Function.md)|Di overload.  Calcola il resto: \_X REM \_Y|  
|[Funzione remainderf](../Topic/remainderf%20Function.md)|Calcola il resto: \_X REM \_Y|  
|[Funzione remquo](../Topic/remquo%20Function.md)|Di overload.  Calcola lo stesso resto di \_X REM \_Y.  Vengono inoltre calcolati i 23 bit meno significativi del quoziente intero \_X\/\_Y e gli viene dato lo stesso segno di \_X\/\_Y.  Archivia il valore signed nell'Integer a cui viene fatto riferimento da \_Quo.|  
|[Funzione remquof](../Topic/remquof%20Function.md)|Calcola lo stesso resto di \_X REM \_Y.  Vengono inoltre calcolati i 23 bit meno significativi del quoziente intero \_X\/\_Y e gli viene dato lo stesso segno di \_X\/\_Y.  Archivia il valore signed nell'Integer a cui viene fatto riferimento da \_Quo.|  
|[Funzione round](../Topic/round%20Function.md)|Di overload.  Arrotonda \_X all'intero più vicino|  
|[Funzione roundf](../Topic/roundf%20Function.md)|Arrotonda \_X all'intero più vicino|  
|[Funzione rsqrt](../Topic/rsqrt%20Function.md)|Di overload.  Restituisce il reciproco della radice quadrata dell'argomento|  
|[Funzione rsqrtf](../Topic/rsqrtf%20Function.md)|Restituisce il reciproco della radice quadrata dell'argomento|  
|[Funzione scalb](../Topic/scalb%20Function.md)|Di overload.  Moltiplica \_X per FLT\_RADIX elevato alla potenza \_Y|  
|[Funzione scalbf](../Topic/scalbf%20Function.md)|Moltiplica \_X per FLT\_RADIX elevato alla potenza \_Y|  
|[Funzione scalbn](../Topic/scalbn%20Function.md)|Di overload.  Moltiplica \_X per FLT\_RADIX elevato alla potenza \_Y|  
|[Funzione scalbnf](../Topic/scalbnf%20Function.md)|Moltiplica \_X per FLT\_RADIX elevato alla potenza \_Y|  
|[Funzione signbit](../Topic/signbit%20Function.md)|Di overload.  Determina se il segno di \_X è negativo|  
|[Funzione signbitf](../Topic/signbitf%20Function.md)|Determina se il segno di \_X è negativo|  
|[Funzione sin](../Topic/sin%20Function.md)|Di overload.  Calcola il valore del seno dell'argomento|  
|[Funzione sincos](../Topic/sincos%20Function.md)|Di overload.  Calcola il valore del seno e del coseno di \_X|  
|[Funzione sincosf](../Topic/sincosf%20Function.md)|Calcola il valore del seno e del coseno di \_X|  
|[Funzione sinf](../Topic/sinf%20Function.md)|Calcola il valore del seno dell'argomento|  
|[Funzione sinh](../Topic/sinh%20Function.md)|Di overload.  Calcola il valore del seno iperbolico dell'argomento|  
|[Funzione sinhf](../Topic/sinhf%20Function.md)|Calcola il valore del seno iperbolico dell'argomento|  
|[Funzione sinpi](../Topic/sinpi%20Function.md)|Di overload.  Calcola il valore del seno di pi greco \* \_X|  
|[Funzione sinpif](../Topic/sinpif%20Function.md)|Calcola il valore del seno di pi greco \* \_X|  
|[Funzione sqrt](../Topic/sqrt%20Function.md)|Di overload.  Calcola la radice quadrata dell'argomento|  
|[Funzione sqrtf](../Topic/sqrtf%20Function.md)|Calcola la radice quadrata dell'argomento|  
|[Funzione tan](../Topic/tan%20Function.md)|Di overload.  Calcola il valore della tangente dell'argomento|  
|[Funzione tanf](../Topic/tanf%20Function.md)|Calcola il valore della tangente dell'argomento|  
|[Funzione tanh](../Topic/tanh%20Function.md)|Di overload.  Calcola il valore della tangente iperbolica dell'argomento|  
|[Funzione tanhf](../Topic/tanhf%20Function.md)|Calcola il valore della tangente iperbolica dell'argomento|  
|[Funzione tanpi](../Topic/tanpi%20Function.md)|Di overload.  Calcola il valore della tangente di pi greco \* \_X|  
|[Funzione tanpif](../Topic/tanpif%20Function.md)|Calcola il valore della tangente di pi greco \* \_X|  
|[Funzione tgamma](../Topic/tgamma%20Function.md)|Di overload.  Calcola la funzione gamma di \_X|  
|[Funzione tgammaf](../Topic/tgammaf%20Function.md)|Calcola la funzione gamma di \_X|  
|[Funzione trunc](../Topic/trunc%20Function.md)|Di overload.  Tronca l'argomento alla parte intera|  
|[Funzione truncf](../Topic/truncf%20Function.md)|Tronca l'argomento alla parte intera|  
  
## Requisiti  
 **Intestazione:** amp\_math.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)