---
description: 'Altre informazioni su: Classe CD2DSolidColorBrush'
title: Classe CD2DSolidColorBrush
ms.date: 03/27/2019
f1_keywords:
- CD2DSolidColorBrush
- AFXRENDERTARGET/CD2DSolidColorBrush
- AFXRENDERTARGET/CD2DSolidColorBrush::CD2DSolidColorBrush
- AFXRENDERTARGET/CD2DSolidColorBrush::Attach
- AFXRENDERTARGET/CD2DSolidColorBrush::Create
- AFXRENDERTARGET/CD2DSolidColorBrush::Destroy
- AFXRENDERTARGET/CD2DSolidColorBrush::Detach
- AFXRENDERTARGET/CD2DSolidColorBrush::Get
- AFXRENDERTARGET/CD2DSolidColorBrush::GetColor
- AFXRENDERTARGET/CD2DSolidColorBrush::SetColor
- AFXRENDERTARGET/CD2DSolidColorBrush::m_colorSolid
- AFXRENDERTARGET/CD2DSolidColorBrush::m_pSolidColorBrush
helpviewer_keywords:
- CD2DSolidColorBrush [MFC], CD2DSolidColorBrush
- CD2DSolidColorBrush [MFC], Attach
- CD2DSolidColorBrush [MFC], Create
- CD2DSolidColorBrush [MFC], Destroy
- CD2DSolidColorBrush [MFC], Detach
- CD2DSolidColorBrush [MFC], Get
- CD2DSolidColorBrush [MFC], GetColor
- CD2DSolidColorBrush [MFC], SetColor
- CD2DSolidColorBrush [MFC], m_colorSolid
- CD2DSolidColorBrush [MFC], m_pSolidColorBrush
ms.assetid: d4506637-acce-4f74-8a9b-f0a45571a735
ms.openlocfilehash: 57df3732a3c4239af6d9121426aa272c6f58417d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154604"
---
# <a name="cd2dsolidcolorbrush-class"></a>Classe CD2DSolidColorBrush

Wrapper per ID2D1SolidColorBrush.

## <a name="syntax"></a>Sintassi

```
class CD2DSolidColorBrush : public CD2DBrush;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DSolidColorBrush:: CD2DSolidColorBrush](#cd2dsolidcolorbrush)|Di overload. Costruisce un oggetto CD2DSolidColorBrush.|
|[CD2DSolidColorBrush:: ~ CD2DSolidColorBrush](#_dtorcd2dsolidcolorbrush)|Distruttore. Chiamato quando un oggetto pennello a tinta unita D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DSolidColorBrush:: Connetti](#attach)|Connette l'interfaccia di risorsa esistente all'oggetto|
|[CD2DSolidColorBrush:: create](#create)|Crea un CD2DSolidColorBrush. Esegue l'override di [CD2DResource:: create](../../mfc/reference/cd2dresource-class.md#create).|
|[CD2DSolidColorBrush::D estroy](#destroy)|Elimina definitivamente un oggetto CD2DSolidColorBrush. Esegue l'override di [CD2DBrush::D estroy](../../mfc/reference/cd2dbrush-class.md#destroy).|
|[CD2DSolidColorBrush::D etach](#detach)|Scollega l'interfaccia della risorsa dall'oggetto|
|[CD2DSolidColorBrush:: Get](#get)|Restituisce l'interfaccia ID2D1SolidColorBrush|
|[CD2DSolidColorBrush:: GetColor](#getcolor)|Recupera il colore del pennello a tinta unita|
|[CD2DSolidColorBrush:: ToColor](#setcolor)|Specifica il colore di questo pennello a tinta unita|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DSolidColorBrush:: operator ID2D1SolidColorBrush *](#operator_id2d1solidcolorbrush_star)|Restituisce l'interfaccia ID2D1SolidColorBrush|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DSolidColorBrush:: m_colorSolid](#m_colorsolid)|Colore a tinta unita pennello.|
|[CD2DSolidColorBrush:: m_pSolidColorBrush](#m_psolidcolorbrush)|Archivia un puntatore a un oggetto ID2D1SolidColorBrush.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DBrush](../../mfc/reference/cd2dbrush-class.md)

[CD2DSolidColorBrush](../../mfc/reference/cd2dsolidcolorbrush-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dsolidcolorbrushcd2dsolidcolorbrush"></a><a name="_dtorcd2dsolidcolorbrush"></a> CD2DSolidColorBrush:: ~ CD2DSolidColorBrush

Distruttore. Chiamato quando un oggetto pennello a tinta unita D2D viene eliminato definitivamente.

```
virtual ~CD2DSolidColorBrush();
```

## <a name="cd2dsolidcolorbrushattach"></a><a name="attach"></a> CD2DSolidColorBrush:: Connetti

Connette l'interfaccia di risorsa esistente all'oggetto

```cpp
void Attach(ID2D1SolidColorBrush* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia risorsa esistente. Non può essere NULL

## <a name="cd2dsolidcolorbrushcd2dsolidcolorbrush"></a><a name="cd2dsolidcolorbrush"></a> CD2DSolidColorBrush:: CD2DSolidColorBrush

Costruisce un oggetto CD2DSolidColorBrush.

```
CD2DSolidColorBrush(
    CRenderTarget* pParentTarget,
    D2D1_COLOR_F color,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);

CD2DSolidColorBrush(
    CRenderTarget* pParentTarget,
    COLORREF color,
    int nAlpha = 255,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget*<br/>
Puntatore alla destinazione di rendering.

*color*<br/>
Valori rosso, verde, blu e alfa del colore del pennello.

*pBrushProperties*<br/>
Puntatore all'opacità e alla trasformazione di un pennello.

*bAutoDestroy*<br/>
Indica che l'oggetto verrà eliminato definitivamente dal proprietario (pParentTarget).

*nAlpha*<br/>
Opacità del colore del pennello.

## <a name="cd2dsolidcolorbrushcreate"></a><a name="create"></a> CD2DSolidColorBrush:: create

Crea un CD2DSolidColorBrush.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dsolidcolorbrushdestroy"></a><a name="destroy"></a> CD2DSolidColorBrush::D estroy

Elimina definitivamente un oggetto CD2DSolidColorBrush.

```
virtual void Destroy();
```

## <a name="cd2dsolidcolorbrushdetach"></a><a name="detach"></a> CD2DSolidColorBrush::D etach

Scollega l'interfaccia della risorsa dall'oggetto

```
ID2D1SolidColorBrush* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di risorsa scollegata.

## <a name="cd2dsolidcolorbrushget"></a><a name="get"></a> CD2DSolidColorBrush:: Get

Restituisce l'interfaccia ID2D1SolidColorBrush

```
ID2D1SolidColorBrush* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1SolidColorBrush o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dsolidcolorbrushgetcolor"></a><a name="getcolor"></a> CD2DSolidColorBrush:: GetColor

Recupera il colore del pennello a tinta unita

```
D2D1_COLOR_F GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore del pennello a tinta unita

## <a name="cd2dsolidcolorbrushm_colorsolid"></a><a name="m_colorsolid"></a> CD2DSolidColorBrush:: m_colorSolid

Colore a tinta unita pennello.

```
D2D1_COLOR_F m_colorSolid;
```

## <a name="cd2dsolidcolorbrushm_psolidcolorbrush"></a><a name="m_psolidcolorbrush"></a> CD2DSolidColorBrush:: m_pSolidColorBrush

Archivia un puntatore a un oggetto ID2D1SolidColorBrush.

```
ID2D1SolidColorBrush* m_pSolidColorBrush;
```

## <a name="cd2dsolidcolorbrushoperator-id2d1solidcolorbrush"></a><a name="operator_id2d1solidcolorbrush_star"></a> CD2DSolidColorBrush:: operator ID2D1SolidColorBrush *

Restituisce l'interfaccia ID2D1SolidColorBrush

```
operator ID2D1SolidColorBrush*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1SolidColorBrush o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dsolidcolorbrushsetcolor"></a><a name="setcolor"></a> CD2DSolidColorBrush:: ToColor

Specifica il colore di questo pennello a tinta unita

```cpp
void SetColor(D2D1_COLOR_F color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
Colore del pennello a tinta unita

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
