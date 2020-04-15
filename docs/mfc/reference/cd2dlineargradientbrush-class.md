---
title: Classe CD2DLinearGradientBrush
ms.date: 11/04/2016
f1_keywords:
- CD2DLinearGradientBrush
- AFXRENDERTARGET/CD2DLinearGradientBrush
- AFXRENDERTARGET/CD2DLinearGradientBrush::CD2DLinearGradientBrush
- AFXRENDERTARGET/CD2DLinearGradientBrush::Attach
- AFXRENDERTARGET/CD2DLinearGradientBrush::Create
- AFXRENDERTARGET/CD2DLinearGradientBrush::Destroy
- AFXRENDERTARGET/CD2DLinearGradientBrush::Detach
- AFXRENDERTARGET/CD2DLinearGradientBrush::Get
- AFXRENDERTARGET/CD2DLinearGradientBrush::GetEndPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::GetStartPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::SetEndPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::SetStartPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::m_LinearGradientBrushProperties
- AFXRENDERTARGET/CD2DLinearGradientBrush::m_pLinearGradientBrush
helpviewer_keywords:
- CD2DLinearGradientBrush [MFC], CD2DLinearGradientBrush
- CD2DLinearGradientBrush [MFC], Attach
- CD2DLinearGradientBrush [MFC], Create
- CD2DLinearGradientBrush [MFC], Destroy
- CD2DLinearGradientBrush [MFC], Detach
- CD2DLinearGradientBrush [MFC], Get
- CD2DLinearGradientBrush [MFC], GetEndPoint
- CD2DLinearGradientBrush [MFC], GetStartPoint
- CD2DLinearGradientBrush [MFC], SetEndPoint
- CD2DLinearGradientBrush [MFC], SetStartPoint
- CD2DLinearGradientBrush [MFC], m_LinearGradientBrushProperties
- CD2DLinearGradientBrush [MFC], m_pLinearGradientBrush
ms.assetid: d4be9ff9-0ea8-45e6-9b8d-f3bc5673cbac
ms.openlocfilehash: 6c488d66962f26b6ca9b8c63cb387fc75191085a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369204"
---
# <a name="cd2dlineargradientbrush-class"></a>Classe CD2DLinearGradientBrush

Wrapper per ID2D1LinearGradientBrush.

## <a name="syntax"></a>Sintassi

```
class CD2DLinearGradientBrush : public CD2DGradientBrush;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[SCOMCD2DLinearGradientBrush::CD2DLinearGradientBrush](#cd2dlineargradientbrush)|Costruisce un oggetto CD2DLinearGradientBrush.|
|[Scomperato di tipo CD2DLinearGradientBrush::CD2DLinearGradientBrush](#_dtorcd2dlineargradientbrush)|Distruttore. Chiamato quando un oggetto pennello sfumato lineare D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DLinearGradientBrush::Attach](#attach)|Associa all'oggetto un'interfaccia di risorsa esistente|
|[CD2DLinearGradientBrush::Create](#create)|Crea un oggetto CD2DLinearGradientBrush. (Esegue l'override di [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[ScomCD2DLinearGradientBrush::Destroy](#destroy)|Elimina un oggetto CD2DLinearGradientBrush. (Esegue l'override di [CD2DGradientBrush::Destroy](../../mfc/reference/cd2dgradientbrush-class.md#destroy).)|
|[CD2DLinearGradientBrush::Detach](#detach)|Scollega l'interfaccia delle risorse dall'oggetto|
|[CD2DLinearGradientBrush::Get](#get)|Restituisce l'interfaccia ID2D1LinearGradientBrush|
|[CD2DLinearGradientBrush::GetEndPoint](#getendpoint)|Recupera le coordinate finali della sfumatura lineare|
|[CD2DLinearGradientBrush::GetStartPoint](#getstartpoint)|Recupera le coordinate iniziali della sfumatura lineare|
|[CD2DLinearGradientBrush::SetEndPoint](#setendpoint)|Imposta le coordinate finali della sfumatura lineare nello spazio delle coordinate del pennello|
|[S2DLinearGradientBrush::SetStartPoint](#setstartpoint)|Imposta le coordinate iniziali della sfumatura lineare nello spazio delle coordinate del pennello|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DLinearGradientBrush::operator ID2D1LinearGradientBrush](#operator_id2d1lineargradientbrush_star)|Restituisce l'interfaccia ID2D1LinearGradientBrush|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DLinearGradientBrush::m_LinearGradientBrushProperties](#m_lineargradientbrushproperties)|I punti iniziale e finale del gradiente.|
|[CD2DLinearGradientBrush::m_pLinearGradientBrush](#m_plineargradientbrush)|Puntatore a un oggetto ID2D1LinearGradientBrush.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource (informazioni in confronto a 3)](../../mfc/reference/cd2dresource-class.md)

[Pennello CD2D](../../mfc/reference/cd2dbrush-class.md)

[Pennello CD2DGradientBrush](../../mfc/reference/cd2dgradientbrush-class.md)

`CD2DLinearGradientBrush`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dlineargradientbrushcd2dlineargradientbrush"></a><a name="_dtorcd2dlineargradientbrush"></a>Scomperato di tipo CD2DLinearGradientBrush::CD2DLinearGradientBrush

Distruttore. Chiamato quando un oggetto pennello sfumato lineare D2D viene eliminato definitivamente.

```
virtual ~CD2DLinearGradientBrush();
```

## <a name="cd2dlineargradientbrushattach"></a><a name="attach"></a>CD2DLinearGradientBrush::Attach

Associa all'oggetto un'interfaccia di risorsa esistente

```
void Attach(ID2D1LinearGradientBrush* pResource);
```

### <a name="parameters"></a>Parametri

*pRisorsa*<br/>
Interfaccia delle risorse esistente. Non può essere NULL

## <a name="cd2dlineargradientbrushcd2dlineargradientbrush"></a><a name="cd2dlineargradientbrush"></a>SCOMCD2DLinearGradientBrush::CD2DLinearGradientBrush

Costruisce un oggetto CD2DLinearGradientBrush.

```
CD2DLinearGradientBrush(
    CRenderTarget* pParentTarget,
    const D2D1_GRADIENT_STOP* gradientStops,
    UINT gradientStopsCount,
    D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES LinearGradientBrushProperties,
    D2D1_GAMMA colorInterpolationGamma = D2D1_GAMMA_2_2,
    D2D1_EXTEND_MODE extendMode = D2D1_EXTEND_MODE_CLAMP,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget (Destinazionepadre)*<br/>
Puntatore alla destinazione di rendering.

*gradientStops (gradientStops)*<br/>
Puntatore a una matrice di strutture D2D1_GRADIENT_STOP.

*gradientStopsCount (conteggio gradiente)*<br/>
Valore maggiore o uguale a 1 che specifica il numero di interruzioni della sfumatura nella matrice gradientStops.

*LinearGradientBrushProperties*<br/>
I punti iniziale e finale del gradiente.

*colorInterpolazioneGamma*<br/>
Spazio in cui viene eseguita l'interpolazione del colore tra le interruzioni della sfumatura.

*extendMode (modalità estensione)*<br/>
Comportamento della sfumatura al di fuori dell'intervallo normalizzato [0,1].

*pBrushProperties (Proprietà Pennello)*<br/>
Puntatore all'opacità e alla trasformazione di un pennello.

*bAutoDistruggi*<br/>
Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).

## <a name="cd2dlineargradientbrushcreate"></a><a name="create"></a>CD2DLinearGradientBrush::Create

Crea un oggetto CD2DLinearGradientBrush.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget (informazioni in base alla proprietà*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dlineargradientbrushdestroy"></a><a name="destroy"></a>ScomCD2DLinearGradientBrush::Destroy

Elimina un oggetto CD2DLinearGradientBrush.

```
virtual void Destroy();
```

## <a name="cd2dlineargradientbrushdetach"></a><a name="detach"></a>CD2DLinearGradientBrush::Detach

Scollega l'interfaccia delle risorse dall'oggetto

```
ID2D1LinearGradientBrush* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia delle risorse disconnesse.

## <a name="cd2dlineargradientbrushget"></a><a name="get"></a>CD2DLinearGradientBrush::Get

Restituisce l'interfaccia ID2D1LinearGradientBrush

```
ID2D1LinearGradientBrush* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un ID2D1LinearGradientBrush interfaccia o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dlineargradientbrushgetendpoint"></a><a name="getendpoint"></a>CD2DLinearGradientBrush::GetEndPoint

Recupera le coordinate finali della sfumatura lineare

```
CD2DPointF GetEndPoint() const;
```

### <a name="return-value"></a>Valore restituito

Le coordinate bidimensionali finali della sfumatura lineare, nello spazio delle coordinate del pennello

## <a name="cd2dlineargradientbrushgetstartpoint"></a><a name="getstartpoint"></a>CD2DLinearGradientBrush::GetStartPoint

Recupera le coordinate iniziali della sfumatura lineare

```
CD2DPointF GetStartPoint() const;
```

### <a name="return-value"></a>Valore restituito

Coordinate bidimensionali iniziali della sfumatura lineare, nello spazio delle coordinate del pennello

## <a name="cd2dlineargradientbrushm_lineargradientbrushproperties"></a><a name="m_lineargradientbrushproperties"></a>CD2DLinearGradientBrush::m_LinearGradientBrushProperties

I punti iniziale e finale del gradiente.

```
D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES m_LinearGradientBrushProperties;
```

## <a name="cd2dlineargradientbrushm_plineargradientbrush"></a><a name="m_plineargradientbrush"></a>CD2DLinearGradientBrush::m_pLinearGradientBrush

Puntatore a un oggetto ID2D1LinearGradientBrush.

```
ID2D1LinearGradientBrush* m_pLinearGradientBrush;
```

## <a name="cd2dlineargradientbrushoperator-id2d1lineargradientbrush"></a><a name="operator_id2d1lineargradientbrush_star"></a>CD2DLinearGradientBrush::operator ID2D1LinearGradientBrush

Restituisce l'interfaccia ID2D1LinearGradientBrush

```
operator ID2D1LinearGradientBrush*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un ID2D1LinearGradientBrush interfaccia o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dlineargradientbrushsetendpoint"></a><a name="setendpoint"></a>CD2DLinearGradientBrush::SetEndPoint

Imposta le coordinate finali della sfumatura lineare nello spazio delle coordinate del pennello

```
void SetEndPoint(CD2DPointF point);
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
Le coordinate bidimensionali finali della sfumatura lineare, nello spazio delle coordinate del pennello

## <a name="cd2dlineargradientbrushsetstartpoint"></a><a name="setstartpoint"></a>S2DLinearGradientBrush::SetStartPoint

Imposta le coordinate iniziali della sfumatura lineare nello spazio delle coordinate del pennello

```
void SetStartPoint(CD2DPointF point);
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
Coordinate bidimensionali iniziali della sfumatura lineare, nello spazio delle coordinate del pennello

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
