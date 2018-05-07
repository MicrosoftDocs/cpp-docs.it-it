---
title: Errore irreversibile C1026 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1026
dev_langs:
- C++
helpviewer_keywords:
- C1026
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 24c034d45b7f8b222471094f4580902ae1b8dc66
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="fatal-error-c1026"></a>Errore irreversibile C1026
overflow dello stack del parser. Programma troppo complesso  
  
 Lo spazio necessario per analizzare il programma ha causato un overflow dello stack del compilatore.  
  
 Ridurre la complessità delle espressioni in base:  
  
-   Riduzione dell'annidamento in `for` e `switch` istruzioni. Inserimento delle istruzioni più annidamento in funzioni separate.  
  
-   Suddivisione di espressioni lunghe che contengono chiamate di funzione o operatori di valori delimitati da virgole.