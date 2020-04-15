---
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
ms.openlocfilehash: b8158105d09d5cfc7c25512567a98121b194a82a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368294"
---
# <a name="cricheditcntritem-class"></a>Classe CRichEditCntrItem

Con [CRichEditView](../../mfc/reference/cricheditview-class.md) e [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), fornisce la funzionalità del controllo Rich Edit nel contesto dell'architettura di visualizzazione documento di MFC.

## <a name="syntax"></a>Sintassi

```
class CRichEditCntrItem : public COleClientItem
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CRichEditCntrItem::CRichEditCntrItem](#cricheditcntritem)|Costruisce un oggetto `CRichEditCntrItem`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CRichEditCntrItem::SyncToRichEditObject](#synctoricheditobject)|Attiva l'elemento come altro tipo.|

## <a name="remarks"></a>Osservazioni

Un "controllo Rich Edit" è una finestra in cui l'utente può immettere e modificare il testo. Al testo può essere assegnata la formattazione di carattere e paragrafo e può includere oggetti OLE incorporati. I controlli Rich Edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessari per rendere disponibili all'utente le operazioni di formattazione.

`CRichEditView`mantiene il testo e la caratteristica di formattazione del testo. `CRichEditDoc`gestisce l'elenco degli elementi client OLE presenti nella visualizzazione. `CRichEditCntrItem`fornisce l'accesso lato contenitore all'elemento client OLE.

Questo controllo comune di Windows (e quindi il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versioni 3.51 e successive.

Per un esempio di utilizzo di elementi contenitore Rich Edit in un'applicazione MFC, vedere l'applicazione di esempio [WORDPAD.](../../overview/visual-cpp-samples.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocItem](../../mfc/reference/cdocitem-class.md)

[COleClientItem](../../mfc/reference/coleclientitem-class.md)

`CRichEditCntrItem`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrich.h

## <a name="cricheditcntritemcricheditcntritem"></a><a name="cricheditcntritem"></a>Oggetto CRichEditCntrItem::CRichEditCntrItem

Chiamare questa funzione `CRichEditCntrItem` per creare un oggetto e aggiungerlo al documento contenitore.

```
CRichEditCntrItem(
    REOBJECT* preo = NULL,
    CRichEditDoc* pContainer = NULL);
```

### <a name="parameters"></a>Parametri

*preo*<br/>
Puntatore a una struttura [REOBJECT](/windows/win32/api/richole/ns-richole-reobject) che descrive un elemento OLE. Il `CRichEditCntrItem` nuovo oggetto viene costruito intorno a questo elemento OLE. Se *preo* è NULL, l'elemento client è vuoto.

*pContainer*<br/>
Puntatore al documento contenitore che conterrà questo elemento. Se *pContainer* è NULL, è necessario chiamare in modo esplicito [COleDocument::AddItem](../../mfc/reference/coledocument-class.md#additem) per aggiungere questo elemento client a un documento.

### <a name="remarks"></a>Osservazioni

Questa funzione non esegue alcuna inizializzazione OLE.

Per ulteriori informazioni, vedere la struttura [REOBJECT](/windows/win32/api/richole/ns-richole-reobject) in Windows SDK.

## <a name="cricheditcntritemsynctoricheditobject"></a><a name="synctoricheditobject"></a>Oggetto CRichEditCntrItem::SyncToRichEditObject

Chiamare questa funzione per sincronizzare l'aspetto `CRichEditCntrltem` del dispositivo, [DVASPECT](/windows/win32/api/wtypes/ne-wtypes-dvaspect), di questo a quello specificato da *reo*.

```
void SyncToRichEditObject(REOBJECT& reo);
```

### <a name="parameters"></a>Parametri

*Reo*<br/>
Riferimento a una struttura [REOBJECT](/windows/win32/api/richole/ns-richole-reobject) che descrive un elemento OLE.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [DVASPECT](/windows/win32/api/wtypes/ne-wtypes-dvaspect) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[WordPAD di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CRichEditDoc](../../mfc/reference/cricheditdoc-class.md)<br/>
[CRichEditView (classe)](../../mfc/reference/cricheditview-class.md)
