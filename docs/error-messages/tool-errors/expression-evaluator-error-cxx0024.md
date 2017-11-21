---
title: Errore dell'analizzatore di espressioni CXX0024 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: CXX0024
dev_langs: C++
helpviewer_keywords:
- CXX0024
- CAN0024
ms.assetid: eca6adbd-8ff2-4f51-a1cc-a2e9d5d0a47d
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 386e04d8aa1655896b77f8492d7929778edd6109
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="expression-evaluator-error-cxx0024"></a>Errore dell‘analizzatore di espressioni CXX0024
operazione richiede un l-value  
  
 Per un'operazione che richiede un l-value è stata specificata un'espressione che restituisce un l-value.  
  
 Un valore l-value (denominato in modo perché viene visualizzato sul lato sinistro di un'istruzione di assegnazione) è un'espressione che fa riferimento a una posizione di memoria.  
  
 Ad esempio, `buffer[count]` è un l-value valido perché fa riferimento a una determinata posizione di memoria. Il confronto logico `zed != 0` non è un l-value valido in quanto restituisce TRUE o FALSE, non un indirizzo di memoria.  
  
 Questo errore è identico all'errore CAN0024.