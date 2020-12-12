---
description: 'Altre informazioni su: classe CDCRenderTarget'
title: Classe CDCRenderTarget
ms.date: 11/04/2016
f1_keywords:
- CDCRenderTarget
- AFXRENDERTARGET/CDCRenderTarget
- AFXRENDERTARGET/CDCRenderTarget::CDCRenderTarget
- AFXRENDERTARGET/CDCRenderTarget::Attach
- AFXRENDERTARGET/CDCRenderTarget::BindDC
- AFXRENDERTARGET/CDCRenderTarget::Create
- AFXRENDERTARGET/CDCRenderTarget::Detach
- AFXRENDERTARGET/CDCRenderTarget::GetDCRenderTarget
- AFXRENDERTARGET/CDCRenderTarget::m_pDCRenderTarget
helpviewer_keywords:
- CDCRenderTarget [MFC], CDCRenderTarget
- CDCRenderTarget [MFC], Attach
- CDCRenderTarget [MFC], BindDC
- CDCRenderTarget [MFC], Create
- CDCRenderTarget [MFC], Detach
- CDCRenderTarget [MFC], GetDCRenderTarget
- CDCRenderTarget [MFC], m_pDCRenderTarget
ms.assetid: aa8059c9-08e6-49e4-9b8c-00fa54077a61
ms.openlocfilehash: 3959321bbd6274c821b1f02be5962b23ec9dbc95
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185323"
---
# <a name="cdcrendertarget-class"></a>Classe CDCRenderTarget

Wrapper per ID2D1DCRenderTarget.

## <a name="syntax"></a>Sintassi

```
class CDCRenderTarget : public CRenderTarget;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDCRenderTarget:: CDCRenderTarget](#cdcrendertarget)|Costruisce un oggetto CDCRenderTarget.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDCRenderTarget:: Connetti](#attach)|Connette l'interfaccia di destinazione di rendering esistente all'oggetto|
|[CDCRenderTarget:: BindDC](#binddc)|Associa la destinazione di rendering al contesto di dispositivo al quale rilascia i comandi di disegno|
|[CDCRenderTarget:: create](#create)|Crea un CDCRenderTarget.|
|[CDCRenderTarget::D etach](#detach)|Scollega l'interfaccia di destinazione di rendering dall'oggetto|
|[CDCRenderTarget:: GetDCRenderTarget](#getdcrendertarget)|Restituisce l'interfaccia ID2D1DCRenderTarget|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CDCRenderTarget:: operator ID2D1DCRenderTarget *](#operator_id2d1dcrendertarget_star)|Restituisce l'interfaccia ID2D1DCRenderTarget|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CDCRenderTarget:: m_pDCRenderTarget](#m_pdcrendertarget)|Puntatore a un oggetto ID2D1DCRenderTarget.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CRenderTarget](../../mfc/reference/crendertarget-class.md)

[CDCRenderTarget](../../mfc/reference/cdcrendertarget-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cdcrendertargetattach"></a><a name="attach"></a> CDCRenderTarget:: Connetti

Connette l'interfaccia di destinazione di rendering esistente all'oggetto

```cpp
void Attach(ID2D1DCRenderTarget* pTarget);
```

### <a name="parameters"></a>Parametri

*pTarget*<br/>
Interfaccia di destinazione di rendering esistente. Non può essere NULL

## <a name="cdcrendertargetbinddc"></a><a name="binddc"></a> CDCRenderTarget:: BindDC

Associa la destinazione di rendering al contesto di dispositivo al quale rilascia i comandi di disegno

```
BOOL BindDC(
    const CDC& dc,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*DC*<br/>
Contesto di dispositivo a cui la destinazione di rendering rilascia i comandi di disegno

*Rect*<br/>
Dimensioni dell'handle per un contesto di periferica (HDC) a cui è associata la destinazione di rendering

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cdcrendertargetcdcrendertarget"></a><a name="cdcrendertarget"></a> CDCRenderTarget:: CDCRenderTarget

Costruisce un oggetto CDCRenderTarget.

```
CDCRenderTarget();
```

## <a name="cdcrendertargetcreate"></a><a name="create"></a> CDCRenderTarget:: create

Crea un CDCRenderTarget.

```
BOOL Create(const D2D1_RENDER_TARGET_PROPERTIES& props);
```

### <a name="parameters"></a>Parametri

*puntelli*<br/>
La modalità di rendering, il formato pixel, le opzioni remote, le informazioni DPI e il supporto DirectX minimo richiesto per il rendering dell'hardware.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cdcrendertargetdetach"></a><a name="detach"></a> CDCRenderTarget::D etach

Scollega l'interfaccia di destinazione di rendering dall'oggetto

```
ID2D1DCRenderTarget* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di destinazione di rendering scollegata.

## <a name="cdcrendertargetgetdcrendertarget"></a><a name="getdcrendertarget"></a> CDCRenderTarget:: GetDCRenderTarget

Restituisce l'interfaccia ID2D1DCRenderTarget

```
ID2D1DCRenderTarget* GetDCRenderTarget();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1DCRenderTarget o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cdcrendertargetm_pdcrendertarget"></a><a name="m_pdcrendertarget"></a> CDCRenderTarget:: m_pDCRenderTarget

Puntatore a un oggetto ID2D1DCRenderTarget.

```
ID2D1DCRenderTarget* m_pDCRenderTarget;
```

## <a name="cdcrendertargetoperator-id2d1dcrendertarget"></a><a name="operator_id2d1dcrendertarget_star"></a> CDCRenderTarget:: operator ID2D1DCRenderTarget *

Restituisce l'interfaccia ID2D1DCRenderTarget

```
operator ID2D1DCRenderTarget*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1DCRenderTarget o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
