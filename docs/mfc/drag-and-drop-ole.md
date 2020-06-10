---
title: Trascinamento della selezione OLE
description: Panoramica del trascinamento della selezione OLE di Microsoft Foundation Classes (MFC), come implementare un'origine di rilascio, un obiettivo di rilascio e come personalizzare il trascinamento della selezione.
ms.date: 02/09/2020
helpviewer_keywords:
- OLE server applications [MFC], drag and drop
- drag and drop [MFC]
- OLE applications [MFC], drag and drop
- File Manager drag and drop support [MFC]
- drag and drop [MFC], about OLE drag and drop
- OLE drag and drop [MFC]
ms.assetid: a4595350-ca06-4400-88a1-f0175c76b77b
ms.openlocfilehash: 23680765377d325bdc1f8878daf4d4fc553a1304
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623181"
---
# <a name="ole-drag-and-drop"></a>Trascinamento della selezione OLE

La funzionalità di trascinamento della selezione di OLE è principalmente una scelta rapida per copiare e incollare i dati. Quando si usano gli Appunti per copiare o incollare dati, sono necessari alcuni passaggi. È possibile selezionare i dati e scegliere **taglia** o **copia** dal menu **modifica** . Passare quindi all'app o alla finestra di destinazione e posizionare il cursore nella posizione di destinazione. Infine, scegliere **modifica**  >  **Incolla** dal menu.

La funzionalità di trascinamento della selezione OLE è diversa dal meccanismo di trascinamento della selezione di file Manager. Gestione file è in grado di gestire solo i nomi di file ed è specificamente progettato per passare nomi file alle applicazioni. Il trascinamento della selezione in OLE è molto più generale. Consente di trascinare e rilasciare i dati che possono essere inseriti anche negli Appunti.

Quando si usa il trascinamento della selezione OLE, si rimuovono due passaggi del processo. Si selezionano i dati dalla finestra di origine ("drop source"), quindi si trascina nella destinazione ("drop target"). Per eliminarlo, rilasciare il pulsante del mouse. L'operazione elimina la necessità di menu ed è più veloce della sequenza di copia/incolla. Esiste solo un requisito: sia l'origine di rilascio che la destinazione di rilascio devono essere aperte e almeno parzialmente visibili sullo schermo.

Con il trascinamento della selezione OLE, i dati possono essere trasferiti facilmente da una posizione a un'altra: all'interno di un documento, tra documenti diversi o tra applicazioni. Può essere implementato in un contenitore o in un'applicazione server. Qualsiasi applicazione può essere un'origine di rilascio, un obiettivo di rilascio o entrambi. Se in un'applicazione vengono implementati sia il supporto drop-source che l'obiettivo di rilascio, è possibile trascinare e rilasciare tra le finestre figlio o all'interno di una finestra. Questa funzionalità rende l'applicazione molto più semplice da usare.

Gli articoli [oggetti dati e origini dati (OLE)](data-objects-and-data-sources-ole.md) illustrano come implementare il trasferimento dei dati nelle applicazioni. È inoltre utile esaminare gli esempi OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) e [HIERSVR](../overview/visual-cpp-samples.md).

## <a name="implement-a-drop-source"></a><a name="implement-a-drop-source"></a>Implementare un'origine di rilascio

Per fare in modo che l'applicazione fornisca dati a un'operazione di trascinamento della selezione, è necessario implementare un'origine di rilascio. L'implementazione di base di un'origine di rilascio è relativamente semplice. Il primo passaggio consiste nel determinare quali eventi iniziano un'operazione di trascinamento. Le linee guida consigliate per l'interfaccia utente definiscono l'inizio di un'operazione di trascinamento come quando si verifica un evento **WM_LBUTTONDOWN** in un punto all'interno di alcuni dati selezionati. Gli esempi OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) e [HIERSVR](../overview/visual-cpp-samples.md) seguono queste linee guida.

Se l'applicazione è un contenitore e i dati selezionati sono un oggetto collegato o incorporato di tipo `COleClientItem` , chiamare la relativa `DoDragDrop` funzione membro. In caso contrario, costruire un `COleDataSource` oggetto, inizializzarlo con la selezione e chiamare la funzione membro dell'oggetto origine dati `DoDragDrop` . Se l'applicazione è un server, usare `COleServerItem::DoDragDrop` . Per informazioni sulla personalizzazione del comportamento di trascinamento della selezione standard, vedere la sezione [personalizzare il trascinamento della selezione](#customize-drag-and-drop).

Se `DoDragDrop` restituisce **DROPEFFECT_MOVE**, eliminare immediatamente i dati di origine dal documento di origine. Nessun altro valore restituito da `DoDragDrop` ha alcun effetto su un'origine di rilascio.

Per altre informazioni, vedere [oggetti dati OLE e origini dati: creazione e distruzione](data-objects-and-data-sources-creation-and-destruction.md) e [oggetti dati e origini dati OLE: manipolazione](data-objects-and-data-sources-manipulation.md)\.

## <a name="implement-a-drop-target"></a><a name="implement-a-drop-target"></a>Implementare una destinazione di rilascio

Richiede un po' più di lavoro per implementare un obiettivo di rilascio rispetto a un'origine di rilascio, ma è ancora relativamente semplice.

### <a name="to-implement-an-ole-drop-target"></a>Per implementare una destinazione di rilascio OLE

1. Se non è già presente, aggiungere una chiamata a `AfxOleInit` nella `InitInstance` funzione membro dell'applicazione. Questa chiamata è necessaria per inizializzare le librerie OLE.

1. Aggiungere una variabile membro a ogni visualizzazione nell'applicazione che si vuole essere un obiettivo di rilascio. Questa variabile membro deve essere di tipo `COleDropTarget` o di una classe derivata.

1. Dalla funzione della classe di visualizzazione che gestisce il messaggio di **WM_CREATE** (in genere `OnCreate` ), chiamare la funzione membro della nuova variabile membro `Register` . `Revoke`verrà chiamato automaticamente quando la visualizzazione viene distrutta.

1. Eseguire l'override delle funzioni seguenti. Se si vuole lo stesso comportamento nell'intera applicazione, eseguire l'override di queste funzioni nella classe di visualizzazione. Se si vuole modificare il comportamento in casi isolati o si vuole abilitare l'eliminazione in non `CView` Windows, eseguire l'override di queste funzioni nella `COleDropTarget` classe derivata da.

   | Sostituisci | Per consentire |
   | -------- | -------- |
   | `OnDragEnter` | Elimina le operazioni da eseguire nella finestra. Chiamato quando il cursore entra per la prima volta nella finestra. |
   | `OnDragLeave` | Comportamento speciale quando l'operazione di trascinamento lascia la finestra specificata. |
   | `OnDragOver` | Elimina le operazioni da eseguire nella finestra. Chiamato quando il cursore viene trascinato nella finestra. |
   | `OnDrop` | Gestione dei dati rilasciati nella finestra specificata. |
   | `OnScrollBy` | Comportamento speciale di quando lo scorrimento è necessario nella finestra di destinazione. |

Vedere MAINVIEW. File CPP che fa parte dell'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) per un esempio del funzionamento combinato di queste funzioni.

Per altre informazioni, vedere [oggetti dati OLE e origini dati: creazione e distruzione](data-objects-and-data-sources-creation-and-destruction.md) e [oggetti dati e origini dati OLE: manipolazione](data-objects-and-data-sources-manipulation.md)\.

## <a name="customize-drag-and-drop"></a><a name="customize-drag-and-drop"></a>Personalizzazione del trascinamento della selezione

L'implementazione predefinita della funzionalità di trascinamento della selezione è sufficiente per la maggior parte delle applicazioni. Tuttavia, per alcune applicazioni potrebbe essere necessario modificare questo comportamento standard. In questa sezione vengono illustrati i passaggi necessari per modificare queste impostazioni predefinite. È possibile utilizzare questa tecnica per fare in modo che le applicazioni che non supportano documenti compositi vengano eliminate.

Se si sta personalizzando il comportamento di trascinamento della selezione OLE standard o se si dispone di un'applicazione non OLE, è necessario creare un `COleDataSource` oggetto per contenere i dati. Quando l'utente inizia un'operazione di trascinamento della selezione, il codice deve chiamare la funzione `DoDragDrop` da questo oggetto anziché da altre classi che supportano le operazioni di trascinamento della selezione.

Facoltativamente, è possibile creare un oggetto `COleDropSource` per controllare il rilascio e per eseguire l'override di alcune funzioni a seconda del tipo di comportamento che si desidera modificare. Questo oggetto origine rilascio viene quindi passato a `COleDataSource::DoDragDrop` per modificare il comportamento predefinito di queste funzioni. Queste differenti opzioni offrono una grande flessibilità su come supportare le operazioni di trascinamento nell'applicazione che si sta sviluppando. Per ulteriori informazioni sulle origini dati, vedere l'articolo [oggetti dati e origini dati (OLE)](data-objects-and-data-sources-ole.md).

È possibile eseguire l'override delle seguenti funzioni per personalizzare le operazioni di trascinamento e rilascio:

| Sostituisci | Per personalizzare |
| -------- | ------------ |
| `OnBeginDrag` | Modalità di inizio dell'operazione di trascinamento dopo la chiamata a `DoDragDrop` . |
| `GiveFeedback` | Feedback visivo, come appare il cursore, per risultati di rilascio diversi. |
| `QueryContinueDrag` | Chiusura dell'operazione di trascinamento della selezione. Questa funzione consente di controllare gli stati dei tasti di modifica durante l'operazione di trascinamento. |

## <a name="see-also"></a>Vedere anche

[OLE](ole-in-mfc.md)\
[Oggetti dati OLE e origini dati](data-objects-and-data-sources-ole.md)\
[Oggetti dati e origini dati OLE: creazione e distruzione](data-objects-and-data-sources-creation-and-destruction.md)\
[Oggetti dati e origini dati OLE: manipolazione](data-objects-and-data-sources-manipulation.md)\
[COleClientItem::D oDragDrop](reference/coleclientitem-class.md#dodragdrop)\
[Classe COleDataSource](reference/coledatasource-class.md)\
[COleDataSource::D oDragDrop](reference/coledatasource-class.md#dodragdrop)\
[Classe COleDropSource](reference/coledropsource-class.md)\
[Classe COleDropTarget](reference/coledroptarget-class.md)\
[CView:: OnDragLeave](reference/cview-class.md#ondragleave)
