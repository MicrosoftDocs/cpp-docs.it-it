---
title: "Avviso del compilatore (livello 1) CS0809 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0809"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0809"
ms.assetid: 2c2f0248-ab3a-4cdc-a1b0-2f0e05eac4c9
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS0809
Il membro obsoleto 'memberA' esegue l'override del membro non obsoleto 'memberB'.  
  
 In genere, un membro contrassegnato come obsoleto non deve eseguire l'override di un membro che non è contrassegnato come obsoleto. Questo avviso viene generato in [!INCLUDE[vs_orcas_long](../atl/reference/includes/vs_orcas_long_md.md)] ma non in [!INCLUDE[vsprvslong](../error-messages/compiler-errors-1/includes/vsprvslong_md.md)].  
  
### Per correggere l'errore  
  
1.  Rimuovere l'attributo `Obsolete` dal membro che esegue l'override oppure aggiungerlo al membro di classe base.  
  
## Esempio  
  
```  
// CS0809.cs public class Base { public virtual void Test1() { } } public class C : Base { [System.Obsolete()] public override void Test1() // CS0809 { } }  
```