---
title: "Creazione e visualizzazione di finestre di dialogo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC (finestre di dialogo), creazione"
  - "MFC (finestre di dialogo), visualizzazione"
  - "finestre di dialogo modali, creazione"
  - "finestre di dialogo non modali, creazione"
  - "apertura di finestre di dialogo"
ms.assetid: 1c5219ee-8b46-44bc-9708-83705d4f248b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Creazione e visualizzazione di finestre di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Creare un oggetto finestra di dialogo è un'operazione in due fasi.  Innanzitutto, costruire l'oggetto finestra di dialogo, quindi creare la finestra di dialogo.  Le finestre di dialogo modali e non modali differiscono in parte nel processo utilizzato per crearle e visualizzarle.  Nella tabella seguente elenca come le finestre di dialogo modali e non modali vengono normalmente costruite e visualizzate.  
  
### Creazione della finestra di dialogo  
  
|Tipo di finestra di dialogo|Modalità di creazione|  
|---------------------------------|---------------------------|  
|[Modeless](../mfc/creating-modeless-dialog-boxes.md)|Costruisce `CDialog`, quindi chiamare la funzione membro **Crea**.|  
|[Modali](../mfc/creating-modal-dialog-boxes.md)|Il costrutto `CDialog`, quindi chiama la funzione membro `DoModal`.|  
  
 È possibile, se lo si desidera, creare la finestra di dialogo da un [modello in memoria della finestra di dialogo](../mfc/using-a-dialog-template-in-memory.md) che avete costruito, piuttosto che da una risorsa modello di finestra di dialogo.  Tuttavia, si tratta di un argomento avanzato.  
  
## Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)