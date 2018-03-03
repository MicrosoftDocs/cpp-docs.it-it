---
title: Elenchi di argomenti variabili (...) (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- variable argument lists
- parameter arrays
ms.assetid: db1a27f4-02a8-4318-8690-1f2893f52b38
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b78b244a93bea0c669c37b5df32ec7146f7ac3b1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="variable-argument-lists--ccli"></a>Elenchi di argomenti variabili (...) (C++/CLI)
In questo esempio viene illustrato come utilizzare il `...` sintassi in Visual C++ per implementare le funzioni che hanno un numero variabile di argomenti.  
  
> [!NOTE]
>  Questo argomento si riferisce al C + + CLI. Per informazioni sull'utilizzo di `...` in C++ Standard ISO, vedere [ellissi e modelli Variadic](../cpp/ellipses-and-variadic-templates.md) e puntini di sospensione e argomenti predefiniti in [espressioni in forma suffissa](../cpp/postfix-expressions.md).  
  
 Il parametro che utilizza `...` deve essere l'ultimo parametro nell'elenco di parametri.  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
```  
// mcppv2_paramarray.cpp  
// compile with: /clr  
using namespace System;  
double average( ... array<Int32>^ arr ) {  
   int i = arr->GetLength(0);  
   double answer = 0.0;  
  
   for (int j = 0 ; j < i ; j++)  
      answer += arr[j];  
  
   return answer / i;  
}  
  
int main() {  
   Console::WriteLine("{0}", average( 1, 2, 3, 6 ));  
}  
```  
  
### <a name="output"></a>Output  
  
```  
3  
```  
  
## <a name="code-example"></a>Esempio di codice  
 Nell'esempio seguente viene illustrato come chiamare da c#, una funzione di Visual C++ che accetta un numero variabile di argomenti.  
  
```  
// mcppv2_paramarray2.cpp  
// compile with: /clr:safe /LD  
using namespace System;  
  
public ref class C {  
public:   
   void f( ... array<String^>^ a ) {}  
};  
```  
  
 La funzione `f` può essere chiamato da c# o Visual Basic, ad esempio, come se fosse una funzione che può accettare un numero variabile di argomenti.  
  
 In c#, un argomento passato a un `ParamArray` parametro può essere chiamato da un numero variabile di argomenti. Esempio di codice seguente è in c#.  
  
```  
// mcppv2_paramarray3.cs  
// compile with: /r:mcppv2_paramarray2.dll  
// a C# program  
  
public class X {  
   public static void Main() {  
      // Visual C# will generate a String array to match the   
      // ParamArray attribute  
      C myc = new C();  
      myc.f("hello", "there", "world");  
   }  
}  
```  
  
 Una chiamata a `f` in Visual C++ è possibile passare una matrice inizializzata o una matrice a lunghezza variabile.  
  
```  
// mcpp_paramarray4.cpp  
// compile with: /clr  
using namespace System;  
  
public ref class C {  
public:   
   void f( ... array<String^>^ a ) {}  
};  
  
int main() {  
   C ^ myc = gcnew C();  
   myc->f("hello", "world", "!!!");  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Array](../windows/arrays-cpp-component-extensions.md)