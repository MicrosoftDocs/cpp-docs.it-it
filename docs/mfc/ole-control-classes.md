---
title: "Classi di controlli OLE | Microsoft Docs"
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
  - "vc.classes.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi ActiveX [C++]"
  - "classi dei controlli ActiveX [C++]"
  - "ActiveX (controlli) [C++], classi di controlli OLE"
  - "controlli personalizzati [MFC], classi"
  - "classi di controlli OLE [C++]"
  - "controlli OLE [C++], classi"
  - "classi di componenti riutilizzabili"
ms.assetid: 96495ec3-319e-4163-b839-1af0428ed9dd
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di controlli OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste sono le classi che principali utilizzate per la scrittura di controlli OLE.  La classe di `COleControlModule` in un modulo di controlli OLE è simile alla classe di [CWinApp](../mfc/reference/cwinapp-class.md) in un'applicazione.  Ogni modulo implementa uno o più controlli OLE; questi controlli sono rappresentati da oggetti di `COleControl`.  Questi controlli comunicano con i relativi contenitori utilizzo di oggetti di `CConnectionPoint`.  
  
 Le classi di `CFontHolder` e di `CPictureHolder` includono le interfacce COM per le immagini e i tipi di carattere, mentre le classi di `CPropExchange` e di `COlePropertyPage` consentono di implementare le pagine delle proprietà e la persistenza delle proprietà per il controllo.  
  
 [COleControlModule](../mfc/reference/colecontrolmodule-class.md)  
 Sostituisce la classe di `CWinApp` del form di controlli OLE.  Derivano dalla classe di `COleControlModule` per compilare un oggetto modulo di controlli OLE.  Fornisce funzioni membro per inizializzare il modulo di controlli OLE.  
  
 [COleControl](../mfc/reference/colecontrol-class.md)  
 Derivano dalla classe di `COleControl` per compilare un controllo OLE.  Derivato da `CWnd`, questa classe eredita tutte le funzionalità di un oggetto finestra delle finestre più funzionalità OLE specifica aggiuntiva, ad esempio l'attivazione degli eventi e la capacità supportare i metodi e le proprietà.  
  
 [CConnectionPoint](../mfc/reference/cconnectionpoint-class.md)  
 La classe di `CConnectionPoint` definisce un tipo speciale di interfaccia utilizzata per comunicare con altri oggetti OLE, denominato punto di connessione.  Un punto di connessione implementa un'interfaccia in uscita che può iniziare azioni su altri oggetti, ad esempio gli eventi di esempio l'attivazione e notifiche di modifica.  
  
 [CPictureHolder](../mfc/reference/cpictureholder-class.md)  
 Incapsula la funzionalità di un oggetto immagine di windows e dell'interfaccia COM di `IPicture` ; utilizzata per implementare la proprietà personalizzata dell'immagine di un controllo OLE.  
  
 [CFontHolder](../mfc/reference/cfontholder-class.md)  
 Incapsula la funzionalità di un oggetto del tipo di windows e dell'interfaccia COM di `IFont` ; utilizzata per implementare la proprietà Font predefinita di un controllo OLE.  
  
 [COlePropertyPage](../mfc/reference/colepropertypage-class.md)  
 Visualizzare le proprietà di un controllo OLE in un'interfaccia grafica, analoga a una finestra di dialogo.  
  
 [CPropExchange](../mfc/reference/cpropexchange-class.md)  
 Supporta l'implementazione di persistenza della proprietà per i controlli OLE.  Analogo a [CDataExchange](../mfc/reference/cdataexchange-class.md) per le finestre di dialogo.  
  
 [CMonikerFile](../mfc/reference/cmonikerfile-class.md)  
 Utilizza un moniker, o una rappresentazione di stringa che può trasformare un moniker e associazioni in modo sincrono al flusso per il quale il moniker abbia un nome.  
  
 [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md)  
 Funziona in modo analogo a `CMonikerFile`; tuttavia, associare il moniker in modo asincrono al flusso per il quale il moniker abbia un nome.  
  
 [CDataPathProperty](../mfc/reference/cdatapathproperty-class.md)  
 Implementa una proprietà del controllo OLE che può essere caricata in modo asincrono.  
  
 [CCachedDataPathProperty](../mfc/reference/ccacheddatapathproperty-class.md)  
 Implementa una proprietà del controllo OLE trasferita in modo asincrono e memorizzata nella cache in un file di memoria.  
  
 [COleCmdUI](../mfc/reference/colecmdui-class.md)  
 Consente un documento attivo ai controlli di ricezione che si verificano nell'interfaccia utente del contenitore \(ad esempio FileNew, apri, stampa, e così via\) e consente un contenitore per i controlli di ricezione che si verificano nell'interfaccia utente del documento attivo.  
  
 [COleSafeArray](../mfc/reference/colesafearray-class.md)  
 Funziona con le matrici di tipo e le dimensioni arbitrari.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)