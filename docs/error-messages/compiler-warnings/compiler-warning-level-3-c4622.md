---
title: "Avviso del compilatore (livello 3) C4622 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4622"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4622"
ms.assetid: d3c879f0-4492-4f4b-b26d-230993f3a933
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 3) C4622
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sovrascrittura delle informazioni di debug generate durante la creazione dell'intestazione precompilata nel file oggetto: 'file'  
  
 Le informazioni CodeView nel file specificato sono andate perse durante la compilazione con l'opzione [\/Yu](../../build/reference/yu-use-precompiled-header-file.md) \(Usa intestazione precompilata\).  
  
 Rinominare il file oggetto \(usando [\/Fo](../../build/reference/fo-object-file-name.md)\) quando si crea o si usa il file di intestazione precompilata e collegare usando il nuovo file oggetto.