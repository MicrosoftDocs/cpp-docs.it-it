---
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
ms.openlocfilehash: 790ce0f32c2325fa0ea92ca0bda64ddaa4c86c45
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375699"
---
# <a name="cdcrendertarget-class"></a>Classe CDCRenderTarget

Un wrapper per ID2D1DCRenderTarget.

## <a name="syntax"></a>Sintassi

```
class CDCRenderTarget : public CRenderTarget;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDCRenderTarget::CDCRenderTarget](#cdcrendertarget)|Costruisce un oggetto CDCRenderTarget.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDCRenderTarget::Associare](#attach)|Associa all'oggetto l'interfaccia di destinazione di rendering esistente|
|[CDCRenderTarget::BindDC](#binddc)|Associa la destinazione di rendering al contesto di dispositivo a cui si emette i comandi di disegno|
|[CDCRenderTarget::Creazione](#create)|Crea un CDCRenderTarget.|
|[CDCRenderTarget::Detach](#detach)|Scollega l'interfaccia di destinazione di rendering dall'oggetto|
|[CDCRenderTarget::GetDCRenderTarget](#getdcrendertarget)|Restituisce l'interfaccia ID2D1DCRenderTarget|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDCRenderTarget::operatore ID2D1DCRenderTarget](#operator_id2d1dcrendertarget_star)|Restituisce l'interfaccia ID2D1DCRenderTarget|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CDCRenderTarget::m_pDCRenderTarget](#m_pdcrendertarget)|Puntatore a un oggetto ID2D1DCRenderTarget.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CRenderTarget](../../mfc/reference/crendertarget-class.md)

[CDCRenderTarget](../../mfc/reference/cdcrendertarget-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cdcrendertargetattach"></a><a name="attach"></a>CDCRenderTarget::Associare

Associa all'oggetto l'interfaccia di destinazione di rendering esistente

```
void Attach(ID2D1DCRenderTarget* pTarget);
```

### <a name="parameters"></a>Parametri

*pTarget (Destinazione)*<br/>
Interfaccia di destinazione di rendering esistente. Non può essere NULL

## <a name="cdcrendertargetbinddc"></a><a name="binddc"></a>CDCRenderTarget::BindDC

Associa la destinazione di rendering al contesto di dispositivo a cui si emette i comandi di disegno

```
BOOL BindDC(
    const CDC& dc,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*Dc*<br/>
Il contesto di dispositivo a cui la destinazione di rendering genera comandi di disegno

*Rect*<br/>
Dimensioni dell'handle a un contesto di dispositivo (HDC) a cui è associata la destinazione di rendering

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cdcrendertargetcdcrendertarget"></a><a name="cdcrendertarget"></a>CDCRenderTarget::CDCRenderTarget

Costruisce un oggetto CDCRenderTarget.

```
CDCRenderTarget();
```

## <a name="cdcrendertargetcreate"></a><a name="create"></a>CDCRenderTarget::Creazione

Crea un CDCRenderTarget.

```
BOOL Create(const D2D1_RENDER_TARGET_PROPERTIES& props);
```

### <a name="parameters"></a>Parametri

*Puntelli*<br/>
La modalità di rendering, il formato pixel, le opzioni di comunicazione remota, le informazioni DPI e il supporto diretto DirectX richiesto per il rendering hardware.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cdcrendertargetdetach"></a><a name="detach"></a>CDCRenderTarget::Detach

Scollega l'interfaccia di destinazione di rendering dall'oggetto

```
ID2D1DCRenderTarget* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di destinazione di rendering scollegata.

## <a name="cdcrendertargetgetdcrendertarget"></a><a name="getdcrendertarget"></a>CDCRenderTarget::GetDCRenderTarget

Restituisce l'interfaccia ID2D1DCRenderTarget

```
ID2D1DCRenderTarget* GetDCRenderTarget();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1DCRenderTarget o NULL se l'oggetto non è ancora inizializzato.

## <a name="cdcrendertargetm_pdcrendertarget"></a><a name="m_pdcrendertarget"></a>CDCRenderTarget::m_pDCRenderTarget

Puntatore a un oggetto ID2D1DCRenderTarget.

```
ID2D1DCRenderTarget* m_pDCRenderTarget;
```

## <a name="cdcrendertargetoperator-id2d1dcrendertarget"></a><a name="operator_id2d1dcrendertarget_star"></a>CDCRenderTarget::operatore ID2D1DCRenderTarget

Restituisce l'interfaccia ID2D1DCRenderTarget

```
operator ID2D1DCRenderTarget*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1DCRenderTarget o NULL se l'oggetto non è ancora inizializzato.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
