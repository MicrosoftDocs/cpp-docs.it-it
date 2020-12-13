---
description: 'Altre informazioni su: classe CMFCPreviewCtrlImpl'
title: Classe CMFCPreviewCtrlImpl
ms.date: 11/04/2016
f1_keywords:
- CMFCPreviewCtrlImpl
- AFXWIN/CMFCPreviewCtrlImpl
- AFXWIN/CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl
- AFXWIN/CMFCPreviewCtrlImpl::Create
- AFXWIN/CMFCPreviewCtrlImpl::Destroy
- AFXWIN/CMFCPreviewCtrlImpl::Focus
- AFXWIN/CMFCPreviewCtrlImpl::GetDocument
- AFXWIN/CMFCPreviewCtrlImpl::Redraw
- AFXWIN/CMFCPreviewCtrlImpl::SetDocument
- AFXWIN/CMFCPreviewCtrlImpl::SetHost
- AFXWIN/CMFCPreviewCtrlImpl::SetPreviewVisuals
- AFXWIN/CMFCPreviewCtrlImpl::SetRect
- AFXWIN/CMFCPreviewCtrlImpl::DoPaint
- AFXWIN/CMFCPreviewCtrlImpl::m_clrBackColor
- AFXWIN/CMFCPreviewCtrlImpl::m_clrTextColor
- AFXWIN/CMFCPreviewCtrlImpl::m_font
- AFXWIN/CMFCPreviewCtrlImpl::m_pDocument
helpviewer_keywords:
- CMFCPreviewCtrlImpl [MFC], CMFCPreviewCtrlImpl
- CMFCPreviewCtrlImpl [MFC], Create
- CMFCPreviewCtrlImpl [MFC], Destroy
- CMFCPreviewCtrlImpl [MFC], Focus
- CMFCPreviewCtrlImpl [MFC], GetDocument
- CMFCPreviewCtrlImpl [MFC], Redraw
- CMFCPreviewCtrlImpl [MFC], SetDocument
- CMFCPreviewCtrlImpl [MFC], SetHost
- CMFCPreviewCtrlImpl [MFC], SetPreviewVisuals
- CMFCPreviewCtrlImpl [MFC], SetRect
- CMFCPreviewCtrlImpl [MFC], DoPaint
- CMFCPreviewCtrlImpl [MFC], m_clrBackColor
- CMFCPreviewCtrlImpl [MFC], m_clrTextColor
- CMFCPreviewCtrlImpl [MFC], m_font
- CMFCPreviewCtrlImpl [MFC], m_pDocument
ms.assetid: 06257fa0-54c9-478d-9d68-c9698c3f93ed
ms.openlocfilehash: 09e4b8e023a55110986aafccfd2646d8e7775c31
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334728"
---
# <a name="cmfcpreviewctrlimpl-class"></a>Classe CMFCPreviewCtrlImpl

Questa classe implementa una finestra posizionata in una finestra host fornita dalla Shell per l'anteprima avanzata.

## <a name="syntax"></a>Sintassi

```
class CMFCPreviewCtrlImpl : public CWnd;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCPreviewCtrlImpl:: ~ CMFCPreviewCtrlImpl](#dtor)|Distrugge un oggetto controllo di anteprima.|
|[CMFCPreviewCtrlImpl:: CMFCPreviewCtrlImpl](#cmfcpreviewctrlimpl)|Costruisce un oggetto controllo di anteprima.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCPreviewCtrlImpl:: create](#create)|Di overload. Chiamato da un gestore di anteprime avanzato per creare la finestra di Windows.|
|[CMFCPreviewCtrlImpl::D estroy](#destroy)|Chiamato da un gestore di anteprime avanzato quando è necessario eliminare il controllo.|
|[CMFCPreviewCtrlImpl:: Focus](#focus)|Imposta lo stato attivo per l'input su questo controllo.|
|[CMFCPreviewCtrlImpl:: GetDocument](#getdocument)|Restituisce un documento connesso a questo controllo di anteprima.|
|[CMFCPreviewCtrlImpl:: redisegnato](#redraw)|Indica a questo controllo di ricreare.|
|[CMFCPreviewCtrlImpl:: fileDocument](#setdocument)|Chiamato dal gestore di anteprime per creare una relazione tra l'implementazione del documento e il controllo di anteprima.|
|[CMFCPreviewCtrlImpl:: sehost](#sethost)|Imposta un nuovo elemento padre per questo controllo.|
|[CMFCPreviewCtrlImpl:: SetPreviewVisuals](#setpreviewvisuals)|Chiamato da un gestore di anteprime avanzato quando è necessario impostare oggetti visivi di contenuto di anteprima avanzata.|
|[CMFCPreviewCtrlImpl:: serect](#setrect)|Imposta un nuovo rettangolo di delimitazione per questo controllo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCPreviewCtrlImpl::D oPaint](#dopaint)|Chiamato dal Framework per eseguire il rendering dell'anteprima.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CMFCPreviewCtrlImpl:: m_clrBackColor](#m_clrbackcolor)|Colore di sfondo della finestra di anteprima.|
|[CMFCPreviewCtrlImpl:: m_clrTextColor](#m_clrtextcolor)|Colore del testo della finestra di anteprima.|
|[CMFCPreviewCtrlImpl:: m_font](#m_font)|Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.|
|[CMFCPreviewCtrlImpl:: m_pDocument](#m_pdocument)|Puntatore a un documento il cui contenuto viene visualizzato in anteprima nel controllo.|

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCPreviewCtrlImpl](../../mfc/reference/cmfcpreviewctrlimpl-class.md)

## <a name="cmfcpreviewctrlimplcmfcpreviewctrlimpl"></a><a name="cmfcpreviewctrlimpl"></a> CMFCPreviewCtrlImpl:: CMFCPreviewCtrlImpl

Costruisce un oggetto controllo di anteprima.

### <a name="syntax"></a>Sintassi

CMFCPreviewCtrlImpl ();

## <a name="cmfcpreviewctrlimplcreate"></a><a name="create"></a> CMFCPreviewCtrlImpl:: create

Di overload. Chiamato da un gestore di anteprime avanzato per creare la finestra di Windows.

### <a name="syntax"></a>Sintassi

```
virtual BOOL Create(
   HWND hWndParent,
   const RECT* prc
);
virtual BOOL Create(
   HWND hWndParent,
   const RECT* prc,
   CCreateContext* pContext
);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
Handle per la finestra host fornita dalla Shell per l'anteprima avanzata.

*PRC*<br/>
Specifica le dimensioni e la posizione iniziali della finestra.

*pContext*<br/>
Puntatore a un contesto di creazione.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione di creazione è riuscita; in caso contrario, FALSE.

## <a name="cmfcpreviewctrlimpldestroy"></a><a name="destroy"></a> CMFCPreviewCtrlImpl::D estroy

Chiamato da un gestore di anteprime avanzato quando è necessario eliminare il controllo.

### <a name="syntax"></a>Sintassi

```
virtual void Destroy();
```

## <a name="cmfcpreviewctrlimpldopaint"></a><a name="dopaint"></a> CMFCPreviewCtrlImpl::D oPaint

Chiamato dal Framework per eseguire il rendering dell'anteprima.

### <a name="syntax"></a>Sintassi

```
virtual void DoPaint(
   CPaintDC* pDC
);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore a un contesto di dispositivo per il disegno.

## <a name="cmfcpreviewctrlimplfocus"></a><a name="focus"></a> CMFCPreviewCtrlImpl:: Focus

Imposta lo stato attivo per l'input su questo controllo.

### <a name="syntax"></a>Sintassi

```
virtual void Focus();
```

## <a name="cmfcpreviewctrlimplgetdocument"></a><a name="getdocument"></a> CMFCPreviewCtrlImpl:: GetDocument

Restituisce un documento connesso a questo controllo di anteprima.

### <a name="syntax"></a>Sintassi

```
ATL::IDocument* GetDocument();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un documento il cui contenuto viene visualizzato in anteprima nel controllo.

## <a name="cmfcpreviewctrlimplm_clrbackcolor"></a><a name="m_clrbackcolor"></a> CMFCPreviewCtrlImpl:: m_clrBackColor

Colore di sfondo della finestra di anteprima.

### <a name="syntax"></a>Sintassi

```
COLORREF m_clrBackColor;
```

## <a name="cmfcpreviewctrlimplm_clrtextcolor"></a><a name="m_clrtextcolor"></a> CMFCPreviewCtrlImpl:: m_clrTextColor

Colore del testo della finestra di anteprima.

### <a name="syntax"></a>Sintassi

```
COLORREF m_clrTextColor;
```

## <a name="cmfcpreviewctrlimplm_font--font-used-to-display-text-in-the-preview-window"></a><a name="m_font"></a> CMFCPreviewCtrlImpl:: m_font tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.

### <a name="syntax"></a>Sintassi

```
CFont m_font;
```

## <a name="cmfcpreviewctrlimplm_pdocument"></a><a name="m_pdocument"></a> CMFCPreviewCtrlImpl:: m_pDocument

Puntatore a un documento il cui contenuto viene visualizzato in anteprima nel controllo.

### <a name="syntax"></a>Sintassi

```
ATL::IDocument* m_pDocument;
```

## <a name="cmfcpreviewctrlimplredraw"></a><a name="redraw"></a> CMFCPreviewCtrlImpl:: redisegnato

Indica a questo controllo di ricreare.

### <a name="syntax"></a>Sintassi

```
virtual void Redraw();
```

## <a name="cmfcpreviewctrlimplsetdocument"></a><a name="setdocument"></a> CMFCPreviewCtrlImpl:: fileDocument

Chiamato dal gestore di anteprime per creare una relazione tra l'implementazione del documento e il controllo di anteprima.

### <a name="syntax"></a>Sintassi

```cpp
void SetDocument(
   IDocument* pDocument
);
```

### <a name="parameters"></a>Parametri

*pDocument*<br/>
Puntatore all'implementazione del documento.

## <a name="cmfcpreviewctrlimplsethost"></a><a name="sethost"></a> CMFCPreviewCtrlImpl:: sehost

Imposta un nuovo elemento padre per questo controllo.

### <a name="syntax"></a>Sintassi

```
virtual void SetHost(
   HWND hWndParent
);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
Handle per la nuova finestra padre.

## <a name="cmfcpreviewctrlimplsetpreviewvisuals"></a><a name="setpreviewvisuals"></a> CMFCPreviewCtrlImpl:: SetPreviewVisuals

Chiamato da un gestore di anteprime avanzato quando è necessario impostare oggetti visivi di contenuto di anteprima avanzata.

### <a name="syntax"></a>Sintassi

```
virtual void SetPreviewVisuals(
   COLORREF clrBack,
   COLORREF clrText,
   const LOGFONTW *plf
);
```

### <a name="parameters"></a>Parametri

*clrBack*<br/>
Colore di sfondo della finestra di anteprima.

*clrText*<br/>
Colore del testo della finestra di anteprima.

*PLF*<br/>
Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.

## <a name="cmfcpreviewctrlimplsetrect"></a><a name="setrect"></a> CMFCPreviewCtrlImpl:: serect

Imposta un nuovo rettangolo di delimitazione per questo controllo.

### <a name="syntax"></a>Sintassi

```
virtual void SetRect(
   const RECT* prc,
   BOOL bRedraw
);
```

### <a name="parameters"></a>Parametri

*PRC*<br/>
Specifica le nuove dimensioni e la posizione del controllo anteprima.

*bRedraw*<br/>
Specifica se il controllo deve essere ridisegnato.

### <a name="remarks"></a>Commenti

In genere viene impostato un nuovo rettangolo di delimitazione quando il controllo host viene ridimensionato.

## <a name="cmfcpreviewctrlimplcmfcpreviewctrlimpl"></a><a name="dtor"></a> CMFCPreviewCtrlImpl:: ~ CMFCPreviewCtrlImpl

Distrugge un oggetto controllo di anteprima.

### <a name="syntax"></a>Sintassi

```
virtual ~CMFCPreviewCtrlImpl();
```
