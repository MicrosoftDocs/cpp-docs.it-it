---
title: "Oggetti dati e origini dati (OLE) | Microsoft Docs"
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
  - "oggetti dati [C++], definizione"
  - "origini dati [C++], definizione"
  - "trasferimento dati [C++]"
  - "trasferimento dati [C++], definizione"
  - "OLE [C++], oggetti dati"
  - "OLE [C++], origini dati"
  - "OLE [C++], trasferimento dati"
ms.assetid: 8f68eed8-0ce8-4489-a4cc-f95554f89090
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Oggetti dati e origini dati (OLE)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si esegue un trasferimento dei dati, mediante gli Appunti o trascinamento della selezione, dati a un'origine e una destinazione.  L'applicazione fornisce i dati per la copia e un'altra applicazione la accetta per inserire.  Ogni lato delle necessità di trasferimento di eseguire operazioni diverse agli stessi dati per il trasferimento corretta.  La libreria MFC \(Microsoft Foundation Class \(MFC\) fornisce due classi che rappresentano ogni lato di tale trasferimento:  
  
-   Le origini dati \(implementato dagli oggetti di `COleDataSource` \) rappresentano il lato oggetto di origine per il trasferimento dei dati.  Vengono create da un'applicazione di origine quando i dati devono essere copiati negli Appunti, o quando i dati vengono forniti per un'operazione di trascinamento della selezione.  
  
-   Gli oggetti dati \(implementato dagli oggetti di `COleDataObject` \) rappresentano il lato di destinazione per il trasferimento dei dati.  Vengono creati quando la applicazione di destinazione con dati trascinati in, o quando viene richiesto di eseguire un'operazione Incolla dagli Appunti.  
  
 Gli articoli seguenti illustrano come utilizzare gli oggetti dati e origini dati nelle applicazioni.  Queste informazioni si riferiscono sia al contenitore che le applicazioni server, perché entrambe possono essere chiamati ai dati di copia e incolla.  
  
-   [Oggetti dati e origini dati: Creazione e distruzione](../mfc/data-objects-and-data-sources-creation-and-destruction.md)  
  
-   [Oggetti dati e origini dati: Modifica](../mfc/data-objects-and-data-sources-manipulation.md)  
  
## Argomenti della sezione  
 [Trascinamento della selezione](../mfc/drag-and-drop-ole.md)  
  
 [Appunti](../mfc/clipboard.md)  
  
## Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [COleDataObject Class](../mfc/reference/coledataobject-class.md)   
 [COleDataSource Class](../mfc/reference/coledatasource-class.md)