---
title: "Avviso del compilatore (livello 1) CS1687 | Microsoft Docs"
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
  - "CS1687"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1687"
ms.assetid: f65d184f-fa1d-45d7-be7d-f439f67bace4
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1687
Limite di 16.707.565 righe rappresentabili nel PDB superato nel file di origine: le informazioni di debug non saranno corrette  
  
 Il debugger e il PDB impongono limiti rispetto alle dimensioni dei file. Se il file di origine è troppo lungo, il debugger non funzionerà correttamente oltre il limite stabilito. È quindi opportuno evitare la creazione di informazioni di debug relative al file usando `#line hidden`, se possibile, oppure ridurre le dimensioni del file, ad esempio suddividendolo in più file. Per suddividere una classe di grandi dimensioni, può essere utile la parola chiave `partial`.