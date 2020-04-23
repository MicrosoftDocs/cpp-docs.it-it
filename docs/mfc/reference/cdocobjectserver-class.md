---
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
ms.openlocfilehash: f415df35b13e50eee092f87eca0627e5cf143720
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753289"
---
# <a name="cdocobjectserver-class"></a>Classe CDocObjectServer

Implementa le interfacce OLE aggiuntive necessarie per trasformare un server `COleDocument` normale in un server DocObject completo: `IOleDocument`, `IOleDocumentView`, `IOleCommandTarget`e `IPrint`.

## <a name="syntax"></a>Sintassi

```
class CDocObjectServer : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDocObjectServer::CDocObjectServer](#cdocobjectserver)|Costruisce un oggetto `CDocObjectServer`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDocObjectServer::ActivateDocObject](#activatedocobject)|Attiva il server degli oggetti documento, ma non lo visualizza.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CDocObjectServer::OnActivateView (visualizzazione di Unoggetto )CDocObjectServer::OnActivateView](#onactivateview)|Visualizza la visualizzazione DocObject.|
|[CDocObjectServer::OnApplyViewState](#onapplyviewstate)|Ripristina lo stato della visualizzazione DocObject.|
|[CDocObjectServer::OnSaveViewState](#onsaveviewstate)|Salva lo stato della visualizzazione DocObject.|

## <a name="remarks"></a>Osservazioni

`CDocObjectServer`deriva da `CCmdTarget` e lavora `COleServerDoc` a stretto contatto con per esporre le interfacce.

Un documento server DocObject può contenere oggetti [CDocObjectServerItem,](../../mfc/reference/cdocobjectserveritem-class.md) che rappresentano l'interfaccia server per gli elementi DocObject.

Per personalizzare il server DocObject, `CDocObjectServer` derivare una classe personalizzata da ed eseguire l'override delle relative funzioni di impostazione della visualizzazione, [OnActivateView](#onactivateview), [OnApplyViewState](#onapplyviewstate)e [OnSaveViewState](#onsaveviewstate). Sarà necessario fornire una nuova istanza della classe in risposta alle chiamate del framework.

Per ulteriori informazioni su DocObjects, vedere [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md) e [COleCmdUI](../../mfc/reference/colecmdui-class.md) in *Riferimenti a MFC.*

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocObjectServer`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdocob.h

## <a name="cdocobjectserveractivatedocobject"></a><a name="activatedocobject"></a>CDocObjectServer::ActivateDocObject

Chiamare questa funzione per attivare (ma non mostrare) il server oggetti documento.

```cpp
void ActivateDocObject();
```

### <a name="remarks"></a>Osservazioni

`ActivateDocObject`chiama `IOleDocumentSite`'s `ActivateMe` metodo, ma non viene visualizzata la visualizzazione perché attende istruzioni specifiche su come impostare e visualizzare la visualizzazione, data nella chiamata a [CDocObjectServer::OnActivateView](#onactivateview).

Insieme, `ActivateDocObject` `OnActivateView` attivare e visualizzare la visualizzazione DocObject. L'attivazione docObject è diversa da altri tipi di attivazione sul posto OLE. L'attivazione di DocObject ignora la visualizzazione dei bordi del tratteggio sul posto e delle aree di controllo degli oggetti (ad esempio i quadratini di ridimensionamento), ignora le funzioni di estensione dell'oggetto e disegna le barre di scorrimento all'interno del rettangolo di visualizzazione anziché disegnarle all'esterno di tale rettangolo (come nella normale attivazione sul posto).

## <a name="cdocobjectservercdocobjectserver"></a><a name="cdocobjectserver"></a>CDocObjectServer::CDocObjectServer

Costruisce e inizializza un oggetto `CDocObjectServer`.

```
explicit CDocObjectServer(
    COleServerDoc* pOwner,
    LPOLEDOCUMENTSITE pDocSite = NULL);
```

### <a name="parameters"></a>Parametri

*pProprietario*<br/>
Puntatore al documento del sito client che è il client per il server DocObject.

*pDocSito*<br/>
Puntatore all'interfaccia `IOleDocumentSite` implementata dal contenitore.

### <a name="remarks"></a>Osservazioni

Quando un DocObject è attivo, l'interfaccia OLE del sito client ( `IOleDocumentSite`) consente al server DocObject di comunicare con il relativo client (contenitore). Quando un server DocObject viene attivato, controlla `IOleDocumentSite` innanzitutto che il contenitore implementi l'interfaccia. In tal caso, [COleServerDoc::GetDocObjectServer](../../mfc/reference/coleserverdoc-class.md#getdocobjectserver) viene chiamato per verificare se il contenitore supporta DocObjects. Per impostazione predefinita, `GetDocObjectServer` restituisce NULL. È necessario `COleServerDoc::GetDocObjectServer` eseguire l'override per costruire un nuovo `CDocObjectServer` oggetto o `COleServerDoc` un `IOleDocumentSite` oggetto derivato personalizzato, con puntatori al contenitore e la relativa interfaccia come argomenti per il costruttore.

## <a name="cdocobjectserveronactivateview"></a><a name="onactivateview"></a>CDocObjectServer::OnActivateView (visualizzazione di Unoggetto )CDocObjectServer::OnActivateView

Chiamare questa funzione per visualizzare la visualizzazione DocObject.

```
virtual HRESULT OnActivateView();
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore di errore o di avviso. Per impostazione predefinita, restituisce NOERROR se ha esito positivo; in caso contrario, E_FAIL.

### <a name="remarks"></a>Osservazioni

Questa funzione crea una finestra cornice sul posto, disegna le barre di scorrimento all'interno della visualizzazione, imposta i menu condivide il server con il relativo contenitore, aggiunge controlli frame, imposta l'oggetto attivo, quindi mostra infine la finestra cornice sul posto e imposta lo stato attivo.

## <a name="cdocobjectserveronapplyviewstate"></a><a name="onapplyviewstate"></a>CDocObjectServer::OnApplyViewState

Eseguire l'override di questa funzione per ripristinare lo stato della visualizzazione DocObject.

```
virtual void OnApplyViewState(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*Ar*<br/>
Oggetto `CArchive` da cui serializzare lo stato di visualizzazione.

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata quando la visualizzazione viene visualizzata per la prima volta dopo la creazione dell'istanza. `OnApplyViewState`indica a una vista di reinizializzarsi in `CArchive` base ai dati nell'oggetto precedentemente salvato con [OnSaveViewState](#onsaveviewstate). La visualizzazione deve convalidare `CArchive` i dati nell'oggetto perché il contenitore non tenta di interpretare i dati dello stato di visualizzazione in alcun modo.

È possibile `OnSaveViewState` utilizzare per archiviare informazioni permanenti specifiche per lo stato della visualizzazione. Se si `OnSaveViewState` esegue l'override per `OnApplyViewState` archiviare le informazioni, è necessario eseguire l'override per leggere tali informazioni e applicarle alla visualizzazione quando viene attivata di recente.

## <a name="cdocobjectserveronsaveviewstate"></a><a name="onsaveviewstate"></a>CDocObjectServer::OnSaveViewState

Eseguire l'override di questa funzione per salvare informazioni aggiuntive sullo stato della visualizzazione DocObject.

```
virtual void OnSaveViewState(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*Ar*<br/>
Oggetto `CArchive` in cui viene serializzato lo stato di visualizzazione.

### <a name="remarks"></a>Osservazioni

Lo stato può includere proprietà come il tipo di vista, il fattore di zoom, il punto di inserimento e selezione e così via. Il contenitore chiama in genere questa funzione prima di disattivare la visualizzazione. Lo stato salvato può essere ripristinato in un secondo momento tramite [OnApplyViewState](#onapplyviewstate).

È possibile `OnSaveViewState` utilizzare per archiviare informazioni permanenti specifiche per lo stato della visualizzazione. Se si `OnSaveViewState` esegue l'override per `OnApplyViewState` archiviare le informazioni, è necessario eseguire l'override per leggere tali informazioni e applicarle alla visualizzazione quando viene attivata di recente.

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md)
