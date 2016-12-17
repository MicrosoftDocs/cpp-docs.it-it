---
title: "Errore del compilatore CS1509 | Microsoft Docs"
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
  - "CS1509"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1509"
ms.assetid: 51a475c3-f085-49cb-89b0-c6582b68653f
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1509
Il file 'file' a cui è stato fatto riferimento non è un assembly. Utilizzare l'opzione '\/addmodule'  
  
 È stato specificato un file di output \(file di output 1\), creato in una compilazione con [\/target:module](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md) \(senza manifesto dell'assembly\), per [\/reference](../Topic/-reference%20\(C%23%20Compiler%20Options\).md). Quindi, all'assembly per il programma corrente verranno aggiunte le informazioni relative ai metadati presenti nel file di output 1, anziché un assembly.