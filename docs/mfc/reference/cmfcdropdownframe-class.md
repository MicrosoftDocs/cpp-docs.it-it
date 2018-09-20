---
title: Classe CMFCDropDownFrame | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCDropDownFrame
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame::Create
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame::GetParentMenuBar
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame::GetParentPopupMenu
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame::RecalcLayout
- AFXDROPDOWNTOOLBAR/CMFCDropDownFrame::SetAutoDestroy
dev_langs:
- C++
helpviewer_keywords:
- CMFCDropDownFrame [MFC], Create
- CMFCDropDownFrame [MFC], GetParentMenuBar
- CMFCDropDownFrame [MFC], GetParentPopupMenu
- CMFCDropDownFrame [MFC], RecalcLayout
- CMFCDropDownFrame [MFC], SetAutoDestroy
ms.assetid: 09ff81a9-de00-43ec-9df9-b626f7728c4b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2ae1b3dfdd4b5d2160b154a99f76a505a8fb82cf
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46428044"
---
# <a name="cmfcdropdownframe-class"></a>Classe CMFCDropDownFrame

Fornisce la funzionalità di finestra cornice di elenco a discesa per le barre degli strumenti elenco a discesa e pulsanti della barra degli strumenti elenco a discesa.

## <a name="syntax"></a>Sintassi

```
class CMFCDropDownFrame : public CMiniFrameWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|`CMFCDropDownFrame::CMFCDropDownFrame`|Costruttore predefinito.|
|`CMFCDropDownFrame::~CMFCDropDownFrame`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCDropDownFrame::Create](#create)|Crea un oggetto `CMFCDropDownFrame`.|
|`CMFCDropDownFrame::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCDropDownFrame::GetParentMenuBar](#getparentmenubar)|Recupera la barra dei menu padre della pagina di riepilogo a discesa.|
|[CMFCDropDownFrame::GetParentPopupMenu](#getparentpopupmenu)|Recupera il menu a comparsa padre della pagina di riepilogo a discesa.|
|`CMFCDropDownFrame::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|
|[CMFCDropDownFrame::RecalcLayout](#recalclayout)|Riposiziona il frame di riepilogo a discesa.|
|[CMFCDropDownFrame::SetAutoDestroy](#setautodestroy)|Imposta se la finestra di riepilogo a discesa della barra degli strumenti figlio viene eliminata automaticamente.|

### <a name="remarks"></a>Note

Questa classe non deve essere usato direttamente dal codice.

Il framework utilizza questa classe per implementare il comportamento di frame per il `CMFCDropDownToolbar` e `CMFCDropDownToolbarButton` classi. Per altre informazioni su queste classi, vedere [classe CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md) e [classe CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un puntatore a un `CMFCDropDownFrame` dell'oggetto da un `CFrameWnd` classe e su come impostare l'elemento figlio finestra elenco a discesa della barra degli strumenti per essere eliminata automaticamente.

[!code-cpp[NVC_MFC_RibbonApp#36](../../mfc/reference/codesnippet/cpp/cmfcdropdownframe-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

[CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)

[CMFCDropDownFrame](../../mfc/reference/cmfcdropdownframe-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdropdowntoolbar.h

##  <a name="create"></a>  CMFCDropDownFrame::Create

Crea un oggetto `CMFCDropDownFrame`.

```
virtual BOOL Create(
    CWnd* pWndParent,
    int x,
    int y,
    CMFCDropDownToolBar* pWndOriginToolbar);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pWndParent*|[in] La finestra padre della pagina di riepilogo a discesa.|
|*x*|[in] La coordinata orizzontale dello schermo per la posizione del frame rivolta verso il basso.|
|*y*|[in] La coordinata verticale dello schermo per la posizione del frame rivolta verso il basso.|
|*pWndOriginToolbar*|[in] Barra degli strumenti con pulsanti elenco a discesa che questo metodo viene utilizzato per popolare il nuovo oggetto elenco a discesa frame.|

### <a name="return-value"></a>Valore restituito

TRUE se il frame di riepilogo a discesa è stato creato con successo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo chiama il metodo base [CMiniFrameWnd::CreateEx](../../mfc/reference/cminiframewnd-class.md#createex) metodo per creare la finestra cornice di elenco a discesa con lo stile WS_POPUP. Viene visualizzata la finestra cornice di elenco a discesa in coordinate dello schermo specificate. Questo metodo ha esito negativo se il [CMiniFrameWnd::CreateEx](../../mfc/reference/cminiframewnd-class.md#createex) metodo restituisce FALSE.

Il `CMFCDropDownFrame` classe crea una copia dell'oggetto fornito `CMFCDropDownToolBar` parametro. Questo metodo copia le immagini dei pulsanti e gli stati di pulsante dal `pWndOriginToolbar` parametro per il `m_pWndOriginToolbar` (membro dati).

##  <a name="getparentmenubar"></a>  CMFCDropDownFrame::GetParentMenuBar

Recupera la barra dei menu padre della pagina di riepilogo a discesa.

```
CMFCMenuBar* GetParentMenuBar() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla barra dei menu principale del frame di riepilogo a discesa o NULL se il frame non ha elementi padre.

### <a name="remarks"></a>Note

Questo metodo recupera barra dei menu del padre da padre del pulsante. Questo metodo restituisce NULL se il frame di riepilogo a discesa non dispone di alcun pulsante padre o padre del pulsante non dispone di alcuna barra di menu padre.

##  <a name="getparentpopupmenu"></a>  CMFCDropDownFrame::GetParentPopupMenu

Recupera il menu a comparsa padre della pagina di riepilogo a discesa.

```
CMFCDropDownFrame* GetParentPopupMenu() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al menu di riepilogo a discesa del padre del frame di riepilogo a discesa o NULL se il frame non ha elementi padre.

### <a name="remarks"></a>Note

Questo metodo recupera il menu padre dal pulsante padre. Questo metodo restituisce NULL se il frame di riepilogo a discesa non dispone di alcun pulsante padre o padre del pulsante non dispone di alcun menu padre.

##  <a name="recalclayout"></a>  CMFCDropDownFrame::RecalcLayout

Riposiziona il frame di riepilogo a discesa.

```
virtual void RecalcLayout(BOOL bNotify = TRUE);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*bNotify*|[in] Non usato.|

### <a name="remarks"></a>Note

Il framework chiama questo metodo quando si crea il frame di riepilogo a discesa o la finestra padre viene ridimensionata. Questo metodo calcola la posizione e dimensioni della pagina di riepilogo a discesa con la posizione e dimensioni della finestra padre.

##  <a name="setautodestroy"></a>  CMFCDropDownFrame::SetAutoDestroy

Imposta se la finestra di riepilogo a discesa della barra degli strumenti figlio viene eliminata automaticamente.

```
void SetAutoDestroy(BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*flag bAutoDestroy*<br/>
[in] TRUE per eliminare automaticamente la finestra degli strumenti elenco a discesa associato. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se *il flag bAutoDestroy* è TRUE, il `CMFCDropDownFrame` distruttore Elimina la finestra degli strumenti elenco a discesa associato. Il valore predefinito è TRUE.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md)<br/>
[Classe CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)
