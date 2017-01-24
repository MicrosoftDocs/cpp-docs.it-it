---
title: "Avviso del compilatore (livello 1) CS1684 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1684"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1684"
ms.assetid: 620419bf-b6d5-4cda-a549-fcacf2f08920
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1684
Il riferimento al tipo 'Type Name' dichiara di essere definito in 'Namespace', ma non è stato possibile trovarlo  
  
 Questo errore può essere causato da un riferimento all'interno di uno spazio dei nomi che fa riferimento a un tipo che viene dichiarato come esistente all'interno di un secondo spazio dei nomi, ma il tipo non esiste. Ad esempio, mydll.dll dichiara che il tipo `A` esiste all'interno di yourdll.dll, ma nessun tipo simile esiste all'interno di yourdll.dll. Una delle possibili cause di questo errore è che la versione di yourdll.dll in uso è obsoleta e `A` non è ancora stato definito.  
  
 L'esempio seguente genera l'errore CS1684.  
  
## Esempio  
  
```  
// CS1684_a.cs // compile with: /target:library /keyfile:CS1684.key public class A { public void Test() {} } public class C2 {}  
```  
  
## Esempio  
  
```  
// CS1684_b.cs // compile with: /target:library /r:cs1684_a.dll // post-build command: del /f CS1684_a.dll using System; public class Ref { public static A GetA() { return new A(); } public static C2 GetC() { return new C2(); } }  
```  
  
## Esempio  
 A questo punto viene ricompilato il primo assembly, omettendo la definizione della classe C2 da non definire nella ricompilazione.  
  
```  
// CS1684_c.cs // compile with: /target:library /keyfile:CS1684.key /out:CS1684_a.dll public class A { public void Test() {} }  
```  
  
## Esempio  
 Questo modulo fa riferimento al secondo modulo per mezzo dell'identificatore `Ref`. Ma il secondo modulo contiene un riferimento alla classe `C2`, che non esiste più a causa della compilazione nel passaggio precedente, e quindi viene restituito il messaggio di errore CS1684 dalla compilazione di questo modulo.  
  
```  
// CS1684_d.cs // compile with: /reference:cs1684_a.dll /reference:cs1684_b.dll // CS1684 expected class Tester { public static void Main() { Ref.GetA().Test(); } }  
```