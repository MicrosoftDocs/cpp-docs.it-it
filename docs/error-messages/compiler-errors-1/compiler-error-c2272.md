---
title: Errore del compilatore C2272 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2272
dev_langs:
- C++
helpviewer_keywords:
- C2272
ms.assetid: 1517706a-9c27-452e-9b10-3424b3d232bc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e969e7cadadf1102dadfb8089a847046731b568f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2272"></a>Errore del compilatore C2272
'function': modificatori non consentiti per funzioni membro statiche  
  
 Oggetto `static` funzione membro viene dichiarata con un identificatore del modello di memoria, ad esempio [const](../../cpp/const-cpp.md) o [volatile](../../cpp/volatile-cpp.md), e questi modificatori non consentiti su `static` funzioni membro.  
  
 L'esempio seguente genera l'errore C2272:  
  
```  
// C2272.cpp  
// compile with: /c  
class CMyClass {  
public:  
   static void func1() const volatile;   // C2272  func1 is static  
   void func2() const volatile;   // OK  
};  
```