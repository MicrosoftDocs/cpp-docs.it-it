---
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
ms.openlocfilehash: 587cf65543e24e586fb8b2336481d6e841473134
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368267"
---
# <a name="cricheditdoc-class"></a>Classe CRichEditDoc

Con [CRichEditView](../../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md), fornisce la funzionalità del controllo Rich Edit nel contesto dell'architettura di visualizzazione documento di MFC.

## <a name="syntax"></a>Sintassi

```
class CRichEditDoc : public COleServerDoc
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditDoc::CreateClientItem](#createclientitem)|Chiamato per eseguire la pulizia del documento.|
|[CRichEditDoc::GetStreamFormat](#getstreamformat)|Indica se l'input e l'output del flusso devono includere informazioni di formattazione.|
|[CRichEditDoc::GetView](#getview)|Recupera l'oggetto [CRichEditView](../../mfc/reference/cricheditview-class.md) asssociato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditDoc::m_bRTF](#m_brtf)|Indica se l'I/O del flusso deve includere la formattazione.|

## <a name="remarks"></a>Osservazioni

Un "controllo Rich Edit" è una finestra in cui l'utente può immettere e modificare il testo. Al testo può essere assegnata la formattazione di carattere e paragrafo e può includere oggetti OLE incorporati. I controlli Rich Edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessari per rendere disponibili all'utente le operazioni di formattazione.

`CRichEditView`mantiene il testo e la caratteristica di formattazione del testo. `CRichEditDoc`gestisce l'elenco degli elementi client presenti nella visualizzazione. `CRichEditCntrItem`fornisce l'accesso lato contenitore agli elementi client OLE.

Questo controllo comune di Windows (e quindi il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versioni 3.51 e successive.

Per un esempio di utilizzo di un documento rich edit in un'applicazione MFC, vedere l'applicazione di esempio [WORDPAD.](../../overview/visual-cpp-samples.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

[COleDocument](../../mfc/reference/coledocument-class.md)

[COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)

[COleServerDoc](../../mfc/reference/coleserverdoc-class.md)

`CRichEditDoc`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrich.h

## <a name="cricheditdoccreateclientitem"></a><a name="createclientitem"></a>CRichEditDoc::CreateClientItem

Chiamare questa funzione `CRichEditCntrItem` per creare un oggetto e aggiungerlo a questo documento.

```
virtual CRichEditCntrItem* CreateClientItem(REOBJECT* preo = NULL) const = 0;
```

### <a name="parameters"></a>Parametri

*preo*<br/>
Puntatore a una struttura [REOBJECT](/windows/win32/api/richole/ns-richole-reobject) che descrive un elemento OLE. Il `CRichEditCntrItem` nuovo oggetto viene costruito intorno a questo elemento OLE. Se *preo* è NULL, il nuovo elemento client è vuoto.

### <a name="return-value"></a>Valore restituito

Puntatore a un nuovo oggetto [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) aggiunto a questo documento.

### <a name="remarks"></a>Osservazioni

Questa funzione non esegue alcuna inizializzazione OLE.

Per ulteriori informazioni, vedere la struttura [REOBJECT](/windows/win32/api/richole/ns-richole-reobject) in Windows SDK.

## <a name="cricheditdocgetstreamformat"></a><a name="getstreamformat"></a>CRichEditDoc::GetStreamFormat

Chiamare questa funzione per determinare il formato di testo per lo streaming del contenuto della modifica avanzata.

```
int GetStreamFormat() const;
```

### <a name="return-value"></a>Valore restituito

Uno dei seguenti flag:

- SF_TEXT Indica che il controllo Rich Edit non mantiene le informazioni di formattazione.

- SF_RTF Indica che il controllo Rich Edit mantenga le informazioni di formattazione.

### <a name="remarks"></a>Osservazioni

Il valore restituito è basato sul membro dati [m_bRTF.](#m_brtf) Questa funzione restituisce SF_RTF se `m_bRTF` è TRUE; in caso contrario, SF_TEXT.

## <a name="cricheditdocgetview"></a><a name="getview"></a>CRichEditDoc::GetView

Chiamare questa funzione per accedere al [CRichEditView](../../mfc/reference/cricheditview-class.md) oggetto associato a questo `CRichEditDoc` oggetto.

```
virtual CRichEditView* GetView() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore `CRichEditView` all'oggetto associato al documento.

### <a name="remarks"></a>Osservazioni

Le informazioni di testo e `CRichEditView` di formattazione sono contenute all'interno dell'oggetto. L'oggetto `CRichEditDoc` gestisce gli elementi OLE per la serializzazione. Ci dovrebbe essere `CRichEditView` solo `CRichEditDoc`uno per ogni .

## <a name="cricheditdocm_brtf"></a><a name="m_brtf"></a>CRichEditDoc::m_bRTF

Se TRUE, indica che [CRichEditCtrl::StreamIn](../../mfc/reference/cricheditctrl-class.md#streamin) e [CRichEditCtrl::StreamOut](../../mfc/reference/cricheditctrl-class.md#streamout) devono archiviare le caratteristiche di formattazione dei paragrafi e dei caratteri.

```
BOOL m_bRTF;
```

## <a name="see-also"></a>Vedere anche

[WordPAD di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CRichEditView (classe)](../../mfc/reference/cricheditview-class.md)<br/>
[Classe CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md)<br/>
[Classe COleDocument](../../mfc/reference/coledocument-class.md)<br/>
[CRichEditCtrl (classe)](../../mfc/reference/cricheditctrl-class.md)
