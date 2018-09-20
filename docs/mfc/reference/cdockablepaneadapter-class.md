---
title: Classe CDockablePaneAdapter | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDockablePaneAdapter
- AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter
- AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::GetWrappedWnd
- AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::LoadState
- AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::SaveState
- AFXDOCKABLEPANEADAPTER/CDockablePaneAdapter::SetWrappedWnd
dev_langs:
- C++
helpviewer_keywords:
- CDockablePaneAdapter [MFC], GetWrappedWnd
- CDockablePaneAdapter [MFC], LoadState
- CDockablePaneAdapter [MFC], SaveState
- CDockablePaneAdapter [MFC], SetWrappedWnd
ms.assetid: 6ed6cf82-f39c-4d0c-bf7c-8641495cf8f3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1cec0a5c40d7937e8df20b5437b6dcc83b1b9ec1
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46441176"
---
# <a name="cdockablepaneadapter-class"></a>Classe CDockablePaneAdapter

Fornisce il supporto di ancoraggio per i riquadri derivati da `CWnd`.

## <a name="syntax"></a>Sintassi

```
class CDockablePaneAdapter : public CDockablePane
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDockablePaneAdapter::GetWrappedWnd](#getwrappedwnd)|Restituisce la finestra di cui è stato eseguito il wrapping.|
|[CDockablePaneAdapter::LoadState](#loadstate)|(Esegue l'override [CDockablePane:: LoadState](cdockablepane-class.md#loadstate).)|
|[CDockablePaneAdapter::SaveState](#savestate)|(Esegue l'override [CDockablePane:: SaveState](cdockablepane-class.md).)|
|[CDockablePaneAdapter::SetWrappedWnd](#setwrappedwnd)||

## <a name="remarks"></a>Note

In genere, il framework crea istanze di oggetti di questa classe quando si usa la [cmfcbasetabctrl:: addTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) oppure [cmfcbasetabctrl:: insertTab](../../mfc/reference/cmfcbasetabctrl-class.md#inserttab) metodi.

Se si desidera personalizzare il `CDockablePaneAdapter` comportamento, è sufficiente derivare una nuova classe da quest'ultimo e impostare le informazioni sulla classe di runtime per una finestra a schede usando [cmfcbasetabctrl:: Setdockingbarwrapperrtc](../../mfc/reference/cmfcbasetabctrl-class.md#setdockingbarwrapperrtc).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md) [CPane](../../mfc/reference/cpane-class.md) [CDockablePane](../../mfc/reference/cdockablepane-class.md)

[CDockablePaneAdapter](../../mfc/reference/cdockablepaneadapter-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdockablepaneadapter. H

##  <a name="getwrappedwnd"></a>  CDockablePaneAdapter::GetWrappedWnd

Restituisce la finestra sottostante per l'adapter di un riquadro ancorabile.

```
virtual CWnd* GetWrappedWnd() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra sottoposta a wrapping.

### <a name="remarks"></a>Note

Utilizzare questa funzione per accedere alla finestra sottoposta a wrapping.

##  <a name="loadstate"></a>  CDockablePaneAdapter::LoadState

Carica lo stato del riquadro dal Registro di sistema.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Il nome del profilo.

*nIndex*<br/>
[in] L'indice di profilo.

*uiID*<br/>
[in] L'ID del riquadro.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="savestate"></a>  CDockablePaneAdapter::SaveState

Salva lo stato del riquadro nel Registro di sistema.

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    int nIndex = -1,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Il nome del profilo.

*nIndex*<br/>
[in] L'indice di profilo (impostazione predefinita è l'ID di controllo della finestra).

*uiID*<br/>
[in] L'ID del riquadro.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="setwrappedwnd"></a>  CDockablePaneAdapter::SetWrappedWnd

Imposta la finestra sottostante per l'adapter di un riquadro ancorabile.

```
virtual BOOL SetWrappedWnd(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
[in] Puntatore alla finestra per l'adapter di riquadro eseguire il wrapping.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)
