---
title: Classe CBitmapRenderTarget | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget::CBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget::Attach
- AFXRENDERTARGET/CBitmapRenderTarget::Detach
- AFXRENDERTARGET/CBitmapRenderTarget::GetBitmap
- AFXRENDERTARGET/CBitmapRenderTarget::GetBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget::m_pBitmapRenderTarget
dev_langs:
- C++
helpviewer_keywords:
- CBitmapRenderTarget [MFC], CBitmapRenderTarget
- CBitmapRenderTarget [MFC], Attach
- CBitmapRenderTarget [MFC], Detach
- CBitmapRenderTarget [MFC], GetBitmap
- CBitmapRenderTarget [MFC], GetBitmapRenderTarget
- CBitmapRenderTarget [MFC], m_pBitmapRenderTarget
ms.assetid: c89a4437-812e-4943-acb2-b429a04cc4d2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ee70825711efd82ce451a0433a63d98d93850552
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46417059"
---
# <a name="cbitmaprendertarget-class"></a>Classe CBitmapRenderTarget

Un wrapper per ID2D1BitmapRenderTarget.

## <a name="syntax"></a>Sintassi

```
class CBitmapRenderTarget : public CRenderTarget;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmapRenderTarget::CBitmapRenderTarget](#cbitmaprendertarget)|Costruisce un oggetto CBitmapRenderTarget.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmapRenderTarget::Attach](#attach)|Collega esistente di eseguire il rendering come interfaccia di destinazione per l'oggetto|
|[CBitmapRenderTarget::Detach](#detach)|Scollega interfaccia di destinazione di rendering dell'oggetto|
|[CBitmapRenderTarget::GetBitmap](#getbitmap)|Recupera la bitmap per questa destinazione di rendering. La bitmap restituita può essere utilizzata per operazioni di disegno.|
|[CBitmapRenderTarget::GetBitmapRenderTarget](#getbitmaprendertarget)|Restituisce l'interfaccia ID2D1BitmapRenderTarget|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBitmapRenderTarget::operator ID2D1BitmapRenderTarget *](#operator_id2d1bitmaprendertarget_star)|Restituisce l'interfaccia ID2D1BitmapRenderTarget|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CBitmapRenderTarget::m_pBitmapRenderTarget](#m_pbitmaprendertarget)|Un puntatore a un oggetto ID2D1BitmapRenderTarget.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CRenderTarget](../../mfc/reference/crendertarget-class.md)

`CBitmapRenderTarget`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="attach"></a>  CBitmapRenderTarget::Attach

Collega esistente di eseguire il rendering come interfaccia di destinazione per l'oggetto

```
void Attach(ID2D1BitmapRenderTarget* pTarget);
```

### <a name="parameters"></a>Parametri

*pTarget*<br/>
Interfaccia destinazione di rendering esistente. Non può essere NULL

##  <a name="cbitmaprendertarget"></a>  CBitmapRenderTarget::CBitmapRenderTarget

Costruisce un oggetto CBitmapRenderTarget.

```
CBitmapRenderTarget();
```

##  <a name="detach"></a>  CBitmapRenderTarget::Detach

Scollega interfaccia di destinazione di rendering dell'oggetto

```
ID2D1BitmapRenderTarget* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore a scollegare il rendering dell'interfaccia di destinazione.

##  <a name="getbitmap"></a>  CBitmapRenderTarget::GetBitmap

Recupera la bitmap per questa destinazione di rendering. La bitmap restituita può essere utilizzata per operazioni di disegno.

```
BOOL GetBitmap(CD2DBitmap& bitmap);
```

### <a name="parameters"></a>Parametri

*mappa di bit*<br/>
Quando termina, questo metodo contiene la mappa di bit valida per questa destinazione di rendering. Questa bitmap può essere utilizzata per operazioni di disegno.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="getbitmaprendertarget"></a>  CBitmapRenderTarget::GetBitmapRenderTarget

Restituisce l'interfaccia ID2D1BitmapRenderTarget

```
ID2D1BitmapRenderTarget* GetBitmapRenderTarget();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1BitmapRenderTarget o NULL se l'oggetto non è ancora inizializzato.

##  <a name="m_pbitmaprendertarget"></a>  CBitmapRenderTarget::m_pBitmapRenderTarget

Un puntatore a un oggetto ID2D1BitmapRenderTarget.

```
ID2D1BitmapRenderTarget* m_pBitmapRenderTarget;
```

##  <a name="operator_id2d1bitmaprendertarget_star"></a>  CBitmapRenderTarget::operator ID2D1BitmapRenderTarget *

Restituisce l'interfaccia ID2D1BitmapRenderTarget

```
operator ID2D1BitmapRenderTarget*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1BitmapRenderTarget o NULL se l'oggetto non è ancora inizializzato.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
