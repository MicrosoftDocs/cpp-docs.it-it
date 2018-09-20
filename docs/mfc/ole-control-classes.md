---
title: Classi di controlli OLE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ad9ab489506964266b28a38563c366db2b0d54fa
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46439081"
---
# <a name="ole-control-classes"></a>Classi di controlli OLE

Queste sono le classi primarie da utilizzare durante la scrittura di controlli OLE. Il `COleControlModule` classe in un modulo di controllo OLE è simile al [CWinApp](../mfc/reference/cwinapp-class.md) classe in un'applicazione. Ogni modulo implementa uno o più controlli OLE. Questi controlli sono rappresentati da `COleControl` oggetti. Questi controlli di comunicano con i relativi contenitori usando `CConnectionPoint` oggetti.

Il `CPictureHolder` e `CFontHolder` classi incapsulano le interfacce COM per le immagini e tipi di carattere, mentre le `COlePropertyPage` e `CPropExchange` classi consentono di implementare le pagine delle proprietà e la persistenza delle proprietà per il controllo.

[COleControlModule](../mfc/reference/colecontrolmodule-class.md)<br/>
Sostituisce il `CWinApp` classe per il modulo di controllo OLE. Derivativo di `COleControlModule` classe per lo sviluppo di un oggetto modulo di controllo OLE. Fornisce funzioni membro per l'inizializzazione di modulo del controllo OLE.

[COleControl](../mfc/reference/colecontrol-class.md)<br/>
Derivativo di `COleControl` classe per sviluppare un controllo OLE. Derivata da `CWnd`, questa classe eredita tutte le funzionalità di un oggetto finestra di Windows e funzionalità specifici OLE aggiuntive, ad esempio di generazione dell'evento e la possibilità di supportare i metodi e proprietà.

[CConnectionPoint](../mfc/reference/cconnectionpoint-class.md)<br/>
Il `CConnectionPoint` classe definisce un tipo speciale di interfaccia utilizzata per comunicare con altri oggetti OLE, denominati punto di connessione. Un punto di connessione implementa un'interfaccia in uscita che è in grado di avviare le operazioni di altri oggetti, ad esempio la generazione degli eventi e le notifiche di modifica.

[CPictureHolder](../mfc/reference/cpictureholder-class.md)<br/>
Incapsula la funzionalità di un oggetto immagine di Windows e il `IPicture` COM interfaccia; usato per implementare la proprietà immagine personalizzata di un controllo OLE.

[CFontHolder](../mfc/reference/cfontholder-class.md)<br/>
Incapsula la funzionalità di un oggetto di tipo di carattere Windows e il `IFont` COM interfaccia; usato per implementare la proprietà predefinita di un controllo OLE.

[COlePropertyPage](../mfc/reference/colepropertypage-class.md)<br/>
Consente di visualizzare le proprietà di un oggetto OLE controllano in un'interfaccia grafica, simile a una finestra di dialogo.

[CPropExchange](../mfc/reference/cpropexchange-class.md)<br/>
Supporta l'implementazione della persistenza di proprietà per i controlli OLE. Analogo a [CDataExchange](../mfc/reference/cdataexchange-class.md) per finestre di dialogo.

[CMonikerFile](../mfc/reference/cmonikerfile-class.md)<br/>
Accetta un moniker, o una rappresentazione di stringa che può essere trasformata in un moniker e lo associa in modo sincrono il flusso per cui il moniker è un nome.

[CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md)<br/>
Funzionamento analogo a `CMonikerFile`; tuttavia, si esegue l'associazione del moniker in modo asincrono nel flusso per cui il moniker è un nome.

[CDataPathProperty](../mfc/reference/cdatapathproperty-class.md)<br/>
Implementa una proprietà del controllo OLE che può essere caricata in modo asincrono.

[CCachedDataPathProperty](../mfc/reference/ccacheddatapathproperty-class.md)<br/>
Implementa una proprietà del controllo OLE trasferita in modo asincrono e memorizzata nella cache in un file di memoria.

[COleCmdUI](../mfc/reference/colecmdui-class.md)<br/>
Consente un documento attivo ricevere comandi che hanno origine nell'interfaccia utente del relativo contenitore (ad esempio FileNew, Apri, stampa e così via) e un contenitore ricevere comandi che hanno origine nell'interfaccia utente del documento attivo.

[COleSafeArray](../mfc/reference/colesafearray-class.md)<br/>
È compatibile con le matrici di tipo e dimensioni arbitrari.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

