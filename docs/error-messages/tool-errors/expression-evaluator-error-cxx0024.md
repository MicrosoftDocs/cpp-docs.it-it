---
title: Errore dell'analizzatore di espressioni CXX0024 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0024
dev_langs:
- C++
helpviewer_keywords:
- CXX0024
- CAN0024
ms.assetid: eca6adbd-8ff2-4f51-a1cc-a2e9d5d0a47d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 50a07297ddabf269b003a1f14d967d1187fea96d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="expression-evaluator-error-cxx0024"></a>Errore dell‘analizzatore di espressioni CXX0024
operazione richiede un l-value  
  
 Per un'operazione che richiede un l-value è stata specificata un'espressione che restituisce un l-value.  
  
 Un valore l-value (denominato in modo perché viene visualizzato sul lato sinistro di un'istruzione di assegnazione) è un'espressione che fa riferimento a una posizione di memoria.  
  
 Ad esempio, `buffer[count]` è un l-value valido perché fa riferimento a una determinata posizione di memoria. Il confronto logico `zed != 0` non è un l-value valido in quanto restituisce TRUE o FALSE, non un indirizzo di memoria.  
  
 Questo errore è identico all'errore CAN0024.