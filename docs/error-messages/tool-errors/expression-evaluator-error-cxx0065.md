---
title: Errore dell'analizzatore di espressioni CXX0065 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: CXX0065
dev_langs: C++
helpviewer_keywords:
- CAN0065
- CXX0065
ms.assetid: aac68f87-0b90-4c19-afa6-1c587625a5fd
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: db01baa10191df50c1f319bf8320263657088d75
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="expression-evaluator-error-cxx0065"></a>Errore dell‘analizzatore di espressioni CXX0065
variabile richiede uno stack frame  
  
 Un'espressione contiene una variabile che esiste all'interno dell'ambito corrente, ma non è stato ancora creata.  
  
 Questo errore può verificarsi quando è stato eseguito il prologo di una funzione, ma non ancora configurare lo stack frame della funzione, o se è stato eseguito il codice di uscita per la funzione.  
  
 Eseguire il codice di prologo fino a quando non è stato impostato il frame dello stack prima di valutare l'espressione.  
  
 Questo errore è identico all'errore CAN0065.