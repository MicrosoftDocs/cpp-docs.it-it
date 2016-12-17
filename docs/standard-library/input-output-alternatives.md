---
title: "Alternative di input/output | Microsoft Docs"
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
  - "I/O [C++], alternative"
ms.assetid: 9f8401c7-d90d-4285-8918-63573df74a80
caps.latest.revision: 8
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Alternative di input/output
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ include diverse alternative per la programmazione dei\/O:  
  
-   Libreria di runtime del linguaggio C diretta, I\/O privo.  
  
-   Flusso I\/O della libreria di runtime C ANSI.  
  
-   Console e rende I\/O diretto.  
  
-   La libreria MFC.  
  
-   La libreria C\+\+ standard Microsoft.  
  
 Le classi iostream sono utili per buffering, il testo formattato I\/O.  Sono inoltre utili per privo o il binario I\/O se è necessario disporre dell'interfaccia di programmazione in c\+\+ e si decide di non utilizzare la libreria MFC \(Microsoft Foundation Class \(MFC\).  Le classi iostream rappresentano un'alternativa orientata a oggetti dei\/O funzioni di runtime del linguaggio C.  
  
 È possibile utilizzare le classi iostream con il sistema operativo Microsoft Windows.  Il funzionamento dei flussi di file e delle stringhe senza restrizioni, ma gli oggetti flusso `cin`modalità di carattere, `cout`, `cerr` e `clog` non è coerente con l'interfaccia utente grafica di windows.  È inoltre possibile derivare classi personalizzate del flusso che interagiscono direttamente con l'ambiente Windows.  
  
## Vedere anche  
 [Definizione di flusso](../standard-library/what-a-stream-is.md)