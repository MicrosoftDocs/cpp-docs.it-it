---
title: "Avviso del compilatore (livello 1) CS0672 | Microsoft Docs"
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
  - "CS0672"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0672"
ms.assetid: 140a8708-97d0-444b-980b-62e74328cafb
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS0672
Il membro 'member1' esegue l'override del membro obsoleto 'member2'. Aggiungere l'attributo Obsolete a 'member1'  
  
 Il compilatore ha trovato un `override` di un metodo contrassegnato come `obsolete`. Il metodo che esegue l'override, però, non è contrassegnato come obsoleto. Se viene chiamato il metodo che esegue l'override, verrà generato comunque l'errore [CS0612](../misc/compiler-warning-level-1-cs0612.md).  
  
 Esaminare le dichiarazioni del metodo e indicare in modo esplicito se un metodo \(e tutti i relativi override\) deve essere contrassegnato come `obsolete`.  
  
 L'esempio seguente genera l'errore CS0672:  
  
```  
// CS0672.cs // compile with: /W:1 class MyClass { [System.Obsolete] public virtual void ObsoleteMethod() { } } class MyClass2 : MyClass { public override void ObsoleteMethod()   // CS0672 { } } class MainClass { static public void Main() { } }  
```