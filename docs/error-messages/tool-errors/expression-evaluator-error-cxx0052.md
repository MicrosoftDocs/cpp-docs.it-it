---
title: Errore dell'analizzatore di espressioni CXX0052 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0052
dev_langs:
- C++
helpviewer_keywords:
- CXX0052
- CAN0052
ms.assetid: 5060d479-d0a4-4682-b858-c8b9a4f324e6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c9f4b6fb0db87a77f433775fedea9880f3f24bd9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33302321"
---
# <a name="expression-evaluator-error-cxx0052"></a>Errore dell‘analizzatore di espressioni CXX0052
funzione membro non presente  
  
 Una funzione membro è stata specificata come un punto di interruzione, ma non è stata trovata. L'impostazione di un punto di interruzione in una funzione che è stata resa inline possono causare questo errore.  
  
 Ricompilare il file con l'incorporamento disconnessi (/ Ob0) per impostare un punto di interruzione in questa funzione.  
  
 Un'espressione chiamata una funzione che non è stata definita.  
  
 Questo errore è identico all'errore CAN0052.