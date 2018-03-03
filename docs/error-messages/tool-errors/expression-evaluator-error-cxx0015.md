---
title: Errore dell'analizzatore di espressioni CXX0015 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- CXX0015
dev_langs:
- C++
helpviewer_keywords:
- CXX0015
- CAN0015
ms.assetid: 35efaf77-d578-48d8-bfc5-fdeb2a46a8b5
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6f671b39fcc0027fdad5308192c5cbd8b8973717
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="expression-evaluator-error-cxx0015"></a>Errore dell‘analizzatore di espressioni CXX0015
espressione troppo complessa (overflow dello stack)  
  
 L'espressione immessa è troppo complessa o troppo in profondità per la quantità di spazio di archiviazione disponibile per l'analizzatore di espressioni C.  
  
 Overflow si verifica in genere a causa di un numero eccessivo di operazioni in sospeso.  
  
 Modificare l'espressione in modo che ogni componente dell'espressione può essere valutata come viene rilevata, anziché dover attendere altre parti dell'espressione deve essere calcolato.  
  
 Suddividere l'espressione in più comandi.  
  
 Questo errore è identico all'errore CAN0015.