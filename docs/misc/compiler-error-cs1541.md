---
title: "Errore del compilatore CS1541 | Microsoft Docs"
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
  - "CS1541"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1541"
ms.assetid: db3350fe-6432-4617-8b4a-64bc6cdf83f8
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1541
Opzione di riferimento non valida: 'symbol'. Impossibile fare riferimento alle directory  
  
 Il compilatore ha rilevato un tentativo di specificare una directory anziché un file specifico. Ad esempio, quando si usa l'opzione [\/reference](../Topic/-reference%20\(C%23%20Compiler%20Options\).md) del compilatore, è necessario specificare un file; non è possibile specificare una directory.  
  
 Ad esempio, il passaggio di `/reference:c:\` al compilatore genera l'errore CS1541.