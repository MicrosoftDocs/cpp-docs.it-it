---
title: "Classe numeric_limits | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::numeric_limits"
  - "std.numeric_limits"
  - "numeric_limits"
  - "limits/std::numeric_limits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "numeric_limits (classe)"
ms.assetid: 9e817177-0e91-48e6-b680-0531c4b26625
caps.latest.revision: 26
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe numeric_limits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive le proprietà aritmetiche dei tipi numerici predefiniti.  
  
## Sintassi  
  
```  
template<classType> class numeric_limits  
```  
  
#### Parametri  
 `Type`  
 Il tipo di dati elemento fondamentale le cui proprietà vengono testate, sottoposte a query o impostate.  
  
## Note  
 L'intestazione definisce specializzazioni esplicite per i tipi `wchar_t`, `bool`, `char`, `signed char`, `unsigned char`, `short`, `unsigned short`, `int`, `unsigned int`, `long`, `unsigned long`, `float`, `double`, `long double`**,** `long long`, `unsigned long long`, `char16_t` e `char32_t`. Per queste specializzazioni esplicite, il membro [numeric\_limits::is\_specialized](../Topic/numeric_limits::is_specialized.md) è `true` e tutti i membri rilevanti hanno valori significativi. Il programma può fornire ulteriori specializzazioni esplicite. La maggior parte delle funzioni membro della classe descrive o testa le implementazioni possibili di `float`.  
  
 Per una specializzazione arbitraria, nessun membro dispone di valori significativi. Un oggetto membro che non dispone di un valore significativo archivia zero \(o `false`\) e restituisce una funzione membro che non restituisce un valore significativo `Type(0)`.  
  
### Funzioni e costanti statiche  
  
|||  
|-|-|  
|[denorm\_min](../Topic/numeric_limits::denorm_min.md)|Restituisce il più piccolo valore denormalizzato diverso da zero.|  
|[cifre](../Topic/numeric_limits::digits.md)|Restituisce il numero di cifre radice che il tipo può rappresentare senza perdita di precisione.|  
|[digits10](../Topic/numeric_limits::digits10.md)|Restituisce il numero di cifre decimali che il tipo può rappresentare senza perdita di precisione.|  
|[epsilon](../Topic/numeric_limits::epsilon.md)|Restituisce la differenza tra 1 e il valore più piccolo maggiore di 1 che il tipo di dati può rappresentare.|  
|[has\_denorm](../Topic/numeric_limits::has_denorm.md)|Verifica se un tipo consente valori denormalizzati.|  
|[has\_denorm\_loss](../Topic/numeric_limits::has_denorm_loss.md)|Verifica se la perdita di precisione viene rilevata come una perdita di denormalizzazione anziché come un risultato inesatto.|  
|[has\_infinity](../Topic/numeric_limits::has_infinity.md)|Verifica se un tipo dispone di una rappresentazione per un numero infinito positivo.|  
|[has\_quiet\_NaN](../Topic/numeric_limits::has_quiet_NaN.md)|Verifica se un tipo dispone di una rappresentazione per un valore diverso da un numero \(NaN\) non interattivo, che è senza segnalazione.|  
|[has\_signaling\_NaN](../Topic/numeric_limits::has_signaling_NaN.md)|Verifica se un tipo dispone di una rappresentazione per un valore diverso da un numero \(NaN\) con segnalazione.|  
|[infinity](../Topic/numeric_limits::infinity.md)|La rappresentazione di un numero infinito positivo, se disponibile.|  
|[is\_bounded](../Topic/numeric_limits::is_bounded.md)|Verifica se il set di valori che può rappresentare è finito.|  
|[is\_exact](../Topic/numeric_limits::is_exact.md)|Verifica se i calcoli eseguiti su un tipo sono privi di errori di arrotondamento.|  
|[is\_iec559](../Topic/numeric_limits::is_iec559.md)|Verifica se un tipo è conforme agli standard IEC 559.|  
|[is\_integer](../Topic/numeric_limits::is_integer.md)|Verifica se un tipo ha una rappresentazione in forma di Integer.|  
|[is\_modulo](../Topic/numeric_limits::is_modulo.md)|Verifica se un tipo ha una rappresentazione in forma di modulo.|  
|[is\_signed](../Topic/numeric_limits::is_signed.md)|Verifica se un tipo ha una rappresentazione firmata.|  
|[is\_specialized](../Topic/numeric_limits::is_specialized.md)|Verifica se un tipo ha una specializzazione esplicita definita nella classe di modello `numeric_limits`.|  
|[lowest](../Topic/numeric_limits::lowest.md)|Restituisce il valore finito più negativo.|  
|[max](../Topic/numeric_limits::max.md)|Restituisce il valore massimo finito per un tipo.|  
|[max\_digits10](../Topic/numeric_limits::max_digits10.md)|Restituisce il numero di cifre decimali richiesto per garantire che due valori distinti del tipo abbiano rappresentazioni decimali distinte.|  
|[max\_exponent](../Topic/numeric_limits::max_exponent.md)|Restituisce l'esponente integrale positivo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di radice è elevata a tale potenza.|  
|[max\_exponent10](../Topic/numeric_limits::max_exponent10.md)|Restituisce l'esponente integrale positivo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di dieci è elevata a tale potenza.|  
|[min](../Topic/numeric_limits::min.md)|Restituisce il valore normalizzato minimo per un tipo.|  
|[min\_exponent](../Topic/numeric_limits::min_exponent.md)|Restituisce l'esponente integrale negativo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di radice è elevata a tale potenza.|  
|[min\_exponent10](../Topic/numeric_limits::min_exponent10.md)|Restituisce l'esponente integrale negativo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di dieci è elevata a tale potenza.|  
|[quiet\_NaN](../Topic/numeric_limits::quiet_NaN.md)|Restituisce la rappresentazione di un valore diverso da un numero \(NaN\) non interattivo per il tipo.|  
|[radix](../Topic/numeric_limits::radix.md)|Restituisce la base integrale, detta radice, usata per la rappresentazione di un tipo.|  
|[round\_error](../Topic/numeric_limits::round_error.md)|Restituisce il valore massimo per il tipo di errore di arrotondamento.|  
|[round\_style](../Topic/numeric_limits::round_style.md)|Restituisce un valore che descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.|  
|[signaling\_NaN](../Topic/numeric_limits::signaling_NaN.md)|Restituisce la rappresentazione di un valore diverso da un numero \(NaN\) con segnalazione per il tipo.|  
|[tinyness\_before](../Topic/numeric_limits::tinyness_before.md)|Verifica se un tipo può stabilire che un valore è troppo piccolo per essere rappresentato come un valore normalizzato prima dell'arrotondamento.|  
|[traps](../Topic/numeric_limits::traps.md)|Verifica se la registrazione che segnala le eccezioni aritmetiche è implementata per un tipo.|  
  
## Requisiti  
 **Intestazione:** \<limits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)