---
title: Errore del compilatore C2382 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2382
dev_langs:
- C++
helpviewer_keywords:
- C2382
ms.assetid: 4d4436f9-d0d6-4bd0-b8ec-767b89adfb2f
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 086a0675e877360d424346edfd2b32ea558514aa
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2382"></a>Errore del compilatore C2382
'function': ridefinizione. Specifiche di eccezione differenti  
  
 In [/Za](../../build/reference/za-ze-disable-language-extensions.md)questo errore indica che è stato tentato un overload della funzione solo nella [specifica di eccezione](../../cpp/exception-specifications-throw-cpp.md).  
  
 L'esempio seguente genera l'errore C2382:  
  
```  
// C2382.cpp  
// compile with: /Za /c  
void f1(void) throw(int) {}  
void f1(void) throw(char) {}   // C2382  
void f2(void) throw(char) {}   // OK  
```
