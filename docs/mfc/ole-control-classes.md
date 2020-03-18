---
title: Classi di controlli OLE
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX classes [MFC]
- custom controls [MFC], classes
- ActiveX controls [MFC], OLE control classes
- ActiveX control classes [MFC]
- OLE controls [MFC], classes
- OLE control classes [MFC]
- reusable component classes [MFC]
ms.assetid: 96495ec3-319e-4163-b839-1af0428ed9dd
ms.openlocfilehash: 47c28520d592c4bd49ab6cb40edbb2f5ddf59846
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447643"
---
# <a name="ole-control-classes"></a>Classi di controlli OLE

Si tratta delle classi primarie utilizzate per la scrittura di controlli OLE. La classe `COleControlModule` in un modulo di controllo OLE è come la classe [CWinApp](../mfc/reference/cwinapp-class.md) in un'applicazione. Ogni modulo implementa uno o più controlli OLE; questi controlli sono rappresentati da oggetti `COleControl`. Questi controlli comunicano con i contenitori usando oggetti `CConnectionPoint`.

Le classi `CPictureHolder` e `CFontHolder` incapsulano le interfacce COM per le immagini e i tipi di carattere, mentre le classi `COlePropertyPage` e `CPropExchange` consentono di implementare le pagine delle proprietà e la persistenza delle proprietà per il controllo.

[COleControlModule](../mfc/reference/colecontrolmodule-class.md)<br/>
Sostituisce la classe `CWinApp` per il modulo di controllo OLE. Derivare dalla classe `COleControlModule` per sviluppare un oggetto modulo di controllo OLE. Fornisce funzioni membro per l'inizializzazione del modulo del controllo OLE.

[COleControl](../mfc/reference/colecontrol-class.md)<br/>
Derivare dalla classe `COleControl` per sviluppare un controllo OLE. Derivato da `CWnd`, questa classe eredita tutte le funzionalità di un oggetto finestra di Windows e altre funzionalità specifiche di OLE, ad esempio la generazione di eventi e la possibilità di supportare metodi e proprietà.

[CConnectionPoint](../mfc/reference/cconnectionpoint-class.md)<br/>
La classe `CConnectionPoint` definisce un tipo speciale di interfaccia utilizzata per comunicare con altri oggetti OLE, denominata punto di connessione. Un punto di connessione implementa un'interfaccia in uscita che è in grado di avviare azioni su altri oggetti, ad esempio la generazione di eventi e le notifiche delle modifiche.

[CPictureHolder](../mfc/reference/cpictureholder-class.md)<br/>
Incapsula la funzionalità di un oggetto immagine di Windows e dell'interfaccia COM `IPicture`; utilizzato per implementare la proprietà immagine personalizzata di un controllo OLE.

[CFontHolder](../mfc/reference/cfontholder-class.md)<br/>
Incapsula la funzionalità di un oggetto tipo di carattere di Windows e l'interfaccia COM `IFont`; utilizzato per implementare la proprietà del tipo di carattere del titolo di un controllo OLE.

[COlePropertyPage](../mfc/reference/colepropertypage-class.md)<br/>
Consente di visualizzare le proprietà di un controllo OLE in un'interfaccia grafica, in modo analogo a una finestra di dialogo.

[CPropExchange](../mfc/reference/cpropexchange-class.md)<br/>
Supporta l'implementazione della persistenza delle proprietà per i controlli OLE. Analogo a [CDataExchange](../mfc/reference/cdataexchange-class.md) per le finestre di dialogo.

[CMonikerFile](../mfc/reference/cmonikerfile-class.md)<br/>
Accetta un moniker o una rappresentazione di stringa che può creare in un moniker e lo associa in modo sincrono al flusso per il quale il moniker è un nome.

[CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md)<br/>
Funziona in modo analogo a `CMonikerFile`; Tuttavia, associa il moniker in modo asincrono al flusso per il quale il moniker è un nome.

[CDataPathProperty](../mfc/reference/cdatapathproperty-class.md)<br/>
Implementa una proprietà del controllo OLE che può essere caricata in modo asincrono.

[CCachedDataPathProperty](../mfc/reference/ccacheddatapathproperty-class.md)<br/>
Implementa una proprietà del controllo OLE trasferita in modo asincrono e memorizzata nella cache in un file di memoria.

[COleCmdUI](../mfc/reference/colecmdui-class.md)<br/>
Consente a un documento attivo di ricevere comandi che provengono dall'interfaccia utente del contenitore (ad esempio, FileNew, Open, Print e così via) e consente a un contenitore di ricevere comandi che hanno origine nell'interfaccia utente del documento attivo.

[COleSafeArray](../mfc/reference/colesafearray-class.md)<br/>
Funziona con matrici di tipo e dimensione arbitrari.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
