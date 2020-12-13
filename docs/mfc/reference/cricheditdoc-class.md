---
description: 'Altre informazioni su: classe CRichEditDoc'
title: Classe CRichEditDoc
ms.date: 11/04/2016
f1_keywords:
- CRichEditDoc
- AFXRICH/CRichEditDoc
- AFXRICH/CRichEditDoc::CreateClientItem
- AFXRICH/CRichEditDoc::GetStreamFormat
- AFXRICH/CRichEditDoc::GetView
- AFXRICH/CRichEditDoc::m_bRTF
helpviewer_keywords:
- CRichEditDoc [MFC], CreateClientItem
- CRichEditDoc [MFC], GetStreamFormat
- CRichEditDoc [MFC], GetView
- CRichEditDoc [MFC], m_bRTF
ms.assetid: c936ec18-d516-49d4-b7fb-c9aa0229eddc
ms.openlocfilehash: 5e94fb8edb3f5a596b71ddd55cdcb2077ba6201d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342930"
---
# <a name="cricheditdoc-class"></a>Classe CRichEditDoc

Con [CRichEditView](../../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md), fornisce la funzionalità del controllo Rich Edit nel contesto dell'architettura di visualizzazione documento di MFC.

## <a name="syntax"></a>Sintassi

```
class CRichEditDoc : public COleServerDoc
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CRichEditDoc:: CreateClientItem](#createclientitem)|Chiamato per eseguire la pulizia del documento.|
|[CRichEditDoc:: GetStreamFormat](#getstreamformat)|Indica se l'input e l'output del flusso devono includere informazioni di formattazione.|
|[CRichEditDoc:: GetView](#getview)|Recupera l'oggetto asssociated [CRichEditView](../../mfc/reference/cricheditview-class.md) .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CRichEditDoc:: m_bRTF](#m_brtf)|Indica se l'I/O del flusso deve includere la formattazione.|

## <a name="remarks"></a>Commenti

Un "controllo Rich Edit" è una finestra in cui l'utente può immettere e modificare il testo. Al testo può essere assegnata la formattazione di caratteri e paragrafi e possono includere oggetti OLE incorporati. I controlli Rich Edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessari per rendere disponibili le operazioni di formattazione per l'utente.

`CRichEditView` mantiene il testo e la caratteristica di formattazione del testo. `CRichEditDoc` mantiene l'elenco di elementi client presenti nella vista. `CRichEditCntrItem` fornisce accesso sul lato contenitore agli elementi client OLE.

Questo controllo comune di Windows (e, di conseguenza, [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3,51 e successive.

Per un esempio di utilizzo di un documento Rich Edit in un'applicazione MFC, vedere l'applicazione di esempio [WordPad](../../overview/visual-cpp-samples.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

[COleDocument](../../mfc/reference/coledocument-class.md)

[COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)

[COleServerDoc](../../mfc/reference/coleserverdoc-class.md)

`CRichEditDoc`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrich. h

## <a name="cricheditdoccreateclientitem"></a><a name="createclientitem"></a> CRichEditDoc:: CreateClientItem

Chiamare questa funzione per creare un `CRichEditCntrItem` oggetto e aggiungerlo al documento.

```
virtual CRichEditCntrItem* CreateClientItem(REOBJECT* preo = NULL) const = 0;
```

### <a name="parameters"></a>Parametri

*Preo*<br/>
Puntatore a una struttura [REOBJECT](/windows/win32/api/richole/ns-richole-reobject) che descrive un elemento OLE. Il nuovo `CRichEditCntrItem` oggetto viene costruito intorno a questo elemento OLE. Se *Preo* è null, il nuovo elemento client è vuoto.

### <a name="return-value"></a>Valore restituito

Puntatore a un nuovo oggetto [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) aggiunto al documento.

### <a name="remarks"></a>Commenti

Questa funzione non esegue alcuna inizializzazione OLE.

Per ulteriori informazioni, vedere la struttura [REOBJECT](/windows/win32/api/richole/ns-richole-reobject) nella Windows SDK.

## <a name="cricheditdocgetstreamformat"></a><a name="getstreamformat"></a> CRichEditDoc:: GetStreamFormat

Chiamare questa funzione per determinare il formato di testo per lo streaming del contenuto della Rich Edit.

```
int GetStreamFormat() const;
```

### <a name="return-value"></a>Valore restituito

Uno dei flag seguenti:

- SF_TEXT indica che il controllo Rich Edit non mantiene le informazioni di formattazione.

- SF_RTF indica che il controllo Rich Edit mantiene le informazioni di formattazione.

### <a name="remarks"></a>Commenti

Il valore restituito è basato sul membro dati [m_bRTF](#m_brtf) . Questa funzione restituisce SF_RTF se `m_bRTF` è true. in caso contrario, SF_TEXT.

## <a name="cricheditdocgetview"></a><a name="getview"></a> CRichEditDoc:: GetView

Chiamare questa funzione per accedere all'oggetto [CRichEditView](../../mfc/reference/cricheditview-class.md) associato a questo `CRichEditDoc` oggetto.

```
virtual CRichEditView* GetView() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all' `CRichEditView` oggetto associato al documento.

### <a name="remarks"></a>Commenti

Il testo e le informazioni di formattazione sono contenuti all'interno dell' `CRichEditView` oggetto. L' `CRichEditDoc` oggetto mantiene gli elementi OLE per la serializzazione. Deve essere presente una sola `CRichEditView` per ogni `CRichEditDoc` .

## <a name="cricheditdocm_brtf"></a><a name="m_brtf"></a> CRichEditDoc:: m_bRTF

Se è TRUE, indica che [CRichEditCtrl:: streamin](../../mfc/reference/cricheditctrl-class.md#streamin) e [CRichEditCtrl:: Stream](../../mfc/reference/cricheditctrl-class.md#streamout) out devono archiviare le caratteristiche di formattazione dei caratteri e dei paragrafi.

```
BOOL m_bRTF;
```

## <a name="see-also"></a>Vedi anche

[WORDPAD di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CRichEditView](../../mfc/reference/cricheditview-class.md)<br/>
[Classe CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md)<br/>
[Classe COleDocument](../../mfc/reference/coledocument-class.md)<br/>
[Classe CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md)
