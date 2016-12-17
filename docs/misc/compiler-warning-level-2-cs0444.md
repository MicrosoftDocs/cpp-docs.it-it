---
title: "Avviso del compilatore (livello 2) CS0444 | Microsoft Docs"
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
  - "CS0444"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0444"
ms.assetid: 5beb8c06-39d3-4b59-a7c3-5590200bd43d
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0444
Il tipo predefinito 'type name 1' non è stato trovato in 'System namespace 1', ma in 'System namespace 2'  
  
 Un oggetto predefinito come ad esempio <xref:System.Int32> non è stato trovato nel punto previsto dal compilatore, ma in 'System namespace 2'.  
  
 Questo errore può indicare che .NET Framework non è installato correttamente. Per correggerlo, reinstallare .NET Framework.  
  
 L'errore può verificarsi anche quando si scrivono librerie di classi base personalizzate. In questo caso, ricompilare mscorlib per risolvere l'errore.