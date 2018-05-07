---
title: Errore dell'analizzatore di espressioni CXX0030 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0030
dev_langs:
- C++
helpviewer_keywords:
- CAN0030
- CXX0030
ms.assetid: ada8b48c-09c8-49bf-ae23-313ed663c4fe
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 669c585c637129c1fb6a480d91b31e5a1264fd22
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="expression-evaluator-error-cxx0030"></a>Errore dell‘analizzatore di espressioni CXX0030
espressione non analizzabile.  
  
 L'analizzatore di espressioni del debugger. Impossibile ottenere un valore per l'espressione così come scritta. Una causa probabile è che l'espressione fa riferimento alla memoria esterna allo spazio degli indirizzi del programma (dereferenziare un puntatore null è un esempio). Windows non consente l'accesso alla memoria di fuori di spazio degli indirizzi del programma.  
  
 È consigliabile riscrivere l'espressione utilizzando le parentesi per controllare l'ordine di valutazione.  
  
 Questo errore è identico all'errore CAN0030.