---
title: 'Contenitori: implementazione di un contenitore'
ms.date: 11/04/2016
helpviewer_keywords:
- applications [OLE], OLE container
- OLE containers [MFC], implementing
ms.assetid: af1e2079-619a-4eac-9327-985ad875823a
ms.openlocfilehash: ed95324b8df978a6ab2f7582c0ddf626a45e7fe1
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77127920"
---
# <a name="containers-implementing-a-container"></a>Contenitori: implementazione di un contenitore

Questo articolo riepiloga la procedura per l'implementazione di un contenitore e fa riferimento ad altri articoli che forniscono spiegazioni più dettagliate sull'implementazione di contenitori. Sono inoltre elencate alcune funzionalità OLE facoltative che possono essere implementate e gli articoli che descrivono queste funzionalità.

#### <a name="to-prepare-your-cwinapp-derived-class"></a>Per preparare la classe derivata da CWinApp

1. Inizializzare le librerie OLE chiamando `AfxOleInit` nella funzione membro `InitInstance`.

1. Chiamare `CDocTemplate::SetContainerInfo` in `InitInstance` per assegnare le risorse di menu e acceleratore utilizzate quando un elemento incorporato viene attivato sul posto. Per ulteriori informazioni su questo argomento, vedere [Activation](../mfc/activation-cpp.md).

Queste funzionalità vengono fornite automaticamente quando si utilizza la creazione guidata applicazione MFC per creare un'applicazione contenitore. Vedere [creazione di un programma exe MFC](../mfc/reference/mfc-application-wizard.md).

#### <a name="to-prepare-your-view-class"></a>Per preparare la classe di visualizzazione

1. Consente di tenere traccia degli elementi selezionati mantenendo un puntatore o un elenco di puntatori se si supporta la selezione multipla negli elementi selezionati. La funzione `OnDraw` deve creare tutti gli elementi OLE.

1. Eseguire l'override `IsSelected` per verificare se l'elemento passato è attualmente selezionato.

1. Implementare un gestore di messaggi `OnInsertObject` per visualizzare la finestra di dialogo **Inserisci oggetto** .

1. Implementare un gestore di messaggi `OnSetFocus` per trasferire lo stato attivo dalla visualizzazione a un elemento incorporato OLE attivo sul posto.

1. Implementare un gestore di messaggi `OnSize` per informare un elemento incorporato OLE che deve modificare il rettangolo in modo da riflettere la modifica delle dimensioni della visualizzazione che lo contiene.

Poiché l'implementazione di queste funzionalità varia notevolmente da un'applicazione alla successiva, la creazione guidata applicazione fornisce solo un'implementazione di base. Sarà probabilmente necessario personalizzare queste funzioni per far funzionare correttamente l'applicazione. Per un esempio, vedere l'esempio di [contenitore](../overview/visual-cpp-samples.md) .

#### <a name="to-handle-embedded-and-linked-items"></a>Per gestire elementi incorporati e collegati

1. Derivare una classe da [COleClientItem](../mfc/reference/coleclientitem-class.md). Gli oggetti di questa classe rappresentano gli elementi incorporati in o collegati al documento OLE.

1. Eseguire l'override di `OnChange`, `OnChangeItemPosition`e `OnGetItemPosition`. Queste funzioni gestiscono il ridimensionamento, il posizionamento e la modifica di elementi incorporati e collegati.

La creazione guidata applicazione deriverà la classe, ma sarà probabilmente necessario eseguire l'override di `OnChange` e delle altre funzioni elencate nel passaggio 2 della procedura precedente. Le implementazioni di scheletro devono essere personalizzate per la maggior parte delle applicazioni, poiché queste funzioni vengono implementate in modo diverso da un'applicazione a quella successiva. Per esempi, vedere gli esempi MFC [DRAWCLI](../overview/visual-cpp-samples.md) e [container](../overview/visual-cpp-samples.md).

Per supportare OLE, è necessario aggiungere una serie di elementi alla struttura di menu dell'applicazione contenitore. Per altre informazioni, vedere [menu e risorse: aggiunte di contenitori](../mfc/menus-and-resources-container-additions.md).

È anche possibile che si voglia supportare alcune delle funzionalità seguenti nell'applicazione contenitore:

- Attivazione sul posto durante la modifica di un elemento incorporato.

   Per ulteriori informazioni, vedere [Activation](../mfc/activation-cpp.md).

- Creazione di elementi OLE tramite il trascinamento e l'eliminazione di una selezione da un'applicazione server.

   Per altre informazioni, vedere [trascinamento della selezione OLE](../mfc/drag-and-drop-ole.md).

- Collegamenti a oggetti incorporati o applicazioni contenitore/server.

   Per altre informazioni, vedere [contenitori: funzionalità avanzate](../mfc/containers-advanced-features.md).

## <a name="see-also"></a>Vedere anche

[Contenitori](../mfc/containers.md)<br/>
[Contenitori: elementi client](../mfc/containers-client-items.md)
