---
title: Errore del compilatore C3842 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3842
dev_langs:
- C++
helpviewer_keywords:
- C3842
ms.assetid: 41a1a44a-c618-40a2-8d26-7da27d14095d
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: d9fe94a50939af6d28f9dc29eb1eb7aa91a7d47c
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3842"></a>Errore del compilatore C3842
'function': qualificatori 'const' e 'volatile' non consentiti con funzioni membro di tipi WinRT o gestiti  
  
 [const](../../cpp/const-cpp.md) e [volatile](../../cpp/volatile-cpp.md) non sono supportati nelle funzioni membro di Windows Runtime o di tipi gestiti.  
  
 L'esempio seguente genera l'errore C3842:  
  
```  
// C3842a.cpp  
// compile with: /clr /c  
public ref struct A {  
   void f() const {}   // C3842  
   void f() volatile {}   // C3842  
  
   void f() {}  
};  
```
