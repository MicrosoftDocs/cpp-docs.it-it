---
title: Compilatore (livello 1) Avviso C4083 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4083
dev_langs:
- C++
helpviewer_keywords:
- C4083
ms.assetid: e7d3344e-5645-4d56-8460-d1acc9145ada
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c777415a35b5ac4d581434c1ede01cd98b405d00
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4083"></a>Compilatore (livello 1) Avviso C4083
previsto 'token'; trovare l'identificatore 'identifier'  
  
 Un identificatore si trova nella posizione sbagliata in un **#pragma** istruzione.  
  
## <a name="example"></a>Esempio  
  
```  
// C4083.cpp  
// compile with: /W1 /LD  
#pragma warning disable:4083    // C4083  
#pragma warning(disable:4083)   //correct  
```  
  
 Controllare la sintassi del [#pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) direttive.