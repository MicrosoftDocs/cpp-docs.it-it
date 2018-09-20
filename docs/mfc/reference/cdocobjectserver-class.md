---
title: Classe CDocObjectServer | Microsoft Docs
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDocObjectServer
- AFXDOCOB/CDocObjectServer
- AFXDOCOB/CDocObjectServer::CDocObjectServer
- AFXDOCOB/CDocObjectServer::ActivateDocObject
- AFXDOCOB/CDocObjectServer::OnActivateView
- AFXDOCOB/CDocObjectServer::OnApplyViewState
- AFXDOCOB/CDocObjectServer::OnSaveViewState
dev_langs:
- C++
helpviewer_keywords:
- CDocObjectServer [MFC], CDocObjectServer
- CDocObjectServer [MFC], ActivateDocObject
- CDocObjectServer [MFC], OnActivateView
- CDocObjectServer [MFC], OnApplyViewState
- CDocObjectServer [MFC], OnSaveViewState
ms.assetid: 18cd0dff-0616-4472-b8d9-66c081bc383a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 067f31d837b4b83a477d6b919f2d5bbd5efa00f3
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381075"
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
|[CDocObjectServer::ActivateDocObject](#activatedocobject)|Attiva il server oggetto di documento, ma non viene visualizzato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CDocObjectServer::OnActivateView](#onactivateview)|Mostra la visualizzazione DocObject.|
|[CDocObjectServer::OnApplyViewState](#onapplyviewstate)|Ripristina lo stato della visualizzazione DocObject.|
|[CDocObjectServer::OnSaveViewState](#onsaveviewstate)|Salva lo stato della visualizzazione DocObject.|

## <a name="remarks"></a>Note

`CDocObjectServer` è derivato da `CCmdTarget` e collabora con `COleServerDoc` per esporre le interfacce.

Può contenere un documento server DocObject [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md) oggetti che rappresentano l'interfaccia server agli elementi DocObject.

Per personalizzare il server DocObject, derivare la propria classe dal `CDocObjectServer` ed eseguire l'override delle funzioni di installazione, view [OnActivateView](#onactivateview), [OnApplyViewState](#onapplyviewstate), e [OnSaveViewState ](#onsaveviewstate). È necessario fornire una nuova istanza della classe in risposta alle chiamate framework.

Per altre informazioni su DocObjects, vedere [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md) e [COleCmdUI](../../mfc/reference/colecmdui-class.md) nel *riferimenti alla libreria MFC*.

Vedere anche l'articolo della Knowledge Base seguente:

- Q247382: PRB: le descrizioni comandi per i controlli nel Server documenti ActiveX sono nascoste per il contenitore di documenti di ActiveX

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocObjectServer`

## <a name="requirements"></a>Requisiti

**Intestazione:** AfxDocOb. h

##  <a name="activatedocobject"></a>  CDocObjectServer::ActivateDocObject

Chiamare questa funzione per attivare il server di oggetti documento (ma non mostra).

```
void ActivateDocObject();
```

### <a name="remarks"></a>Note

`ActivateDocObject` le chiamate `IOleDocumentSite`del `ActivateMe` metodo, ma non mostra la visualizzazione perché è in attesa per istruzioni specifiche su come configurare e visualizzare la vista, specificato nella chiamata a [CDocObjectServer::OnActivateView](#onactivateview).

Insieme, `ActivateDocObject` e `OnActivateView` attivare e visualizzare la visualizzazione DocObject. Attivazione DocObject è diverso dagli altri tipi di attivazione sul posto OLE. Attivazione DocObject Ignora visualizzazione posto tratteggio bordi e le aree di controllo di oggetto (ad esempio quadratini di ridimensionamento), ignora le funzioni di extent di oggetto e disegna le barre di scorrimento all'interno del rettangolo di visualizzazione anziché di disegno all'esterno di questo rettangolo (come in normale attivazione sul posto).

##  <a name="cdocobjectserver"></a>  CDocObjectServer::CDocObjectServer

Costruisce e inizializza un oggetto `CDocObjectServer`.

```
explicit CDocObjectServer(
    COleServerDoc* pOwner,
    LPOLEDOCUMENTSITE pDocSite = NULL);
```

### <a name="parameters"></a>Parametri

*pOwner*<br/>
Puntatore al documento sito client che il client per il server DocObject.

*pDocSite*<br/>
Un puntatore al `IOleDocumentSite` interfaccia implementato dal contenitore.

### <a name="remarks"></a>Note

Quando un DocObject è attivo, il client del sito interfaccia OLE ( `IOleDocumentSite`) consente al server DocObject di comunicare con il relativo client (contenitore). Quando un server DocObject è attivato, per prima cosa controlla che il contenitore implementa il `IOleDocumentSite` interfaccia. In questo caso, [COleServerDoc::GetDocObjectServer](../../mfc/reference/coleserverdoc-class.md#getdocobjectserver) viene chiamato per verificare se il contenitore supporta DocObjects. Per impostazione predefinita, `GetDocObjectServer` restituisce NULL. È necessario eseguire l'override `COleServerDoc::GetDocObjectServer` per costruire un nuovo `CDocObjectServer` oggetto o un oggetto derivato di personalizzata, con puntatori al `COleServerDoc` contenitore e il relativo `IOleDocumentSite` interfaccia come argomenti al costruttore.

##  <a name="onactivateview"></a>  CDocObjectServer::OnActivateView

Chiamare questa funzione per visualizzare la visualizzazione DocObject.

```
virtual HRESULT OnActivateView();
```

### <a name="return-value"></a>Valore restituito

Restituisce un errore o un valore di avviso. Per impostazione predefinita, restituisce NOERROR se ha esito positivo. in caso contrario, E_FAIL.

### <a name="remarks"></a>Note

Questa funzione crea una finestra cornice sul posto, disegna le barre di scorrimento all'interno della visualizzazione, imposta il menu di scelta rapida del server condivide con il proprio contenitore, aggiunge i controlli frame, imposta l'oggetto attivo, quindi infine Mostra la finestra cornice sul posto e imposta lo stato attivo.

##  <a name="onapplyviewstate"></a>  CDocObjectServer::OnApplyViewState

Eseguire l'override di questa funzione per ripristinare lo stato della visualizzazione DocObject.

```
virtual void OnApplyViewState(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
Oggetto `CArchive` oggetto dal quale serializzare lo stato di visualizzazione.

### <a name="remarks"></a>Note

Questa funzione viene chiamata quando viene visualizzata la vista per la prima volta dopo la creazione dell'istanza. `OnApplyViewState` indica a una visualizzazione reinizializzazione in base ai dati nel `CArchive` oggetto salvato in precedenza con [OnSaveViewState](#onsaveviewstate). La visualizzazione deve convalidare i dati nel `CArchive` oggetto perché il contenitore non cerca di interpretare i dati dello stato di visualizzazione in alcun modo.

È possibile usare `OnSaveViewState` per l'archiviazione permanente informazioni specifiche per lo stato della visualizzazione. Se esegue l'override `OnSaveViewState` per archiviare le informazioni, si dovranno eseguire l'override `OnApplyViewState` leggere tali informazioni e applicarla alla visualizzazione qualora venga appena attivata.

##  <a name="onsaveviewstate"></a>  CDocObjectServer::OnSaveViewState

Eseguire l'override di questa funzione per salvare le informazioni di stato aggiuntivi sulla visualizzazione DocObject.

```
virtual void OnSaveViewState(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
Oggetto `CArchive` dell'oggetto in cui verrà serializzato lo stato di visualizzazione.

### <a name="remarks"></a>Note

Lo stato potrebbe includere le proprietà come il tipo di visualizzazione, il fattore di zoom, inserimento e punto di selezione e così via. In genere, il contenitore chiama questa funzione prima di disattivare la visualizzazione. Lo stato salvato può essere ripristinato in un secondo momento attraverso [OnApplyViewState](#onapplyviewstate).

È possibile usare `OnSaveViewState` per l'archiviazione permanente informazioni specifiche per lo stato della visualizzazione. Se esegue l'override `OnSaveViewState` per archiviare le informazioni, si dovranno eseguire l'override `OnApplyViewState` leggere tali informazioni e applicarla alla visualizzazione qualora venga appena attivata.

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md)
