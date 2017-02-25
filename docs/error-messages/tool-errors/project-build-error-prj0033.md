---
title: "Errore di compilazione progetto PRJ0033 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0033"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0033"
ms.assetid: 84d4a052-0586-4b78-9315-81c1e8386c1e
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore di compilazione progetto PRJ0033
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La proprietà "Dipendenze aggiuntive" per l'istruzione di compilazione personalizzata del file "file" contiene "macro" che restituisce "espansione\_macro".  
  
 Nella dipendenza aggiuntiva di un'istruzione di compilazione personalizzata di un file è presente un errore probabilmente dovuto a un problema di valutazione della macro.  Questo errore potrebbe anche indicare che il percorso non è corretto e che in esso sono presenti caratteri o combinazioni di caratteri non consentiti in un percorso di file.  
  
 Per risolvere questo errore, correggere la macro oppure la specifica del percorso.  Il percorso valutato rappresenta un percorso assoluto dalla directory del progetto.