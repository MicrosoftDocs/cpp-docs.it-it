---
title: Compilatore (livello 1) avviso C4326 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4326
dev_langs:
- C++
helpviewer_keywords:
- C4326
ms.assetid: d44d2c4e-9456-42d3-b35b-4ba4b2d42ec7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 838c79d6ba897905dad18788adc5ee682ff2fa2c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4326"></a>Avviso del compilatore (livello 1) C4326
tipo restituito di 'function' deve essere 'type1' anziché 'type2'  
  
 Una funzione ha restituito un tipo diverso da ***type1***. Ad esempio, usando [/Za](../../build/reference/za-ze-disable-language-extensions.md), principale non ha restituito un `int`.  
  
 L'esempio seguente genera l'errore C4326:  
  
```  
// C4326.cpp  
// compile with: /Za /W1  
char main()  
{   // C4326 try int main  
}  
```