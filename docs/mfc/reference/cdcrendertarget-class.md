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
ms.openlocfilehash: 70169d2b89d9ea657898f7a96dea27556023d4e2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62168173"
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
|[CDCRenderTarget::Attach](#attach)|Collega esistente di eseguire il rendering come interfaccia di destinazione per l'oggetto|
|[CDCRenderTarget::BindDC](#binddc)|Associa la destinazione di rendering per il contesto di dispositivo a cui rilascia i comandi di disegno|
|[CDCRenderTarget::Create](#create)|Crea un CDCRenderTarget.|
|[CDCRenderTarget::Detach](#detach)|Scollega interfaccia di destinazione di rendering dell'oggetto|
|[CDCRenderTarget::GetDCRenderTarget](#getdcrendertarget)|Restituisce l'interfaccia ID2D1DCRenderTarget|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDCRenderTarget::operator ID2D1DCRenderTarget *](#operator_id2d1dcrendertarget_star)|Restituisce l'interfaccia ID2D1DCRenderTarget|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CDCRenderTarget::m_pDCRenderTarget](#m_pdcrendertarget)|Un puntatore a un oggetto ID2D1DCRenderTarget.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CRenderTarget](../../mfc/reference/crendertarget-class.md)

[CDCRenderTarget](../../mfc/reference/cdcrendertarget-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="attach"></a>  CDCRenderTarget::Attach

Collega esistente di eseguire il rendering come interfaccia di destinazione per l'oggetto

```
void Attach(ID2D1DCRenderTarget* pTarget);
```

### <a name="parameters"></a>Parametri

*pTarget*<br/>
Interfaccia destinazione di rendering esistente. Non può essere NULL

##  <a name="binddc"></a>  CDCRenderTarget::BindDC

Associa la destinazione di rendering per il contesto di dispositivo a cui rilascia i comandi di disegno

```
BOOL BindDC(
    const CDC& dc,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*dc*<br/>
Il contesto di dispositivo a cui la destinazione di rendering genera i comandi di disegni

*rect*<br/>
Le dimensioni dell'handle per un contesto di dispositivo (HDC) a cui è associata la destinazione di rendering

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="cdcrendertarget"></a>  CDCRenderTarget::CDCRenderTarget

Costruisce un oggetto CDCRenderTarget.

```
CDCRenderTarget();
```

##  <a name="create"></a>  CDCRenderTarget::Create

Crea un CDCRenderTarget.

```
BOOL Create(const D2D1_RENDER_TARGET_PROPERTIES& props);
```

### <a name="parameters"></a>Parametri

*props*<br/>
La modalità di rendering, formato pixel, le opzioni di comunicazione remota, informazioni sulla scala DPI e il supporto di DirectX minimo richiesto per il rendering hardware.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="detach"></a>  CDCRenderTarget::Detach

Scollega interfaccia di destinazione di rendering dell'oggetto

```
ID2D1DCRenderTarget* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore a scollegare il rendering dell'interfaccia di destinazione.

##  <a name="getdcrendertarget"></a>  CDCRenderTarget::GetDCRenderTarget

Restituisce l'interfaccia ID2D1DCRenderTarget

```
ID2D1DCRenderTarget* GetDCRenderTarget();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1DCRenderTarget o NULL se l'oggetto non è ancora inizializzato.

##  <a name="m_pdcrendertarget"></a>  CDCRenderTarget::m_pDCRenderTarget

Un puntatore a un oggetto ID2D1DCRenderTarget.

```
ID2D1DCRenderTarget* m_pDCRenderTarget;
```

##  <a name="operator_id2d1dcrendertarget_star"></a>  CDCRenderTarget::operator ID2D1DCRenderTarget *

Restituisce l'interfaccia ID2D1DCRenderTarget

```
operator ID2D1DCRenderTarget*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1DCRenderTarget o NULL se l'oggetto non è ancora inizializzato.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
