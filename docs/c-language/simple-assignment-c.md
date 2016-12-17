---
title: "Assegnazione semplice (C) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "operatori di assegnazione [C++], semplici"
  - "conversione di tipi di dati [C++], assegnazione semplice"
  - "segno di uguale"
  - "operatori [C], assegnazione semplice"
  - "operatore di assegnazione semplice"
  - "conversione di tipi [C++], assegnazione semplice"
ms.assetid: e7140a0a-7104-4b3a-b293-7adcc1fdd52b
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Assegnazione semplice (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'operatore di assegnazione semplice assegna l'operando destro all'operando sinistro.  Il valore dell'operando destro è convertito nel tipo dell'espressione di assegnazione e sostituisce il valore archiviato nell'oggetto definito dall'operando sinistro.  Si applicano le regole di conversione per l'assegnazione \(vedere [Conversioni di assegnazione](../c-language/assignment-conversions.md)\).  
  
```  
double x;  
int y;  
  
x = y;  
```  
  
 In questo esempio, il valore di `y` viene convertito nel tipo **double** e viene assegnato a `x`.  
  
## Vedere anche  
 [Operatori di assegnazione C](../c-language/c-assignment-operators.md)