---
title: Errore del compilatore C2831 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2831
dev_langs:
- C++
helpviewer_keywords:
- C2831
ms.assetid: c8c04288-0889-4265-a077-17f94cbcdcc9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 73cd133d5dc355dc11c0128aea0ddb44dccafe80
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2831"></a>Errore del compilatore C2831
'operatore' non può avere parametri predefiniti  
  
 Solo tre operatori possono avere parametri predefiniti:  
  
-   [new](../../cpp/new-operator-cpp.md)  
  
-   Assegnazione =  
  
-   (Parentesi sinistra  
  
 L'esempio seguente genera l'errore C2831:  
  
```  
// C2831.cpp  
// compile with: /c  
#define BINOP <=  
class A {  
public:  
   int i;  
   int operator BINOP(int x = 1) {   // C2831  
   // try the following line instead  
   // int operator BINOP(int x) {  
      return i+x;  
   }  
};  
```