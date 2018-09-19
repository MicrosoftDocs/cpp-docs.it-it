---
title: Classe CHtmlEditView | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CHtmlEditView
- AFXHTML/CHtmlEditView
- AFXHTML/CHtmlEditView::CHtmlEditView
- AFXHTML/CHtmlEditView::Create
- AFXHTML/CHtmlEditView::GetDHtmlDocument
- AFXHTML/CHtmlEditView::GetStartDocument
dev_langs:
- C++
helpviewer_keywords:
- CHtmlEditView [MFC], CHtmlEditView
- CHtmlEditView [MFC], Create
- CHtmlEditView [MFC], GetDHtmlDocument
- CHtmlEditView [MFC], GetStartDocument
ms.assetid: 166c8ba8-3fb5-4dd7-a9ea-5bca662d00f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c79991b22814140f93672dca2e1a92938aabdac8
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46399157"
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
|[CHtmlEditView::GetDHtmlDocument](#getdhtmldocument)|Restituisce il `IHTMLDocument2` interfaccia nel documento corrente.|
|[CHtmlEditView::GetStartDocument](#getstartdocument)|Recupera il nome del documento predefinito per questa visualizzazione.|

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

##  <a name="chtmleditview"></a>  CHtmlEditView::CHtmlEditView

Costruisce un oggetto `CHtmlEditView`.

```
CHtmlEditView();
```

##  <a name="create"></a>  CHtmlEditView::Create

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
Punta a una stringa di caratteri con terminazione null che denomina la classe Windows. Il nome della classe può essere qualsiasi nome registrato con il [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione globale o `RegisterClass` funzione Windows. Se NULL, viene utilizzato il valore predefinito predefinito [CFrameWnd](../../mfc/reference/cframewnd-class.md) attributi.

*lpszWindowName*<br/>
Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra.

*dwStyle*<br/>
Specifica gli attributi di stile di finestra. Per impostazione predefinita, gli stili WS_VISIBLE e WS_CHILD Windows sono impostati.

*Rect*<br/>
Un riferimento a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica le dimensioni e posizione della finestra. Il *rectDefault* valore consente a Windows specificare le dimensioni e la posizione della nuova finestra.

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo.

*nID*<br/>
Il numero di ID della vista. Per impostazione predefinita, impostato per AFX_IDW_PANE_FIRST.

*pContext*<br/>
Un puntatore a un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md). NULL per impostazione predefinita.

### <a name="remarks"></a>Note

Questo metodo verrà chiamato anche il controllo WebBrowser indipendente `Navigate` per caricare un documento predefinito (vedere [CHtmlEditView::GetStartDocument](#getstartdocument)).

##  <a name="getdhtmldocument"></a>  CHtmlEditView::GetDHtmlDocument

Restituisce il `IHTMLDocument2` interfaccia nel documento corrente.

```
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;
```

### <a name="parameters"></a>Parametri

*ppDocument*<br/>
Il [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interfaccia.

##  <a name="getstartdocument"></a>  CHtmlEditView::GetStartDocument

Recupera il nome del documento predefinito per questa visualizzazione.

```
virtual LPCTSTR GetStartDocument();
```

## <a name="see-also"></a>Vedere anche

[Esempio HTMLEdit](../../visual-cpp-samples.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)


