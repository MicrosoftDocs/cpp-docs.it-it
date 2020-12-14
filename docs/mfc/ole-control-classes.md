---
description: 'Altre informazioni su: classi di controlli OLE'
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
ms.openlocfilehash: da59fcd66fa21602ad864deecac9f568bd5123bc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97244147"
---
# <a name="ole-control-classes"></a>Classi di controlli OLE

Si tratta delle classi primarie utilizzate per la scrittura di controlli OLE. La `COleControlModule` classe in un modulo di controllo OLE è come la classe [CWinApp](reference/cwinapp-class.md) in un'applicazione. Ogni modulo implementa uno o più controlli OLE; questi controlli sono rappresentati da `COleControl` oggetti. Questi controlli comunicano con i contenitori usando `CConnectionPoint` gli oggetti.

Le `CPictureHolder` `CFontHolder` classi e incapsulano le interfacce com per le immagini e i tipi di carattere, mentre le `COlePropertyPage` `CPropExchange` classi e consentono di implementare le pagine delle proprietà e la persistenza delle proprietà per il controllo.

[COleControlModule](reference/colecontrolmodule-class.md)<br/>
Sostituisce la `CWinApp` classe per il modulo di controllo OLE. Derivare dalla `COleControlModule` classe per sviluppare un oggetto modulo di controllo OLE. Fornisce funzioni membro per l'inizializzazione del modulo del controllo OLE.

[COleControl](reference/colecontrol-class.md)<br/>
Derivare dalla `COleControl` classe per sviluppare un controllo OLE. Derivata da `CWnd` , questa classe eredita tutte le funzionalità di un oggetto finestra di Windows e altre funzionalità specifiche di OLE, ad esempio la generazione di eventi e la possibilità di supportare metodi e proprietà.

[CConnectionPoint](reference/cconnectionpoint-class.md)<br/>
La `CConnectionPoint` classe definisce un tipo speciale di interfaccia utilizzata per comunicare con altri oggetti OLE, denominata punto di connessione. Un punto di connessione implementa un'interfaccia in uscita che è in grado di avviare azioni su altri oggetti, ad esempio la generazione di eventi e le notifiche delle modifiche.

[CPictureHolder](reference/cpictureholder-class.md)<br/>
Incapsula la funzionalità di un oggetto immagine di Windows e dell' `IPicture` interfaccia com; utilizzata per implementare la proprietà immagine personalizzata di un controllo OLE.

[CFontHolder](reference/cfontholder-class.md)<br/>
Incapsula la funzionalità di un oggetto tipo di carattere di Windows e dell' `IFont` interfaccia com; utilizzata per implementare la proprietà del tipo di carattere del titolo di un controllo OLE.

[COlePropertyPage](reference/colepropertypage-class.md)<br/>
Consente di visualizzare le proprietà di un controllo OLE in un'interfaccia grafica, in modo analogo a una finestra di dialogo.

[CPropExchange](reference/cpropexchange-class.md)<br/>
Supporta l'implementazione della persistenza delle proprietà per i controlli OLE. Analogo a [CDataExchange](reference/cdataexchange-class.md) per le finestre di dialogo.

[CMonikerFile](reference/cmonikerfile-class.md)<br/>
Accetta un moniker o una rappresentazione di stringa che può creare in un moniker e lo associa in modo sincrono al flusso per il quale il moniker è un nome.

[CAsyncMonikerFile](reference/casyncmonikerfile-class.md)<br/>
Funziona in modo analogo a. `CMonikerFile` tuttavia, associa il moniker in modo asincrono al flusso per il quale il moniker è un nome.

[CDataPathProperty](reference/cdatapathproperty-class.md)<br/>
Implementa una proprietà del controllo OLE che può essere caricata in modo asincrono.

[CCachedDataPathProperty](reference/ccacheddatapathproperty-class.md)<br/>
Implementa una proprietà del controllo OLE trasferita in modo asincrono e memorizzata nella cache in un file di memoria.

[COleCmdUI](reference/colecmdui-class.md)<br/>
Consente a un documento attivo di ricevere comandi che provengono dall'interfaccia utente del contenitore (ad esempio, FileNew, Open, Print e così via) e consente a un contenitore di ricevere comandi che hanno origine nell'interfaccia utente del documento attivo.

[COleSafeArray](reference/colesafearray-class.md)<br/>
Funziona con matrici di tipo e dimensione arbitrari.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
