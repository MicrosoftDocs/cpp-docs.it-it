---
title: "Errore del compilatore C3830 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3830"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3830"
ms.assetid: c9798f88-5001-4067-9fb1-09957ddc6fa8
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3830
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo1': impossibile ereditare da 'tipo2'. I tipi di valore possono ereditare solo da classi di interfaccia  
  
 Un tipo di valore non può ereditare una classe base.  Per ulteriori informazioni, vedere [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C3830:  
  
```  
// C3830a.cpp  
// compile with: /clr /c  
public value struct MyStruct4 {  
   int i;  
};  
  
public value class MyClass : public MyStruct4 {};   // C3830  
  
// OK  
public interface struct MyInterface4 {  
   void i();  
};  
  
public value class MyClass2 : public MyInterface4 {  
public:  
   virtual void i(){}  
};  
```  
  
 **Estensioni gestite per C\+\+**  
  
 Un tipo `__value` non può ereditare una classe base.  
  
 Il seguente codice di esempio genera l'errore C3830:  
  
```  
// C3830b.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
__value struct v : public System::Object {};   // C3830  
__value struct w {};   // OK  
```