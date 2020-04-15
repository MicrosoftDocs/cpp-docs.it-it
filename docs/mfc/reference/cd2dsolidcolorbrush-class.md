---
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
ms.openlocfilehash: 5aa3d7688046b0c1b04983f2d27fe5579dd7c680
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369051"
---
# <a name="cd2dsolidcolorbrush-class"></a>Classe CD2DSolidColorBrush

Un wrapper per ID2D1SolidColorBrush.

## <a name="syntax"></a>Sintassi

```
class CD2DSolidColorBrush : public CD2DBrush;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Scompulta':CD2DSolidColorBrush::CD2DSolidColorBrush](#cd2dsolidcolorbrush)|Di overload. Costruisce un oggetto CD2DSolidColorBrush.|
|[Scompulsori di CD2DSolidColorPennell: : CD2DSolidColorBrush](#_dtorcd2dsolidcolorbrush)|Distruttore. Chiamato quando un oggetto pennello solido D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSolidColorBrush::Associare](#attach)|Associa all'oggetto un'interfaccia di risorsa esistente|
|[CD2DSolidColorBrush::CreareCD2DSolidColorBrush::Create](#create)|Crea un oggetto CD2DSolidColorBrush. (Esegue l'override di [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DSolidColorBrush::Destroy](#destroy)|Elimina un cd2DSolidColorBrush oggetto. (Esegue l'override di [CD2DBrush::Destroy](../../mfc/reference/cd2dbrush-class.md#destroy).)|
|[CD2DSolidColorBrush::Detach](#detach)|Scollega l'interfaccia delle risorse dall'oggetto|
|[CD2DSolidColorBrush::Get](#get)|Restituisce l'interfaccia ID2D1SolidColorBrush|
|[CD2DSolidColorBrush::GetColor](#getcolor)|Recupera il colore del pennello a tinta unita|
|[SCOMCD2DSolidColorBrush::SetColor](#setcolor)|Specifica il colore di questo pennello a tinta unita|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSolidColorBrush::operator ID2D1SolidColorBrush](#operator_id2d1solidcolorbrush_star)|Restituisce l'interfaccia ID2D1SolidColorBrush|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSolidColorBrush::m_colorSolid](#m_colorsolid)|Colore a tinta unita pennello.|
|[CD2DSolidColorBrush::m_pSolidColorBrush](#m_psolidcolorbrush)|Archivia un puntatore a un ID2D1SolidColorBrush oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource (informazioni in confronto a 3)](../../mfc/reference/cd2dresource-class.md)

[Pennello CD2D](../../mfc/reference/cd2dbrush-class.md)

[OGGETTO CD2DSolidColorBrush](../../mfc/reference/cd2dsolidcolorbrush-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dsolidcolorbrushcd2dsolidcolorbrush"></a><a name="_dtorcd2dsolidcolorbrush"></a>Scompulsori di CD2DSolidColorPennell: : CD2DSolidColorBrush

Distruttore. Chiamato quando un oggetto pennello solido D2D viene eliminato definitivamente.

```
virtual ~CD2DSolidColorBrush();
```

## <a name="cd2dsolidcolorbrushattach"></a><a name="attach"></a>CD2DSolidColorBrush::Associare

Associa all'oggetto un'interfaccia di risorsa esistente

```
void Attach(ID2D1SolidColorBrush* pResource);
```

### <a name="parameters"></a>Parametri

*pRisorsa*<br/>
Interfaccia delle risorse esistente. Non può essere NULL

## <a name="cd2dsolidcolorbrushcd2dsolidcolorbrush"></a><a name="cd2dsolidcolorbrush"></a>Scompulta':CD2DSolidColorBrush::CD2DSolidColorBrush

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

*pParentTarget (Destinazionepadre)*<br/>
Puntatore alla destinazione di rendering.

*Colore*<br/>
I valori rosso, verde, blu e alfa del colore del pennello.

*pBrushProperties (Proprietà Pennello)*<br/>
Puntatore all'opacità e alla trasformazione di un pennello.

*bAutoDistruggi*<br/>
Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).

*nAlfa*<br/>
Opacità del colore del pennello.

## <a name="cd2dsolidcolorbrushcreate"></a><a name="create"></a>CD2DSolidColorBrush::CreareCD2DSolidColorBrush::Create

Crea un oggetto CD2DSolidColorBrush.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget (informazioni in base alla proprietà*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dsolidcolorbrushdestroy"></a><a name="destroy"></a>CD2DSolidColorBrush::Destroy

Elimina un cd2DSolidColorBrush oggetto.

```
virtual void Destroy();
```

## <a name="cd2dsolidcolorbrushdetach"></a><a name="detach"></a>CD2DSolidColorBrush::Detach

Scollega l'interfaccia delle risorse dall'oggetto

```
ID2D1SolidColorBrush* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia delle risorse disconnesse.

## <a name="cd2dsolidcolorbrushget"></a><a name="get"></a>CD2DSolidColorBrush::Get

Restituisce l'interfaccia ID2D1SolidColorBrush

```
ID2D1SolidColorBrush* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un ID2D1SolidColorBrush interfaccia o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dsolidcolorbrushgetcolor"></a><a name="getcolor"></a>CD2DSolidColorBrush::GetColor

Recupera il colore del pennello a tinta unita

```
D2D1_COLOR_F GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Il colore di questo pennello a tinta unita

## <a name="cd2dsolidcolorbrushm_colorsolid"></a><a name="m_colorsolid"></a>CD2DSolidColorBrush::m_colorSolid

Colore a tinta unita pennello.

```
D2D1_COLOR_F m_colorSolid;
```

## <a name="cd2dsolidcolorbrushm_psolidcolorbrush"></a><a name="m_psolidcolorbrush"></a>CD2DSolidColorBrush::m_pSolidColorBrush

Archivia un puntatore a un ID2D1SolidColorBrush oggetto.

```
ID2D1SolidColorBrush* m_pSolidColorBrush;
```

## <a name="cd2dsolidcolorbrushoperator-id2d1solidcolorbrush"></a><a name="operator_id2d1solidcolorbrush_star"></a>CD2DSolidColorBrush::operator ID2D1SolidColorBrush

Restituisce l'interfaccia ID2D1SolidColorBrush

```
operator ID2D1SolidColorBrush*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un ID2D1SolidColorBrush interfaccia o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dsolidcolorbrushsetcolor"></a><a name="setcolor"></a>SCOMCD2DSolidColorBrush::SetColor

Specifica il colore di questo pennello a tinta unita

```
void SetColor(D2D1_COLOR_F color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
Il colore di questo pennello a tinta unita

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
