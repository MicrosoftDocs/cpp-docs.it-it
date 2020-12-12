---
description: 'Altre informazioni su: Classe CBitmapRenderTarget'
title: Classe CBitmapRenderTarget
ms.date: 11/04/2016
f1_keywords:
- CBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget::CBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget::Attach
- AFXRENDERTARGET/CBitmapRenderTarget::Detach
- AFXRENDERTARGET/CBitmapRenderTarget::GetBitmap
- AFXRENDERTARGET/CBitmapRenderTarget::GetBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget::m_pBitmapRenderTarget
helpviewer_keywords:
- CBitmapRenderTarget [MFC], CBitmapRenderTarget
- CBitmapRenderTarget [MFC], Attach
- CBitmapRenderTarget [MFC], Detach
- CBitmapRenderTarget [MFC], GetBitmap
- CBitmapRenderTarget [MFC], GetBitmapRenderTarget
- CBitmapRenderTarget [MFC], m_pBitmapRenderTarget
ms.assetid: c89a4437-812e-4943-acb2-b429a04cc4d2
ms.openlocfilehash: a7987651c988dcf7fcd4c4decf4a2bd474ab8619
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97122681"
---
# <a name="cbitmaprendertarget-class"></a>Classe CBitmapRenderTarget

Wrapper per ID2D1BitmapRenderTarget.

## <a name="syntax"></a>Sintassi

```
class CBitmapRenderTarget : public CRenderTarget;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CBitmapRenderTarget:: CBitmapRenderTarget](#cbitmaprendertarget)|Costruisce un oggetto CBitmapRenderTarget.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CBitmapRenderTarget:: Connetti](#attach)|Connette l'interfaccia di destinazione di rendering esistente all'oggetto|
|[CBitmapRenderTarget::D etach](#detach)|Scollega l'interfaccia di destinazione di rendering dall'oggetto|
|[CBitmapRenderTarget:: GetBitmap](#getbitmap)|Recupera la bitmap per la destinazione di rendering. La bitmap restituita può essere utilizzata per operazioni di disegno.|
|[CBitmapRenderTarget:: GetBitmapRenderTarget](#getbitmaprendertarget)|Restituisce l'interfaccia ID2D1BitmapRenderTarget|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CBitmapRenderTarget:: operator ID2D1BitmapRenderTarget *](#operator_id2d1bitmaprendertarget_star)|Restituisce l'interfaccia ID2D1BitmapRenderTarget|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CBitmapRenderTarget:: m_pBitmapRenderTarget](#m_pbitmaprendertarget)|Puntatore a un oggetto ID2D1BitmapRenderTarget.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CRenderTarget](../../mfc/reference/crendertarget-class.md)

`CBitmapRenderTarget`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cbitmaprendertargetattach"></a><a name="attach"></a> CBitmapRenderTarget:: Connetti

Connette l'interfaccia di destinazione di rendering esistente all'oggetto

```cpp
void Attach(ID2D1BitmapRenderTarget* pTarget);
```

### <a name="parameters"></a>Parametri

*pTarget*<br/>
Interfaccia di destinazione di rendering esistente. Non può essere NULL

## <a name="cbitmaprendertargetcbitmaprendertarget"></a><a name="cbitmaprendertarget"></a> CBitmapRenderTarget:: CBitmapRenderTarget

Costruisce un oggetto CBitmapRenderTarget.

```
CBitmapRenderTarget();
```

## <a name="cbitmaprendertargetdetach"></a><a name="detach"></a> CBitmapRenderTarget::D etach

Scollega l'interfaccia di destinazione di rendering dall'oggetto

```
ID2D1BitmapRenderTarget* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di destinazione di rendering scollegata.

## <a name="cbitmaprendertargetgetbitmap"></a><a name="getbitmap"></a> CBitmapRenderTarget:: GetBitmap

Recupera la bitmap per la destinazione di rendering. La bitmap restituita può essere utilizzata per operazioni di disegno.

```
BOOL GetBitmap(CD2DBitmap& bitmap);
```

### <a name="parameters"></a>Parametri

*bitmap*<br/>
Quando termina, questo metodo contiene la bitmap valida per la destinazione di rendering. Questa bitmap può essere utilizzata per operazioni di disegno.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cbitmaprendertargetgetbitmaprendertarget"></a><a name="getbitmaprendertarget"></a> CBitmapRenderTarget:: GetBitmapRenderTarget

Restituisce l'interfaccia ID2D1BitmapRenderTarget

```
ID2D1BitmapRenderTarget* GetBitmapRenderTarget();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1BitmapRenderTarget o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cbitmaprendertargetm_pbitmaprendertarget"></a><a name="m_pbitmaprendertarget"></a> CBitmapRenderTarget:: m_pBitmapRenderTarget

Puntatore a un oggetto ID2D1BitmapRenderTarget.

```
ID2D1BitmapRenderTarget* m_pBitmapRenderTarget;
```

## <a name="cbitmaprendertargetoperator-id2d1bitmaprendertarget"></a><a name="operator_id2d1bitmaprendertarget_star"></a> CBitmapRenderTarget:: operator ID2D1BitmapRenderTarget *

Restituisce l'interfaccia ID2D1BitmapRenderTarget

```
operator ID2D1BitmapRenderTarget*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1BitmapRenderTarget o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
