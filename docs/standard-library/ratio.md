---
title: "&lt;ratio&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ratio/std::mega"
  - "ratio/std::peta"
  - "ratio/std::ratio_greater"
  - "ratio/std::micro"
  - "ratio/std::ratio_add"
  - "ratio/std::ratio_not_equal"
  - "ratio/std::hecto"
  - "ratio/std::nano"
  - "ratio/std::ratio_less_equal"
  - "ratio/std::ratio_less"
  - "ratio/std::centi"
  - "ratio/std::ratio_greater_equal"
  - "ratio/std::ratio_subtract"
  - "<ratio>"
  - "ratio/std::atto"
  - "ratio/std::tera"
  - "ratio/std::milli"
  - "ratio/std::ratio_multiply"
  - "ratio/std::kilo"
  - "ratio/std::ratio_divide"
  - "ratio/std::giga"
  - "ratio/std::pico"
  - "ratio/std::femto"
  - "ratio/std::ratio_equal"
  - "ratio/std::ratio"
  - "ratio/std::exa"
  - "ratio/std::deci"
  - "ratio/std::deca"
dev_langs: 
  - "C++"
ms.assetid: 8543e912-2d84-45ea-b3c0-bd7bfacee405
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# &lt;ratio&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Includere il rapporto standard \<di intestazione\> per definire costanti e i modelli utilizzati per archiviare e modificare i numeri razionali in fase di compilazione.  
  
## Sintassi  
  
```cpp  
#include <ratio>  
```  
  
### struttura di rapporto  
  
```  
template <intmax_t N, intmax_t D = 1>  
struct ratio  
{  
    static constexpr intmax_t num;  
    static constexpr intmax_t den;  
    typedef ratio<num, den> type;  
};  
```  
  
 [ratio Structure](http://msdn.microsoft.com/it-it/3f7961f4-802b-4251-b3c3-090ef91c0dba) definisce costanti `num` statiche e `den` in modo che `num` \/\=\= N\/D di `den` e `num` e `den` non ha fattori comuni.  `num` \/ `den` è `value` rappresentato dalla classe modello.  Pertanto, `type` definisce \=\= N0 di `ratio<N0, D0>` per il quale `num` di creazione di istanze e \=\= D0 di `den`.  
  
### Specializzazioni  
 \<il rapporto\> definisce inoltre le specializzazioni di `ratio` con il formato seguente.  
  
 `template <class R1, class R2> struct ratio_specialization`  
  
 Ogni specializzazione accetta due parametri di modello che devono essere specializzazioni di `ratio`.  Il valore di `type` è determinato da un'operazione logica collegata.  
  
|Nome|Valore `type`|  
|----------|-------------------|  
|`ratio_add`|`R1 + R2`|  
|`ratio_divide`|`R1 / R2`|  
|`ratio_equal`|`R1 == R2`|  
|`ratio_greater`|`R1 > R2`|  
|`ratio_greater_equal`|`R1 >= R2`|  
|`ratio_less`|`R1 < R2`|  
|`ratio_less_equal`|`R1 <= R2`|  
|`ratio_multiply`|`R1 * R2`|  
|`ratio_not_equal`|`!(R1 == R2)`|  
|`ratio_subtract`|`R1 - R2`|  
  
### typedef  
  
```  
  
typedef ratio<1,        1000000000000000000> atto;  
typedef ratio<1,           1000000000000000> femto;  
typedef ratio<1,              1000000000000> pico;  
typedef ratio<1,                 1000000000> nano;  
typedef ratio<1,                    1000000> micro;  
typedef ratio<1,                       1000> milli;  
typedef ratio<1,                        100> centi;  
typedef ratio<1,                         10> deci;  
typedef ratio<                        10, 1> deca;  
typedef ratio<                       100, 1> hecto;  
typedef ratio<                      1000, 1> kilo;  
typedef ratio<                   1000000, 1> mega;  
typedef ratio<                1000000000, 1> giga;  
typedef ratio<             1000000000000, 1> tera;  
typedef ratio<          1000000000000000, 1> peta;  
typedef ratio<       1000000000000000000, 1> exa;  
  
```  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)