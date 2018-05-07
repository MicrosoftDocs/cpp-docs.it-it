---
title: Errore del compilatore C2039 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2039
dev_langs:
- C++
helpviewer_keywords:
- C2039
ms.assetid: f9dfd521-9b36-4454-a69c-d63f45b606bb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2830ead70ba82a513af4e6682a01a5f9722d1ac7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2039"></a>Errore del compilatore C2039
'identifier1': non è un membro di 'identifier2'  
  
 In modo non corretto, il codice chiama o fa riferimento a un membro di classe, struttura o unione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2039.  
  
```  
// C2039.cpp  
struct S {  
   int mem0;  
} s, *pS = &s;  
  
int main() {  
   pS->mem1 = 0;   // C2039 mem1 is not a member  
   pS->mem0 = 0;   // OK  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2039.  
  
```  
// C2039_b.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   Console::WriteLine( "{0}", DateTime::get_Now());   // C2039  
   Console::WriteLine( "{0}", DateTime::Now);   // OK  
   Console::WriteLine( "{0}", DateTime::Now::get());   // OK  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2039.  
  
```  
// C2039_c.cpp  
// compile with: /clr /c  
ref struct S {  
   property int Count {  
     int get();  
     void set(int i){}  
   };  
};  
  
int S::get_Count() { return 0; }   // C2039  
int S::Count::get() { return 0; }   // OK  
```  
  
## <a name="example"></a>Esempio  
 Errore C2039 può verificarsi anche se si tenta di accedere in modo non corretto di un indicizzatore predefinito. L'esempio seguente definisce un componente creato in c#.  
  
```  
// C2039_d.cs  
// compile with: /target:library  
// a C# program  
[System.Reflection.DefaultMember("Item")]  
public class B {  
   public int Item {  
      get { return 13; }  
      set {}  
   }  
};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2039.  
  
```  
// C2039_e.cpp  
// compile with: /clr  
using namespace System;  
#using "c2039_d.dll"  
  
int main() {  
   B ^ b = gcnew B;  
   int n = b->default;   // C2039  
   // try the following line instead  
   // int n = b->Item;  
   Console::WriteLine(n);  
}  
```  
  
## <a name="example"></a>Esempio  
 Errore C2039 può verificarsi anche se si usano i generics. L'esempio seguente genera l'errore C2039.  
  
```  
// C2039_f.cpp  
// compile with: /clr  
interface class I {};  
  
ref struct R : public I {  
   virtual void f3() {}  
};  
  
generic <typename T>  
where T : I  
void f(T t) {  
   t->f3();   // C2039  
   safe_cast<R^>(t)->f3();   // OK  
}  
  
int main() {  
   f(gcnew R());  
}  
```  
  
## <a name="example"></a>Esempio  
 Errore C2039 può verificarsi quando si tenta di rilasciare le risorse gestite o non gestite. Per ulteriori informazioni, vedere [distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
 L'esempio seguente genera l'errore C2039.  
  
```  
// C2039_g.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Threading;  
  
void CheckStatus( Object^ stateInfo ) {}  
  
int main() {  
   ManualResetEvent^ event = gcnew ManualResetEvent( false );     
   TimerCallback^ timerDelegate = gcnew TimerCallback( &CheckStatus );  
   Timer^ stateTimer = gcnew Timer( timerDelegate, event, 1000, 250 );  
  
   ((IDisposable ^)stateTimer)->Dispose();   // C2039  
  
   stateTimer->~Timer();   // OK  
}  
```