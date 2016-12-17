---
title: "raw_method_prefix | Microsoft Docs"
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
  - "raw_method_prefix"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "raw_method_prefix (attributo)"
ms.assetid: 71490313-af78-4bb2-b28a-eee67950d30b
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# raw_method_prefix
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Specifica un prefisso diverso per evitare conflitti di nomi.  
  
## Sintassi  
  
```  
raw_method_prefix("Prefix")  
```  
  
#### Parametri  
 `Prefix`  
 Prefisso da utilizzare.  
  
## Note  
 Le proprietà e i metodi di basso livello vengono esposti dalle funzioni membro denominate con un prefisso predefinito **raw\_** per evitare conflitti di nomi con funzioni membro di gestione degli errori di livello elevato.  
  
> [!NOTE]
>  Gli effetti dell'attributo `raw_method_prefix` non verranno modificati dalla presenza dell'attributo [raw\_interfaces\_only](#_predir_raw_interfaces_only).  `raw_method_prefix` ha sempre la precedenza su `raw_interfaces_only` nella specifica di un prefisso.  Se entrambi gli attributi vengono utilizzati nella stessa istruzione `#import`, viene utilizzato il prefisso specificato dall'attributo `raw_method_prefix`.  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)