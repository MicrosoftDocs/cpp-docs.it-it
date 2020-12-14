---
description: 'Altre informazioni su: classe CDocObjectServer'
title: Classe CDocObjectServer
ms.date: 09/12/2018
f1_keywords:
- CDocObjectServer
- AFXDOCOB/CDocObjectServer
- AFXDOCOB/CDocObjectServer::CDocObjectServer
- AFXDOCOB/CDocObjectServer::ActivateDocObject
- AFXDOCOB/CDocObjectServer::OnActivateView
- AFXDOCOB/CDocObjectServer::OnApplyViewState
- AFXDOCOB/CDocObjectServer::OnSaveViewState
helpviewer_keywords:
- CDocObjectServer [MFC], CDocObjectServer
- CDocObjectServer [MFC], ActivateDocObject
- CDocObjectServer [MFC], OnActivateView
- CDocObjectServer [MFC], OnApplyViewState
- CDocObjectServer [MFC], OnSaveViewState
ms.assetid: 18cd0dff-0616-4472-b8d9-66c081bc383a
ms.openlocfilehash: 5a87363fef66a4819fc8efd504da96398cf3c89e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184946"
---
# <a name="cdocobjectserver-class"></a>Classe CDocObjectServer

Implementa le interfacce OLE aggiuntive necessarie per trasformare un server `COleDocument` normale in un server DocObject completo: `IOleDocument`, `IOleDocumentView`, `IOleCommandTarget`e `IPrint`.

## <a name="syntax"></a>Sintassi

```
class CDocObjectServer : public CCmdTarget
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDocObjectServer:: CDocObjectServer](#cdocobjectserver)|Costruisce un oggetto `CDocObjectServer`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDocObjectServer:: ActivateDocObject](#activatedocobject)|Attiva il server oggetti documento, ma non lo Visualizza.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CDocObjectServer:: OnActivateView](#onactivateview)|Visualizza la visualizzazione DocObject.|
|[CDocObjectServer:: OnApplyViewState](#onapplyviewstate)|Ripristina lo stato della visualizzazione DocObject.|
|[CDocObjectServer:: OnSaveViewState](#onsaveviewstate)|Salva lo stato della visualizzazione DocObject.|

## <a name="remarks"></a>Commenti

`CDocObjectServer` viene derivato da `CCmdTarget` e opera a stretto contatto con `COleServerDoc` per esporre le interfacce.

Un documento del server DocObject può contenere oggetti [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md) , che rappresentano l'interfaccia server per gli elementi DocObject.

Per personalizzare il server DocObject, derivare la propria classe da `CDocObjectServer` ed eseguire l'override delle relative funzioni di impostazione della vista, [OnActivateView](#onactivateview), [OnApplyViewState](#onapplyviewstate)e [OnSaveViewState](#onsaveviewstate). Sarà necessario fornire una nuova istanza della classe in risposta alle chiamate del Framework.

Per ulteriori informazioni su DocObjects, vedere [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md) e [COleCmdUI](../../mfc/reference/colecmdui-class.md) nella Guida di *riferimento a MFC*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocObjectServer`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdocob. h

## <a name="cdocobjectserveractivatedocobject"></a><a name="activatedocobject"></a> CDocObjectServer:: ActivateDocObject

Chiamare questa funzione per attivare (ma non visualizzare) il server oggetto documento.

```cpp
void ActivateDocObject();
```

### <a name="remarks"></a>Commenti

`ActivateDocObject` chiama `IOleDocumentSite` `ActivateMe` il metodo, ma non Mostra la visualizzazione perché attende istruzioni specifiche su come impostare e visualizzare la vista, specificata nella chiamata a [CDocObjectServer:: OnActivateView](#onactivateview).

Insieme, `ActivateDocObject` e `OnActivateView` attivano e visualizzano la visualizzazione DocObject. L'attivazione di DocObject è diversa da quella di altri tipi di attivazione sul posto OLE. DocObject Activation ignora la visualizzazione dei bordi del tratteggio sul posto e delle aree di visualizzazione degli oggetti, ad esempio gli handle di ridimensionamento, ignora le funzioni dell'extent degli oggetti e disegna le barre di scorrimento all'interno del rettangolo di visualizzazione anziché disegnarle all'esterno del rettangolo (come nel normale attivazione sul posto).

## <a name="cdocobjectservercdocobjectserver"></a><a name="cdocobjectserver"></a> CDocObjectServer:: CDocObjectServer

Costruisce e inizializza un oggetto `CDocObjectServer`.

```
explicit CDocObjectServer(
    COleServerDoc* pOwner,
    LPOLEDOCUMENTSITE pDocSite = NULL);
```

### <a name="parameters"></a>Parametri

*pOwner*<br/>
Puntatore al documento del sito client che rappresenta il client per il server DocObject.

*pDocSite*<br/>
Puntatore all' `IOleDocumentSite` interfaccia implementata dal contenitore.

### <a name="remarks"></a>Commenti

Quando un DocObject è attivo, l'interfaccia OLE del sito client ( `IOleDocumentSite` ) consente al server DocObject di comunicare con il relativo client (il contenitore). Quando viene attivato un server DocObject, verifica innanzitutto che il contenitore implementi l' `IOleDocumentSite` interfaccia. In tal caso, viene chiamato [COleServerDoc:: GetDocObjectServer](../../mfc/reference/coleserverdoc-class.md#getdocobjectserver) per verificare se il contenitore supporta DocObjects. Per impostazione predefinita, `GetDocObjectServer` restituisce null. È necessario eseguire l'override `COleServerDoc::GetDocObjectServer` di per costruire un nuovo `CDocObjectServer` oggetto o un oggetto derivato autonomo, con i puntatori al `COleServerDoc` contenitore e la relativa `IOleDocumentSite` interfaccia come argomenti per il costruttore.

## <a name="cdocobjectserveronactivateview"></a><a name="onactivateview"></a> CDocObjectServer:: OnActivateView

Chiamare questa funzione per visualizzare la visualizzazione DocObject.

```
virtual HRESULT OnActivateView();
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore di errore o di avviso. Per impostazione predefinita, restituisce NOERROR se ha esito positivo; in caso contrario, E_FAIL.

### <a name="remarks"></a>Commenti

Questa funzione crea una finestra cornice sul posto, disegna barre di scorrimento all'interno della vista, imposta i menu condivisi dal server con il relativo contenitore, aggiunge controlli frame, imposta l'oggetto attivo, infine Mostra la finestra cornice sul posto e imposta lo stato attivo.

## <a name="cdocobjectserveronapplyviewstate"></a><a name="onapplyviewstate"></a> CDocObjectServer:: OnApplyViewState

Eseguire l'override di questa funzione per ripristinare lo stato della visualizzazione DocObject.

```
virtual void OnApplyViewState(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
`CArchive`Oggetto da cui serializzare lo stato di visualizzazione.

### <a name="remarks"></a>Commenti

Questa funzione viene chiamata quando la visualizzazione viene visualizzata per la prima volta dopo la relativa creazione di istanze. `OnApplyViewState` indica a una visualizzazione di reinizializzare se stessa in base ai dati nell' `CArchive` oggetto salvato in precedenza con [OnSaveViewState](#onsaveviewstate). La vista deve convalidare i dati nell' `CArchive` oggetto perché il contenitore non tenta di interpretare i dati dello stato di visualizzazione in alcun modo.

È possibile usare `OnSaveViewState` per archiviare informazioni permanenti specifiche per lo stato della visualizzazione. Se si esegue l'override `OnSaveViewState` di per archiviare le informazioni, è necessario eseguire l'override `OnApplyViewState` di per leggere tali informazioni e applicarle alla visualizzazione quando viene appena attivata.

## <a name="cdocobjectserveronsaveviewstate"></a><a name="onsaveviewstate"></a> CDocObjectServer:: OnSaveViewState

Eseguire l'override di questa funzione per salvare informazioni sullo stato aggiuntive sulla visualizzazione DocObject.

```
virtual void OnSaveViewState(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
`CArchive`Oggetto in cui viene serializzato lo stato di visualizzazione.

### <a name="remarks"></a>Commenti

È possibile che lo stato includa proprietà quali il tipo di visualizzazione, il fattore di zoom, il punto di inserimento e di selezione e così via. Il contenitore chiama in genere questa funzione prima di disattivare la visualizzazione. È possibile ripristinare lo stato salvato in un secondo momento tramite [OnApplyViewState](#onapplyviewstate).

È possibile usare `OnSaveViewState` per archiviare informazioni permanenti specifiche per lo stato della visualizzazione. Se si esegue l'override `OnSaveViewState` di per archiviare le informazioni, è necessario eseguire l'override `OnApplyViewState` di per leggere tali informazioni e applicarle alla visualizzazione quando viene appena attivata.

## <a name="see-also"></a>Vedi anche

[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md)
