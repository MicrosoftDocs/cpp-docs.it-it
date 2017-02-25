---
title: "Classe money_base | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "locale/std::money_base"
  - "money_base"
  - "std::money_base"
  - "std.money_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "money_base (classe)"
ms.assetid: 1a303c15-9272-4f26-ae16-dcf43a0fd38a
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe money_base
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe descrive un'enumerazione e un comune di struttura a tutte le specializzazioni di classe modello [moneypunct](../standard-library/moneypunct-class.md).  
  
## Sintassi  
  
```  
struct money_base : public locale::facet  
{  
    enum  
    {  
        symbol = '$',  
        sign = '+',  
        space = ' ',  
        value = 'v',  
        none = 'x'  
    };  
    typedef int part;  
    struct pattern  
    {  
        char field[_PATTERN_FIELD_SIZE];  
    };  
    money_base(  
        size_t _Refs = 0  
    );  
    ~money_base();  
};  
```  
  
## Note  
 L'enumerazione **parte** descritti i valori possibili in elementi del campo di matrice nel modello della struttura.  I valori di **parte** sono:  
  
-   **nessuno** per cercare la corrispondenza con zero o più spazi o non generare nothing.  
  
-   **sign** per ricercare o generare un segno positivo o negativo.  
  
-   **spazio** per cercare la corrispondenza con zero o più spazi o generare uno spazio.  
  
-   **simbolo** per ricercare o generare un simbolo di valuta.  
  
-   **valore** per ricercare o generare un valore monetario.  
  
## Requisiti  
 impostazioni locali \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)