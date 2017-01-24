---
title: "Avviso degli strumenti del linker LNK4197 | Microsoft Docs"
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
  - "LNK4197"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4197"
ms.assetid: 8a976fd7-a74b-4c83-ab66-a9e7d7073c4a
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4197
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

esportazione 'nomeesportazione' specificata più volte; verrà utilizzata la prima specifica  
  
 Un'esportazione è stata specificata più volte in modi diversi.  Viene utilizzata la prima specifica, mentre le altre vengono ignorate.  
  
 Se si ricompila la libreria di runtime del linguaggio C, è possibile ignorare questo messaggio.  
  
 Se un'esportazione viene specificata più volte nello stesso modo, non viene generato alcun avviso.  
  
 I seguenti dati in un file def provocano la visualizzazione di questo avviso:  
  
```  
EXPORTS  
   functioname      NONAME  
   functioname      @10  
```  
  
### Possibili cause  
  
1.  La stessa esportazione viene specificata sia sulla riga di comando \(con export:\) che nel file def.  
  
2.  La stessa esportazione viene elencata due volte nel file def con attributi diversi.