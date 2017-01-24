---
title: "Errore del compilatore CS1617 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1617"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1617"
ms.assetid: fd3371ed-39eb-4d3d-b8f5-d96ac0c79398
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1617
Opzione 'option' non valida per \/langversion; specificare ISO\-1, ISO\-2 o Default  
  
 Questo errore si verifica se è stata usata l'opzione della riga di comando o l'impostazione di progetto [\/langversion](../Topic/-langversion%20\(C%23%20Compiler%20Options\).md) senza specificare un'opzione di lingua valida. Per risolvere questo errore, controllare la sintassi della riga di comando o l'impostazione di progetto e configurarla su una delle opzioni elencate.  
  
 Ad esempio, la compilazione con `csc /langversion:ISO` genererà l'errore CS1617.