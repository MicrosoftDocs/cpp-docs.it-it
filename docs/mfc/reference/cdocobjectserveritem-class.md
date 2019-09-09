---
title: Classe CDocObjectServerItem
ms.date: 03/27/2019
f1_keywords:
- CDocObjectServerItem
- AFXDOCOB/CDocObjectServerItem
- AFXDOCOB/CDocObjectServerItem::CDocObjectServerItem
- AFXDOCOB/CDocObjectServerItem::GetDocument
- AFXDOCOB/CDocObjectServerItem::OnDoVerb
- AFXDOCOB/CDocObjectServerItem::OnHide
- AFXDOCOB/CDocObjectServerItem::OnShow
helpviewer_keywords:
- CDocObjectServerItem [MFC], CDocObjectServerItem
- CDocObjectServerItem [MFC], GetDocument
- CDocObjectServerItem [MFC], OnDoVerb
- CDocObjectServerItem [MFC], OnHide
- CDocObjectServerItem [MFC], OnShow
ms.assetid: 530f7156-50c8-4806-9328-602c9133f622
ms.openlocfilehash: 4d44791415626f1a94500b9c3885581d67e8fe42
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69506815"
---
# <a name="cdocobjectserveritem-class"></a>Classe CDocObjectServerItem

Implementa i verbi del server OLE in modo specifico per i server DocObject.

## <a name="syntax"></a>Sintassi

```
class CDocObjectServerItem : public COleServerItem
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|NOME|Descrizione|
|----------|-----------------|
|[CDocObjectServerItem::CDocObjectServerItem](#cdocobjectserveritem)|Costruisce un oggetto `CDocObjectServerItem`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDocObjectServerItem::GetDocument](#getdocument)|Recupera un puntatore al documento che contiene l'elemento.|

### <a name="protected-methods"></a>Metodi protetti

|Name|Descrizione|
|----------|-----------------|
|[CDocObjectServerItem::OnDoVerb](#ondoverb)|Chiamato per eseguire un verbo.|
|[CDocObjectServerItem::OnHide](#onhide)|Genera un'eccezione se il Framework tenta di nascondere un elemento DocObject.|
|[CDocObjectServerItem:: OnShow](#onshow)|Chiamata eseguita dal Framework per rendere attivo l'elemento DocObject. Se l'elemento non è un DocObject, chiama [COleServerItem:: OnShow](../../mfc/reference/coleserveritem-class.md#onshow).|

## <a name="remarks"></a>Note

`CDocObjectServerItem`definisce le funzioni membro sottoponibili a override: [OnHide](#onhide), [OnDoVerb](#ondoverb)e [OnShow](#onshow).

Per usare `CDocObjectServerItem`, assicurarsi che l'override di [OnGetEmbeddedItem](../../mfc/reference/coleserverdoc-class.md#ongetembeddeditem) nella `COleServerDoc`classe derivata da restituisca un `CDocObjectServerItem` nuovo oggetto. Se è necessario modificare le funzionalità nell'elemento, è possibile creare una nuova istanza della `CDocObjectServerItem`classe derivata da.

Per ulteriori informazioni su DocObjects, vedere [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) e [COleCmdUI](../../mfc/reference/colecmdui-class.md) nella Guida di *riferimento a MFC*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

[COleServerItem](../../mfc/reference/coleserveritem-class.md)

`CDocObjectServerItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdocob. h

##  <a name="cdocobjectserveritem"></a>CDocObjectServerItem:: CDocObjectServerItem

Costruisce un oggetto `CDocObjectServerItem`.

```
CDocObjectServerItem(COleServerDoc* pServerDoc, BOOL bAutoDelete);
```

### <a name="parameters"></a>Parametri

*pServerDoc*<br/>
Puntatore al documento che conterrà il nuovo elemento DocObject.

*bAutoDelete*<br/>
Indica se l'oggetto può essere eliminato quando viene rilasciato un collegamento ad esso. Impostare l'argomento su false se l' `CDocObjectServerItem` oggetto è parte integrante dei dati del documento. Impostarla su TRUE se l'oggetto è una struttura secondaria utilizzata per identificare un intervallo nei dati del documento che può essere eliminato dal Framework.

##  <a name="getdocument"></a>CDocObjectServerItem:: GetDocument

Recupera un puntatore al documento che contiene l'elemento.

```
COleServerDoc* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento che contiene l'elemento; NULL se l'elemento non fa parte di un documento.

### <a name="remarks"></a>Note

In questo modo è possibile accedere al documento del server passato come argomento al costruttore [CDocObjectServerItem](#cdocobjectserveritem) .

##  <a name="ondoverb"></a>CDocObjectServerItem:: OnDoVerb

Chiamato dal Framework per eseguire il verbo specificato.

```
virtual void OnDoVerb(LONG iVerb);
```

### <a name="parameters"></a>Parametri

*iVerb*<br/>
Specifica il verbo da eseguire. Per i valori possibili, vedere [IOleObject::D overb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) nella Windows SDK.

### <a name="remarks"></a>Note

L'implementazione predefinita chiama la funzione membro [OnShow](#onshow) se l'elemento è un DOCOBJECT e OLEIVERB_INPLACEACTIVATE o OLEIVERB_SHOW è specificato. Se l'elemento non è un DocObject o viene specificato un verbo diverso, l'implementazione predefinita chiama [COleServerItem:: OnDoVerb](../../mfc/reference/coleserveritem-class.md#ondoverb).

##  <a name="onhide"></a>CDocObjectServerItem:: OnHide

Chiamato dal Framework per nascondere l'elemento.

```
virtual void OnHide();
```

### <a name="remarks"></a>Note

L'implementazione predefinita genera un'eccezione se l'elemento è un DocObject. Non è possibile nascondere un elemento DocObject attivo perché accetta l'intera visualizzazione. È necessario disattivare l'elemento DocObject per fare in modo che scompaia. Se l'elemento non è un DocObject, l'implementazione predefinita chiama [COleServerItem:: OnHide](../../mfc/reference/coleserveritem-class.md#onhide).

##  <a name="onshow"></a>CDocObjectServerItem:: OnShow

Chiamata eseguita dal Framework per indicare all'applicazione server di rendere attivo l'elemento DocObject sul posto.

```
virtual void OnShow();
```

### <a name="remarks"></a>Note

Se l'elemento non è un DocObject, l'implementazione predefinita chiama [COleServerItem:: OnShow](../../mfc/reference/coleserveritem-class.md#onopen). Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si apre un elemento DocObject.

## <a name="see-also"></a>Vedere anche

[Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md)<br/>
[Classe COleDocObjectItem](../../mfc/reference/coledocobjectitem-class.md)
