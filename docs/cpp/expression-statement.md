---
title: Istruzione di espressione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- statements [C++], expression
- expression statements
ms.assetid: 547d7f7a-58be-4ffc-a4b3-d64c7ae7538c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d94acdfff2fdea2cc35d0856940270ba82e131af
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39405256"
---
# <a name="expression-statement"></a>Istruzione di espressione
Le istruzioni di espressione determinano la valutazione delle espressioni. Un'istruzione di espressione non dà come risultato alcun controllo o iterazione.  
  
 La sintassi per l'istruzione di espressione è semplicemente  
  
## <a name="syntax"></a>Sintassi  
  
```  
[expression ] ;  
```  
  
## <a name="remarks"></a>Note  
 Tutte le espressioni in un'istruzione di espressione vengono valutate e tutti gli effetti collaterali vengono completati prima che l'istruzione successiva venga eseguita. Le istruzioni di espressione più comuni sono assegnazioni e chiamate di funzione.  Poiché l'espressione è facoltativa, un punto e virgola da solo è considerato un'istruzione di espressione vuota, detta il [null](../cpp/null-statement.md) istruzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica delle istruzioni C++](../cpp/overview-of-cpp-statements.md)