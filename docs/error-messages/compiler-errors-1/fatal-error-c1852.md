---
title: "Errore irreversibile C1852 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1852"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1852"
ms.assetid: fa011004-b8d6-46f1-ba80-4785e4ce137f
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1852
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

file di intestazione precompilata 'filename' non valido  
  
 Il file non è un'intestazione precompilata.  
  
### Per risolvere il problema, verificare le seguenti cause possibili:  
  
1.  È stato specificato un file non valido con **\/Yu** o **\#pragma hdrstop**.  
  
2.  Se non se ne specifica un'altra, il compilatore presuppone l'estensione di file PCH.