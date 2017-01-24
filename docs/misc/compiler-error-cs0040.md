---
title: "Errore del compilatore CS0040 | Microsoft Docs"
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
  - "CS0040"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0040"
ms.assetid: 6a600166-0335-4b6d-b050-6821b4624c96
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0040
Errore imprevisto durante la creazione del file di informazioni di debug: 'reason'  
  
 Questo errore può verificarsi quando si usa l'opzione del compilatore [\/debug](../Topic/-debug%20\(C%23%20Compiler%20Options\).md) e indica che il compilatore non è riuscito a scrivere nel file PDB. Per risolvere l'errore è possibile reinstallare Visual Studio, assicurandosi che il compilatore abbia accesso in scrittura a un file o una directory, oppure non usare l'opzione \/debug nella compilazione.