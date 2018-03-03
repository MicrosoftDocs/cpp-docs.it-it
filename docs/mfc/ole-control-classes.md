---
title: Classi di controlli OLE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.classes.ole
dev_langs:
- C++
helpviewer_keywords:
- ActiveX classes [MFC]
- custom controls [MFC], classes
- ActiveX controls [MFC], OLE control classes
- ActiveX control classes [MFC]
- OLE controls [MFC], classes
- OLE control classes [MFC]
- reusable component classes [MFC]
ms.assetid: 96495ec3-319e-4163-b839-1af0428ed9dd
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e61d0ca8ed269557efbd566da1aca160ef669e83
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ole-control-classes"></a>Classi di controlli OLE
Queste sono le principali classi utilizzate durante la scrittura di controlli OLE. Il `COleControlModule` classe in un modulo di controllo OLE è ad esempio il [CWinApp](../mfc/reference/cwinapp-class.md) classe in un'applicazione. Ogni modulo implementa uno o più controlli OLE; Questi controlli sono rappresentati da `COleControl` oggetti. Questi controlli di comunicare con i relativi contenitori usando `CConnectionPoint` oggetti.  
  
 Il `CPictureHolder` e `CFontHolder` classi includono le interfacce COM per le immagini e tipi di carattere, mentre il `COlePropertyPage` e `CPropExchange` le classi consentono di implementare pagine delle proprietà e la persistenza delle proprietà per il controllo.  
  
 [COleControlModule](../mfc/reference/colecontrolmodule-class.md)  
 Sostituisce il `CWinApp` classe per il modulo di controllo OLE. Derivare la `COleControlModule` classe per sviluppare un oggetto modulo di controllo OLE. Fornisce funzioni membro per inizializzare il modulo del controllo OLE.  
  
 [COleControl](../mfc/reference/colecontrol-class.md)  
 Derivare la `COleControl` classe per sviluppare un controllo OLE. Derivata da `CWnd`, questa classe eredita tutte le funzionalità di un oggetto finestra di Windows e funzionalità aggiuntive di OLE specifici, ad esempio di generazione dell'evento e la possibilità di supportare i metodi e proprietà.  
  
 [CConnectionPoint](../mfc/reference/cconnectionpoint-class.md)  
 La `CConnectionPoint` classe definisce un tipo speciale di interfaccia utilizzata per comunicare con altri oggetti OLE, denominate punto di connessione. Un punto di connessione implementa un'interfaccia in uscita che è in grado di avviare azioni su altri oggetti, ad esempio la generazione degli eventi e notifiche di modifica.  
  
 [CPictureHolder](../mfc/reference/cpictureholder-class.md)  
 Incapsula la funzionalità di un oggetto immagine di Windows e `IPicture` COM interfaccia utilizzata per implementare la proprietà immagine personalizzata di un controllo OLE.  
  
 [CFontHolder](../mfc/reference/cfontholder-class.md)  
 Incapsula la funzionalità di un oggetto di tipo di carattere Windows e `IFont` COM interfaccia utilizzata per implementare la proprietà predefinita di un controllo OLE.  
  
 [COlePropertyPage](../mfc/reference/colepropertypage-class.md)  
 Visualizza le proprietà di OLE controllano in un'interfaccia grafica, simile a una finestra di dialogo.  
  
 [CPropExchange](../mfc/reference/cpropexchange-class.md)  
 Supporta l'implementazione di persistenza delle proprietà per i controlli OLE. Analogo a [CDataExchange](../mfc/reference/cdataexchange-class.md) per finestre di dialogo.  
  
 [CMonikerFile](../mfc/reference/cmonikerfile-class.md)  
 Accetta un moniker o una rappresentazione di stringa che può essere trasformata in un moniker e la associa in modo sincrono nel flusso per il quale il moniker è un nome.  
  
 [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md)  
 È simile a `CMonikerFile`; tuttavia, il moniker associa in modo asincrono al flusso per il quale il moniker è un nome.  
  
 [CDataPathProperty](../mfc/reference/cdatapathproperty-class.md)  
 Implementa una proprietà del controllo OLE che può essere caricata in modo asincrono.  
  
 [CCachedDataPathProperty](../mfc/reference/ccacheddatapathproperty-class.md)  
 Implementa una proprietà del controllo OLE trasferita in modo asincrono e memorizzata nella cache in un file di memoria.  
  
 [COleCmdUI](../mfc/reference/colecmdui-class.md)  
 Consente a un documento attivo ricevere comandi che hanno origine nell'interfaccia utente del contenitore (ad esempio FileNew, Apri, stampa e così via) e un contenitore ricevere comandi che hanno origine nell'interfaccia utente del documento attivo.  
  
 [COleSafeArray](../mfc/reference/colesafearray-class.md)  
 Funziona con le matrici di tipo e dimensioni arbitrari.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

