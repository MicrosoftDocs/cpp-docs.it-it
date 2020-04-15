---
title: Classe CHtmlEditView
ms.date: 11/04/2016
f1_keywords:
- CHtmlEditView
- AFXHTML/CHtmlEditView
- AFXHTML/CHtmlEditView::CHtmlEditView
- AFXHTML/CHtmlEditView::Create
- AFXHTML/CHtmlEditView::GetDHtmlDocument
- AFXHTML/CHtmlEditView::GetStartDocument
helpviewer_keywords:
- CHtmlEditView [MFC], CHtmlEditView
- CHtmlEditView [MFC], Create
- CHtmlEditView [MFC], GetDHtmlDocument
- CHtmlEditView [MFC], GetStartDocument
ms.assetid: 166c8ba8-3fb5-4dd7-a9ea-5bca662d00f6
ms.openlocfilehash: 1254a3412846cdebd1d9accb91d27d0afbc4ef8d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81352085"
---
# <a name="chtmleditview-class"></a>Classe CHtmlEditView

Fornisce la funzionalità della piattaforma di modifica WebBrowser nel contesto dell'architettura documento/visualizzazione di MFC.

## <a name="syntax"></a>Sintassi

```
class CHtmlEditView : public CHtmlView, public CHtmlEditCtrlBase<CHtmlEditView>
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHtmlEditView::CHtmlEditView](#chtmleditview)|Costruisce un oggetto `CHtmlEditView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHtmlEditView::Create](#create)|Crea un nuovo oggetto finestra.|
|[CHtmlEditView::GetDHtmlDocument](#getdhtmldocument)|Restituisce `IHTMLDocument2` l'interfaccia nel documento corrente.|
|[CHtmlEditView::GetStartDocument](#getstartdocument)|Recupera il nome del documento predefinito per questa visualizzazione.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CScrollView](../../mfc/reference/cscrollview-class.md)

[CFormView](../../mfc/reference/cformview-class.md)

[CHtmlEditCtrlBase](../../mfc/reference/chtmleditctrlbase-class.md)

[Chtmlview](../../mfc/reference/chtmlview-class.md)

`CHtmlEditView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxhtml.h

## <a name="chtmleditviewchtmleditview"></a><a name="chtmleditview"></a>CHtmlEditView::CHtmlEditView

Costruisce un oggetto `CHtmlEditView`.

```
CHtmlEditView();
```

## <a name="chtmleditviewcreate"></a><a name="create"></a>CHtmlEditView::Create

Crea un nuovo oggetto finestra.

```
virtual BOOL Create(
    LPCTSTR lpszClassName,
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID,
    CCreateContext* pContext = NULL);
```

### <a name="parameters"></a>Parametri

*lpszClassName (nome di classe)*<br/>
Punta a una stringa di caratteri con terminazione null che denomina la classe Windows. Il nome della classe può essere qualsiasi nome registrato con `RegisterClass` la funzione globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) o la funzione di Windows. Se NULL, utilizza gli attributi predefiniti [CFrameWnd.](../../mfc/reference/cframewnd-class.md)

*lpszNomefinestraNome*<br/>
Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra.

*DwStyle (in stile dwStyle)*<br/>
Specifica gli attributi di stile della finestra. Per impostazione predefinita, vengono impostati gli stili WS_VISIBLE e WS_CHILD di Windows.

*Rect*<br/>
Riferimento a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che specifica le dimensioni e la posizione della finestra. Il valore *rectDefault* consente a Windows di specificare le dimensioni e la posizione della nuova finestra.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre del controllo.

*nID*<br/>
Numero ID della visualizzazione. Per impostazione predefinita, impostare su AFX_IDW_PANE_FIRST.

*pContext*<br/>
Puntatore a un [oggetto CCreateContext.](../../mfc/reference/ccreatecontext-structure.md) NULL per impostazione predefinita.

### <a name="remarks"></a>Osservazioni

Questo metodo chiamerà anche il `Navigate` metodo del controllo WebBrowser contenuto per caricare un documento predefinito (vedere [CHtmlEditView::GetStartDocument](#getstartdocument)).

## <a name="chtmleditviewgetdhtmldocument"></a><a name="getdhtmldocument"></a>CHtmlEditView::GetDHtmlDocument

Restituisce `IHTMLDocument2` l'interfaccia nel documento corrente.

```
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;
```

### <a name="parameters"></a>Parametri

*PpDocument (documento pp)*<br/>
Interfaccia [IHTMLDocument2.](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\))

## <a name="chtmleditviewgetstartdocument"></a><a name="getstartdocument"></a>CHtmlEditView::GetStartDocument

Recupera il nome del documento predefinito per questa visualizzazione.

```
virtual LPCTSTR GetStartDocument();
```

## <a name="see-also"></a>Vedere anche

[Esempio HTMLEdit](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
