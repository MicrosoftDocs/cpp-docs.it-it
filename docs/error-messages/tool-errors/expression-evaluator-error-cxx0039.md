---
title: Errore dell'analizzatore di espressioni CXX0039 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: CXX0039
dev_langs: C++
helpviewer_keywords:
- CXX0039
- CAN0039
ms.assetid: 8bf698d2-e015-4595-944f-72b81aa43d22
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 51f222db839917cf7ebd5cd849ab20377ad6d7e4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="expression-evaluator-error-cxx0039"></a>Errore dell‘analizzatore di espressioni CXX0039
il simbolo è ambiguo  
  
 L'analizzatore di espressioni C non è possibile determinare a quale istanza di un simbolo da utilizzare in un'espressione. Il simbolo compare più volte nella struttura di ereditarietà.  
  
 È necessario utilizzare l'operatore di risoluzione ambito (`::`) per specificare in modo esplicito l'istanza da utilizzare nell'espressione.  
  
 Questo errore è identico all'errore CAN0039.