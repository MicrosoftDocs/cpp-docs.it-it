---
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
ms.openlocfilehash: 438bc2a03239946dbfca53d5f2989c731b682ab0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375616"
---
# <a name="cdocitem-class"></a>Classe CDocItem

Classe di base per elementi del documento, ovvero i componenti dei dati di un documento.

## <a name="syntax"></a>Sintassi

```
class CDocItem : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDocItem::GetDocument](#getdocument)|Restituisce il documento che contiene l'elemento.|
|[CDocItem::IsBlank](#isblank)|Determina se l'elemento contiene informazioni.|

## <a name="remarks"></a>Osservazioni

`CDocItem`gli oggetti vengono utilizzati per rappresentare gli elementi OLE nei documenti client e server.

Per altre informazioni, vedere l'articolo [Contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="cdocitemgetdocument"></a><a name="getdocument"></a>CDocItem::GetDocument

Chiamare questa funzione per ottenere il documento che contiene l'elemento.

```
CDocument* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al documento che contiene l'elemento; NULL, se l'elemento non fa parte di un documento.

### <a name="remarks"></a>Osservazioni

Questa funzione viene sottoposta a override nelle classi derivate [COleClientItem](../../mfc/reference/coleclientitem-class.md) e [COleServerItem](../../mfc/reference/coleserveritem-class.md), restituendo un puntatore a [COleDocument](../../mfc/reference/coledocument-class.md), [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)o [COleServerDoc](../../mfc/reference/coleserverdoc-class.md) oggetto.

## <a name="cdocitemisblank"></a><a name="isblank"></a>CDocItem::IsBlank

Chiamato dal framework quando si verifica la serializzazione predefinita.

```
virtual BOOL IsBlank() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento non contiene informazioni; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `CDocItem` gli oggetti non sono vuoti. Gli oggetti [COleClientItem](../../mfc/reference/coleclientitem-class.md) sono talvolta `CDocItem`vuoti perché derivano direttamente da . Tuttavia, [COleServerItem](../../mfc/reference/coleserveritem-class.md) oggetti sono sempre vuoti. Per impostazione predefinita, `COleClientItem` le applicazioni OLE contenenti oggetti che non hanno estensione x o y vengono serializzate. Questa operazione viene eseguita restituendo TRUE da un override di `IsBlank` quando l'elemento non ha estensione x o y.

Eseguire l'override di questa funzione se si desidera implementare altre azioni durante la serializzazione.

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDocument](../../mfc/reference/coledocument-class.md)<br/>
[Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)
