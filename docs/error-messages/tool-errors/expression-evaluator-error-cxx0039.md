---
title: Errore dell'analizzatore di espressioni CXX0039 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0039
dev_langs:
- C++
helpviewer_keywords:
- CXX0039
- CAN0039
ms.assetid: 8bf698d2-e015-4595-944f-72b81aa43d22
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8681d73d2889433516b205a47c500193bbeabdb0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="expression-evaluator-error-cxx0039"></a>Errore dell‘analizzatore di espressioni CXX0039
il simbolo è ambiguo  
  
 L'analizzatore di espressioni C non è possibile determinare a quale istanza di un simbolo da utilizzare in un'espressione. Il simbolo compare più volte nella struttura di ereditarietà.  
  
 È necessario utilizzare l'operatore di risoluzione ambito (`::`) per specificare in modo esplicito l'istanza da utilizzare nell'espressione.  
  
 Questo errore è identico all'errore CAN0039.