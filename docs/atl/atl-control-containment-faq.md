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
ms.openlocfilehash: ef175ff83fd641852b27fea8408f1bb7de69f839
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630811"
---
# <a name="atl-control-containment-faq"></a>Domande frequenti sul contenimento di controlli ATL

## <a name="which-atl-classes-facilitate-activex-control-containment"></a>Quali classi ATL semplificano il contenimento dei controlli ActiveX?

Codice di hosting di controlli ATL non richiede di usare tutte le classi ATL; è possibile creare semplicemente un' **"Atlaxwinlic80"** finestra e usare l'API di hosting di controllo se necessario (per altre informazioni, vedere **qual è l'API di Hosting del controllo ATL**. Tuttavia, le classi seguenti rendono le funzionalità di contenimento più facile da usare.

|Classe|Descrizione|
|-----------|-----------------|
|[CAxWindow](../atl/reference/caxwindow-class.md)|Esegue il wrapping di un' **"Atlaxwinlic80"** finestra, che fornisce metodi per la creazione della finestra, la creazione di un controllo e/o il collegamento di un controllo alla finestra e il recupero di puntatori a interfaccia per l'oggetto host.|
|[CAxWindow2T](../atl/reference/caxwindow2t-class.md)|Esegue il wrapping di un' **"Atlaxwin80"** finestra, che fornisce metodi per la creazione della finestra, la creazione di un controllo e/o associare un controllo con licenza per la finestra e il recupero di puntatori a interfaccia per l'oggetto host.|
|[CComCompositeControl](../atl/reference/ccomcompositecontrol-class.md)|Funge da classe base per classi di controlli ActiveX basati su una risorsa finestra di dialogo. Tali controlli possono contenere altri controlli ActiveX.|
|[CAxDialogImpl](../atl/reference/caxdialogimpl-class.md)|Funge da classe base per classi di finestre di dialogo basata su una risorsa finestra di dialogo. Tali finestre di dialogo può contenere i controlli ActiveX.|
|[CWindow](../atl/reference/cwindow-class.md)|Fornisce un metodo, [GetDlgControl](../atl/reference/cwindow-class.md#getdlgcontrol), che restituisce un puntatore a interfaccia su un controllo, l'ID della finestra host specificato. Inoltre, i wrapper di API Windows esposte da `CWindow` generalmente semplificare la gestione di finestra.|

## <a name="what-is-the-atl-control-hosting-api"></a>Che cos'è la libreria ATL API di Hosting di controllo?

ATL hosting dei controlli API è il set di funzioni che consente a qualsiasi finestra di agire come un contenitore di controlli ActiveX. Queste funzioni possono essere staticamente o dinamicamente collegato all'interno del progetto perché sono disponibili come codice sorgente ed esposte dal ATL90. Nella tabella seguente sono elencate le funzioni di hosting di controlli.

|Funzione|Descrizione|
|--------------|-----------------|
|[AtlAxAttachControl](reference/composite-control-global-functions.md#atlaxattachcontrol)|Crea un oggetto host, connetterla alla finestra fornita, quindi associa un controllo esistente.|
|[AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)|Crea un oggetto host, connetterla alla finestra fornita, quindi viene caricato un controllo.|
|[AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, simile a [AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol).|
|[AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)|Crea un oggetto host, connetterla alla finestra fornita, quindi viene caricato un controllo (consente inoltre di sink di evento per essere configurato).|
|[AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrollicex)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, simile a [AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic).|
|[AtlAxCreateDialog](reference/composite-control-global-functions.md#atlaxcreatedialog)|Crea una finestra di dialogo non modale da una risorsa finestra di dialogo e restituisce l'handle della finestra.|
|[AtlAxDialogBox](reference/composite-control-global-functions.md#atlaxdialogbox)|Crea una finestra di dialogo modale da una risorsa finestra di dialogo.|
|[AtlAxGetControl](reference/composite-control-global-functions.md#atlaxgetcontrol)|Restituisce il **IUnknown** puntatore all'interfaccia del controllo ospitato in una finestra.|
|[AtlAxGetHost](reference/composite-control-global-functions.md#atlaxgethost)|Restituisce il **IUnknown** puntatore all'interfaccia dell'oggetto host connesso a una finestra.|
|[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit)|Inizializza il codice di hosting di controlli.|
|[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm)|Non inizializza il codice di hosting di controlli.|

Il `HWND` parametri nelle prime tre funzioni devono essere una finestra esistente di (quasi) tutti i tipi. Se si chiama una di queste tre funzioni in modo esplicito (in genere, non devi), non passare un handle a una finestra che funge già da un host (se esegue l'operazione, l'oggetto host esistenti non verranno liberata).

Le prime sette funzioni chiamano [AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) in modo implicito.

> [!NOTE]
>  L'API di hosting di controlli costituisce la base del supporto ATL per contenimento dei controlli ActiveX. Tuttavia, è in genere necessario chiamare direttamente queste funzioni, se è possibile sfruttare o le funzionalità complete di classi wrapper ATL. Per altre informazioni, vedere [cui classi facilitare ActiveX contenimento di controlli ATL](which-atl-classes-facilitate-activex-control-containment-q.md).

## <a name="what-is-atlaxwin100"></a>Che cos'è AtlAxWin100?

`AtlAxWin100` è il nome di una classe della finestra che consente di fornire funzionalità di hosting di controlli ATL. Quando si crea un'istanza di questa classe, la procedura della finestra utilizzeranno automaticamente l'API di hosting di controlli per creare un oggetto host associato alla finestra e caricarla con il controllo che si specifica come il titolo della finestra.

## <a name="when-do-i-need-to-call-atlaxwininit"></a>Quando è necessario chiamare AtlAxWinInit?

[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) registra il **"Atlaxwinlic80"** classe di finestra (oltre a una coppia di messaggi di finestra personalizzati) in modo che questa funzione deve essere chiamata prima di provare a creare una finestra host. Tuttavia, non è sempre necessario chiamare questa funzione in modo esplicito, perché l'hosting di API (e le classi che li utilizzano) spesso chiamare questa funzione per l'utente. È possibile chiamare questa funzione più volte.

## <a name="what-is-a-host-object"></a>Che cos'è un oggetto Host?

Un oggetto host è un oggetto COM che rappresenta il contenitore di controlli ActiveX fornito da ATL per una particolare finestra. L'oggetto host sottoclassi della finestra del contenitore in modo che può riflettere i messaggi al controllo, fornisce le interfacce di contenitore necessarie per essere utilizzato dal controllo e ne espone il [IAxWinHostWindow](../atl/reference/iaxwinhostwindow-interface.md) e [ IAxWinAmbientDispatch](../atl/reference/iaxwinambientdispatch-interface.md) interfacce che consentono di configurare l'ambiente del controllo.

È possibile usare l'oggetto host per impostare le proprietà di ambiente del contenitore.

## <a name="can-i-host-more-than-one-control-in-a-single-window"></a>È possibile ospitare più di un controllo in una singola finestra?

Non è possibile ospitare più di un controllo in una singola finestra host ATL. Ogni finestra host è progettato per contenere esattamente un controllo alla volta (in questo modo un semplice meccanismo per la gestione di messaggi reflection e al controllo della proprietà di ambiente). Tuttavia, se è necessario l'utente visualizzi più controlli in una singola finestra, è sufficiente per creare più finestre host come elementi figlio di tale finestra.

## <a name="can-i-reuse-a-host-window"></a>È possibile riusare una finestra Host?

Non è consigliabile riutilizzare windows dell'host. Per garantire l'affidabilità del codice, è necessario collegare la durata della finestra host per la durata di un singolo controllo.

## <a name="when-do-i-need-to-call-atlaxwinterm"></a>Quando è necessario chiamare AtlAxWinTerm?

[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm) Annulla la registrazione di **"Atlaxwinlic80"** classe della finestra. È consigliabile chiamare questa funzione (se è non è più necessario creare host di windows) dopo che tutte le finestre host esistenti sono stati eliminati definitivamente. Se non si chiama questa funzione, la classe della finestra verrà annullata la registrazione automaticamente al termine del processo.

## <a name="hosting-activex-controls-using-atl-axhost"></a>Hosting di controlli ActiveX tramite AXHost di ATL

L'esempio in questa sezione viene illustrato come creare AXHost e su come ospitare un controllo ActiveX utilizzando varie funzioni ATL. Viene inoltre illustrato come accedere agli eventi di controllo e il sink (tramite [IDispEventImpl](../atl/reference/idispeventimpl-class.md)) dal controllo ospitato. L'esempio ospita il controllo di calendario in una finestra principale o in una finestra figlio.

Si noti che la definizione del `USE_METHOD` simbolo. È possibile modificare il valore di questo simbolo deve essere compreso tra 1 e 8. Il valore del simbolo determina come verrà creato il controllo:

- Per i valori dispari di `USE_METHOD`, la chiamata per creare una finestra di sottoclassi di host e lo converte in un host del controllo. Per i valori dispari, il codice crea una finestra figlio che funge da host.

- Per i valori di `USE_METHOD` compreso tra 1 e 4, accedere al controllo e il sink degli eventi vengono eseguite nella chiamata che crea anche l'host. Valori compresi tra 5 e 8 dell'host per le interfacce di query e associare il sink.

Di seguito è disponibile un riepilogo:

|USE_METHOD|Host|Controllare l'accesso e il sink di evento|Dimostrato (funzione)|
|-----------------|----------|--------------------------------------|---------------------------|
|1|Finestra figlio|Un unico passaggio|CreateControlLicEx|
|2|Finestra principale|Un unico passaggio|AtlAxCreateControlLicEx|
|3|Finestra figlio|Un unico passaggio|CreateControlEx|
|4|Finestra principale|Un unico passaggio|AtlAxCreateControlEx|
|5|Finestra figlio|Più passaggi|CreateControlLic|
|6|Finestra principale|Più passaggi|AtlAxCreateControlLic|
|7|Finestra figlio|Più passaggi|CreateControl|
|8|Finestra principale|Più passaggi|AtlAxCreateControl|

[!code-cpp[NVC_ATL_AxHost#1](../atl/codesnippet/cpp/hosting-activex-controls-using-atl-axhost_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)<br/>
[AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)<br/>
[AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)<br/>
[AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)<br/>
[AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)<br/>
[Classe CAxWindow2T](../atl/reference/caxwindow2t-class.md)<br/>
[Interfaccia IAxWinHostWindowLic](../atl/reference/iaxwinhostwindowlic-interface.md)