---
title: "Impostazioni per CStatusBarCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CStatusBarCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStatusBarCtrl (classe), impostazioni"
  - "controlli della barra di stato, impostazioni"
ms.assetid: adeba0c3-17f3-435c-b140-a57845e9ce49
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Impostazioni per CStatusBarCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il percorso predefinito di una finestra di stato di [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md) è lungo la parte inferiore della finestra padre, ma è possibile specificare lo stile di `CCS_TOP` per farvi trovarsi all'inizio dell'area client della finestra padre.  
  
 È possibile specificare lo stile di **SBARS\_SIZEGRIP** per importare un controllo di ridimensionamento all'estremità destra della finestra di stato di `CStatusBarCtrl`.  Un controllo di ridimensionamento è simile a un bordo di ridimensionamento; è un'area rettangolare che l'utente può fare clic e trascinare per ridimensionare la finestra padre.  
  
> [!NOTE]
>  Se si combinano `CCS_TOP` e gli stili di **SBARS\_SIZEGRIP**, take risultante di ridimensionamento non è funzionale anche se il sistema di traccia nella finestra di stato.  
  
 La routine della finestra per la finestra di stato viene impostato automaticamente le dimensioni e la posizione iniziale della finestra di controllo.  La larghezza è identica a quella dell'area client della finestra padre.  L'altezza è basata sulla metrica di carattere attualmente selezionata nel contesto di dispositivo la finestra di stato e la larghezza dei bordi della finestra.  
  
 La routine della finestra regola automaticamente le dimensioni della finestra di stato quando riceve un messaggio di `WM_SIZE`.  In genere, quando cambia dimensioni della finestra padre, il padre invia un messaggio di `WM_SIZE` alla finestra di stato.  
  
 È possibile impostare l'altezza minima dell'area di disegno di una finestra dello stato chiamando [SetMinHeight](../Topic/CStatusBarCtrl::SetMinHeight.md), specificando l'altezza minima in pixel.  Canvas non include i bordi della finestra.  
  
 Recupera la larghezza dei bordi di una finestra dello stato chiamando [GetBorders](../Topic/CStatusBarCtrl::GetBorders.md).  Questa funzione membro include il puntatore a una matrice di tre elemento che riceve la larghezza del bordo orizzontale, del bordo verticale e del bordo tra i rettangoli.  
  
## Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)