---
title: Errore del compilatore C3252 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3252
dev_langs:
- C++
helpviewer_keywords:
- C3252
ms.assetid: aa9ad096-e9ac-41c7-8ad9-b966751c7c75
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4bc7ca0ccf3c973363e4427c89ccf497c20d1791
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3252"></a>Errore del compilatore C3252
'method': in un tipo gestito o WinRT non è possibile ridurre l'accessibilità di un metodo virtuale  
  
 Una classe che implementa un metodo virtuale da una classe di base o qualsiasi metodo da un'interfaccia non può ridurre l'accesso di tale metodo.  
  
 Si noti che tutti i metodi in un'interfaccia sono pubblici.  
  
 L'esempio seguente genera l'errore C3252 e mostra come risolverlo:  
  
```  
// C3252.cpp  
// compile with: /clr /c  
ref class A {  
public:  
   virtual void f1() {}  
};  
  
ref class B : public A {  
// To fix, uncomment the following line:   
// public:      
   virtual void f1() override sealed {}   // C3252, make this method public  
};  
```