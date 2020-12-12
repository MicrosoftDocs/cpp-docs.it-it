---
description: 'Altre informazioni su: classe CDocItem'
title: Classe CDocItem
ms.date: 11/04/2016
f1_keywords:
- CDocItem
- AFXOLE/CDocItem
- AFXOLE/CDocItem::GetDocument
- AFXOLE/CDocItem::IsBlank
helpviewer_keywords:
- CDocItem [MFC], GetDocument
- CDocItem [MFC], IsBlank
ms.assetid: 84fb8610-a4c8-4211-adc0-e70e8d002c11
ms.openlocfilehash: 9e126d4351248165a3961739c13cc6ce7330c10c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185141"
---
# <a name="cdocitem-class"></a>Classe CDocItem

Classe di base per elementi del documento, ovvero i componenti dei dati di un documento.

## <a name="syntax"></a>Sintassi

```
class CDocItem : public CCmdTarget
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDocItem:: GetDocument](#getdocument)|Restituisce il documento che contiene l'elemento.|
|[CDocItem:: Blank](#isblank)|Determina se l'elemento contiene informazioni.|

## <a name="remarks"></a>Commenti

`CDocItem` gli oggetti vengono utilizzati per rappresentare elementi OLE nei documenti client e server.

Per altre informazioni, vedere l'articolo [contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="cdocitemgetdocument"></a><a name="getdocument"></a> CDocItem:: GetDocument

Chiamare questa funzione per ottenere il documento che contiene l'elemento.

```
CDocument* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento che contiene l'elemento; NULL se l'elemento non fa parte di un documento.

### <a name="remarks"></a>Commenti

Questa funzione viene sottoposta a override nelle classi derivate [COleClientItem](../../mfc/reference/coleclientitem-class.md) e [COleServerItem](../../mfc/reference/coleserveritem-class.md), restituendo un puntatore a un oggetto [COleDocument](../../mfc/reference/coledocument-class.md), [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)o [COleServerDoc](../../mfc/reference/coleserverdoc-class.md) .

## <a name="cdocitemisblank"></a><a name="isblank"></a> CDocItem:: Blank

Chiamato dal framework quando si verifica la serializzazione predefinita.

```
virtual BOOL IsBlank() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento non contiene informazioni; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, `CDocItem` gli oggetti non sono vuoti. Gli oggetti [COleClientItem](../../mfc/reference/coleclientitem-class.md) sono a volte vuoti perché derivano direttamente da `CDocItem` . Tuttavia, gli oggetti [COleServerItem](../../mfc/reference/coleserveritem-class.md) sono sempre vuoti. Per impostazione predefinita, le applicazioni OLE contenenti `COleClientItem` oggetti senza extent x o y vengono serializzate. Questa operazione viene eseguita restituendo TRUE da un override di `IsBlank` quando l'elemento non ha extent x o y.

Eseguire l'override di questa funzione se si desidera implementare altre azioni durante la serializzazione.

## <a name="see-also"></a>Vedi anche

[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDocument](../../mfc/reference/coledocument-class.md)<br/>
[Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)<br/>
[COleClientItem (classe)](../../mfc/reference/coleclientitem-class.md)
