---
title: Classe CRichEditCntrItem | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CRichEditCntrItem
- AFXRICH/CRichEditCntrItem
- AFXRICH/CRichEditCntrItem::CRichEditCntrItem
- AFXRICH/CRichEditCntrItem::SyncToRichEditObject
dev_langs:
- C++
helpviewer_keywords:
- CRichEditCntrItem [MFC], CRichEditCntrItem
- CRichEditCntrItem [MFC], SyncToRichEditObject
ms.assetid: 6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: af8d2a2d8fd5bf54e117b3cdb44628f167d67cb9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46403527"
---
# <a name="cricheditcntritem-class"></a>Classe CRichEditCntrItem

Con [CRichEditView](../../mfc/reference/cricheditview-class.md) e [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), fornisce la funzionalità del controllo rich edit nel contesto dell'architettura documento / visualizzazione di MFC.

## <a name="syntax"></a>Sintassi

```
class CRichEditCntrItem : public COleClientItem
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditCntrItem::CRichEditCntrItem](#cricheditcntritem)|Costruisce un oggetto `CRichEditCntrItem`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditCntrItem::SyncToRichEditObject](#synctoricheditobject)|Attiva l'elemento come un altro tipo.|

## <a name="remarks"></a>Note

Un "controllo rich edit" è una finestra in cui l'utente può immettere e modificare il testo. Il testo può essere assegnato a carattere e formattazione di paragrafo e può includere oggetti OLE incorporati. I controlli rich edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare eventuali componenti dell'interfaccia utente necessarie per rendere disponibili le operazioni di formattazione per l'utente.

`CRichEditView` gestisce il testo e la caratteristica di formattazione del testo. `CRichEditDoc` gestisce l'elenco di elementi di client OLE che sono nella vista. `CRichEditCntrItem` fornisce l'accesso dal contenitore per l'elemento client OLE.

Questo controllo comune di Windows (e pertanto il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate) è disponibile solo per i programmi in esecuzione in versioni di Windows 95 o 98 e Windows NT 3.51 e successive.

Per un esempio dell'uso di modifica avanzate degli elementi di contenitore in un'applicazione MFC, vedere la [WORDPAD](../../visual-cpp-samples.md) applicazione di esempio.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

[COleClientItem](../../mfc/reference/coleclientitem-class.md)

`CRichEditCntrItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrich.h

##  <a name="cricheditcntritem"></a>  CRichEditCntrItem::CRichEditCntrItem

Chiamare questa funzione per creare un `CRichEditCntrItem` dell'oggetto e aggiungerlo al documento contenitore.

```
CRichEditCntrItem(
    REOBJECT* preo = NULL,
    CRichEditDoc* pContainer = NULL);
```

### <a name="parameters"></a>Parametri

*preo*<br/>
Puntatore a un [REOBJECT](/windows/desktop/api/richole/ns-richole-_reobject) struttura che descrive un elemento OLE. Il nuovo `CRichEditCntrItem` costruito intorno a questo elemento OLE. Se *preo* è NULL, l'elemento client è vuoto.

*pContainer*<br/>
Puntatore al documento contenitore che conterrà questo elemento. Se *pContainer* è NULL, è necessario chiamare esplicitamente [COleDocument::AddItem](../../mfc/reference/coledocument-class.md#additem) aggiungere questo elemento di client a un documento.

### <a name="remarks"></a>Note

Questa funzione non esegue qualsiasi inizializzazione OLE.

Per altre informazioni, vedere la [REOBJECT](/windows/desktop/api/richole/ns-richole-_reobject) struttura nel SDK di Windows.

##  <a name="synctoricheditobject"></a>  CRichEditCntrItem::SyncToRichEditObject

Chiamare questa funzione per sincronizzare l'aspetto, device [DVASPECT](/windows/desktop/api/wtypes/ne-wtypes-tagdvaspect), di questo `CRichEditCntrltem` a quello specificato da *reo*.

```
void SyncToRichEditObject(REOBJECT& reo);
```

### <a name="parameters"></a>Parametri

*reo*<br/>
Fare riferimento a un [REOBJECT](/windows/desktop/api/richole/ns-richole-_reobject) struttura che descrive un elemento OLE.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [DVASPECT](/windows/desktop/api/wtypes/ne-wtypes-tagdvaspect) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Esempio MFC WORDPAD](../../visual-cpp-samples.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CRichEditDoc](../../mfc/reference/cricheditdoc-class.md)<br/>
[Classe CRichEditView](../../mfc/reference/cricheditview-class.md)
