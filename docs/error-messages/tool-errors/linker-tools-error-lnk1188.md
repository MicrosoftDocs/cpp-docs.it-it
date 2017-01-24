---
title: "Errore degli strumenti del linker LNK1188 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1188"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1188"
ms.assetid: 4af574b0-5b41-4580-9a37-52a634add995
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1188
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

BADFIXUPSECTION:: destinazione di correzione 'simbolo' non valida; è possibile che la sezione abbia lunghezza zero  
  
 Durante un collegamento VxD, la destinazione di una rilocazione non dispone di una sezione.  È possibile che un record OMF GROUP, generato da una direttiva MASM GROUP, sia stato utilizzato con LINK386 \(una versione precedente\) per combinare la sezione a lunghezza zero con un'altra sezione con lunghezza diversa da zero.  Il formato COFF non supporta la direttiva GROUP e le sezioni a lunghezza zero.  Quando questo tipo di oggetti OMF viene automaticamente convertito in COFF con LINK, è possibile che si verifichi questo errore.