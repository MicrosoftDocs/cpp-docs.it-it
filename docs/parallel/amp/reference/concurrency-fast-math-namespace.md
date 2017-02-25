---
title: "Spazio dei nomi Concurrency::fast_math | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp_math/Concurrency::fast_math"
dev_langs: 
  - "C++"
ms.assetid: 54fed939-9902-49db-9f29-e98fd9821508
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Spazio dei nomi Concurrency::fast_math
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Le funzioni nello spazio dei nomi `fast_math` hanno precisione più bassa, supportano solo la precisione singola \(`float`\) e chiamano le funzioni intrinseche di DirectX.  Esistono due versioni di ciascuna funzione, ad esempio `cos` e `cosf`.  Entrambe le versioni prendono e restituiscono un `float`, ma ognuna chiama la stessa funzione intrinseca DirectX.  
  
## Sintassi  
  
```  
namespace fast_math;  
```  
  
## Membri  
  
### Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione cos \(fast\_math\)](../Topic/cos%20Function%20%20\(fast_math\).md)|Calcola l'arcocoseno dell'argomento|  
|[Funzione cosf \(fast\_math\)](../Topic/cosf%20Function%20\(fast_math\).md)|Calcola l'arcocoseno dell'argomento|  
|[Funzione asin \(fast\_math\)](../Topic/asin%20Function%20\(fast_math\).md)|Calcola l'arcoseno dell'argomento|  
|[Funzione asinf \(fast\_math\)](../Topic/asinf%20Function%20\(fast_math\).md)|Calcola l'arcoseno dell'argomento|  
|[Funzione atan \(fast\_math\)](../Topic/atan%20Function%20\(fast_math\).md)|Calcola l'arcotangente dell'argomento|  
|[Funzione atan2 \(fast\_math\)](../Topic/atan2%20Function%20\(fast_math\).md)|Calcola l'arcotangente di \_Y\/\_X|  
|[Funzione atan2f \(fast\_math\)](../Topic/atan2f%20Function%20\(fast_math\).md)|Calcola l'arcotangente di \_Y\/\_X|  
|[Funzione atanf \(fast\_math\)](../Topic/atanf%20Function%20\(fast_math\).md)|Calcola l'arcotangente dell'argomento|  
|[Funzione ceil \(fast\_math\)](../Topic/ceil%20Function%20\(fast_math\).md)|Calcola l'intero superiore dell'argomento|  
|[Funzione ceilf \(fast\_math\)](../Topic/ceilf%20Function%20\(fast_math\).md)|Calcola l'intero superiore dell'argomento|  
|[Funzione cos \(fast\_math\)](../Topic/cos%20Function%20%20\(fast_math\).md)|Calcola il coseno dell'argomento|  
|[Funzione cosf \(fast\_math\)](../Topic/cosf%20Function%20\(fast_math\).md)|Calcola il coseno dell'argomento|  
|[Funzione cosh \(fast\_math\)](../Topic/cosh%20Function%20\(fast_math\).md)|Calcola il valore del coseno iperbolico dell'argomento|  
|[Funzione coshf \(fast\_math\)](../Topic/coshf%20Function%20\(fast_math\).md)|Calcola il valore del coseno iperbolico dell'argomento|  
|[Funzione exp \(fast\_math\)](../Topic/exp%20Function%20\(fast_math\).md)|Calcola l'esponenziale in base e dell'argomento|  
|[Funzione exp2 \(fast\_math\)](../Topic/exp2%20Function%20\(fast_math\).md)|Calcola l'esponenziale in base 2 dell'argomento|  
|[Funzione exp2f \(fast\_math\)](../Topic/exp2f%20Function%20\(fast_math\).md)|Calcola l'esponenziale in base 2 dell'argomento|  
|[Funzione expf \(fast\_math\)](../Topic/expf%20Function%20\(fast_math\).md)|Calcola l'esponenziale in base e dell'argomento|  
|[Funzione fabs \(fast\_math\)](../Topic/fabs%20Function%20\(fast_math\).md)|Restituisce il valore assoluto dell'argomento|  
|[Funzione fabsf \(fast\_math\)](../Topic/fabsf%20Function%20\(fast_math\).md)|Restituisce il valore assoluto dell'argomento|  
|[Funzione floor \(fast\_math\)](../Topic/floor%20Function%20\(fast_math\).md)|Calcola l'intero inferiore dell'argomento|  
|[Funzione floorf \(fast\_math\)](../Topic/floorf%20Function%20\(fast_math\).md)|Calcola l'intero inferiore dell'argomento|  
|[Funzione fmax \(fast\_math\)](../Topic/fmax%20Function%20\(fast_math\).md)|Determina il massimo valore numerico tra gli argomenti.|  
|[Funzione fmaxf \(fast\_math\)](../Topic/fmaxf%20Function%20\(fast_math\).md)|Determina il massimo valore numerico tra gli argomenti.|  
|[Funzione fmin \(fast\_math\)](../Topic/fmin%20Function%20\(fast_math\).md)|Seleziona il minimo valore numerico tra gli argomenti.|  
|[Funzione fminf \(fast\_math\)](../Topic/fminf%20Function%20\(fast_math\).md)|Seleziona il minimo valore numerico tra gli argomenti.|  
|[Funzione fmod \(fast\_math\)](../Topic/fmod%20Function%20\(fast_math\).md)|Calcola il resto in virgola mobile di \_X\/\_Y|  
|[Funzione fmodf \(fast\_math\)](../Topic/fmodf%20Function%20\(fast_math\).md)|Calcola il resto in virgola mobile di \_X\/\_Y|  
|[Funzione frexp \(fast\_math\)](../Topic/frexp%20Function%20\(fast_math\).md)|Ottiene la mantissa e l'esponente di \_X|  
|[Funzione frexpf \(fast\_math\)](../Topic/frexpf%20Function%20\(fast_math\).md)|Ottiene la mantissa e l'esponente di \_X|  
|[Funzione isfinite \(fast\_math\)](../Topic/isfinite%20Function%20\(fast_math\).md)|Determina se l'argomento ha un valore finito|  
|[Funzione isinf \(fast\_math\)](../Topic/isinf%20Function%20\(fast_math\).md)|Determina se l'argomento è un numero infinito|  
|[Funzione isnan \(fast\_math\)](../Topic/isnan%20Function%20\(fast_math\).md)|Determina se l'argomento è NaN|  
|[Funzione ldexp \(fast\_math\)](../Topic/ldexp%20Function%20\(fast_math\).md)|Calcola un numero reale da mantissa ed esponente|  
|[Funzione ldexpf \(fast\_math\)](../Topic/ldexpf%20Function%20\(fast_math\).md)|Calcola un numero reale da mantissa ed esponente|  
|[Funzione log \(fast\_math\)](../Topic/log%20Function%20\(fast_math\).md)|Calcola il logaritmo in base e dell'argomento|  
|[Funzione log10 \(fast\_math\)](../Topic/log10%20Function%20\(fast_math\).md)|Calcola il logaritmo in base 10 dell'argomento|  
|[Funzione log10f \(fast\_math\)](../Topic/log10f%20Function%20\(fast_math\).md)|Calcola il logaritmo in base 10 dell'argomento|  
|[Funzione log2 \(fast\_math\)](../Topic/log2%20Function%20\(fast_math\).md)|Calcola il logaritmo in base 2 dell'argomento|  
|[Funzione log2f \(fast\_math\)](../Topic/log2f%20Function%20\(fast_math\).md)|Calcola il logaritmo in base 2 dell'argomento|  
|[Funzione logf \(fast\_math\)](../Topic/logf%20Function%20\(fast_math\).md)|Calcola il logaritmo in base e dell'argomento|  
|[Funzione modf \(fast\_math\)](../Topic/modf%20Function%20\(fast_math\).md)|Divide \_X nella parte frazionaria e nella parte intera.|  
|[Funzione modff \(fast\_math\)](../Topic/modff%20Function%20\(fast_math\).md)|Divide \_X nella parte frazionaria e nella parte intera.|  
|[Funzione pow \(fast\_math\)](../Topic/pow%20Function%20\(fast_math\).md)|Calcola \_X elevato alla potenza di \_Y|  
|[Funzione powf \(fast\_math\)](../Topic/powf%20Function%20\(fast_math\).md)|Calcola \_X elevato alla potenza di \_Y|  
|[Funzione round \(fast\_math\)](../Topic/round%20Function%20\(fast_math\).md)|Arrotonda \_X all'integer più vicino|  
|[Funzione roundf \(fast\_math\)](../Topic/roundf%20Function%20\(fast_math\).md)|Arrotonda \_X all'integer più vicino|  
|[Funzione rsqrt \(fast\_math\)](../Topic/rsqrt%20Function%20\(fast_math\).md)|Restituisce il reciproco della radice quadrata dell'argomento|  
|[Funzione rsqrtf \(fast\_math\)](../Topic/rsqrtf%20Function%20\(fast_math\).md)|Restituisce il reciproco della radice quadrata dell'argomento|  
|[Funzione signbit \(fast\_math\)](../Topic/signbit%20Function%20\(fast_math\).md)|Restituisce il segno dell'argomento|  
|[Funzione signbitf \(fast\_math\)](../Topic/signbitf%20Function%20\(fast_math\).md)|Restituisce il segno dell'argomento|  
|[Funzione sin \(fast\_math\)](../Topic/sin%20Function%20\(fast_math\).md)|Calcola il valore del seno dell'argomento|  
|[Funzione sincos \(fast\_math\)](../Topic/sincos%20Function%20\(fast_math\).md)|Calcola il valore del seno e del coseno di \_X|  
|[Funzione sincosf \(fast\_math\)](../Topic/sincosf%20Function%20\(fast_math\).md)|Calcola il valore del seno e del coseno di \_X|  
|[Funzione sinf \(fast\_math\)](../Topic/sinf%20Function%20\(fast_math\).md)|Calcola il valore del seno dell'argomento|  
|[Funzione sinh \(fast\_math\)](../Topic/sinh%20Function%20\(fast_math\).md)|Calcola il valore del seno iperbolico dell'argomento|  
|[Funzione sinhf \(fast\_math\)](../Topic/sinhf%20Function%20\(fast_math\).md)|Calcola il valore del seno iperbolico dell'argomento|  
|[Funzione sqrt \(fast\_math\)](../Topic/sqrt%20Function%20\(fast_math\).md)|Calcola la radice quadrata dell'argomento|  
|[Funzione sqrtf \(fast\_math\)](../Topic/sqrtf%20Function%20\(fast_math\).md)|Calcola la radice quadrata dell'argomento|  
|[Funzione tan \(fast\_math\)](../Topic/tan%20Function%20\(fast_math\).md)|Calcola il valore della tangente dell'argomento|  
|[Funzione tanf \(fast\_math\)](../Topic/tanf%20Function%20\(fast_math\).md)|Calcola il valore della tangente dell'argomento|  
|[Funzione tanh \(fast\_math\)](../Topic/tanh%20Function%20\(fast_math\).md)|Calcola il valore della tangente iperbolica dell'argomento|  
|[Funzione tanhf \(fast\_math\)](../Topic/tanhf%20Function%20\(fast_math\).md)|Calcola il valore della tangente iperbolica dell'argomento|  
|[Funzione trunc \(fast\_math\)](../Topic/trunc%20Function%20\(fast_math\).md)|Tronca l'argomento al componente Integer|  
|[Funzione truncf \(fast\_math\)](../Topic/truncf%20Function%20\(fast_math\).md)|Tronca l'argomento al componente Integer|  
  
## Requisiti  
 **Intestazione:** amp\_math.h  
  
 **Spazio dei nomi:** Concurrency::fast\_math  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)