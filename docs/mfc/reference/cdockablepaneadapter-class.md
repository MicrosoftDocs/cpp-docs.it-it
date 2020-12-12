---
description: 'Altre informazioni su: classe CDockablePaneAdapter'
title: Classe CDockablePaneAdapter
ms.date: 11/04/2016
f1_keywords:
- CDockablePaneAdapter
- AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter
- AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::GetWrappedWnd
- AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::LoadState
- AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::SaveState
- AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::SetWrappedWnd
helpviewer_keywords:
- CDockablePaneAdapter [MFC], GetWrappedWnd
- CDockablePaneAdapter [MFC], LoadState
- CDockablePaneAdapter [MFC], SaveState
- CDockablePaneAdapter [MFC], SetWrappedWnd
ms.assetid: 6ed6cf82-f39c-4d0c-bf7c-8641495cf8f3
ms.openlocfilehash: 0a46ef15d35194203d6e5c035555de0d80b63c72
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185037"
---
# <a name="cdockablepaneadapter-class"></a>Classe CDockablePaneAdapter

Fornisce il supporto di ancoraggio per i riquadri derivati da `CWnd`.

## <a name="syntax"></a>Sintassi

```
class CDockablePaneAdapter : public CDockablePane
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDockablePaneAdapter:: GetWrappedWnd](#getwrappedwnd)|Restituisce la finestra di cui è stato eseguito il wrapping.|
|[CDockablePaneAdapter::LoadState](#loadstate)|Esegue l'override di [CDockablePane:: LoadState](cdockablepane-class.md#loadstate).|
|[CDockablePaneAdapter::SaveState](#savestate)|Esegue l'override di [CDockablePane:: SaveState](cdockablepane-class.md).|
|[CDockablePaneAdapter::SetWrappedWnd](#setwrappedwnd)||

## <a name="remarks"></a>Commenti

In genere, il Framework crea un'istanza degli oggetti di questa classe quando si usano i metodi [CMFCBaseTabCtrl:: AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) o [CMFCBaseTabCtrl:: InsertTab](../../mfc/reference/cmfcbasetabctrl-class.md#inserttab) .

Se si desidera personalizzare il `CDockablePaneAdapter` comportamento, derivare una nuova classe da essa e impostare le informazioni sulla classe di runtime su una finestra a schede utilizzando [CMFCBaseTabCtrl:: SetDockingBarWrapperRTC](../../mfc/reference/cmfcbasetabctrl-class.md#setdockingbarwrapperrtc).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)\
&nbsp;[CCmdTarget](../../mfc/reference/ccmdtarget-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;└ &nbsp; [CWnd](../../mfc/reference/cwnd-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CBasePane](../../mfc/reference/cbasepane-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CPane](../../mfc/reference/cpane-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CDockablePane](../../mfc/reference/cdockablepane-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CDockablePaneAdapter](../../mfc/reference/cdockablepaneadapter-class.md) └

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDockablePaneAdapter. h

## <a name="cdockablepaneadaptergetwrappedwnd"></a><a name="getwrappedwnd"></a> CDockablePaneAdapter:: GetWrappedWnd

Restituisce la finestra sottostante per l'adattatore del riquadro ancorabile.

```
virtual CWnd* GetWrappedWnd() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra di cui è stato eseguito il Wrapped.

### <a name="remarks"></a>Commenti

Usare questa funzione per accedere alla finestra di cui è stato eseguito il Wrapped.

## <a name="cdockablepaneadapterloadstate"></a><a name="loadstate"></a> CDockablePaneAdapter:: LoadState

Carica lo stato del riquadro dal registro di sistema.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Nome del profilo.

*nIndex*<br/>
in Indice del profilo.

*uiID*<br/>
in ID del riquadro.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cdockablepaneadaptersavestate"></a><a name="savestate"></a> CDockablePaneAdapter:: SaveState

Salva lo stato del riquadro nel registro di sistema.

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Nome del profilo.

*nIndex*<br/>
in Indice del profilo (l'impostazione predefinita è l'ID del controllo della finestra).

*uiID*<br/>
in ID del riquadro.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cdockablepaneadaptersetwrappedwnd"></a><a name="setwrappedwnd"></a> CDockablePaneAdapter:: SetWrappedWnd

Imposta la finestra sottostante per l'adattatore del riquadro ancorabile.

```
virtual BOOL SetWrappedWnd(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
in Puntatore alla finestra per l'adattatore del riquadro di cui eseguire il wrapping.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)
