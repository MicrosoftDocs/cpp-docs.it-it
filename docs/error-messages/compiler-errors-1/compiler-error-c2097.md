---
title: Errore del compilatore C2097 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2097
dev_langs:
- C++
helpviewer_keywords:
- C2097
ms.assetid: 7e5b2fd4-f61c-4b8a-b265-93e987a04bd3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fa4b867c7f043d796f208fdc7100509893147daf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2097"></a>Errore del compilatore C2097
inizializzazione non valida  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Inizializzazione di una variabile con un valore non costante.  
  
2.  Inizializzazione di un indirizzo con un indirizzo molto breve.  
  
3.  Inizializzazione di una struttura locale, unione o una matrice con un'espressione non costante durante la compilazione con **/Za**.  
  
4.  Inizializzazione con un'espressione contenente un operatore virgola.  
  
5.  Inizializzazione con un'espressione costante né simbolico.