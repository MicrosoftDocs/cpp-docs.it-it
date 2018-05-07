---
title: Errore dell'analizzatore di espressioni CXX0015 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0015
dev_langs:
- C++
helpviewer_keywords:
- CXX0015
- CAN0015
ms.assetid: 35efaf77-d578-48d8-bfc5-fdeb2a46a8b5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 945dbda4759fa2989acb0411d1a3216a5e9a036c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="expression-evaluator-error-cxx0015"></a>Errore dell‘analizzatore di espressioni CXX0015
espressione troppo complessa (overflow dello stack)  
  
 L'espressione immessa è troppo complessa o troppo in profondità per la quantità di spazio di archiviazione disponibile per l'analizzatore di espressioni C.  
  
 Overflow si verifica in genere a causa di un numero eccessivo di operazioni in sospeso.  
  
 Modificare l'espressione in modo che ogni componente dell'espressione può essere valutata come viene rilevata, anziché dover attendere altre parti dell'espressione deve essere calcolato.  
  
 Suddividere l'espressione in più comandi.  
  
 Questo errore è identico all'errore CAN0015.