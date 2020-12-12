---
description: 'Altre informazioni su: classe CHtmlEditView'
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
ms.openlocfilehash: 9ab998ca16a26fd4ef7a23e4dc58c6542ec330b3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261320"
---
# <a name="chtmleditview-class"></a>Classe CHtmlEditView

Fornisce la funzionalità della piattaforma di modifica WebBrowser nel contesto dell'architettura documento/visualizzazione di MFC.

## <a name="syntax"></a>Sintassi

```
class CHtmlEditView : public CHtmlView, public CHtmlEditCtrlBase<CHtmlEditView>
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CHtmlEditView:: CHtmlEditView](#chtmleditview)|Costruisce un oggetto `CHtmlEditView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CHtmlEditView:: create](#create)|Crea un nuovo oggetto finestra.|
|[CHtmlEditView:: GetDHtmlDocument](#getdhtmldocument)|Restituisce l' `IHTMLDocument2` interfaccia del documento corrente.|
|[CHtmlEditView:: GetStartDocument](#getstartdocument)|Recupera il nome del documento predefinito per questa visualizzazione.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CScrollView](../../mfc/reference/cscrollview-class.md)

[CFormView](../../mfc/reference/cformview-class.md)

[CHtmlEditCtrlBase](../../mfc/reference/chtmleditctrlbase-class.md)

[CHtmlView](../../mfc/reference/chtmlview-class.md)

`CHtmlEditView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxhtml.h

## <a name="chtmleditviewchtmleditview"></a><a name="chtmleditview"></a> CHtmlEditView:: CHtmlEditView

Costruisce un oggetto `CHtmlEditView`.

```
CHtmlEditView();
```

## <a name="chtmleditviewcreate"></a><a name="create"></a> CHtmlEditView:: create

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

*lpszClassName*<br/>
Punta a una stringa di caratteri con terminazione null che denomina la classe Windows. Il nome della classe può essere qualsiasi nome registrato con la funzione globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) o con la `RegisterClass` funzione di Windows. Se è NULL, USA gli attributi [CFrameWnd](../../mfc/reference/cframewnd-class.md) predefiniti predefiniti.

*lpszWindowName*<br/>
Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra.

*dwStyle*<br/>
Specifica gli attributi di stile della finestra. Per impostazione predefinita, gli stili WS_VISIBLE e WS_CHILD Windows sono impostati.

*Rect*<br/>
Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che specifica le dimensioni e la posizione della finestra. Il valore *rectDefault Windows* consente a Windows di specificare le dimensioni e la posizione della nuova finestra.

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo.

*nID*<br/>
Numero ID della visualizzazione. Per impostazione predefinita, impostare su AFX_IDW_PANE_FIRST.

*pContext*<br/>
Puntatore a un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md). NULL per impostazione predefinita.

### <a name="remarks"></a>Commenti

Questo metodo chiamerà anche il metodo del WebBrowser contenuto `Navigate` per caricare un documento predefinito (vedere [CHtmlEditView:: GetStartDocument](#getstartdocument)).

## <a name="chtmleditviewgetdhtmldocument"></a><a name="getdhtmldocument"></a> CHtmlEditView:: GetDHtmlDocument

Restituisce l' `IHTMLDocument2` interfaccia del documento corrente.

```
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;
```

### <a name="parameters"></a>Parametri

*ppDocument*<br/>
Interfaccia [IHTMLDocument2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\)) .

## <a name="chtmleditviewgetstartdocument"></a><a name="getstartdocument"></a> CHtmlEditView:: GetStartDocument

Recupera il nome del documento predefinito per questa visualizzazione.

```
virtual LPCTSTR GetStartDocument();
```

## <a name="see-also"></a>Vedi anche

[Esempio HTMLEdit](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
