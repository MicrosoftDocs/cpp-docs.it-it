---
title: Domande frequenti sul contenimento di controlli ATL
ms.date: 11/04/2016
helpviewer_keywords:
- hosting controls using ATL
- ActiveX control containers [C++], ATL control hosting
- ATL, hosting ActiveX controls
- ActiveX controls [C++], hosting
- controls [ATL]
ms.assetid: d4bdfbe0-82ca-4f2f-bb95-cb89bdcc9b53
ms.openlocfilehash: 36ff3381447b46b28908522d65be9f34fe23addf
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317393"
---
# <a name="atl-control-containment-faq"></a>Domande frequenti sul contenimento di controlli ATL

## <a name="which-atl-classes-facilitate-activex-control-containment"></a>Quali classi ATL semplificano il contenimento di controlli ActiveX?

Il codice di hosting dei controlli ATL non richiede l'utilizzo di classi ATL; è possibile creare semplicemente una finestra **"AtlAxWin80"** e utilizzare l'API di hosting dei controlli, se necessario (per ulteriori informazioni, vedere **Che cos'è l'API**di hosting del controllo ATL . Tuttavia, le classi seguenti semplificano l'utilizzo delle funzionalità di contenimento.

|Classe|Descrizione|
|-----------|-----------------|
|[Finestra di comando](../atl/reference/caxwindow-class.md)|Esegue il wrapping di una finestra **"AtlAxWin80",** fornendo metodi per la creazione della finestra, la creazione di un controllo e/o l'associazione di un controllo alla finestra e il recupero di puntatori a interfaccia nell'oggetto host.|
|[CAxWindow2T](../atl/reference/caxwindow2t-class.md)|Esegue il wrapping di una finestra **"AtlAxWinLic80",** fornendo metodi per la creazione della finestra, la creazione di un controllo e/o l'associazione di un controllo concesso in licenza alla finestra e il recupero dei puntatori a interfaccia nell'oggetto host.|
|[CComCompositeControl](../atl/reference/ccomcompositecontrol-class.md)|Funge da classe base per le classi di controlli ActiveX in base a una risorsa finestra di dialogo. Tali controlli possono contenere altri controlli ActiveX.|
|[CAxDialogImpl](../atl/reference/caxdialogimpl-class.md)|Funge da classe base per le classi di finestre di dialogo basate su una risorsa finestra di dialogo. Tali finestre di dialogo possono contenere controlli ActiveX.Such dialogs can contain ActiveX controls.|
|[Finestra di comando CWindow](../atl/reference/cwindow-class.md)|Fornisce un metodo, [GetDlgControl](../atl/reference/cwindow-class.md#getdlgcontrol), che restituirà un puntatore a interfaccia su un controllo, dato l'ID della relativa finestra host. Inoltre, i wrapper API di `CWindow` Windows esposti da in genere semplificano la gestione delle finestre.|

## <a name="what-is-the-atl-control-hosting-api"></a>Che cosa è l'API di hosting di controllo per ATL?

L'API di hosting dei controlli ATL è l'insieme di funzioni che consente a qualsiasi finestra di fungere da contenitore di controlli ActiveX. Queste funzioni possono essere collegate in modo statico o dinamico nel progetto poiché sono disponibili come codice sorgente ed esposte da ATL90.dll. Le funzioni di hosting dei controlli sono elencate nella tabella seguente.

|Funzione|Descrizione|
|--------------|-----------------|
|[AtlAxAttachControl](reference/composite-control-global-functions.md#atlaxattachcontrol)|Crea un oggetto host, lo connette alla finestra fornita, quindi associa un controllo esistente.|
|[AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)|Crea un oggetto host, lo connette alla finestra fornita, quindi carica un controllo.|
|[AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, in modo analogo a [AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol).|
|[AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)|Crea un oggetto host, lo connette alla finestra fornita, quindi carica un controllo (consente anche l'impostazione di event sink).|
|[AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrollicex)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, in modo analogo a [AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic).|
|[AtlAxCreateDialog](reference/composite-control-global-functions.md#atlaxcreatedialog)|Crea una finestra di dialogo non modale da una risorsa finestra di dialogo e restituisce l'handle della finestra.|
|[AtlAxDialogBox](reference/composite-control-global-functions.md#atlaxdialogbox)|Crea una finestra di dialogo modale da una risorsa finestra di dialogo.|
|[AtlAxGetControl](reference/composite-control-global-functions.md#atlaxgetcontrol)|Restituisce il puntatore a interfaccia **IUnknown** del controllo ospitato in una finestra.|
|[AtlAxGetHost](reference/composite-control-global-functions.md#atlaxgethost)|Restituisce il puntatore a interfaccia **IUnknown** dell'oggetto host connesso a una finestra.|
|[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit)|Inizializza il codice che ospita i controlli.|
|[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm)|Annulla l'inizializzazione del codice di hosting dei controlli.|

I `HWND` parametri nelle prime tre funzioni devono essere una finestra esistente di (quasi) qualsiasi tipo. Se si chiama una di queste tre funzioni in modo esplicito (in genere, non sarà necessario), non passare un handle a una finestra che funge già da host (se lo si fa, l'oggetto host esistente non verrà liberato).

Le prime sette funzioni chiamano [AtlAxWinInit in](reference/composite-control-global-functions.md#atlaxwininit) modo implicito.

> [!NOTE]
> L'API di hosting dei controlli costituisce la base del supporto di ATL per il contenimento dei controlli ActiveX. Tuttavia, in genere è poco necessario chiamare direttamente queste funzioni se si sfruttano o si utilizzano appieno le classi wrapper di ATL. Per ulteriori informazioni, vedere [Quali classi ATL facilitano il contenimento dei controlli ActiveX](which-atl-classes-facilitate-activex-control-containment-q.md).

## <a name="what-is-atlaxwin100"></a>Che cos'è AtlAxWin100?

`AtlAxWin100`è il nome di una classe finestra che consente di fornire la funzionalità di hosting dei controlli ATL. Quando si crea un'istanza di questa classe, la routine della finestra utilizzerà automaticamente l'API di hosting dei controlli per creare un oggetto host associato alla finestra e caricarlo con il controllo specificato come titolo della finestra.

## <a name="when-do-i-need-to-call-atlaxwininit"></a>Quando è necessario chiamare AtlAxWinInit?

[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) registra la classe finestra **"AtlAxWin80"** (più un paio di messaggi di finestra personalizzati) in modo che questa funzione deve essere chiamata prima di tentare di creare una finestra host. Tuttavia, non è sempre necessario chiamare questa funzione in modo esplicito, poiché le API di hosting (e le classi che le utilizzano) spesso chiamano questa funzione per l'utente. Non c'è nulla di male nel chiamare questa funzione più di una volta.

## <a name="what-is-a-host-object"></a>Che cos'è un oggetto host?

Un oggetto host è un oggetto COM che rappresenta il contenitore di controlli ActiveX fornito da ATL per una determinata finestra. L'oggetto host sottoclassa la finestra contenitore in modo che possa riflettere i messaggi al controllo, fornisce le interfacce del contenitore necessarie per essere utilizzato dal controllo ed espone le interfacce [IAxWinHostWindow](../atl/reference/iaxwinhostwindow-interface.md) e [IAxWinAmbientDispatch](../atl/reference/iaxwinambientdispatch-interface.md) per consentire di configurare l'ambiente del controllo.

È possibile utilizzare l'oggetto host per impostare le proprietà di ambiente del contenitore.

## <a name="can-i-host-more-than-one-control-in-a-single-window"></a>Una finestra singola può ospitare più di un controllo?

Non è possibile ospitare più di un controllo in una singola finestra host ATL. Ogni finestra host è progettata per contenere esattamente un controllo alla volta (questo consente un semplice meccanismo per la gestione della reflection dei messaggi e le proprietà di ambiente per controllo). Tuttavia, se è necessario che l'utente visualizzi più controlli in una singola finestra, è semplice creare più finestre host come elementi figlio di tale finestra.

## <a name="can-i-reuse-a-host-window"></a>È possibile riusare una finestra host?

Non è consigliabile riutilizzare le finestre host. Per garantire l'affidabilità del codice, è necessario collegare la durata della finestra host alla durata di un singolo controllo.

## <a name="when-do-i-need-to-call-atlaxwinterm"></a>Quando è necessario chiamare AtlAxWinTerm?

[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm) annulla la registrazione della classe finestra **"AtlAxWin80".** È necessario chiamare questa funzione (se non è più necessario creare finestre host) dopo che tutte le finestre host esistenti sono state distrutte. Se non si chiama questa funzione, la classe della finestra verrà annullata automaticamente al termine del processo.

## <a name="hosting-activex-controls-using-atl-axhost"></a>Hosting di controlli ActiveX tramite AXHost di ATL

Nell'esempio di questa sezione viene illustrato come creare AXHost e come ospitare un controllo ActiveX utilizzando varie funzioni ATL. Viene inoltre illustrato come accedere agli eventi di controllo e sink (tramite [IDispEventImpl](../atl/reference/idispeventimpl-class.md)) dal controllo ospitato. L'esempio ospita il controllo Calendar in una finestra principale o in una finestra figlio.

Si noti `USE_METHOD` la definizione del simbolo. È possibile modificare il valore di questo simbolo in modo che vari tra 1 e 8. Il valore del simbolo determina la modalità di creazione del controllo:

- Per i valori pari `USE_METHOD`di , la chiamata per creare l'host sottoclassi di una finestra e la converte in un host di controllo. Per i valori dispari, il codice crea una finestra figlio che funge da host.

- Per i `USE_METHOD` valori compresi tra 1 e 4, l'accesso al controllo e l'affondamento degli eventi vengono eseguiti nella chiamata che crea anche l'host. I valori compresi tra 5 e 8 eseguono una query sull'host per le interfacce e univano il sink.

Di seguito è disponibile un riepilogo:

|USE_METHOD|Host|Controllare l'accesso e l'affondamento degli eventiControl access and event sinking|Funzione dimostrata|
|-----------------|----------|--------------------------------------|---------------------------|
|1|Finestra figlio|Un passo|CreateControlLicEx (informazioni in stato di opzione in questo stato)|
|2|Finestra principale|Un passo|AtlAxCreateControlLicEx|
|3|Finestra figlio|Un passo|CreateControlEx (informazioni in stato di lavoro)|
|4|Finestra principale|Un passo|AtlAxCreateControlEx|
|5|Finestra figlio|Passaggi multipli|CreateControlLic|
|6|Finestra principale|Passaggi multipli|AtlAxCreateControlLic|
|7|Finestra figlio|Passaggi multipli|CreateControl|
|8|Finestra principale|Passaggi multipli|AtlAxCreateControl|

[!code-cpp[NVC_ATL_AxHost#1](../atl/codesnippet/cpp/hosting-activex-controls-using-atl-axhost_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Domande frequenti sul contenimento di controlli](../atl/atl-control-containment-faq.md)<br/>
[AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)<br/>
[AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)<br/>
[AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)<br/>
[AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)<br/>
[Classe CAxWindow2T](../atl/reference/caxwindow2t-class.md)<br/>
[Interfaccia IAxWinHostWindowLic](../atl/reference/iaxwinhostwindowlic-interface.md)
