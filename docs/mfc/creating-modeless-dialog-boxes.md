---
title: "Creazione di finestre di dialogo non modali | Microsoft Docs"
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
  - "MFC (finestre di dialogo), non modali"
  - "finestre di dialogo non modali, creazione"
ms.assetid: 70d78c7f-3d40-477b-9f78-0f33c359f88b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Creazione di finestre di dialogo non modali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per una finestra di dialogo non modale, è necessario fornire il proprio costruttore pubblico nella classe della finestra di dialogo.  Per creare una finestra di dialogo non modale, chiamare il costruttore pubblico e chiamare la funzione membro di [Crea](../Topic/CDialog::Create.md) dell'oggetto finestra di dialogo per caricare la risorsa finestra di dialogo.  È possibile chiamare **Crea** uno durante o dopo la chiamata del costruttore.  Se la risorsa finestra di dialogo è la proprietà **WS\_VISIBLE**, la finestra di dialogo viene visualizzato immediatamente.  In caso contrario, è necessario chiamare la relativa funzione membro di [ShowWindow](../Topic/CWnd::ShowWindow.md).  
  
## Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)