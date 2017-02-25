---
title: "Errore del compilatore C3206 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3206"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3206"
ms.assetid: d62995b5-e349-4418-bbe8-8a5e776ca7b0
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C3206
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': argomento di tipo non valido per 'param', elenco di argomenti di tipo mancante per il tipo di classe 'typename'  
  
 La definizione di una funzione di modello prevede che accetti un argomento di tipo modello. Tuttavia è stato passato un argomento di modello template.  
  
 L'esempio seguente genera l'errore C3206:  
  
```  
// C3206.cpp template <class T> void f() {} template <class T> struct S {}; void f1() { f<S>();   // C3206 // try the following line instead // f<S<int> >(); }  
```  
  
 Possibile soluzione:  
  
```  
// C3206b.cpp // compile with: /c template <class T> void f() {} template <class T> struct S {}; void f1() { f<S<int> >(); }  
```  
  
 C3206 può verificarsi anche quando si usano i generics:  
  
```  
// C3206c.cpp // compile with: /clr generic <class GT1> void gf() {} generic <class T> value struct GS {}; int main() { gf<GS>();   // C3206 }  
```  
  
 Possibile soluzione:  
  
```  
// C3206d.cpp // compile with: /clr generic <class GT1> void gf() {} generic <class T> value struct GS {}; int main() { gf<GS<int> >(); }  
```  
  
 Questo errore può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual C\+\+ .NET 2003, in cui i modelli di classe non sono consentiti come argomento di tipo modello.  
  
 Un modello di classe non è consentito come argomento di tipo modello. era consentito in Visual C\+\+ .NET 2003 ma non è valido in C\+\+.  
  
 L'esempio riportato di seguito viene compilato in Visual C\+\+ .NET 2002 ma non funziona in Visual C\+\+ .NET 2003:  
  
```  
// C3206e.cpp template <class T> struct S {}; template <class T> void func() {   // takes a type T<int> t; } int main() { func<S>();   // C3206 S is not a type. }  
```  
  
 Possibile soluzione:  
  
```  
// C3206f.cpp template <class T> struct S {}; template <class T> void func() {   // takes a type T t; } int main() { func<S<int> >(); }  
```  
  
 Se è necessario un parametro di modello template, la risoluzione dell'errore valida nelle versioni Visual C\+\+ .NET 2003 e Visual C\+\+ .NET 2002 richiede di includere la funzione in una classe modello che accetti un parametro modello template:  
  
```  
// C3206g.cpp template <class T> struct S {}; template<template<class> class TT> struct X { static void func() { TT<int> t1; TT<char> t2; } }; int main() { X<S>::func(); }  
```