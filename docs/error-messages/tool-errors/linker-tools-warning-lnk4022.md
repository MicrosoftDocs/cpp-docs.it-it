---
title: "Avviso degli strumenti del linker LNK4022 | Microsoft Docs"
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
  - "LNK4022"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4022"
ms.assetid: 890f487e-db98-45dd-a226-c7ccead82b1e
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4022
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile trovare una corrispondenza univoca per il simbolo 'simbolo'  
  
 Sono state rilevate da parte di LINK o LIB più corrispondenze per il simbolo non decorato specificato e non è stato possibile risolvere l'ambiguità.  Non viene prodotto alcun file di output \(exe, dll, exp o lib\).  Questo avviso è seguito da un avviso [LNK4002](../../error-messages/tool-errors/linker-tools-warning-lnk4002.md) per ciascun simbolo duplicato e dall'errore irreversibile [LNK1152](../../error-messages/tool-errors/linker-tools-error-lnk1152.md).  
  
 Per evitare la visualizzazione di questo avviso, specificare il simbolo nel formato decorato.  Eseguire [DUMPBIN](../../build/reference/dumpbin-options.md) sull'oggetto per visualizzare i nomi decorati.