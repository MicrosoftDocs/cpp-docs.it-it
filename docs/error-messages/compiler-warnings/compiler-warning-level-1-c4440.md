---
title: Compilatore avviso (livello 1) C4440 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4440
dev_langs:
- C++
helpviewer_keywords:
- C4440
ms.assetid: 78b9642a-a93e-401e-9d92-372f6451bc5d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 279c938a1a19fc0001923631415fee7b140399c0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4440"></a>Avviso del compilatore (livello 1) C4440
ridefinizione della convenzione chiamata da 'calling_convention1' a 'calling_convention2' ignorato  
  
 Un tentativo di modificare la convenzione di chiamata è stato ignorato.  
  
 L'esempio seguente genera l'errore C4440:  
  
```  
// C4440.cpp  
// compile with: /W1 /LD /clr  
typedef void __clrcall F();  
typedef F __cdecl *PFV;   // C4440  
```