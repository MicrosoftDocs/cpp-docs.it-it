---
title: "Errore del compilatore CS0041 | Microsoft Docs"
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
  - "CS0041"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0041"
ms.assetid: 80dbfe00-8cdb-4275-9574-8a215c7139d6
caps.latest.revision: 16
caps.handback.revision: 16
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0041
Il nome completo per 'type' è troppo lungo per le informazioni di debug. Compilare senza l'opzione '\/debug'.  
  
 Questo errore può verificarsi quando si usa l'opzione [\/debug](../Topic/-debug%20\(C%23%20Compiler%20Options\).md) del compilatore. Se si verifica questo errore, provare a eliminare i file PDB nella directory bin e ricompilare. Se l'errore continua a verificarsi, potrebbe essere necessario ripristinare e o reinstallare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].