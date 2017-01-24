---
title: "Errore di compilazione progetto PRJ0034 | Microsoft Docs"
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
  - "PRJ0034"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0034"
ms.assetid: 1da4a55b-231b-4476-8545-6997628fbc00
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore di compilazione progetto PRJ0034
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La proprietà "Dipendenze aggiuntive" per l'istruzione di compilazione personalizzata a livello di progetto contiene "macro" che restituisce "espansione\_macro".  
  
 Nella dipendenza aggiuntiva di un'istruzione di compilazione personalizzata di un progetto è presente un errore probabilmente dovuto a un problema di valutazione della macro.  Questo errore potrebbe anche indicare che il percorso non è corretto e che in esso sono presenti caratteri o combinazioni di caratteri non consentiti in un percorso di file.  
  
 Per risolvere questo errore, correggere la macro oppure la specifica del percorso.  Il percorso valutato rappresenta un percorso assoluto dalla directory del progetto.