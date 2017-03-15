---
title: "Istruzione __if_not_exists | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__if_not_exists"
  - "__if_not_exists_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__if_not_exists (parola chiave) [C++]"
ms.assetid: a2f322d4-e96f-4a32-954e-4323d20c6e32
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Istruzione __if_not_exists
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione `__if_not_exists` verifica l'esistenza dell'identificatore specificato.  Se l'identificatore non è presente, il blocco di istruzioni specificato viene eseguito.  
  
## Sintassi  
  
```  
__if_not_exists ( identifier ) {   
statements  
};  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`identifier`|Identificatore del quale si desidera verificare l'esistenza.|  
|`statements`|Una o più istruzioni da eseguire se non esiste un `identifier` .|  
  
## Note  
  
> [!CAUTION]
>  Per ottenere risultati più affidabili, utilizzare l'istruzione `__if_not_exists` con i seguenti vincoli.  
  
-   Applicare l'istruzione `__if_not_exists` solo a tipi semplici, non a modelli.  
  
-   Applicare l'istruzione `__if_not_exists` agli identificatori sia interni che esterni alla classe.  Non applicare l'istruzione `__if_not_exists` a variabili locali.  
  
-   Utilizzare l'istruzione `__if_not_exists` solo nel corpo di una funzione.  All'esterno del corpo di una funzione, l'istruzione `__if_not_exists` può testare solo tipi completamente definiti.  
  
-   Quando si testano funzioni in overload, non è possibile testare una forma specifica di overload.  
  
 Il complemento all'istruzione `__if_not_exists` è l'istruzione [\_\_if\_exists](../cpp/if-exists-statement.md).  
  
## Esempio  
 Per un esempio relativo all'utilizzo di `__if_not_exists`, vedere [Istruzione \_\_if\_exists](../cpp/if-exists-statement.md).  
  
## Vedere anche  
 [Istruzioni di selezione](../cpp/selection-statements-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Istruzione \_\_if\_exists](../cpp/if-exists-statement.md)