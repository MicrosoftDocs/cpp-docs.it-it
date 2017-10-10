---
title: Errore irreversibile C1026 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1026
dev_langs:
- C++
helpviewer_keywords:
- C1026
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 187cfc1a59fc40a721be09aef9e78ef36c68f66a
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="fatal-error-c1026"></a>Errore irreversibile C1026
overflow dello stack del parser. Programma troppo complesso  
  
 Lo spazio necessario per analizzare il programma ha causato un overflow dello stack del compilatore.  
  
 Ridurre la complessità delle espressioni in base:  
  
-   Riduzione dell'annidamento in `for` e `switch` istruzioni. Inserimento delle istruzioni più annidamento in funzioni separate.  
  
-   Suddivisione di espressioni lunghe che contengono chiamate di funzione o operatori di valori delimitati da virgole.
