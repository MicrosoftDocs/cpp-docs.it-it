---
title: "Classe ctype_base | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "locale/std::ctype_base"
  - "std.ctype_base"
  - "ctype_base"
  - "std::ctype_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ctype_base (classe)"
ms.assetid: ccffe891-d7ab-4d22-baf8-8eb6d438a96d
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe ctype_base
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe funge da classe base per i facet di classe modello [ctype](../standard-library/ctype-class.md).  Una classe di base per la classe ctype utilizzata per definire i tipi di enumerazione utilizzati per classificare o verificare i caratteri singolarmente o di interi intervalli.  
  
## Sintassi  
  
```  
struct ctype_base : public locale::facet  
{  
    enum  
    {  
        alnum, alpha, cntrl, digit, graph,  
        lower, print, punct, space, upper,  
        xdigit  
    };  
    typedef short mask;  
    ctype_base(  
        size_t _Refs = 0  
    );  
    ~ctype_base();  
};  
```  
  
## Note  
 Definisce una maschera di enumerazione.  Ogni costante di enumerazione offre un modo diverso di classe i caratteri, come definito da funzioni con nomi simili dichiarati nell'intestazione \<ctype.h.\>  Le costanti sono:  
  
-   **spazio** \(funzione\) [isspace](../Topic/isspace.md)  
  
-   **print** \(funzione\) [isprint](../Topic/isprint.md)  
  
-   **cntrl** \(funzione\) [iscntrl](../Topic/iscntrl.md)  
  
-   **upper** \(funzione\) [isupper](../Topic/isupper.md)  
  
-   **lower** \(funzione\) [islower](../Topic/islower.md)  
  
-   **digit** \(funzione\) [isdigit](../Topic/isdigit.md)  
  
-   **punct** \(funzione\) [ispunct](../Topic/ispunct.md)  
  
-   **xdigit** \(funzione\) [isxdigit](../Topic/isxdigit.md)  
  
-   **alpha** \(funzione\) [isalpha](../Topic/isalpha.md)  
  
-   **alnum** \(funzione\) [isalnum](../Topic/isalnum.md)  
  
-   **grafico** \(funzione\) [isgraph](../Topic/isgraph.md)  
  
 È possibile caratterizzare una combinazione di classificazioni eseguendo un'operazione OR queste costanti.  In particolare, è sempre true che \=\= di **alnum** \(**alpha** ``&#124; **digit**\) e \=\= di **grafico** \(**alnum**``&#124; **punct**\).  
  
## Requisiti  
 impostazioni locali \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)