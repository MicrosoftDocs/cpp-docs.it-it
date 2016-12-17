---
title: "Avviso del compilatore (livello 1) CS1635 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1635"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1635"
ms.assetid: e1795880-f7ea-4dca-b15b-4ba549d7ed78
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1635
Non è possibile ripristinare l'avviso 'warning code' perché è stato disabilitato a livello globale  
  
 Questo avviso viene visualizzato se si usa l'opzione della riga di comando o l'impostazione di progetto **\/nowarn** per disabilitare un avviso per l'intera unità di compilazione, ma si usa `#pragma warning restore` per tentare di ripristinare l'avviso. Per risolvere questo errore, rimuovere l'opzione della riga di comando o l'impostazione di progetto \/nowarn oppure rimuovere `#pragma warning restore` per tutti gli avvisi da disabilitare tramite la riga di comando o le impostazioni di progetto. Per altre informazioni, vedere l'argomento [\#pragma warning](../Topic/%23pragma%20warning%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS1635:  
  
```  
// CS1635.cs // compile with: /w:1 /nowarn:162 enum MyEnum {one=1,two=2,three=3}; class MyClass { public static void Main() { #pragma warning disable 162 if (MyEnum.three == MyEnum.two) System.Console.WriteLine("Duplicate"); #pragma warning restore 162 } }  
```