---
title: Compilatore avviso (livello 1) C4659 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4659
dev_langs:
- C++
helpviewer_keywords:
- C4659
ms.assetid: e29ba8db-7917-43f6-8e34-868b752279ae
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 643b599cd11d0935f1769ad37dca4e764f0418e6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33285616"
---
# <a name="compiler-warning-level-1-c4659"></a>Avviso del compilatore (livello 1) C4659
\#pragma 'pragma': utilizzo del segmento riservato 'segment' produce un comportamento indefinito, è necessario utilizzare #pragma comment (linker,...)  
  
 L'opzione drectve è stato utilizzato per passare un'opzione al linker. Utilizzare invece pragma [commento](../../preprocessor/comment-c-cpp.md) per il passaggio di un'opzione del linker.  
  
```  
// C4659.cpp  
// compile with: /W1 /LD  
#pragma code_seg(".drectve")   // C4659  
```