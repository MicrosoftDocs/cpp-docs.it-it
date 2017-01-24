---
title: "Trascinamento della selezione: personalizzazione | Microsoft Docs"
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
  - "trascinamento della selezione, chiamata a DoDragDrop"
  - "trascinamento della selezione, oggetto COleDataSource"
  - "trascinamento della selezione, personalizzazione del comportamento"
  - "trascinamento della selezione, implementazione in applicazioni non OLE"
  - "trascinamento della selezione OLE, personalizzazione del comportamento"
ms.assetid: 03369d3e-46bf-4140-b58c-d0c9657cf38a
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Trascinamento della selezione: personalizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'implementazione predefinita della funzionalità di trascinamento della selezione è sufficiente per la maggior parte delle applicazioni.  Tuttavia, alcune applicazioni possono richiedere che questo comportamento standard venga modificato.  Questo articolo spiega i passaggi necessari per modificare queste impostazioni predefinite.  Inoltre, è possibile utilizzare questa tecnica per stabilire le applicazioni che non supportano i documenti composti come origini di rilascio.  
  
 Se si sta personalizzando il comportamento OLE standard del trascinamento o in un'applicazione non OLE, è necessario creare un oggetto `COleDataSource` per contenere i dati.  Quando l'utente inizia un'operazione di trascinamento della selezione, il codice deve chiamare la funzione `DoDragDrop` da questo oggetto anziché da altre classi che supportano le operazioni di trascinamento.  
  
 Facoltativamente, è possibile creare un oggetto `COleDropSource` per controllare il rilascio e per eseguire l'override delle sue funzioni in base al tipo di comportamento che si desidera modificare.  Questo oggetto di origine rilascio viene quindi passato a `COleDataSource::DoDragDrop` per modificare il comportamento predefinito di queste funzioni.  Queste opzioni differenti consentono una grande flessibilità su come sono supportate le operazioni di trascinamento nell'applicazione.  Per ulteriori informazioni sulle origini dati, vedere l'articolo [Oggetti dati e origini dati \(OLE\)](../mfc/data-objects-and-data-sources-ole.md).  
  
 È possibile eseguire l'override delle funzioni seguenti per personalizzare le operazioni di trascinamento e rilascio:  
  
|Override|Per personalizzare:|  
|--------------|-------------------------|  
|`OnBeginDrag`|Come il trascinamento viene avviato dopo avere chiamato `DoDragDrop`.|  
|`GiveFeedback`|Feedback visivo, come appare il cursore, per risultati di rilascio diversi.|  
|`QueryContinueDrag`|La chiusura dell'operazione di trascinamento.  Questa funzione consente di controllare gli stati dei tasti di modifica durante l'operazione di trascinamento.|  
  
## Vedere anche  
 [Trascinamento \(OLE\)](../mfc/drag-and-drop-ole.md)   
 [COleDropSource Class](../mfc/reference/coledropsource-class.md)   
 [COleDataSource Class](../mfc/reference/coledatasource-class.md)