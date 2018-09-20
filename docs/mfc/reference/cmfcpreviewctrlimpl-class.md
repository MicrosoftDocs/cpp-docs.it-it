---
title: Classe CMFCPreviewCtrlImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9b157cfb497c355f44a15c8e42b81bc30753a4a9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46441304"
---
# <a name="cmfcpreviewctrlimpl-class"></a>Classe CMFCPreviewCtrlImpl

Questa classe implementa una finestra collocata in una finestra host fornita dalla Shell per l'anteprima avanzata.

## <a name="syntax"></a>Sintassi

```
class CMFCPreviewCtrlImpl : public CWnd;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPreviewCtrlImpl:: ~ CMFCPreviewCtrlImpl](#dtor)|Distrugge un oggetto di controllo di anteprima.|
|[CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl](#cmfcpreviewctrlimpl)|Costruisce un oggetto di controllo di anteprima.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPreviewCtrlImpl::Create](#create)|Di overload. Chiamato da un gestore di anteprima avanzata per creare la finestra di Windows.|
|[CMFCPreviewCtrlImpl::Destroy](#destroy)|Chiamato da un gestore di anteprime Rich quando è necessario eliminare definitivamente questo controllo.|
|[CMFCPreviewCtrlImpl::Focus](#focus)|Imposta lo stato attivo a questo controllo.|
|[CMFCPreviewCtrlImpl::GetDocument](#getdocument)|Restituisce un documento collegato a questo controllo di anteprima.|
|[CMFCPreviewCtrlImpl::Redraw](#redraw)|Indica il ridisegno del controllo.|
|[CMFCPreviewCtrlImpl::SetDocument](#setdocument)|Chiamato dal gestore di anteprime per creare una relazione tra l'implementazione di documento e il controllo di anteprima.|
|[CMFCPreviewCtrlImpl::SetHost](#sethost)|Imposta un nuovo elemento padre di questo controllo.|
|[CMFCPreviewCtrlImpl::SetPreviewVisuals](#setpreviewvisuals)|Chiamato da un gestore di anteprime Rich quando è necessario impostare gli oggetti visivi di un'anteprima dettagliata del contenuto.|
|[CMFCPreviewCtrlImpl::SetRect](#setrect)|Imposta un nuovo rettangolo di delimitazione per questo controllo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPreviewCtrlImpl::DoPaint](#dopaint)|Chiamato dal framework per il rendering dell'anteprima.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CMFCPreviewCtrlImpl::m_clrBackColor](#m_clrbackcolor)|Colore di sfondo della finestra di anteprima.|
|[CMFCPreviewCtrlImpl::m_clrTextColor](#m_clrtextcolor)|Colore del testo della finestra di anteprima.|
|[CMFCPreviewCtrlImpl::m_font](#m_font)|Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.|
|[CMFCPreviewCtrlImpl::m_pDocument](#m_pdocument)|Un puntatore a un documento il cui contenuto viene visualizzato in anteprima nel controllo.|

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCPreviewCtrlImpl](../../mfc/reference/cmfcpreviewctrlimpl-class.md)

## <a name="cmfcpreviewctrlimpl"></a> CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl

Costruisce un oggetto di controllo di anteprima.

### <a name="syntax"></a>Sintassi

CMFCPreviewCtrlImpl();

## <a name="create"></a> CMFCPreviewCtrlImpl::Create

Di overload. Chiamato da un gestore di anteprima avanzata per creare la finestra di Windows.

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
Handle alla finestra host fornita dalla Shell per l'anteprima avanzata.

*Repubblica popolare cinese*<br/>
Specifica le dimensioni iniziali e la posizione della finestra.

*pContext*<br/>
Puntatore a un contesto di creazione.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione di creazione è riuscita; in caso contrario, FALSE.

## <a name="destroy"></a> CMFCPreviewCtrlImpl::Destroy

Chiamato da un gestore di anteprime Rich quando è necessario eliminare definitivamente questo controllo.

### <a name="syntax"></a>Sintassi

```
virtual void Destroy();
```

## <a name="dopaint"></a> CMFCPreviewCtrlImpl::DoPaint

Chiamato dal framework per il rendering dell'anteprima.

### <a name="syntax"></a>Sintassi

```
virtual void DoPaint(
   CPaintDC* pDC
);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore a un contesto di dispositivo per il disegno.


## <a name="focus"></a> CMFCPreviewCtrlImpl::Focus

Imposta lo stato attivo a questo controllo.

### <a name="syntax"></a>Sintassi

```
virtual void Focus();
```
## <a name="getdocument"></a> CMFCPreviewCtrlImpl::GetDocument

Restituisce un documento collegato a questo controllo di anteprima.

### <a name="syntax"></a>Sintassi

```
ATL::IDocument* GetDocument();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un documento, il cui contenuto viene visualizzato in anteprima nel controllo.

## <a name="m_clrbackcolor"></a> CMFCPreviewCtrlImpl::m_clrBackColor

Colore di sfondo della finestra di anteprima.

### <a name="syntax"></a>Sintassi

```
COLORREF m_clrBackColor;
```

## <a name="m_clrtextcolor"></a> CMFCPreviewCtrlImpl::m_clrTextColor

Colore del testo della finestra di anteprima.

### <a name="syntax"></a>Sintassi

```
COLORREF m_clrTextColor;
```
## <a name="m_font"></a> Tipo di carattere CMFCPreviewCtrlImpl::m_font utilizzato per visualizzare il testo nella finestra di anteprima.

### <a name="syntax"></a>Sintassi

```
CFont m_font;
```
## <a name="m_pdocument"></a> CMFCPreviewCtrlImpl::m_pDocument

Un puntatore a un documento il cui contenuto viene visualizzato in anteprima nel controllo.

### <a name="syntax"></a>Sintassi

```
ATL::IDocument* m_pDocument;
```

## <a name="redraw"></a> CMFCPreviewCtrlImpl::Redraw

Indica il ridisegno del controllo.

### <a name="syntax"></a>Sintassi

```
virtual void Redraw();
```
## <a name="setdocument"></a> CMFCPreviewCtrlImpl::SetDocument

Chiamato dal gestore di anteprime per creare una relazione tra l'implementazione di documento e il controllo di anteprima.

### <a name="syntax"></a>Sintassi

```
void SetDocument(
   IDocument* pDocument
);
```

### <a name="parameters"></a>Parametri

*pDocument*<br/>
Un puntatore all'implementazione del documento.

## <a name="sethost"></a> CMFCPreviewCtrlImpl::SetHost

Imposta un nuovo elemento padre di questo controllo.

### <a name="syntax"></a>Sintassi

```
virtual void SetHost(
   HWND hWndParent
);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
Handle per la nuova finestra padre.

## <a name="setpreviewvisuals"></a> CMFCPreviewCtrlImpl::SetPreviewVisuals

Chiamato da un gestore di anteprime Rich quando è necessario impostare gli oggetti visivi di un'anteprima dettagliata del contenuto.

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

*plf*<br/>
Tipo di carattere utilizzato per visualizzare il testo nella finestra di anteprima.

##  <a name="setrect"></a> CMFCPreviewCtrlImpl::SetRect

Imposta un nuovo rettangolo di delimitazione per questo controllo.

### <a name="syntax"></a>Sintassi

```
virtual void SetRect(
   const RECT* prc,
   BOOL bRedraw
);
```

### <a name="parameters"></a>Parametri

*Repubblica popolare cinese*<br/>
Specifica la nuova dimensione e posizione del controllo di anteprima.

*bRedraw*<br/>
Specifica se il controllo deve essere ridisegnato.

### <a name="remarks"></a>Note

In genere un nuovo rettangolo di delimitazione viene impostato quando il controllo host viene ridimensionato.

## <a name="dtor"></a> CMFCPreviewCtrlImpl:: ~ CMFCPreviewCtrlImpl

Distrugge un oggetto di controllo di anteprima.

### <a name="syntax"></a>Sintassi

```
virtual ~CMFCPreviewCtrlImpl();
```

