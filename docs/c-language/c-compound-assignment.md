---
title: "Assegnazione composta C | Microsoft Docs"
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
  - "operatori di assegnazione, composito"
  - "operatori di assegnazione composta"
  - "operatori [C], assegnazione"
ms.assetid: db7b5893-cd56-4f1c-9981-5a024200ab63
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Assegnazione composta C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori di assegnazione composta combinano l'operatore di assegnazione semplice con un altro operatore binario.  Gli operatori di assegnazione composta eseguono l'operazione specificata dall'operatore aggiuntivo, quindi assegnano il risultato all'operando sinistro.  Ad esempio, un'espressione di assegnazione composta quale  
  
```  
  
expression1 += expression2  
```  
  
 può essere considerata come  
  
```  
  
expression1 = expression1 + expression2  
```  
  
 Tuttavia, l'espressione di assegnazione composta non equivale alla versione espansa perché l'espressione di assegnazione composta valuta solo una volta *expression1*, mentre la versione espansa valuta due volte *expression1*: nell'operazione di addizione e nell'operazione di assegnazione.  
  
 Gli operandi di un operatore di assegnazione composta devono essere di tipo integrale o mobile.  Ogni operatore di assegnazione composta esegue le conversioni effettuate dall'operatore binario corrispondente e limita i tipi dei relativi operandi di conseguenza.  Gli operatori di assegnazione di addizione \(`+=`\) e di sottrazione \(**–\=**\) possono anche avere un operando sinistro di tipo puntatore, nel qual caso l'operando destro deve essere di tipo integrale.  Il risultato di un'operazione di assegnazione composta ha il valore e il tipo dell'operando sinistro.  
  
```  
#define MASK 0xff00  
  
n &= MASK;  
```  
  
 In questo esempio, l'operazione AND inclusivo bit per bit viene eseguita su `n` e `MASK` e il risultato viene assegnato a `n`.  La costante `MASK` del manifesto viene definita con una direttiva per il preprocessore [\#define](../preprocessor/hash-define-directive-c-cpp.md).  
  
## Vedere anche  
 [Operatori di assegnazione C](../c-language/c-assignment-operators.md)