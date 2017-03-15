---
title: "Aggiornamento dell&#39;interfaccia utente per le visualizzazioni di record (accesso ai dati MFC) | Microsoft Docs"
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
  - "menu, aggiornamento come modifiche di contesto"
  - "visualizzazioni di record, interfaccia utente"
  - "interfacce utente, aggiornamento"
ms.assetid: 2c7914b6-2dc3-40c3-b2f2-8371da2a4063
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Aggiornamento dell&#39;interfaccia utente per le visualizzazioni di record (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`CRecordView` e `CDaoRecordView` garantiscono anche gestori predefiniti per l'aggiornamento dell'interfaccia utente per i comandi di navigazione.  Questi gestori rendono automatica l'abilitazione e la disabilitazione degli oggetti dell'interfaccia utente, ovvero voci di menu e pulsanti delle barre degli strumenti.  Le procedure guidate per la creazione di un'applicazione comprendono menu standard e, se si sceglie l'opzione relativa alla **barra degli strumenti ancorabile**, un gruppo di pulsanti delle barre degli strumenti per i comandi.  Se si crea una classe per la visualizzazione di record mediante `CRecordView`, sarà possibile aggiungere all'applicazione oggetti dell'interfaccia utente simili.  
  
### Per creare risorse di menu con l'editor di menu  
  
1.  Facendo riferimento alle informazioni sull'uso dell'[editor di menu](../mfc/menu-editor.md), creare un menu con gli stessi quattro comandi.  
  
#### Per creare pulsanti delle barre degli strumenti con l'editor grafico  
  
1.  Facendo riferimento alle informazioni sull'uso dell'[Editor barra degli strumenti](../mfc/toolbar-editor.md), modificare le risorse della barra degli strumenti aggiungendo pulsanti per i comandi di navigazione tra i record.  
  
## Vedere anche  
 [Supporto della navigazione in una visualizzazione di record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)   
 [Uso di una visualizzazione di record](../data/using-a-record-view-mfc-data-access.md)