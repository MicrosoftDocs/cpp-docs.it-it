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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9c189e2f4a0af7363f5bb988c9911bd90eb72809
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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