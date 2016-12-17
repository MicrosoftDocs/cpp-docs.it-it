---
title: "Controlli ActiveX MFC: propriet&#224; | Microsoft Docs"
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
  - "MFC (controlli ActiveX), proprietà"
  - "proprietà [MFC]"
  - "proprietà [MFC], controlli ActiveX"
ms.assetid: b678a53c-0d9e-476f-8aa0-23b80baaba46
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: propriet&#224;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo ActiveX genera eventi per comunicare con il contenitore di controlli.  Il contenitore, in return, utilizzare i metodi e le proprietà per comunicare con il controllo.  I metodi e le proprietà sono simili utilizzato e scopo, rispettivamente, le funzioni membro e a variabili membro di una classe c\+\+.  Le proprietà sono membri dati del controllo ActiveX esposti al contenitore.  Le proprietà forniscono un'interfaccia per le applicazioni che contengono controlli ActiveX, ad esempio i client di automazione e contenitori di controlli ActiveX.  
  
 Le proprietà vengono dette attributi.  
  
 Per ulteriori informazioni sui metodi dei controlli ActiveX, vedere l'articolo [Controlli ActiveX MFC: Metodi](../mfc/mfc-activex-controls-methods.md).  
  
 I controlli ActiveX possono implementare entrambi i metodi e proprietà predefiniti e personalizzati.  La classe `COleControl` fornisce un'implementazione per le proprietà predefinite. Per un elenco completo delle proprietà predefinite, vedere l'articolo [Controlli ActiveX MFC: Aggiunta di proprietà predefinite](../mfc/mfc-activex-controls-adding-stock-properties.md)\). Le proprietà personalizzate, definite dallo sviluppatore, aggiungere funzionalità specializzate a un controllo ActiveX.  Per ulteriori informazioni, vedere [Controlli ActiveX MFC: Aggiunta di proprietà personalizzate](../mfc/mfc-activex-controls-adding-custom-properties.md).  
  
 Sia le proprietà di azione che personalizzate, quali i metodi, supportate da un meccanismo costituito da una mappa di divisione che gestisce le proprietà e i metodi e le funzioni membro esistenti di `COleControl` classe.  Inoltre, queste proprietà possono avere parametri che lo sviluppatore utilizza per passare a informazioni aggiuntive al controllo.  
  
 Gli articoli seguenti descritti più dettagliatamente le proprietà dei controlli ActiveX:  
  
-   [Controlli ActiveX MFC: Aggiunta di proprietà predefinite](../mfc/mfc-activex-controls-adding-stock-properties.md)  
  
-   [Controlli ActiveX MFC: Aggiunta di proprietà personalizzate](../mfc/mfc-activex-controls-adding-custom-properties.md)  
  
-   [Controlli ActiveX MFC: L'implementazione avanzata della proprietà](../mfc/mfc-activex-controls-advanced-property-implementation.md)  
  
-   [Controlli ActiveX MFC: Accedere alle proprietà di ambiente](../mfc/mfc-activex-controls-accessing-ambient-properties.md)  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)