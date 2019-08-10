---
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
ms.openlocfilehash: 88c125c63f9dbfe272f5d543e996366575fc533b
ms.sourcegitcommit: bd7ddc044f9083246614b602ef6a758775313214
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68866227"
---
# <a name="cdockablepaneadapter-class"></a>Classe CDockablePaneAdapter

Fornisce il supporto di ancoraggio per i riquadri derivati da `CWnd`.

## <a name="syntax"></a>Sintassi

```
class CDockablePaneAdapter : public CDockablePane
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDockablePaneAdapter::GetWrappedWnd](#getwrappedwnd)|Restituisce la finestra di cui è stato eseguito il wrapping.|
|[CDockablePaneAdapter::LoadState](#loadstate)|Esegue l'override di [CDockablePane:: LoadState](cdockablepane-class.md#loadstate).|
|[CDockablePaneAdapter::SaveState](#savestate)|Esegue l'override di [CDockablePane:: SaveState](cdockablepane-class.md).|
|[CDockablePaneAdapter::SetWrappedWnd](#setwrappedwnd)||

## <a name="remarks"></a>Note

In genere, il Framework crea un'istanza degli oggetti di questa classe quando si usano i metodi [CMFCBaseTabCtrl:: AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) o [CMFCBaseTabCtrl:: InsertTab](../../mfc/reference/cmfcbasetabctrl-class.md#inserttab) .

Se si desidera personalizzare il `CDockablePaneAdapter` comportamento, derivare una nuova classe da essa e impostare le informazioni sulla classe di runtime su una finestra a schede utilizzando [CMFCBaseTabCtrl:: SetDockingBarWrapperRTC](../../mfc/reference/cmfcbasetabctrl-class.md#setdockingbarwrapperrtc).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)\
&nbsp;[CCmdTarget](../../mfc/reference/ccmdtarget-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CWnd](../../mfc/reference/cwnd-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CBasePane](../../mfc/reference/cbasepane-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CPane](../../mfc/reference/cpane-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CDockablePane](../../mfc/reference/cdockablepane-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CDockablePaneAdapter](../../mfc/reference/cdockablepaneadapter-class.md) └

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDockablePaneAdapter. h

##  <a name="getwrappedwnd"></a>CDockablePaneAdapter:: GetWrappedWnd

Restituisce la finestra sottostante per l'adattatore del riquadro ancorabile.

```
virtual CWnd* GetWrappedWnd() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra di cui è stato eseguito il Wrapped.

### <a name="remarks"></a>Note

Usare questa funzione per accedere alla finestra di cui è stato eseguito il Wrapped.

##  <a name="loadstate"></a>CDockablePaneAdapter:: LoadState

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

### <a name="remarks"></a>Note

##  <a name="savestate"></a>CDockablePaneAdapter:: SaveState

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

### <a name="remarks"></a>Note

##  <a name="setwrappedwnd"></a>CDockablePaneAdapter:: SetWrappedWnd

Imposta la finestra sottostante per l'adattatore del riquadro ancorabile.

```
virtual BOOL SetWrappedWnd(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
in Puntatore alla finestra per l'adattatore del riquadro di cui eseguire il wrapping.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)
