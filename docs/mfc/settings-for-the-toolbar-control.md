---
title: "Impostazioni per il controllo Toolbar | Microsoft Docs"
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
  - "CToolBarCtrl (classe), impostazioni"
  - "controlli della barra degli strumenti [MFC], informazioni sui controlli della barra degli strumenti"
ms.assetid: 025ba920-b3ee-4d82-9367-e652cd7875b9
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Impostazioni per il controllo Toolbar
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I pulsanti di una barra degli strumenti possono visualizzare una bitmap, una stringa, o entrambi.  Per impostazione predefinita, la dimensione dell'immagine è impostata sulle dimensioni di 16 per 15 pixel.  Tutti i pulsanti sono alla stessa larghezza, per impostazione predefinita 24 per 22 pixel.  L'altezza di una barra degli strumenti è determinata dall'altezza dei pulsanti e la larghezza di una barra degli strumenti è uguale alla larghezza dell'area client della finestra padre, anche per impostazione predefinita.  
  
 Una barra degli strumenti può presentare funzionalità di personalizzazione incorporate, inclusa una finestra di dialogo definita dal sistema di personalizzazione, che consentono all'utente di inserire, cancellare, o riordinare i pulsanti della barra degli strumenti.  Un'applicazione determina se le funzionalità di personalizzazione sono disponibili all'utente e controlla l'ambito in cui l'utente può personalizzare la barra degli strumenti.  Per ulteriori informazioni sulla personalizzazione della barra degli strumenti, vedere la classe [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) in *Riferimento MFC*.  
  
## Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)