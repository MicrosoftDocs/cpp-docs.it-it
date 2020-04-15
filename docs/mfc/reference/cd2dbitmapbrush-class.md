---
title: Classe CD2DBitmapBrush
ms.date: 11/04/2016
f1_keywords:
- CD2DBitmapBrush
- AFXRENDERTARGET/CD2DBitmapBrush
- AFXRENDERTARGET/CD2DBitmapBrush::CD2DBitmapBrush
- AFXRENDERTARGET/CD2DBitmapBrush::Attach
- AFXRENDERTARGET/CD2DBitmapBrush::Create
- AFXRENDERTARGET/CD2DBitmapBrush::Destroy
- AFXRENDERTARGET/CD2DBitmapBrush::Detach
- AFXRENDERTARGET/CD2DBitmapBrush::Get
- AFXRENDERTARGET/CD2DBitmapBrush::GetBitmap
- AFXRENDERTARGET/CD2DBitmapBrush::GetExtendModeX
- AFXRENDERTARGET/CD2DBitmapBrush::GetExtendModeY
- AFXRENDERTARGET/CD2DBitmapBrush::GetInterpolationMode
- AFXRENDERTARGET/CD2DBitmapBrush::SetBitmap
- AFXRENDERTARGET/CD2DBitmapBrush::SetExtendModeX
- AFXRENDERTARGET/CD2DBitmapBrush::SetExtendModeY
- AFXRENDERTARGET/CD2DBitmapBrush::SetInterpolationMode
- AFXRENDERTARGET/CD2DBitmapBrush::CommonInit
- AFXRENDERTARGET/CD2DBitmapBrush::m_pBitmap
- AFXRENDERTARGET/CD2DBitmapBrush::m_pBitmapBrush
- AFXRENDERTARGET/CD2DBitmapBrush::m_pBitmapBrushProperties
helpviewer_keywords:
- CD2DBitmapBrush [MFC], CD2DBitmapBrush
- CD2DBitmapBrush [MFC], Attach
- CD2DBitmapBrush [MFC], Create
- CD2DBitmapBrush [MFC], Destroy
- CD2DBitmapBrush [MFC], Detach
- CD2DBitmapBrush [MFC], Get
- CD2DBitmapBrush [MFC], GetBitmap
- CD2DBitmapBrush [MFC], GetExtendModeX
- CD2DBitmapBrush [MFC], GetExtendModeY
- CD2DBitmapBrush [MFC], GetInterpolationMode
- CD2DBitmapBrush [MFC], SetBitmap
- CD2DBitmapBrush [MFC], SetExtendModeX
- CD2DBitmapBrush [MFC], SetExtendModeY
- CD2DBitmapBrush [MFC], SetInterpolationMode
- CD2DBitmapBrush [MFC], CommonInit
- CD2DBitmapBrush [MFC], m_pBitmap
- CD2DBitmapBrush [MFC], m_pBitmapBrush
- CD2DBitmapBrush [MFC], m_pBitmapBrushProperties
ms.assetid: 46ebbe34-66e0-44c8-af1d-d129e851de5e
ms.openlocfilehash: e26202392bf4783598aec0dddfea514fce806a8c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369306"
---
# <a name="cd2dbitmapbrush-class"></a>Classe CD2DBitmapBrush

Un wrapper per ID2D1BitmapBrush.

## <a name="syntax"></a>Sintassi

```
class CD2DBitmapBrush : public CD2DBrush;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmapBrush::CD2DBitmapBrush](#cd2dbitmapbrush)|Di overload. Costruisce un oggetto CD2DBitmapBrush da file.|
|[Oggetto CD2DBitmapBrush: : CD2DBitmapBrush](#dtor)|Distruttore. Chiamato quando un oggetto pennello bitmap D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmapBrush::Associare](#attach)|Associa all'oggetto un'interfaccia di risorsa esistente|
|[CD2DBitmapBrush::Creare](#create)|Crea un oggetto CD2DBitmapBrush. (Esegue l'override di [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DBitmapBrush::Destroy](#destroy)|Elimina un oggetto CD2DBitmapBrush. (Esegue l'override di [CD2DBrush::Destroy](../../mfc/reference/cd2dbrush-class.md#destroy).)|
|[CD2DBitmapBrush::Detach](#detach)|Scollega l'interfaccia delle risorse dall'oggetto|
|[CD2DBitmapBrush:Get](#get)|Restituisce l'interfaccia ID2D1BitmapBrush|
|[CD2DBitmapBrush::GetBitmap](#getbitmap)|Ottiene l'origine bitmap utilizzata da questo pennello per disegnare|
|[CD2DBitmapBrush::GetExtendModeX](#getextendmodex)|Ottiene il metodo mediante il quale il pennello affianca orizzontalmente le aree che si estendono oltre la bitmap|
|[CD2DBitmapBrush::GetExtendModeY](#getextendmodey)|Ottiene il metodo mediante il quale il pennello affianca verticalmente le aree che si estendono oltre la bitmap|
|[CD2DBitmapBrush::GetInterpolationMode](#getinterpolationmode)|Ottiene il metodo di interpolazione utilizzato quando la bitmap del pennello viene ridimensionata o ruotata|
|[CD2DBitmapBrush::SetBitmap](#setbitmap)|Specifica l'origine bitmap utilizzata da questo pennello per disegnare|
|[CD2DBitmapBrush::SetExtendModeX](#setextendmodex)|Specifica il modo in cui il pennello affianca orizzontalmente le aree che si estendono oltre la bitmap|
|[CD2DBitmapBrush::SetExtendModeY](#setextendmodey)|Specifica il modo in cui il pennello affianca verticalmente le aree che si estendono oltre la bitmap|
|[CD2DBitmapBrush::SetInterpolationMode](#setinterpolationmode)|Specifica la modalità di interpolazione utilizzata quando la bitmap del pennello viene ridimensionata o ruotata|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmapBrush::CommonInit](#commoninit)|Inizializza l'oggetto|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmapBrush::operator ID2D1BitmapBrush](#operator_id2d1bitmapbrush_star)|Restituisce l'interfaccia ID2D1BitmapBrush|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmapBrush::m_pBitmap](#m_pbitmap)|Archivia un puntatore a un CD2DBitmap oggetto.|
|[CD2DBitmapBrush::m_pBitmapBrush](#m_pbitmapbrush)|Archivia un puntatore a un ID2D1BitmapBrush oggetto.|
|[CD2DBitmapBrush::m_pBitmapBrushProperties](#m_pbitmapbrushproperties)|Proprietà del pennello bitmap.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource (informazioni in confronto a 3)](../../mfc/reference/cd2dresource-class.md)

[Pennello CD2D](../../mfc/reference/cd2dbrush-class.md)

`CD2DBitmapBrush`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dbitmapbrushcd2dbitmapbrush"></a><a name="dtor"></a>Oggetto CD2DBitmapBrush: : CD2DBitmapBrush

Distruttore. Chiamato quando un oggetto pennello bitmap D2D viene eliminato definitivamente.

```
virtual ~CD2DBitmapBrush();
```

## <a name="cd2dbitmapbrushattach"></a><a name="attach"></a>CD2DBitmapBrush::Associare

Associa all'oggetto un'interfaccia di risorsa esistente

```
void Attach(ID2D1BitmapBrush* pResource);
```

### <a name="parameters"></a>Parametri

*pRisorsa*<br/>
Interfaccia delle risorse esistente. Non può essere NULL

## <a name="cd2dbitmapbrushcd2dbitmapbrush"></a><a name="cd2dbitmapbrush"></a>CD2DBitmapBrush::CD2DBitmapBrush

Costruisce un oggetto CD2DBitmapBrush.

```
CD2DBitmapBrush(
    CRenderTarget* pParentTarget,
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);

CD2DBitmapBrush(
    CRenderTarget* pParentTarget,
    UINT uiResID,
    LPCTSTR lpszType = NULL,
    CD2DSizeU sizeDest = CD2DSizeU(0, 0),
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);

CD2DBitmapBrush(
    CRenderTarget* pParentTarget,
    LPCTSTR lpszImagePath,
    CD2DSizeU sizeDest = CD2DSizeU(0, 0),
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget (Destinazionepadre)*<br/>
Puntatore alla destinazione di rendering.

*pBitmapBrushProperties*<br/>
Puntatore alle modalità di estensione e alla modalità di interpolazione di un pennello bitmap.

*pBrushProperties (Proprietà Pennello)*<br/>
Puntatore all'opacità e alla trasformazione di un pennello.

*bAutoDistruggi*<br/>
Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).

*uiResID (informazioni in cui è in stato possibile appun*<br/>
Numero ID risorsa della risorsa.

*lpszType (tipo lpsz)*<br/>
Puntatore a una stringa con terminazione null che contiene il tipo di risorsa.

*più grande*<br/>
Dimensione della destinazione della bitmap.

*LpszImagePath (percorso immagine di un'immagine di windows)*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del file.

## <a name="cd2dbitmapbrushcommoninit"></a><a name="commoninit"></a>CD2DBitmapBrush::CommonInit

Inizializza l'oggetto

```
void CommonInit(D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties);
```

### <a name="parameters"></a>Parametri

*pBitmapBrushProperties*<br/>
Puntatore alle proprietà del pennello bitmap.

## <a name="cd2dbitmapbrushcreate"></a><a name="create"></a>CD2DBitmapBrush::Creare

Crea un oggetto CD2DBitmapBrush.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget (informazioni in base alla proprietà*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dbitmapbrushdestroy"></a><a name="destroy"></a>CD2DBitmapBrush::Destroy

Elimina un oggetto CD2DBitmapBrush.

```
virtual void Destroy();
```

## <a name="cd2dbitmapbrushdetach"></a><a name="detach"></a>CD2DBitmapBrush::Detach

Scollega l'interfaccia delle risorse dall'oggetto

```
ID2D1BitmapBrush* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia delle risorse disconnesse.

## <a name="cd2dbitmapbrushget"></a><a name="get"></a>CD2DBitmapBrush:Get

Restituisce l'interfaccia ID2D1BitmapBrush

```
ID2D1BitmapBrush* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un ID2D1BitmapBrush interfaccia o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dbitmapbrushgetbitmap"></a><a name="getbitmap"></a>CD2DBitmapBrush::GetBitmap

Ottiene l'origine bitmap utilizzata da questo pennello per disegnare

```
CD2DBitmap* GetBitmap();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto CD2DBitmap o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dbitmapbrushgetextendmodex"></a><a name="getextendmodex"></a>CD2DBitmapBrush::GetExtendModeX

Ottiene il metodo mediante il quale il pennello affianca orizzontalmente le aree che si estendono oltre la bitmap

```
D2D1_EXTEND_MODE GetExtendModeX() const;
```

### <a name="return-value"></a>Valore restituito

Valore che specifica il modo in cui il pennello affianca orizzontalmente le aree che si estendono oltre la bitmap

## <a name="cd2dbitmapbrushgetextendmodey"></a><a name="getextendmodey"></a>CD2DBitmapBrush::GetExtendModeY

Ottiene il metodo mediante il quale il pennello affianca verticalmente le aree che si estendono oltre la bitmap

```
D2D1_EXTEND_MODE GetExtendModeY() const;
```

### <a name="return-value"></a>Valore restituito

Valore che specifica il modo in cui il pennello affianca verticalmente le aree che si estendono oltre la bitmap

## <a name="cd2dbitmapbrushgetinterpolationmode"></a><a name="getinterpolationmode"></a>CD2DBitmapBrush::GetInterpolationMode

Ottiene il metodo di interpolazione utilizzato quando la bitmap del pennello viene ridimensionata o ruotata

```
D2D1_BITMAP_INTERPOLATION_MODE GetInterpolationMode() const;
```

### <a name="return-value"></a>Valore restituito

Metodo di interpolazione utilizzato quando la bitmap del pennello viene ridimensionata o ruotata

## <a name="cd2dbitmapbrushm_pbitmap"></a><a name="m_pbitmap"></a>CD2DBitmapBrush::m_pBitmap

Archivia un puntatore a un CD2DBitmap oggetto.

```
CD2DBitmap* m_pBitmap;
```

## <a name="cd2dbitmapbrushm_pbitmapbrush"></a><a name="m_pbitmapbrush"></a>CD2DBitmapBrush::m_pBitmapBrush

Archivia un puntatore a un ID2D1BitmapBrush oggetto.

```
ID2D1BitmapBrush* m_pBitmapBrush;
```

## <a name="cd2dbitmapbrushm_pbitmapbrushproperties"></a><a name="m_pbitmapbrushproperties"></a>CD2DBitmapBrush::m_pBitmapBrushProperties

Proprietà del pennello bitmap.

```
D2D1_BITMAP_BRUSH_PROPERTIES* m_pBitmapBrushProperties;
```

## <a name="cd2dbitmapbrushoperator-id2d1bitmapbrush"></a><a name="operator_id2d1bitmapbrush_star"></a>CD2DBitmapBrush::operator ID2D1BitmapBrush

Restituisce l'interfaccia ID2D1BitmapBrush

```
operator ID2D1BitmapBrush*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un ID2D1BitmapBrush interfaccia o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dbitmapbrushsetbitmap"></a><a name="setbitmap"></a>CD2DBitmapBrush::SetBitmap

Specifica l'origine bitmap utilizzata da questo pennello per disegnare

```
void SetBitmap(CD2DBitmap* pBitmap);
```

### <a name="parameters"></a>Parametri

*pBitmap*<br/>
Origine bitmap utilizzata dal pennello

## <a name="cd2dbitmapbrushsetextendmodex"></a><a name="setextendmodex"></a>CD2DBitmapBrush::SetExtendModeX

Specifica il modo in cui il pennello affianca orizzontalmente le aree che si estendono oltre la bitmap

```
void SetExtendModeX(D2D1_EXTEND_MODE extendModeX);
```

### <a name="parameters"></a>Parametri

*extendModeX (informazioni in base alla proprietà*<br/>
Valore che specifica il modo in cui il pennello affianca orizzontalmente le aree che si estendono oltre la bitmap

## <a name="cd2dbitmapbrushsetextendmodey"></a><a name="setextendmodey"></a>CD2DBitmapBrush::SetExtendModeY

Specifica il modo in cui il pennello affianca verticalmente le aree che si estendono oltre la bitmap

```
void SetExtendModeY(D2D1_EXTEND_MODE extendModeY);
```

### <a name="parameters"></a>Parametri

*extendModeY (file extendModeY)*<br/>
Valore che specifica il modo in cui il pennello affianca verticalmente le aree che si estendono oltre la bitmap

## <a name="cd2dbitmapbrushsetinterpolationmode"></a><a name="setinterpolationmode"></a>CD2DBitmapBrush::SetInterpolationMode

Specifica la modalità di interpolazione utilizzata quando la bitmap del pennello viene ridimensionata o ruotata

```
void SetInterpolationMode(D2D1_BITMAP_INTERPOLATION_MODE interpolationMode);
```

### <a name="parameters"></a>Parametri

*interpolationMode (Modalità di interpolazione)*<br/>
Modalità di interpolazione utilizzata quando la bitmap del pennello viene ridimensionata o ruotata

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
