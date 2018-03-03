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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6af2bbd43d6e522bbe6ede2a874b7e8ebbf27c10
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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