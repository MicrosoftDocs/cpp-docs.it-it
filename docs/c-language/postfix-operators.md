---
title: "Operatori suffissi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatori [C], suffisso"
  - "operatori suffissi"
ms.assetid: 76260011-1624-484e-8bef-72ae7ab556cc
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Operatori suffissi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori di suffisso hanno la precedenza più elevata \(l'associazione più stretta\) nella valutazione di un'espressione.  
  
## Sintassi  
 *postfix\-expression*:  
 *primary\-expression*  
  
 *postfix\-expression*  **\[**  *expression*  **\]**  
  
 *postfix\-expression*  **\(**  *argument\-expression\-list*  opt **\)**  
  
 *postfix\-expression*  **.**  *identifier*  
  
 *postfix\-expression*  **–\>**  *identifier*  
  
 *postfix\-expression*  **\+\+**  
  
 *postfix\-expression*  **––**  
  
 Gli operatori in questo livello di precedenza sono gli indici di matrice, le chiamate di funzione, la struttura e i membri di unione, nonché gli operatori di incremento e decremento in forma suffissa.  
  
## Vedere anche  
 [Operatori C](../c-language/c-operators.md)