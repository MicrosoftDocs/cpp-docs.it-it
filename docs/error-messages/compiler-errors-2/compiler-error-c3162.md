---
title: Errore del compilatore C3162 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3162
dev_langs:
- C++
helpviewer_keywords:
- C3162
ms.assetid: 0d4c4a24-1456-4191-b7d8-c38cb7b17c32
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9b1527e56bbd834f2ebea9c51f82bb55c05da52d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3162"></a>Errore del compilatore C3162
'type': un tipo di riferimento con un distruttore non può essere utilizzato come tipo di dati statici ' membro '  
  
 Common language runtime non è possibile sapere quando eseguire un distruttore definito dall'utente quando la classe contiene inoltre una funzione membro statica.  
  
 Un distruttore non verrà mai eseguito a meno che l'oggetto viene eliminato in modo esplicito.  
  
 Per ulteriori informazioni, vedere,  
  
-   [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Problemi comuni relativi alla migrazione di Visual C++ a 64 bit](../../build/common-visual-cpp-64-bit-migration-issues.md)  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3162.  
  
```  
// C3162.cpp  
// compile with: /clr /c  
ref struct A {  
   ~A() { System::Console::WriteLine("in destructor"); }  
   static A i;   // C3162  
   static A^ a = gcnew A;   // OK  
};  
  
int main() {  
   A ^ a = gcnew A;  
   delete a;  
}  
```