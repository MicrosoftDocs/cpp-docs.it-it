---
title: Errore del compilatore C2585 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2585
dev_langs:
- C++
helpviewer_keywords:
- C2585
ms.assetid: 05bb1a9c-28fb-4a88-a1b5-aea85ebdee1c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2ab812a4b6621acb28a4df636056598047f5c21e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33230161"
---
# <a name="compiler-error-c2585"></a>Errore del compilatore C2585
conversione esplicita in 'type' è ambigua  
  
 La conversione del tipo può produrre più risultati.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  La conversione da un tipo di classe o struttura in base a ereditarietà multipla. Se il tipo eredita più volte la stessa classe base, l'operatore o la funzione di conversione deve utilizzare la risoluzione dell'ambito (`::`) per specificare quali classi ereditate da usare durante la conversione.  
  
2.  Un operatore di conversione e di un costruttore definiti la stessa conversione.