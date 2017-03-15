---
title: Errore del compilatore C3392 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-csharp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3392
dev_langs:
- C++
helpviewer_keywords:
- C3392
ms.assetid: e4757596-e2aa-4314-b01e-5c4bfd2110e9
caps.latest.revision: 7
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
translationtype: Machine Translation
ms.sourcegitcommit: b551b1a7e0ae03a7de5108a1d114155786972847
ms.openlocfilehash: ca0d37c75c61e1280c0f13ef6a26cd4ab920d1d9
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3392"></a>Errore del compilatore C3392
'type_arg': argomento di tipo non valido per il parametro generico 'param' del 'generic_type' generico. Deve avere un costruttore pubblico senza parametri  
  
 L'istanza di un tipo generico è stata creata in modo non corretto. Controllare la definizione del tipo. Per ulteriori informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
Nell'esempio seguente viene utilizzato c# per creare un componente che contiene un tipo generico che dispone di determinati vincoli che non sono supportati durante la creazione di tipi generici in C + + CLI. Per ulteriori informazioni, vedere [vincoli sui parametri di tipo](/dotnet/articles/csharp/programming-guide/generics/constraints-on-type-parameters).  
  
```cs  
// C3392.cs  
// Compile by using: csc /target:library C3392.cs  
// a C# program  
public class GR<C, V, N>  
where C : class  
where V : struct  
where N : new() {}  
```  
  
Quando il componente C3392.dll è disponibile, l'esempio seguente genera C3392.  
  
```cpp  
// C3392_b.cpp  
// Compile by using: cl /clr C3392_b.cpp  
#using <C3392.dll>  
  
ref class R { R(int) {} };  
ref class N { N() {} };  
  
value class V {};  
  
ref class N2 { public: N2() {} };  
ref class R2 { public: R2() {} };  
  
int main () {  
   GR<R^, V, N^>^ gr1;   // C3392  
   GR<R^, V, N2^>^ gr1a; // OK  
  
   GR<R^, N^, N^>^ gr3;  // C3392  
   GR<R^, V, N2^>^ gr3a; // OK  
  
   GR<R^, V, R^>^ gr4;   // C3392  
   GR<R^, V, R2^>^ gr4a; // OK  
}  
```
