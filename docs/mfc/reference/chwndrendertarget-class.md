---
description: 'Altre informazioni su: Classe CHwndRenderTarget'
title: Classe CHwndRenderTarget
ms.date: 11/04/2016
f1_keywords:
- CHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget::CHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget::Attach
- AFXRENDERTARGET/CHwndRenderTarget::CheckWindowState
- AFXRENDERTARGET/CHwndRenderTarget::Create
- AFXRENDERTARGET/CHwndRenderTarget::Detach
- AFXRENDERTARGET/CHwndRenderTarget::GetHwnd
- AFXRENDERTARGET/CHwndRenderTarget::GetHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget::ReCreate
- AFXRENDERTARGET/CHwndRenderTarget::Resize
- AFXRENDERTARGET/CHwndRenderTarget::m_pHwndRenderTarget
helpviewer_keywords:
- CHwndRenderTarget [MFC], CHwndRenderTarget
- CHwndRenderTarget [MFC], Attach
- CHwndRenderTarget [MFC], CheckWindowState
- CHwndRenderTarget [MFC], Create
- CHwndRenderTarget [MFC], Detach
- CHwndRenderTarget [MFC], GetHwnd
- CHwndRenderTarget [MFC], GetHwndRenderTarget
- CHwndRenderTarget [MFC], ReCreate
- CHwndRenderTarget [MFC], Resize
- CHwndRenderTarget [MFC], m_pHwndRenderTarget
ms.assetid: aa65b69f-7202-46ea-af81-ef325da0b840
ms.openlocfilehash: 3a3058105fff5e5ac304f2cc980cd93f2bac70a4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143637"
---
# <a name="chwndrendertarget-class"></a>Classe CHwndRenderTarget

Wrapper per ID2D1HwndRenderTarget.

## <a name="syntax"></a>Sintassi

```
class CHwndRenderTarget : public CRenderTarget;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CHwndRenderTarget:: CHwndRenderTarget](#chwndrendertarget)|Costruisce un oggetto CHwndRenderTarget da HWND.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CHwndRenderTarget:: Connetti](#attach)|Connette l'interfaccia di destinazione di rendering esistente all'oggetto|
|[CHwndRenderTarget:: CheckWindowState](#checkwindowstate)|Indica se l'HWND associato a questa destinazione di rendering è nascosto.|
|[CHwndRenderTarget:: create](#create)|Crea una destinazione di rendering associata alla finestra|
|[CHwndRenderTarget::D etach](#detach)|Scollega l'interfaccia di destinazione di rendering dall'oggetto|
|[CHwndRenderTarget:: GetHwnd](#gethwnd)|Restituisce l'HWND associato a questa destinazione di rendering.|
|[CHwndRenderTarget:: GetHwndRenderTarget](#gethwndrendertarget)|Restituisce l'interfaccia ID2D1HwndRenderTarget.|
|[CHwndRenderTarget:: ricrea](#recreate)|Ricrea una destinazione di rendering associata alla finestra|
|[CHwndRenderTarget:: Resize](#resize)|Modifica la dimensione della destinazione di rendering nella dimensione in pixel specificata|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CHwndRenderTarget:: operator ID2D1HwndRenderTarget *](#operator_id2d1hwndrendertarget_star)|Restituisce l'interfaccia ID2D1HwndRenderTarget.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CHwndRenderTarget:: m_pHwndRenderTarget](#m_phwndrendertarget)|Puntatore a un oggetto ID2D1HwndRenderTarget.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CRenderTarget](../../mfc/reference/crendertarget-class.md)

[CHwndRenderTarget](../../mfc/reference/chwndrendertarget-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="chwndrendertargetattach"></a><a name="attach"></a> CHwndRenderTarget:: Connetti

Connette l'interfaccia di destinazione di rendering esistente all'oggetto

```cpp
void Attach(ID2D1HwndRenderTarget* pTarget);
```

### <a name="parameters"></a>Parametri

*pTarget*<br/>
Interfaccia di destinazione di rendering esistente. Non può essere NULL

## <a name="chwndrendertargetcheckwindowstate"></a><a name="checkwindowstate"></a> CHwndRenderTarget:: CheckWindowState

Indica se l'HWND associato a questa destinazione di rendering è nascosto.

```
D2D1_WINDOW_STATE CheckWindowState() const;
```

### <a name="return-value"></a>Valore restituito

Valore che indica se l'HWND associato a questa destinazione di rendering è nascosto.

## <a name="chwndrendertargetchwndrendertarget"></a><a name="chwndrendertarget"></a> CHwndRenderTarget:: CHwndRenderTarget

Costruisce un oggetto CHwndRenderTarget da HWND.

```
CHwndRenderTarget(HWND hwnd = NULL);
```

### <a name="parameters"></a>Parametri

*HWND*<br/>
HWND associato a questa destinazione di rendering

## <a name="chwndrendertargetcreate"></a><a name="create"></a> CHwndRenderTarget:: create

Crea una destinazione di rendering associata alla finestra

```
BOOL Create(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
HWND associato a questa destinazione di rendering

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="chwndrendertargetdetach"></a><a name="detach"></a> CHwndRenderTarget::D etach

Scollega l'interfaccia di destinazione di rendering dall'oggetto

```
ID2D1HwndRenderTarget* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di destinazione di rendering scollegata.

## <a name="chwndrendertargetgethwnd"></a><a name="gethwnd"></a> CHwndRenderTarget:: GetHwnd

Restituisce l'HWND associato a questa destinazione di rendering.

```
HWND GetHwnd() const;
```

### <a name="return-value"></a>Valore restituito

HWND associato a questa destinazione di rendering.

## <a name="chwndrendertargetgethwndrendertarget"></a><a name="gethwndrendertarget"></a> CHwndRenderTarget:: GetHwndRenderTarget

Restituisce l'interfaccia ID2D1HwndRenderTarget.

```
ID2D1HwndRenderTarget* GetHwndRenderTarget();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1HwndRenderTarget o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="chwndrendertargetm_phwndrendertarget"></a><a name="m_phwndrendertarget"></a> CHwndRenderTarget:: m_pHwndRenderTarget

Puntatore a un oggetto ID2D1HwndRenderTarget.

```
ID2D1HwndRenderTarget* m_pHwndRenderTarget;
```

## <a name="chwndrendertargetoperator-id2d1hwndrendertarget"></a><a name="operator_id2d1hwndrendertarget_star"></a> CHwndRenderTarget:: operator ID2D1HwndRenderTarget *

Restituisce l'interfaccia ID2D1HwndRenderTarget.

```
operator ID2D1HwndRenderTarget*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1HwndRenderTarget o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="chwndrendertargetrecreate"></a><a name="recreate"></a> CHwndRenderTarget:: ricrea

Ricrea una destinazione di rendering associata alla finestra

```
BOOL ReCreate(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
HWND associato a questa destinazione di rendering

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="chwndrendertargetresize"></a><a name="resize"></a> CHwndRenderTarget:: Resize

Modifica la dimensione della destinazione di rendering nella dimensione in pixel specificata

```
BOOL Resize(const CD2DSizeU& size);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Nuove dimensioni della destinazione di rendering in pixel del dispositivo

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
