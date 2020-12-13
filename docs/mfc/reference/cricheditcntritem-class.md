---
description: 'Altre informazioni su: classe CRichEditCntrItem'
title: Classe CRichEditCntrItem
ms.date: 11/04/2016
f1_keywords:
- CRichEditCntrItem
- AFXRICH/CRichEditCntrItem
- AFXRICH/CRichEditCntrItem::CRichEditCntrItem
- AFXRICH/CRichEditCntrItem::SyncToRichEditObject
helpviewer_keywords:
- CRichEditCntrItem [MFC], CRichEditCntrItem
- CRichEditCntrItem [MFC], SyncToRichEditObject
ms.assetid: 6c0b4efe-0fb8-4621-b5e1-fdcb8ec48c3b
ms.openlocfilehash: 9e65e70a3fb03b65ebf9af7a619a5c4fbd3dba32
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342960"
---
# <a name="cricheditcntritem-class"></a>Classe CRichEditCntrItem

Con [CRichEditView](../../mfc/reference/cricheditview-class.md) e [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), fornisce la funzionalità del controllo Rich Edit nel contesto dell'architettura di visualizzazione documento di MFC.

## <a name="syntax"></a>Sintassi

```
class CRichEditCntrItem : public COleClientItem
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CRichEditCntrItem:: CRichEditCntrItem](#cricheditcntritem)|Costruisce un oggetto `CRichEditCntrItem`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CRichEditCntrItem:: SyncToRichEditObject](#synctoricheditobject)|Attiva l'elemento come un altro tipo.|

## <a name="remarks"></a>Commenti

Un "controllo Rich Edit" è una finestra in cui l'utente può immettere e modificare il testo. Al testo può essere assegnata la formattazione di caratteri e paragrafi e possono includere oggetti OLE incorporati. I controlli Rich Edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessari per rendere disponibili le operazioni di formattazione per l'utente.

`CRichEditView` mantiene il testo e la caratteristica di formattazione del testo. `CRichEditDoc` mantiene l'elenco di elementi client OLE presenti nella vista. `CRichEditCntrItem` fornisce accesso sul lato contenitore all'elemento client OLE.

Questo controllo comune di Windows (e, di conseguenza, [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3,51 e successive.

Per un esempio relativo all'uso di Rich Edit container items in un'applicazione MFC, vedere l'applicazione di esempio [WordPad](../../overview/visual-cpp-samples.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

[COleClientItem](../../mfc/reference/coleclientitem-class.md)

`CRichEditCntrItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrich. h

## <a name="cricheditcntritemcricheditcntritem"></a><a name="cricheditcntritem"></a> CRichEditCntrItem:: CRichEditCntrItem

Chiamare questa funzione per creare un `CRichEditCntrItem` oggetto e aggiungerlo al documento contenitore.

```
CRichEditCntrItem(
    REOBJECT* preo = NULL,
    CRichEditDoc* pContainer = NULL);
```

### <a name="parameters"></a>Parametri

*Preo*<br/>
Puntatore a una struttura [REOBJECT](/windows/win32/api/richole/ns-richole-reobject) che descrive un elemento OLE. Il nuovo `CRichEditCntrItem` oggetto viene costruito intorno a questo elemento OLE. Se *Preo* è null, l'elemento client è vuoto.

*pContainer*<br/>
Puntatore al documento del contenitore che conterrà questo elemento. Se *pContainer può* è null, è necessario chiamare in modo esplicito [COleDocument:: AddItem](../../mfc/reference/coledocument-class.md#additem) per aggiungere questo elemento client a un documento.

### <a name="remarks"></a>Commenti

Questa funzione non esegue alcuna inizializzazione OLE.

Per ulteriori informazioni, vedere la struttura [REOBJECT](/windows/win32/api/richole/ns-richole-reobject) nella Windows SDK.

## <a name="cricheditcntritemsynctoricheditobject"></a><a name="synctoricheditobject"></a> CRichEditCntrItem:: SyncToRichEditObject

Chiamare questa funzione per sincronizzare l'aspetto del dispositivo, [DVASPECT](/windows/win32/api/wtypes/ne-wtypes-dvaspect), di questo `CRichEditCntrltem` oggetto con quello specificato da *reo*.

```cpp
void SyncToRichEditObject(REOBJECT& reo);
```

### <a name="parameters"></a>Parametri

*reo*<br/>
Riferimento a una struttura [REOBJECT](/windows/win32/api/richole/ns-richole-reobject) che descrive un elemento OLE.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [DVASPECT](/windows/win32/api/wtypes/ne-wtypes-dvaspect) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[WORDPAD di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[COleClientItem (classe)](../../mfc/reference/coleclientitem-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CRichEditDoc](../../mfc/reference/cricheditdoc-class.md)<br/>
[Classe CRichEditView](../../mfc/reference/cricheditview-class.md)
