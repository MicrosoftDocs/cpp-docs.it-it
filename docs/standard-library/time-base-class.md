---
title: "Classe time_base | Microsoft Docs"
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
  - "std.time_base"
  - "std::time_base"
  - "time_base"
  - "locale/std::time_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "time_base (classe)"
ms.assetid: 9ae37f0b-9a42-496e-9870-3d9b71bab8fb
caps.latest.revision: 19
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe time_base
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe funge da classe base per i facet di time\_get della classe template, definizione del tipo enumerato **dateorder** e diverse costanti di questo tipo.  
  
## Sintassi  
  
```  
class time_base : public locale::facet {  
public:  
    enum dateorder {no_order, dmy, mdy, ymd, ydm};  
    time_base(  
        size_t _Refs = 0  
    )  
    ~time_base();  
};  
```  
  
## Note  
 Ogni costante offre un modo diverso di ordinare i componenti di una data.  Le costanti sono:  
  
-   **no\_order** non specifica particolare ordine.  
  
-   **dmy** specifica il giorno order, quindi mese, anno, come in 2 dicembre 1979.  
  
-   **mdy** specifica il mese order, il giorno, quindi anno, come in 2 dicembre 1979.  
  
-   **ymd** specifica l'anno order, mese, il giorno, ad esempio \/2. nel 1979 \/12.  
  
-   **ydm** specifica l'anno order, il giorno, quindi mese, come nel 1979: 2 dicembre  
  
## Requisiti  
 impostazioni locali \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)