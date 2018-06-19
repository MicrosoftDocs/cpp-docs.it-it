---
title: Errore del compilatore C2910 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2910
dev_langs:
- C++
helpviewer_keywords:
- C2910
ms.assetid: 09c50e6a-e099-42f6-8ed6-d80e292a7a36
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fec2baafae0647964a56afaed3286140f8b9f759
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33242715"
---
# <a name="compiler-error-c2910"></a>Errore del compilatore C2910
'function': Impossibile specializzare in modo esplicito  
  
 Il compilatore ha rilevato un tentativo di specializzare esplicitamente due volte una funzione.  
  
 L'esempio seguente genera l'errore C2910:  
  
```  
// C2910.cpp  
// compile with: /c  
template <class T>  
struct S;  
  
template <> struct S<int> { void f() {} };  
template <> void S<int>::f() {}   // C2910 delete this specialization  
```  
  
 C2910 può essere generato anche se si tenta di specializzare in modo esplicito un membro non di modello. Vale a dire, non è possibile specializzare in modo esplicito solo un modello di funzione.  
  
 L'esempio seguente genera l'errore C2910:  
  
```  
// C2910b.cpp  
// compile with: /c  
template <class T> struct A {  
   A(T* p);  
};  
  
template <> struct A<void> {  
   A(void* p);  
};  
  
template <class T>  
inline A<T>::A(T* p) {}  
  
template <> A<void>::A(void* p){}   // C2910  
// try the following line instead  
// A<void>::A(void* p){}  
```  
  
 Verrà generato questo errore anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003:.  
  
 Per il codice sia valido nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, rimuovere `template <>`.  
  
 L'esempio seguente genera l'errore C2910:  
  
```  
// C2910c.cpp  
// compile with: /c  
template <class T> class A {  
   void f();  
};  
  
template <> class A<int> {  
   void f();  
};  
  
template <> void A<int>::f() {}   // C2910  
// try the following line instead  
// void A<int>::f(){}   // OK  
```