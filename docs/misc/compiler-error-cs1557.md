---
title: "Errore del compilatore CS1557 | Microsoft Docs"
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
  - "CS1557"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1557"
ms.assetid: 1615e028-aeb7-4788-bd87-8e49e502d698
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1557
Impossibile utilizzare 'class' per il metodo Main perché si trova in un file di output diverso  
  
 È stata specificata l'opzione del compilatore [\/main](../Topic/-main%20\(C%23%20Compiler%20Options\).md) per un file di output in una compilazione di file multi\-output. La classe, però, non è stata trovata nel codice sorgente per la compilazione \/main, ma è stata trovata in un file di codice sorgente per uno degli altri file di output nella compilazione.