---
title: Errore del compilatore C3767 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3767
dev_langs:
- C++
helpviewer_keywords:
- C3767
ms.assetid: 5247cdcd-639c-4527-bd37-37e74c4e8fab
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: b0cce511d895aae218c1b2ab04d129173b049983
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3767"></a>Errore del compilatore C3767
funzione o funzioni candidate 'funzione' non è accessibile  
  
 Una funzione friend definita in una classe non deve essere trattato come se fosse definita e dichiarata nell'ambito dello spazio dei nomi globale. È possibile, tuttavia, essere trovati dalla ricerca dipendente dall'argomento.  
  
 L'errore C3767 può essere causato anche da un'importante modifica: i tipi nativi sono ora privati per impostazione predefinita in un **/clr** la compilazione, vedere [digitare visibilità](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente genera l'errore C3767:  
  
```  
// C3767a.cpp  
// compile with: /clr  
using namespace System;  
public delegate void TestDel();  
  
public ref class MyClass {  
public:  
   static event TestDel^ MyClass_Event;  
};  
  
public ref class MyClass2 : public MyClass {  
public:  
   void Test() {  
      MyClass^ patient = gcnew MyClass;  
      patient->MyClass_Event();  
    }  
};  
  
int main() {  
   MyClass^ x = gcnew MyClass;  
   x->MyClass_Event();   // C3767  
  
   // OK  
   MyClass2^ y = gcnew MyClass2();  
   y->Test();  
};  
```  
  
 Nell'esempio seguente genera l'errore C3767:  
  
```  
// C3767c.cpp  
// compile with: /clr /c  
  
ref class Base  {  
protected:  
   void Method() {  
      System::Console::WriteLine("protected");  
   }  
};  
  
ref class Der : public Base {  
   void Method() {  
      ((Base^)this)->Method();   // C3767  
      // try the following line instead  
      // Base::Method();  
   }  
};  
```  
  
 In Visual C++ .NET 2002, il compilatore modifica l'aspetto dei simboli. In alcuni casi, avrebbe cercato automaticamente per i simboli in uno spazio dei nomi specificato. A questo punto, Usa ricerca dipendente dall'argomento.  
  
 Nell'esempio seguente genera l'errore C3767:  
  
```  
// C3767e.cpp  
namespace N {  
   class C {  
      friend void FriendFunc() {}  
      friend void AnotherFriendFunc(C* c) {}  
   };  
}  
  
int main() {  
   using namespace N;  
   FriendFunc();   // C3767 error  
   C* pC = new C();  
   AnotherFriendFunc(pC);   // found via argument-dependent lookup  
}  
```  
  
 Per il codice sia valido in Visual C++ .NET 2003 e Visual C++ .NET 2002, dichiarare la funzione friend nell'ambito della classe e definirla nell'ambito dello spazio dei nomi:  
  
```  
// C3767f.cpp  
class MyClass {  
   int m_private;  
   friend void func();  
};  
  
void func() {  
   MyClass s;  
   s.m_private = 0;  
}  
  
int main() {  
   func();  
}  
```
