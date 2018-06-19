---
title: Errore dell'analizzatore di espressioni CXX0065 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0065
dev_langs:
- C++
helpviewer_keywords:
- CAN0065
- CXX0065
ms.assetid: aac68f87-0b90-4c19-afa6-1c587625a5fd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 78c25c9c6bde27219f10e4047dc7a6ab416f55d5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33297537"
---
# <a name="expression-evaluator-error-cxx0065"></a>Errore dell‘analizzatore di espressioni CXX0065
variabile richiede uno stack frame  
  
 Un'espressione contiene una variabile che esiste all'interno dell'ambito corrente, ma non è stato ancora creata.  
  
 Questo errore può verificarsi quando è stato eseguito il prologo di una funzione, ma non ancora configurare lo stack frame della funzione, o se è stato eseguito il codice di uscita per la funzione.  
  
 Eseguire il codice di prologo fino a quando non è stato impostato il frame dello stack prima di valutare l'espressione.  
  
 Questo errore è identico all'errore CAN0065.