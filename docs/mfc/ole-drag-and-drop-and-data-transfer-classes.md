---
title: "Classi di trasferimento dati e trascinamento della selezione OLE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi ActiveX [C++]"
  - "trasferimento dati [C++], OLE"
  - "classe di trasferimento dati [C++]"
  - "trascinamento della selezione [C++], classi"
  - "trascinamento della selezione OLE [C++], e classe di trasferimento dati"
ms.assetid: c8ab2825-ed69-4b88-8ae6-f368b94726b8
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classi di trasferimento dati e trascinamento della selezione OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste classi vengono utilizzate nei trasferimenti di dati OLE.  Consentono ai dati da trasferire tra applicazioni tramite gli Appunti o con funzionalità di trascinamento della selezione.  
  
 [COleDropSource](../mfc/reference/coledropsource-class.md)  
 Controlla l'operazione di trascinamento della selezione dall'inizio alla fine.  Questa classe determina quando l'operazione di trascinamento verrà avviata e quando termina.  Anche il feedback del cursore durante l'operazione di trascinamento della selezione.  
  
 [COleDataSource](../mfc/reference/coledatasource-class.md)  
 Utilizzato quando l'applicazione fornisce i dati per un trasferimento dei dati.  `COleDataSource` potrebbe essere visualizzato come oggetto orientato a oggetti degli Appunti.  
  
 [COleDropTarget](../mfc/reference/coledroptarget-class.md)  
 Rappresenta la destinazione dell'operazione di trascinamento.  Un oggetto di `COleDropTarget` corrisponde a una finestra sullo schermo.  Determina se accettare i dati trascinati nel controllo e implementa l'effettiva operazione di trascinamento.  
  
 [COleDataObject](../mfc/reference/coledataobject-class.md)  
 Utilizzato come il lato del ricevitore di `COleDataSource`.  gli oggetti di`COleDataObject` forniscono accesso ai dati memorizzati da un oggetto di `COleDataSource`.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)