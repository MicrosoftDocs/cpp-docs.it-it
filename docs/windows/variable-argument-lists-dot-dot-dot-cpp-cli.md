---
title: "Variable Argument Lists (...) (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "variable argument lists"
  - "parameter arrays"
ms.assetid: db1a27f4-02a8-4318-8690-1f2893f52b38
caps.latest.revision: 22
caps.handback.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Variable Argument Lists (...) (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come utilizzare la sintassi `...` in Visual C\+\+ per implementare funzioni con un numero variabile di argomenti.  
  
> [!NOTE]
>  Questo argomento riguarda C\+\+\/CLI.  Per informazioni sull'utilizzo di `...` in C\+\+ Standard ISO, vedere [Ellissi e modelli variadic](../cpp/ellipses-and-variadic-templates.md) e [Puntini di sospensione e argomenti predefiniti](../misc/ellipses-and-default-arguments.md).  
  
 Il parametro che utilizza `...` deve essere l'ultimo parametro presente nell'elenco di parametri.  
  
## Esempio  
  
### Codice  
  
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
  
### Output  
  
```  
3  
```  
  
## Esempio di codice  
 Nell'esempio seguente viene illustrato come chiamare da C\# una funzione di Visual C\+\+ che accetta un numero di argomenti variabile.  
  
```  
// mcppv2_paramarray2.cpp  
// compile with: /clr:safe /LD  
using namespace System;  
  
public ref class C {  
public:   
   void f( ... array<String^>^ a ) {}  
};  
```  
  
 La funzione `f` può essere chiamata da C\# o Visual Basic, ad esempio, come se fosse una funzione che può accettare un numero variabile di argomenti.  
  
 In C\#, un argomento passato a un parametro `ParamArray` può essere chiamato da un numero variabile di argomenti.  L'esempio di codice riportato di seguito è in C\#.  
  
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
  
 Una chiamata a `f` in Visual C\+\+ può passare una matrice inizializzata o una matrice di lunghezza variabile.  
  
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
  
## Vedere anche  
 [Arrays](../windows/arrays-cpp-component-extensions.md)