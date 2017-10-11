---
title: Errore del compilatore C3839 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3839
dev_langs:
- C++
helpviewer_keywords:
- C3839
ms.assetid: 0957faff-1e9f-439b-876b-85bd8d2c578d
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 8a8c9fa9112128b86123693aea7443d68e8531d0
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3839"></a>Errore del compilatore C3839
impossibile modificare l'allineamento in un tipo gestito o WinRT  
  
 L'allineamento delle variabili in gestiti o tipi di Windows Runtime è controllato da CLR o da Windows Runtime e non può essere modificato con [allineare](../../cpp/align-cpp.md).  
  
 L'esempio seguente genera l'errore C3839:  
  
```  
// C3839a.cpp  
// compile with: /clr  
ref class C  
{  
public:  
   __declspec(align(32)) int m_j; // C3839  
};  
  
int main()  
{  
}  
```
