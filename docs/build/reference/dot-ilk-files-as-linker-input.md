---
title: "File ILK come input del linker | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ilk (file)"
  - "ILK (file)"
ms.assetid: 7324c104-9e5d-423d-b268-b59f92607bf2
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File ILK come input del linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando si esegue il collegamento incrementale, viene automaticamente aggiornato il file dello stato creato durante il primo collegamento incrementale.  Tale file presenta lo stesso nome di base del file exe o dll e l'estensione ilk.  Durante i collegamenti incrementali successivi il file ilk viene aggiornato automaticamente.  Se il file ilk è mancante, verrà eseguito un collegamento completo e creato un nuovo file ilk.  Se il file ilk è inutilizzabile, verrà invece eseguito un collegamento non incrementale.  Per informazioni dettagliate sul collegamento incrementale, vedere l'opzione [\/INCREMENTAL \(Collegamento incrementale\)](../../build/reference/incremental-link-incrementally.md).  
  
## Vedere anche  
 [File di input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)