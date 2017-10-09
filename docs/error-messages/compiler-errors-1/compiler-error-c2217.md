---
title: Errore del compilatore C2217 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2217
dev_langs:
- C++
helpviewer_keywords:
- C2217
ms.assetid: 1ce1e3f5-4171-4376-804d-967f7e612935
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 0f1795534af1332859fd1a33a137573df82643b4
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2217"></a>Errore del compilatore C2217
'attribute1' richiede 'attribute2'  
  
 Il primo attributo di funzione richiede il secondo attributo.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Interrupt (`__interrupt`) funzione dichiarata come `near`. Interrompere le funzioni devono essere `far`.  
  
2.  Funzione dichiarata con interrupt `__stdcall`, o `__fastcall`. Le funzioni di interrupt deve convenzioni di chiamata C di utilizzo.  
  
## <a name="example"></a>Esempio  
 C2217 può verificarsi anche se si tenta di associare un delegato a una funzione CLR che accetta un numero variabile di argomenti. Se la funzione ha anche l'overload di matrice e param, utilizzarla. L'esempio seguente genera l'errore C2217.  
  
```  
// C2217.cpp  
// compile with: /clr  
using namespace System;  
delegate void MyDel(String^, Object^, Object^, ...);   // C2217  
delegate void MyDel2(String ^, array<Object ^> ^);   // OK  
  
int main() {  
   MyDel2^ wl = gcnew MyDel2(Console::WriteLine);  
   array<Object ^ > ^ x = gcnew array<Object ^>(2);  
   x[0] = safe_cast<Object^>(0);  
   x[1] = safe_cast<Object^>(1);  
  
   // wl("{0}, {1}", 0, 1);  
   wl("{0}, {1}", x);  
}  
```
