---
title: "Errore del compilatore C3225 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3225"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3225"
ms.assetid: f5f66973-256e-4298-ac46-c87819cbde34
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore del compilatore C3225
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'argomento di tipo generico per 'arg' non può essere 'tipo'. Deve essere un tipo di valore o un tipo di handle  
  
 Il tipo dell'argomento di tipo generico non è corretto.  
  
 Per ulteriori informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## Esempio  
 Non è possibile creare un'istanza di un tipo generico con un tipo nativo.  Nell'esempio seguente viene generato l'errore C3225:  
  
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
  
## Esempio  
 Nell'esempio riportato di seguito viene creato un componente utilizzando C\#.  Il vincolo specifica che è possibile creare un'istanza del tipo generico solo con un tipo di valore.  
  
```  
// C3225_b.cs  
// compile with: /target:library  
// a C# program  
public class MyList<T> where T: struct {}  
```  
  
## Esempio  
 In questo esempio viene utilizzato il componente creato con C\# e viene violato il vincolo per cui è possibile creare un'istanza di MyList solo con un tipo di valore diverso da <xref:System.Nullable>.  Nell'esempio seguente viene generato l'errore C3225:  
  
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