---
title: "Errore del compilatore C3380 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3380"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3380"
ms.assetid: 86f1f4ec-4ad8-4a1a-9b6c-2d9b6129df6b
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3380
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class': identificatore di accesso assembly non valido. Consentiti solo 'public' o 'private'  
  
 Quando vengono applicate a una classe o struttura gestita, le parole chiave [public](../../cpp/public-cpp.md) e [private](../../cpp/private-cpp.md) indicano se la classe verrà esposta tramite i metadati dell'assembly. Solo `public` o `private` può essere applicata a una classe in un programma compilato con [\/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 Le parole chiave `ref` e `value`, se usate con [\/clr](../../build/reference/clr-common-language-runtime-compilation.md), indicano che una classe è gestita \(vedere [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md)\).  
  
 L'esempio seguente genera l'errore C3380:  
  
```  
// C3380_2.cpp // compile with: /clr protected ref class A {   // C3380 // try the following line instead // ref class A { public: static int i = 9; }; int main() { A^ myA = gcnew A; System::Console::WriteLine(myA->i); }  
```  
  
 L'esempio seguente genera l'errore C3380:  
  
```  
// C3380.cpp // compile with: /clr:oldSyntax #using <mscorlib.dll> protected __gc class A {   // C3380 // try the following line instead // __gc class A { public: static int i = 9; }; int main() { A *myA = new A; Console::WriteLine(myA->i); }  
```