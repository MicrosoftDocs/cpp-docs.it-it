---
description: 'Altre informazioni su: documenti attivi'
title: Documenti attivi
ms.date: 11/04/2016
helpviewer_keywords:
- active documents [MFC]
- active documents [MFC], requirements
- view objects [MFC], requirements
- OLE [MFC], active documents
- views [MFC], active documents
- active documents [MFC], views
ms.assetid: 1378f18e-aaa6-420b-8501-4b974905baa0
ms.openlocfilehash: cae0eda775670867d5e36b4f2b9ec895a5dc3eb7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150306"
---
# <a name="active-documents"></a>Documenti attivi

I documenti attivi estendono la tecnologia dei documenti compositi di OLE. Queste estensioni vengono fornite sotto forma di interfacce aggiuntive che gestiscono le visualizzazioni, in modo che gli oggetti possano essere eseguiti all'interno di contenitori ma mantenere il controllo sulla relativa visualizzazione e sulle funzioni di stampa. Questo processo consente di visualizzare i documenti sia in frame esterni (come il Raccoglitore Microsoft Office o Microsoft Internet Explorer) sia nei frame nativi (come i viewport del prodotto).

In questa sezione vengono descritti i [requisiti funzionali per i documenti attivi](#requirements_for_active_documents). Il documento attivo possiede un set di dati e ha accesso all'archivio in cui i dati possono essere salvati e recuperati. Consente di creare e gestire una o più visualizzazioni sui dati. Oltre a supportare l'incorporamento standard e le interfacce di attivazione sul posto dei documenti OLE, il documento attivo può creare visualizzazioni attraverso `IOleDocument`. Tramite questa interfaccia, il contenitore può chiedere di creare (ed eventualmente enumerare) le visualizzazioni che il documento attivo può visualizzare. Tramite questa interfaccia, il documento attivo può inoltre fornire informazioni varie su se stesso, come ad esempio se supporta o meno più visualizzazioni o rettangoli complessi.

Di seguito è riportata l' `IOleDocument` interfaccia. Si noti che l' `IEnumOleDocumentViews` interfaccia è un enumeratore OLE standard per i `IOleDocumentView*` tipi.

```
interface IOleDocument : IUnknown
    {
    HRESULT CreateView(
        [in] IOleInPlaceSite *pIPSite,
        [in] IStream *pstm,
        [in] DWORD dwReserved,
        [out] IOleDocumentView **ppView);

    HRESULT GetDocMiscStatus([out] DWORD *pdwStatus);

    HRESULT EnumViews(
        [out] IEnumOleDocumentViews **ppEnum,
        [out] IOleDocumentView **ppView);
    }
```

Ogni documento attivo deve disporre di un provider di visualizzazione del frame con questa interfaccia. Se il documento non è incorporato all'interno di un contenitore, il server di documenti attivi deve fornire il frame di visualizzazione. Tuttavia, quando il documento attivo viene incorporato in un contenitore di documenti attivi, il contenitore fornisce il frame di visualizzazione.

Un documento attivo può creare uno o più tipi di [visualizzazioni](#requirements_for_view_objects) dei dati, ad esempio normale, struttura, layout di pagina e così via. Le visualizzazioni agiscono da filtri tramite i quali è possibile vedere i dati. Anche se il documento dispone di un solo tipo di visualizzazione, è comunque possibile supportare più visualizzazioni come mezzo per supportare le nuove funzionalità della finestra, ad esempio il **nuovo** elemento della finestra nel menu **finestra** delle applicazioni di Office.

## <a name="requirements-for-active-documents"></a><a name="requirements_for_active_documents"></a> Requisiti per i documenti attivi

Un documento attivo che può essere visualizzato in un contenitore di documenti attivi deve:

- Utilizzare i file compositi OLE come relativo meccanismo di archiviazione implementando `IPersistStorage`.

- Supportano le funzionalità di incorporamento di base dei documenti OLE, inclusa la **creazione da file**. Ciò richiede le interfacce `IPersistFile`, `IOleObject` e `IDataObject`.

- Supportare una o più visualizzazioni, ognuna delle quali in grado di attivarsi sul posto. Ovvero le visualizzazioni devono supportare l'interfaccia, nonché `IOleDocumentView` le interfacce `IOleInPlaceObject` e `IOleInPlaceActiveObject` (usando le `IOleInPlaceSite` interfacce e del contenitore `IOleInPlaceFrame` ).

- Supportare le interfacce `IOleDocument`, `IOleCommandTarget` e `IPrint` del documento attivo standard.

La conoscenza di come e quando utilizzare le interfacce di contenitore è implicita in questi requisiti.

## <a name="requirements-for-view-objects"></a><a name="requirements_for_view_objects"></a> Requisiti per oggetti visualizzazione

Un documento attivo può creare uno o più visualizzazioni dei dati. Dal punto di vista funzionale, queste visualizzazioni sono come le porte in un particolare metodo per la visualizzazione dei dati. Se un documento attivo supporta solo una visualizzazione, il documento attivo e la singola visualizzazione possono essere implementati utilizzando un'unica classe. `IOleDocument::CreateView` Restituisce il puntatore a interfaccia del medesimo oggetto `IOleDocumentView` .

Per essere rappresentato in un contenitore di documenti attivi, un componente di visualizzazione deve supportare `IOleInPlaceObject` e, `IOleInPlaceActiveObject` oltre a `IOleDocumentView` :

```
interface IOleDocumentView : IUnknown
    {
    HRESULT SetInPlaceSite([in] IOleInPlaceSite *pIPSite);
    HRESULT GetInPlaceSite([out] IOleInPlaceSite **ppIPSite);
    HRESULT GetDocument([out] IUnknown **ppunk);
    [input_sync] HRESULT SetRect([in] LPRECT prcView);
    HRESULT GetRect([in] LPRECT prcView);
    [input_sync] HRESULT SetRectComplex(
        [in] LPRECT prcView,
        [in] LPRECT prcHScroll,
        [in] LPRECT prcVScroll,
        [in] LPRECT prcSizeBox);
    HRESULT Show([in] BOOL fShow);
    HRESULT UIActivate([in] BOOL fUIActivate);
    HRESULT Open(void);
    HRESULT CloseView([in] DWORD dwReserved);
    HRESULT SaveViewState([in] IStream *pstm);
    HRESULT ApplyViewState([in] IStream *pstm);
    HRESULT Clone(
        [in] IOleInPlaceSite *pIPSiteNew,
        [out] IOleDocumentView **ppViewNew);
    }
```

Ogni visualizzazione dispone di un sito di visualizzazione associato, che incapsula il frame di visualizzazione e la porta di visualizzazione (HWND e un'area rettangolare in tale finestra). Il sito espone questa funzionalità tramite l' `IOleInPlaceSite` interfaccia standard. Notare che è possibile avere più di una porta di visualizzazione in un singolo elemento HWND.

In genere, ogni tipo di visualizzazione dispone di una rappresentazione stampata diversa. Pertanto le visualizzazioni e i siti di visualizzazione corrispondenti devono implementare interfacce di stampa se `IPrint` e `IContinueCallback`, rispettivamente. Il frame di visualizzazione deve negoziare con il provider di visualizzazione tramite all' `IPrint` inizio della stampa, in modo che le intestazioni, i piè di pagina, i margini e gli elementi correlati vengano stampati correttamente. Il provider di visualizzazione notifica al frame degli eventi relativi alla stampa attraverso `IContinueCallback`. Per ulteriori informazioni sull'utilizzo di queste interfacce, vedere la pagina relativa alla [stampa a livello di codice](programmatic-printing.md).

Notare che se un documento attivo supporta solo una visualizzazione, il documento attivo e la singola visualizzazione possono essere implementati utilizzando un'unica classe concreta. `IOleDocument::CreateView` restituisce semplicemente il puntatore di interfaccia del medesimo oggetto `IOleDocumentView` . In poche parole, non è necessario che esistano due istanze di oggetti distinte quando è necessaria una sola visualizzazione.

Un oggetto visualizzazione può inoltre essere una destinazione di comando. Implementando `IOleCommandTarget` una vista è possibile ricevere comandi che provengono dall'interfaccia utente del contenitore (ad esempio **nuovo**, **Apri**, **Salva con nome**, **stampa** dal menu **file** e **copia**, **Incolla**, **Annulla** dal menu **modifica** ). Per ulteriori informazioni, vedere [gestione dei messaggi e destinazioni dei comandi](message-handling-and-command-targets.md).

## <a name="see-also"></a>Vedi anche

[Contenimento del documento attivo](active-document-containment.md)
