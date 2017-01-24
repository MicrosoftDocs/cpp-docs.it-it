---
title: "Inizializzazione della finestra di dialogo | Microsoft Docs"
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
  - "inizializzazione di finestre di dialogo"
  - "MFC (finestre di dialogo), inizializzazione"
  - "finestre di dialogo modali, inizializzazione"
  - "finestre di dialogo non modali, inizializzazione"
  - "OnInitDialog (metodo)"
ms.assetid: 968142f5-19f9-4b34-a1d4-8e6412d4379b
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Inizializzazione della finestra di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dopo la finestra di dialogo e tutti i relativi controlli vengono creati ma prima della finestra di dialogo \(di qualsiasi tipo\) viene visualizzata sullo schermo, la funzione membro di [OnInitDialog](../Topic/CDialog::OnInitDialog.md) dell'oggetto finestra di dialogo viene chiamata.  Per una finestra di dialogo modale, questo si verifica durante una chiamata di `DoModal`.  Per una finestra di dialogo non modale, `OnInitDialog` viene chiamato quando **Crea** viene chiamato.  In genere l'override di `OnInitDialog` per inizializzare i comandi della finestra di dialogo, come impostare il testo iniziale di una casella di modifica.  È necessario chiamare la funzione membro di `OnInitDialog` della classe base, `CDialog`, dagli override di `OnInitDialog`.  
  
 Se si desidera impostare il colore di sfondo della finestra di dialogo \(e quello di tutte le altre finestre di dialogo nell'applicazione\), vedere [Impostare il colore di sfondo della finestra di dialogo](../mfc/setting-the-dialog-box’s-background-color.md).  
  
## Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)