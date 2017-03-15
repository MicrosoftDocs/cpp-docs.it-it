---
title: "Avviso degli strumenti del linker LNK4070 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4070"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4070"
ms.assetid: f95f179a-fff9-427e-bd51-466b3934517f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso degli strumenti del linker LNK4070
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la direttiva \/OUT:nomefile in .EXP differisce dal nome del file di output 'nomefile'; direttiva ignorata  
  
 Il `filename` specificato nell'istruzione [NAME](../../build/reference/name-c-cpp.md) o [LIBRARY](../../build/reference/library.md) al momento della creazione del file exp è diverso dal `filename` di output impostato come predefinito o specificato con l'opzione [\/OUT](../../build/reference/out-output-file-name.md).  
  
 Questo avviso viene visualizzato se si modifica il nome di un file di output nell'ambiente di sviluppo e quando il file def del progetto non è stato aggiornato.  Per evitare la visualizzazione di questo avviso, aggiornare manualmente il file def.  
  
 È possibile che si verifichino problemi in un programma client che utilizza la DLL risultante.