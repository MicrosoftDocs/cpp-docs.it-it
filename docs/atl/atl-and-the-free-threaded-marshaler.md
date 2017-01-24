---
title: "ATL e il gestore del marshalling con modello di threading Free | Microsoft Docs"
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
  - "ATL, gestore del marshalling con modello di threading Free"
  - "gestore del marshalling con modello di threading Free"
  - "FTM in ATL"
  - "threading [ATL], gestore del marshalling con modello di threading Free"
  - "threading [C++], gestore del marshalling in ATL"
ms.assetid: 2db88a13-2217-4ebc-aa7e-432d5da902eb
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL e il gestore del marshalling con modello di threading Free
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La pagina degli attributi ATL la procedura guidata semplice dell'oggetto fornisce un'opzione che consente alla classe di aggregazione il gestore di marshalling con modello di threading Free \(FTM\).  
  
 La procedura guidata genera codice per creare un'istanza del gestore di marshalling con modello di threading Free in `FinalConstruct` e rilasciare tale istanza in `FinalRelease`.  Una macro `COM_INTERFACE_ENTRY_AGGREGATE` viene automaticamente aggiunto alla mappa COM per assicurare che le richieste `QueryInterface` per [IMarshal](http://msdn.microsoft.com/library/windows/desktop/dd542707) vengano gestite dal gestore di marshalling con modello di threading Free.  
  
 Il gestore di marshalling con modello di threading Free consente l'accesso diretto alle interfacce sull'oggetto da qualsiasi thread nello stesso processo, accelerante chiamate su più apartment.  Questa opzione viene utilizzata per le classi che utilizzano il modello di threading.  
  
 Quando si utilizza questa opzione, le classi devono essere responsabile di thread safety dei dati.  Inoltre, gli oggetti che aggrega il gestore di marshalling con modello di threading Free e la necessità di mantenere puntatori a interfaccia ottenuti da altri oggetti deve effettuare alcuni passaggi aggiuntivi per garantire che le interfacce siano correttamente eseguito il marshalling.  In genere questo comporta l'archiviazione dei puntatori a interfaccia nella tabella globale \(GIT\) dell'interfaccia e ottenere il puntatore da GIT ogni volta che viene utilizzato.  ATL fornisce la classe [CComGITPtr](../atl/reference/ccomgitptr-class.md) necessarie per utilizzare i puntatori a interfaccia archiviati nel GIT.  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [CoCreateFreeThreadedMarshaler](http://msdn.microsoft.com/library/windows/desktop/ms694500)   
 [IMarshal](http://msdn.microsoft.com/library/windows/desktop/dd542707)   
 [When to Use the Global Interface Table](http://msdn.microsoft.com/library/windows/desktop/ms693729)   
 [In\-Process Server Threading Issues](http://msdn.microsoft.com/library/windows/desktop/ms687205)