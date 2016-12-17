---
title: "Errore degli strumenti del linker LNK1264 | Microsoft Docs"
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
  - "LNK1264"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1264"
ms.assetid: 23b1aad7-d382-42c1-bae8-db68575c57a8
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1264
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

opzione \/LTCG:PGINSTRUMENT specificata ma non è richiesta la generazione di codice; strumentazione non riuscita  
  
 È stata specificata l'opzione **\/LTCG:PGINSTRUMENT**, ma non è stato trovato alcun file obj compilato con [\/GL](../../build/reference/gl-whole-program-optimization.md).  Non è possibile eseguire la strumentazione e il collegamento non viene eseguito correttamente.  Nella riga di comando deve essere presente almeno un file obj compilato con **\/GL** per consentire la strumentazione.  
  
 L'ottimizzazione PGO è disponibile solo per i compilatori a 64 bit.