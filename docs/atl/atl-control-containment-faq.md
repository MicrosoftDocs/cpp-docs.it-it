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
ms.openlocfilehash: 693617589f157d352972485396777cec587a5b8f
ms.sourcegitcommit: d9c94dcabd94537e304be0261b3263c2071b437b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2020
ms.locfileid: "91352700"
---
# <a name="atl-control-containment-faq"></a>Domande frequenti sul contenimento di controlli ATL

## <a name="which-atl-classes-facilitate-activex-control-containment"></a>Quali classi ATL semplificano il contenimento di controlli ActiveX?

Il codice di hosting del controllo ATL non richiede l'utilizzo di alcuna classe ATL; Se necessario, è possibile creare semplicemente una finestra **"AtlAxWinLic80"** e usare l'API di hosting del controllo (per altre informazioni, vedere **che cos'è l'API di hosting del controllo ATL**). Tuttavia, le classi seguenti rendono più semplice l'uso delle funzionalità di contenimento.

|Classe|Descrizione|
|-----------|-----------------|
|[CAxWindow](../atl/reference/caxwindow-class.md)|Esegue il wrapping di una finestra **"AtlAxWinLic80"** , fornendo metodi per la creazione della finestra, la creazione di un controllo e/o la connessione di un controllo alla finestra e il recupero dei puntatori di interfaccia sull'oggetto host.|
|[CAxWindow2T](../atl/reference/caxwindow2t-class.md)|Esegue il wrapping di una finestra **"AtlAxWinLic80"** , fornendo metodi per la creazione della finestra, la creazione di un controllo e/o l'associazione di un controllo concesso in licenza alla finestra e il recupero dei puntatori di interfaccia sull'oggetto host.|
|[CComCompositeControl](../atl/reference/ccomcompositecontrol-class.md)|Funge da classe base per le classi di controlli ActiveX basate su una risorsa della finestra di dialogo. Tali controlli possono contenere altri controlli ActiveX.|
|[CAxDialogImpl](../atl/reference/caxdialogimpl-class.md)|Funge da classe base per le classi di finestre di dialogo basate su una risorsa della finestra di dialogo. Tali finestre di dialogo possono contenere controlli ActiveX.|
|[CWindow](../atl/reference/cwindow-class.md)|Fornisce un metodo, [GetDlgControl](../atl/reference/cwindow-class.md#getdlgcontrol), che restituirà un puntatore a interfaccia su un controllo, in base all'ID della relativa finestra host. Inoltre, i wrapper dell'API Windows esposti da `CWindow` rendono più semplice la gestione delle finestre.|

## <a name="what-is-the-atl-control-hosting-api"></a>Che cosa è l'API di hosting di controllo per ATL?

L'API di hosting del controllo ATL è il set di funzioni che consente a qualsiasi finestra di agire come contenitore di controlli ActiveX. Queste funzioni possono essere collegate in modo statico o dinamico nel progetto perché sono disponibili come codice sorgente ed esposte da ATL90.dll. Le funzioni di hosting del controllo sono elencate nella tabella seguente.

|Funzione|Descrizione|
|--------------|-----------------|
|[AtlAxAttachControl](reference/composite-control-global-functions.md#atlaxattachcontrol)|Crea un oggetto host, lo connette alla finestra fornita, quindi collega un controllo esistente.|
|[AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)|Crea un oggetto host, lo connette alla finestra fornita, quindi carica un controllo.|
|[AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, in modo analogo a [AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol).|
|[AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)|Crea un oggetto host, lo connette alla finestra fornita, quindi carica un controllo (consente anche la configurazione di sink di evento).|
|[AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrollicex)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, in modo analogo a [AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic).|
|[AtlAxCreateDialog](reference/composite-control-global-functions.md#atlaxcreatedialog)|Crea una finestra di dialogo non modale da una risorsa finestra di dialogo e restituisce l'handle della finestra.|
|[AtlAxDialogBox](reference/composite-control-global-functions.md#atlaxdialogbox)|Crea una finestra di dialogo modale da una risorsa della finestra di dialogo.|
|[AtlAxGetControl](reference/composite-control-global-functions.md#atlaxgetcontrol)|Restituisce il puntatore all'interfaccia **IUnknown** del controllo ospitato in una finestra.|
|[AtlAxGetHost](reference/composite-control-global-functions.md#atlaxgethost)|Restituisce il puntatore all'interfaccia **IUnknown** dell'oggetto host connesso a una finestra.|
|[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit)|Inizializza il codice di hosting del controllo.|
|[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm)|Non inizializza il codice di hosting del controllo.|

I `HWND` parametri nelle prime tre funzioni devono essere una finestra esistente di (quasi) qualsiasi tipo. Se si chiama una di queste tre funzioni in modo esplicito (in genere non è necessario), non passare un handle a una finestra che funge già da host. in tal caso, l'oggetto host esistente non verrà liberato.

Le prime sette funzioni chiamano [AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) in modo implicito.

> [!NOTE]
> L'API di hosting del controllo costituisce la base del supporto ATL per il contenimento dei controlli ActiveX. Tuttavia, in genere non è necessario chiamare queste funzioni direttamente se si sfrutta o si utilizza completamente le classi wrapper di ATL. Per ulteriori informazioni, vedere [le classi ATL che facilitano il contenimento dei controlli ActiveX](#which-atl-classes-facilitate-activex-control-containment).

## <a name="what-is-atlaxwin100"></a>Che cos'è AtlAxWin100?

`AtlAxWin100` è il nome di una classe di finestra che consente di fornire la funzionalità di hosting dei controlli ATL. Quando si crea un'istanza di questa classe, la routine della finestra utilizzerà automaticamente l'API di hosting del controllo per creare un oggetto host associato alla finestra e caricarlo con il controllo specificato come titolo della finestra.

## <a name="when-do-i-need-to-call-atlaxwininit"></a>Quando è necessario chiamare AtlAxWinInit?

[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) registra la classe della finestra **"AtlAxWinLic80"** (oltre a un paio di messaggi finestra personalizzati), quindi questa funzione deve essere chiamata prima di provare a creare una finestra host. Tuttavia, non è sempre necessario chiamare questa funzione in modo esplicito, poiché le API di hosting (e le classi che li usano) spesso chiamano questa funzione. Non si verificano problemi durante la chiamata di questa funzione più di una volta.

## <a name="what-is-a-host-object"></a>Che cos'è un oggetto host?

Un oggetto host è un oggetto COM che rappresenta il contenitore di controlli ActiveX fornito da ATL per una particolare finestra. L'oggetto host esegue la sottoclasse della finestra del contenitore in modo che possa riflettere i messaggi al controllo, fornisce le interfacce del contenitore necessarie per l'utilizzo da parte del controllo ed espone le interfacce [IAxWinHostWindow](../atl/reference/iaxwinhostwindow-interface.md) e [IAxWinAmbientDispatch](../atl/reference/iaxwinambientdispatch-interface.md) per consentire la configurazione dell'ambiente del controllo.

È possibile utilizzare l'oggetto host per impostare le proprietà di ambiente del contenitore.

## <a name="can-i-host-more-than-one-control-in-a-single-window"></a>Una finestra singola può ospitare più di un controllo?

Non è possibile ospitare più di un controllo in una singola finestra host ATL. Ogni finestra host è progettata per contenere esattamente un controllo alla volta (questo consente un meccanismo semplice per la gestione della reflection dei messaggi e delle proprietà di ambiente per controllo). Tuttavia, se è necessario che l'utente visualizzi più controlli in un'unica finestra, è molto semplice creare più finestre host come elementi figlio di tale finestra.

## <a name="can-i-reuse-a-host-window"></a>È possibile riusare una finestra host?

Non è consigliabile riutilizzare le finestre host. Per garantire l'affidabilità del codice, è necessario associare la durata della finestra host alla durata di un singolo controllo.

## <a name="when-do-i-need-to-call-atlaxwinterm"></a>Quando è necessario chiamare AtlAxWinTerm?

[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm) Annulla la registrazione della classe della finestra **"AtlAxWinLic80"** . È necessario chiamare questa funzione (se non è più necessario creare finestre host) dopo che tutte le finestre host esistenti sono state eliminate definitivamente. Se non si chiama questa funzione, viene annullata la registrazione automatica della classe della finestra al termine del processo.

## <a name="hosting-activex-controls-using-atl-axhost"></a>Hosting di controlli ActiveX tramite AXHost di ATL

Nell'esempio di questa sezione viene illustrato come creare AXHost e come ospitare un controllo ActiveX mediante varie funzioni ATL. Viene inoltre illustrato come accedere agli eventi di controllo e sink (tramite [IDispEventImpl](../atl/reference/idispeventimpl-class.md)) dal controllo ospitato. L'esempio ospita il controllo Calendar in una finestra principale o in una finestra figlio.

Si noti la definizione del `USE_METHOD` simbolo. È possibile modificare il valore di questo simbolo per variare da 1 a 8. Il valore del simbolo determina il modo in cui verrà creato il controllo:

- Per i valori pari `USE_METHOD` a, la chiamata a crea la sottoclasse dell'host di una finestra e la converte in un host del controllo. Per i valori dispari, il codice crea una finestra figlio che funge da host.

- Per i valori compresi `USE_METHOD` tra 1 e 4, l'accesso al controllo e al sink di eventi viene eseguito nella chiamata che crea anche l'host. I valori compresi tra 5 e 8 eseguono una query sull'host per le interfacce e collegano il sink.

Di seguito è disponibile un riepilogo:

|USE_METHOD|Host|Controllare l'accesso e il sink di eventi|Funzione illustrata|
|-----------------|----------|--------------------------------------|---------------------------|
|1|Finestra figlio|Un passaggio|CreateControlLicEx|
|2|Finestra principale|Un passaggio|AtlAxCreateControlLicEx|
|3|Finestra figlio|Un passaggio|CreateControlEx|
|4|Finestra principale|Un passaggio|AtlAxCreateControlEx|
|5|Finestra figlio|Più passaggi|CreateControlLic|
|6|Finestra principale|Più passaggi|AtlAxCreateControlLic|
|7|Finestra figlio|Più passaggi|CreateControl|
|8|Finestra principale|Più passaggi|AtlAxCreateControl|

[!code-cpp[NVC_ATL_AxHost#1](../atl/codesnippet/cpp/hosting-activex-controls-using-atl-axhost_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Domande frequenti sul contenimento di controlli](../atl/atl-control-containment-faq.md)<br/>
[AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)<br/>
[AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)<br/>
[AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)<br/>
[AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)<br/>
[Classe CAxWindow2T](../atl/reference/caxwindow2t-class.md)<br/>
[Interfaccia IAxWinHostWindowLic](../atl/reference/iaxwinhostwindowlic-interface.md)
