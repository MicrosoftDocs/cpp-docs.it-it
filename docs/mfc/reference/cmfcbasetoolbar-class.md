---
description: 'Altre informazioni su: classe CMFCBaseToolBar'
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
ms.openlocfilehash: 37597e4cb300e0d6d16c92f105e332c18c5beda7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247917"
---
# <a name="cmfcbasetoolbar-class"></a>Classe CMFCBaseToolBar

Classe base per le barre degli strumenti.

## <a name="syntax"></a>Sintassi

```
class CMFCBaseToolBar : public CPane
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCBaseToolBar::CMFCBaseToolBar`|Costruttore predefinito.|
|`CMFCBaseToolBar::~CMFCBaseToolBar`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCBaseToolBar::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCBaseToolBar:: GetDockingMode](#getdockingmode)|Restituisce la modalità di ancoraggio. Esegue l'override di [CBasePane:: GetDockingMode](../../mfc/reference/cbasepane-class.md#getdockingmode).|
|[CMFCBaseToolBar:: GetMinSize](#getminsize)|Restituisce la dimensione minima di una barra degli strumenti. Esegue l'override di [CPane:: GetMinSize](../../mfc/reference/cpane-class.md#getminsize).|
|[CMFCBaseToolBar::OnAfterChangeParent](#onafterchangeparent)|Chiamata eseguita dal Framework dopo la modifica dell'elemento padre del riquadro. Esegue l'override di [CBasePane:: OnAfterChangeParent](../../mfc/reference/cbasepane-class.md#onafterchangeparent).|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxbasetoolbar. h

## <a name="cmfcbasetoolbargetdockingmode"></a><a name="getdockingmode"></a> CMFCBaseToolBar:: GetDockingMode

Restituisce la modalità di ancoraggio.

```
virtual AFX_DOCK_TYPE GetDockingMode() const;
```

### <a name="return-value"></a>Valore restituito

Modalità di ancoraggio.

## <a name="cmfcbasetoolbargetminsize"></a><a name="getminsize"></a> CMFCBaseToolBar:: GetMinSize

Restituisce la dimensione minima di una barra degli strumenti.

```
virtual void GetMinSize(CSize& size) const;
```

### <a name="parameters"></a>Parametri

*size*<br/>
out Dimensione minima di una barra degli strumenti.

## <a name="cmfcbasetoolbaronafterchangeparent"></a><a name="onafterchangeparent"></a> CMFCBaseToolBar::OnAfterChangeParent

Chiamata eseguita dal Framework dopo la modifica dell'elemento padre del riquadro.

```
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```

### <a name="parameters"></a>Parametri

*pWndOldParent*<br/>
in Puntatore alla finestra padre precedente.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
