---
title: Errore del compilatore C3225 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3225
dev_langs:
- C++
helpviewer_keywords:
- C3225
ms.assetid: f5f66973-256e-4298-ac46-c87819cbde34
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 4cf62ba7b0c3b95f22c27172546ccdd253ed9279
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3225"></a>Errore del compilatore C3225
argomento di tipo generico per 'arg' non può essere 'type', deve essere un tipo di valore o tipo di handle  
  
 L'argomento di tipo generico non è del tipo corretto.  
  
 Per altre informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 È possibile creare istanze di un tipo generico con un tipo nativo. L'esempio seguente genera l'errore C3225.  
  
```  
// C3225.cpp  
// compile with: /clr  
class A {};  
  
ref class B {};  
  
generic <class T>  
ref class C {};  
  
int main() {  
   C<A>^ c = gcnew C<A>;   // C3225  
   C<B^>^ c2 = gcnew C<B^>;   // OK  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente crea un componente utilizzando il linguaggio c#. Si noti che il vincolo specifica che è possibile creare istanze del tipo generico solo con un tipo di valore.  
  
```  
// C3225_b.cs  
// compile with: /target:library  
// a C# program  
public class MyList<T> where T: struct {}  
```  
  
## <a name="example"></a>Esempio  
 In questo esempio utilizza c#-componente creato e viola il vincolo che MyList possono solo essere creata un'istanza con un tipo valore diverso da <xref:System.Nullable>. L'esempio seguente genera l'errore C3225.  
  
```  
// C3225_c.cpp  
// compile with: /clr  
#using "C3225_b.dll"  
ref class A {};  
value class B {};  
int main() {  
   MyList<A> x;   // C3225  
   MyList<B> y;   // OK  
}  
```
