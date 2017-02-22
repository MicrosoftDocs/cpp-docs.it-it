---
title: "Errore degli strumenti del linker LNK1241 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1241"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1241"
ms.assetid: 7b8b52eb-0231-4521-b52a-2bce8d3e8956
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore degli strumenti del linker LNK1241
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il file di risorse 'file di risorse' è già specificato  
  
 Questo errore viene generato quando si esegue **cvtres** manualmente dalla riga di comando e si passa quindi al linker il file obj risultante con gli altri file res.  
  
 Per specificare più file res, passarli tutti al linker come tali, non dall'interno di file obj creati da **cvtres**.