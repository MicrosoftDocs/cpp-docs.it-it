---
title: Errore del compilatore C3374 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3374
dev_langs:
- C++
helpviewer_keywords:
- C3374
ms.assetid: 41431299-bd20-47d4-a0c8-1334dd79018b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bd06f0e63ab1c467b9359c38ad77056440535aba
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3374"></a>Errore del compilatore C3374
Impossibile accettare l'indirizzo di 'funzione' se non si crea l'istanza del delegato  
  
 L'indirizzo di una funzione è stato acquisito in un contesto diverso dalla creazione di un'istanza del delegato.  
  
 Il seguente codice di esempio genera l'errore C3374:  
  
```  
// C3374.cpp  
// compile with: /clr  
public delegate void MyDel(int i);  
  
ref class A {  
public:  
   void func1(int i) {  
      System::Console::WriteLine("in func1 {0}", i);  
   }  
};  
  
int main() {  
   &A::func1;   // C3374  
  
   // OK  
   A ^ a = gcnew A;  
   MyDel ^ StaticDelInst = gcnew MyDel(a, &A::func1);  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: Definire e usare delegati (C++/CLI)](../../dotnet/how-to-define-and-use-delegates-cpp-cli.md)