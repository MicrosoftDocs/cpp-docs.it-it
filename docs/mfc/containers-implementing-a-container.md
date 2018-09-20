---
title: 'Contenitori: Implementazione di un contenitore | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- applications [OLE], OLE container
- OLE containers [MFC], implementing
ms.assetid: af1e2079-619a-4eac-9327-985ad875823a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 46fa8b115dd01a9ee11442a0701cd719cc6d389e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46394361"
---
# <a name="containers-implementing-a-container"></a>Contenitori: implementazione di un contenitore

Questo articolo riepiloga le procedure per l'implementazione di un contenitore e si fa riferimento ad altri articoli che forniscono che ulteriori spiegazioni sull'implementazione di contenitori. Elenca anche alcune funzionalità facoltative OLE che può essere utile implementare e gli articoli che descrivono queste funzionalità.

#### <a name="to-prepare-your-cwinapp-derived-class"></a>Per preparare la classe derivata da CWinApp

1. Inizializzare le librerie OLE, chiamare `AfxOleInit` nella `InitInstance` funzione membro.

1. Chiamare `CDocTemplate::SetContainerInfo` in `InitInstance` per assegnare il menu di scelta e tasti di scelta rapida delle risorse usate quando un elemento incorporato è attivato sul posto. Per altre informazioni su questo argomento, vedere [attivazione](../mfc/activation-cpp.md).

Queste funzionalità sono fornite automaticamente quando si usa la creazione guidata applicazione MFC per creare un'applicazione contenitore. Visualizzare [creazione di un programma EXE MFC](../mfc/reference/mfc-application-wizard.md).

#### <a name="to-prepare-your-view-class"></a>Per preparare la classe di visualizzazione

1. Tenere traccia degli elementi selezionati tramite la gestione di un puntatore o un elenco di puntatori se si supporta la selezione multipla, per gli elementi selezionati. Il `OnDraw` funzione deve creare tutti gli elementi OLE.

1. Eseguire l'override `IsSelected` per verificare se l'elemento passato ad esso è attualmente selezionato.

1. Implementare un' `OnInsertObject` gestore di messaggi per visualizzare il **Inserisci oggetto** nella finestra di dialogo.

1. Implementare un `OnSetFocus` messaggio gestore per trasferire lo stato attivo dalla visualizzazione a un oggetto attivo sul posto OLE elemento incorporato.

1. Implementare un `OnSize` gestore messaggio per informare un oggetto OLE elemento incorporato che è necessario modificare il rettangolo in modo da riflettere la modifica delle dimensioni di visualizzazione che lo contiene.

Poiché l'implementazione di queste funzionalità varia notevolmente da un'applicazione al successivo, la creazione guidata applicazione fornisce solo un'implementazione di base. Sarà probabilmente necessario personalizzare queste funzioni per ottenere l'applicazione funzioni correttamente. Per un esempio di questo oggetto, vedere la [contenitore](../visual-cpp-samples.md) esempio.

#### <a name="to-handle-embedded-and-linked-items"></a>Gestire gli elementi collegati e incorporati

1. Derivare una classe dalla classe [COleClientItem](../mfc/reference/coleclientitem-class.md). Gli oggetti di questa classe rappresentano gli elementi che sono stati incorporati in o collegati al documento OLE.

1. Eseguire l'override `OnChange`, `OnChangeItemPosition`, e `OnGetItemPosition`. Queste funzioni gestiscono il ridimensionamento, posizionamento e la modifica di elementi collegati e incorporati.

La creazione guidata applicazione deriverà la classe per l'utente, ma sarà probabilmente necessario eseguire l'override `OnChange` e altre funzioni elencate nel passaggio 2 della procedura precedente. Le implementazioni di base devono essere personalizzati per la maggior parte delle applicazioni, poiché queste funzioni vengono implementate in modo diverso da un'applicazione a quella successiva. Per esempi, vedere gli esempi MFC [DRAWCLI](../visual-cpp-samples.md) e [contenitore](../visual-cpp-samples.md).

È necessario aggiungere un numero di elementi alla struttura di menu dell'applicazione contenitore per il supporto OLE. Per altre informazioni, vedere [menu e risorse: aggiunte di contenitori](../mfc/menus-and-resources-container-additions.md).

È anche possibile supportare alcune delle funzionalità seguente nell'applicazione contenitore:

- Attivazione sul posto durante la modifica di un elemento incorporato.

     Per altre informazioni, vedere [attivazione](../mfc/activation-cpp.md).

- Creazione di elementi OLE trascinando e rilasciando una selezione da un'applicazione server.

     Per altre informazioni, vedere [Drag and Drop (OLE)](../mfc/drag-and-drop-ole.md).

- Include collegamenti a oggetti incorporati o le applicazioni contenitore/server di combinazione.

     Per altre informazioni, vedere [contenitori: funzionalità avanzate](../mfc/containers-advanced-features.md).

## <a name="see-also"></a>Vedere anche

[Contenitori](../mfc/containers.md)<br/>
[Contenitori: elementi client](../mfc/containers-client-items.md)

