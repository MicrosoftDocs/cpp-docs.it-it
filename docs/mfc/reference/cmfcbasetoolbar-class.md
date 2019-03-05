---
title: Classe CMFCBaseToolBar
ms.date: 11/04/2016
f1_keywords:
- CMFCBaseToolBar
- AFXBASETOOLBAR/CMFCBaseToolBar
- AFXBASETOOLBAR/CMFCBaseToolBar::GetDockingMode
- AFXBASETOOLBAR/CMFCBaseToolBar::GetMinSize
- AFXBASETOOLBAR/CMFCBaseToolBar::OnAfterChangeParent
helpviewer_keywords:
- CMFCBaseToolBar [MFC], GetDockingMode
- CMFCBaseToolBar [MFC], GetMinSize
- CMFCBaseToolBar [MFC], OnAfterChangeParent
ms.assetid: 5d79206d-55e4-46f8-b1b8-042e34d7f9da
ms.openlocfilehash: 7a6ccdaf3d78b9973505dd4e90ca76f671fce889
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57265379"
---
# <a name="cmfcbasetoolbar-class"></a>Classe CMFCBaseToolBar

Classe di base per le barre degli strumenti.

## <a name="syntax"></a>Sintassi

```
class CMFCBaseToolBar : public CPane
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCBaseToolBar::CMFCBaseToolBar`|Costruttore predefinito.|
|`CMFCBaseToolBar::~CMFCBaseToolBar`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCBaseToolBar::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCBaseToolBar::GetDockingMode](#getdockingmode)|Restituisce la modalità di ancoraggio. (Esegue l'override [cbasepane:: Getdockingmode](../../mfc/reference/cbasepane-class.md#getdockingmode).)|
|[CMFCBaseToolBar::GetMinSize](#getminsize)|Restituisce la dimensione minima di una barra degli strumenti. (Esegue l'override [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).)|
|[CMFCBaseToolBar::OnAfterChangeParent](#onafterchangeparent)|Chiamato dal framework dopo le modifiche padre del riquadro. (Esegue l'override [CBasePane::OnAfterChangeParent](../../mfc/reference/cbasepane-class.md#onafterchangeparent).)|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxbasetoolbar.h

##  <a name="getdockingmode"></a>  CMFCBaseToolBar::GetDockingMode

Restituisce la modalità di ancoraggio.

```
virtual AFX_DOCK_TYPE GetDockingMode() const;
```

### <a name="return-value"></a>Valore restituito

La modalità di ancoraggio.

##  <a name="getminsize"></a>  CMFCBaseToolBar::GetMinSize

Restituisce la dimensione minima di una barra degli strumenti.

```
virtual void GetMinSize(CSize& size) const;
```

### <a name="parameters"></a>Parametri

*size*<br/>
[out] La dimensione minima di una barra degli strumenti.

##  <a name="onafterchangeparent"></a>  CMFCBaseToolBar::OnAfterChangeParent

Chiamato dal framework dopo le modifiche padre del riquadro.

```
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```

### <a name="parameters"></a>Parametri

*pWndOldParent*<br/>
[in] Puntatore alla finestra padre precedente.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
