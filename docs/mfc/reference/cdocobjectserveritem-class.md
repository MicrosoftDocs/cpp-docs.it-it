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
ms.openlocfilehash: 1f0f5cf93aab35a17f7174b2beee0d1398564a3d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375531"
---
# <a name="cdocobjectserveritem-class"></a>Classe CDocObjectServerItem

Implementa i verbi del server OLE in modo specifico per i server DocObject.

## <a name="syntax"></a>Sintassi

```
class CDocObjectServerItem : public COleServerItem
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CDocObjectServerItem::CDocObjectServerItem](#cdocobjectserveritem)|Costruisce un oggetto `CDocObjectServerItem`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDocObjectServerItem::GetDocument](#getdocument)|Recupera un puntatore al documento che contiene l'elemento.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CDocObjectServerItem::OnDoVerb](#ondoverb)|Chiamato per eseguire un verbo.|
|[CDocObjectServerItem::OnHide](#onhide)|Genera un'eccezione se il framework tenta di nascondere un DocObject elemento.|
|[CDocObjectServerItem::OnShow](#onshow)|Chiamato dal framework per rendere l'elemento DocObject attivo sul posto. Se l'elemento non è un DocObject, chiama [COleServerItem::OnShow](../../mfc/reference/coleserveritem-class.md#onshow).|

## <a name="remarks"></a>Osservazioni

`CDocObjectServerItem`definisce le funzioni membro sottoponibili a override: [OnHide](#onhide), [OnDoVerb](#ondoverb)e [OnShow](#onshow).

Per `CDocObjectServerItem`utilizzare , assicurarsi che il `COleServerDoc` [OnGetEmbeddedItem](../../mfc/reference/coleserverdoc-class.md#ongetembeddeditem) override `CDocObjectServerItem` nella classe derivata restituisce un nuovo oggetto. Se è necessario modificare qualsiasi funzionalità nell'elemento, è possibile `CDocObjectServerItem`creare una nuova istanza della propria classe derivata.

Per ulteriori informazioni su DocObjects, vedere [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) e [COleCmdUI](../../mfc/reference/colecmdui-class.md) in *Riferimenti a MFC*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

[COleServerItem](../../mfc/reference/coleserveritem-class.md)

`CDocObjectServerItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdocob.h

## <a name="cdocobjectserveritemcdocobjectserveritem"></a><a name="cdocobjectserveritem"></a>CDocObjectServerItem::CDocObjectServerItem

Costruisce un oggetto `CDocObjectServerItem`.

```
CDocObjectServerItem(COleServerDoc* pServerDoc, BOOL bAutoDelete);
```

### <a name="parameters"></a>Parametri

*pServerDoc (informazioni in stato in stato di*<br/>
Puntatore al documento che conterrà il nuovo elemento DocObject.

*bEliminazione automatica*<br/>
Indica se l'oggetto può essere eliminato quando viene rilasciato un collegamento. Impostare l'argomento `CDocObjectServerItem` su FALSE se l'oggetto è parte integrante dei dati del documento. Impostarlo su TRUE se l'oggetto è una struttura secondaria utilizzata per identificare un intervallo nei dati del documento che può essere eliminato dal framework.

## <a name="cdocobjectserveritemgetdocument"></a><a name="getdocument"></a>CDocObjectServerItem::GetDocument

Recupera un puntatore al documento che contiene l'elemento.

```
COleServerDoc* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento che contiene l'elemento; NULL se l'elemento non fa parte di un documento.

### <a name="remarks"></a>Osservazioni

In questo modo è possibile accedere al documento server passato come argomento per il [CDocObjectServerItem](#cdocobjectserveritem) costruttore.

## <a name="cdocobjectserveritemondoverb"></a><a name="ondoverb"></a>CDocObjectServerItem::OnDoVerb

Chiamato dal framework per eseguire il verbo specificato.

```
virtual void OnDoVerb(LONG iVerb);
```

### <a name="parameters"></a>Parametri

*IVerbo*<br/>
Specifica il verbo da eseguire. Per i valori possibili, vedere [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in Windows SDK.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita chiama il [OnShow](#onshow) funzione membro se l'elemento è un DocObject e il OLEIVERB_INPLACEACTIVATE o OLEIVERB_SHOW viene specificato. Se l'elemento non è un DocObject o viene specificato un verbo diverso, l'implementazione predefinita chiama [COleServerItem::OnDoVerb](../../mfc/reference/coleserveritem-class.md#ondoverb).

## <a name="cdocobjectserveritemonhide"></a><a name="onhide"></a>CDocObjectServerItem::OnHide

Chiamato dal framework per nascondere l'elemento.

```
virtual void OnHide();
```

### <a name="remarks"></a>Osservazioni

The default implementation throws an exception if the item is a DocObject. Non è possibile nascondere un elemento DocObject attivo perché assume l'intera visualizzazione. È necessario disattivare l'elemento DocObject per farlo scomparire. Se l'elemento non è un DocObject, l'implementazione predefinita chiama [COleServerItem::OnHide](../../mfc/reference/coleserveritem-class.md#onhide).

## <a name="cdocobjectserveritemonshow"></a><a name="onshow"></a>CDocObjectServerItem::OnShow

Chiamato dal framework per indicare all'applicazione server di rendere attivo l'elemento DocObject sul posto.

```
virtual void OnShow();
```

### <a name="remarks"></a>Osservazioni

Se l'elemento non è un DocObject, l'implementazione predefinita chiama [COleServerItem::OnShow](../../mfc/reference/coleserveritem-class.md#onopen). Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando si apre un elemento DocObject.

## <a name="see-also"></a>Vedere anche

[Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md)<br/>
[COleDocObjectItem (classe)](../../mfc/reference/coledocobjectitem-class.md)
