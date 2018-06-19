---
title: Errore del compilatore C3225 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3225
dev_langs:
- C++
helpviewer_keywords:
- C3225
ms.assetid: f5f66973-256e-4298-ac46-c87819cbde34
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8f9f6691ddacf6b3c1347b9fd4cac134433741a6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33250579"
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