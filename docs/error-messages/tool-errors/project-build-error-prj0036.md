---
title: "Errore di compilazione progetto PRJ0036 | Microsoft Docs"
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
  - "PRJ0036"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0036"
ms.assetid: ee215cd1-2d66-474d-9a63-b9096f1c4923
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore di compilazione progetto PRJ0036
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La proprietà "File aggiuntivi" per lo strumento di distribuzione Web contiene una voce non valida.  
  
 Nella proprietà File aggiuntivi della pagina delle proprietà dello strumento di distribuzione Web è presente un errore, probabilmente generato da un problema di valutazione della macro.  Questo errore potrebbe anche indicare che il percorso non è corretto e che in esso sono presenti caratteri o combinazioni di caratteri non consentiti in un percorso di file.  
  
 Per risolvere questo errore, correggere la macro oppure la specifica del percorso.  Il percorso valutato rappresenta un percorso assoluto dalla directory del progetto.  
  
 Questo errore potrebbe anche indicare che uno dei file cui si fa riferimento è inesistente.