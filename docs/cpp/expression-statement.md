---
title: Istruzione di espressione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- statements [C++], expression
- expression statements
ms.assetid: 547d7f7a-58be-4ffc-a4b3-d64c7ae7538c
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 80493922076514ce254d01a97dd0c86f51c92ac1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="expression-statement"></a>Istruzione di espressione
Le istruzioni di espressione determinano la valutazione delle espressioni. Un'istruzione di espressione non dà come risultato alcun controllo o iterazione.  
  
 La sintassi per l'istruzione di espressione è semplicemente  
  
## <a name="syntax"></a>Sintassi  
  
```  
[expression ] ;  
```  
  
## <a name="remarks"></a>Note  
 Tutte le espressioni in un'istruzione di espressione vengono valutate e tutti gli effetti collaterali vengono completati prima che l'istruzione successiva venga eseguita. Le istruzioni di espressione più comuni sono assegnazioni e chiamate di funzione.  Poiché l'espressione è facoltativa, un punto e virgola da solo è considerato un'istruzione di espressione vuota, detta di [null](../cpp/null-statement.md) istruzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica delle istruzioni C++](../cpp/overview-of-cpp-statements.md)