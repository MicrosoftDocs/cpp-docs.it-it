---
title: Classe CD2DBrush
ms.date: 11/04/2016
f1_keywords:
- CD2DBrush
- AFXRENDERTARGET/CD2DBrush
- AFXRENDERTARGET/CD2DBrush::CD2DBrush
- AFXRENDERTARGET/CD2DBrush::Attach
- AFXRENDERTARGET/CD2DBrush::Destroy
- AFXRENDERTARGET/CD2DBrush::Detach
- AFXRENDERTARGET/CD2DBrush::Get
- AFXRENDERTARGET/CD2DBrush::GetOpacity
- AFXRENDERTARGET/CD2DBrush::GetTransform
- AFXRENDERTARGET/CD2DBrush::IsValid
- AFXRENDERTARGET/CD2DBrush::SetOpacity
- AFXRENDERTARGET/CD2DBrush::SetTransform
- AFXRENDERTARGET/CD2DBrush::m_pBrush
- AFXRENDERTARGET/CD2DBrush::m_pBrushProperties
helpviewer_keywords:
- CD2DBrush [MFC], CD2DBrush
- CD2DBrush [MFC], Attach
- CD2DBrush [MFC], Destroy
- CD2DBrush [MFC], Detach
- CD2DBrush [MFC], Get
- CD2DBrush [MFC], GetOpacity
- CD2DBrush [MFC], GetTransform
- CD2DBrush [MFC], IsValid
- CD2DBrush [MFC], SetOpacity
- CD2DBrush [MFC], SetTransform
- CD2DBrush [MFC], m_pBrush
- CD2DBrush [MFC], m_pBrushProperties
ms.assetid: 0d2c0857-2261-48a8-8ee0-a88cbf08499a
ms.openlocfilehash: 1d079ec6c96f96919fde39b73297580ed2a0ac75
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62391296"
---
# <a name="cd2dbrush-class"></a>Classe CD2DBrush

Un wrapper per ID2D1Brush.

## <a name="syntax"></a>Sintassi

```
class CD2DBrush : public CD2DResource;
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBrush::CD2DBrush](#cd2dbrush)|Costruisce un oggetto CD2DBrush.|
|[CD2DBrush::~CD2DBrush](#_dtorcd2dbrush)|Distruttore. Chiamato quando viene eliminata definitivamente un oggetto brush D2D.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBrush::Attach](#attach)|Collega esistente all'oggetto di interfaccia delle risorse|
|[CD2DBrush::Destroy](#destroy)|Elimina un oggetto CD2DBrush. (Esegue l'override [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DBrush::Detach](#detach)|Scollega interfaccia di risorse dall'oggetto|
|[CD2DBrush::Get](#get)|Restituisce l'interfaccia ID2D1Brush|
|[CD2DBrush::GetOpacity](#getopacity)|Ottiene il livello di opacità di questo pennello|
|[CD2DBrush::GetTransform](#gettransform)|Ottiene la trasformazione corrente della destinazione di rendering|
|[CD2DBrush::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DBrush::SetOpacity](#setopacity)|Imposta il livello di opacità di questo pennello|
|[CD2DBrush::SetTransform](#settransform)|Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegnare successive si verificano nello spazio trasformato|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBrush::operator ID2D1Brush *](#operator_id2d1brush_star)|Restituisce l'interfaccia ID2D1Brush|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBrush::m_pBrush](#m_pbrush)|Archivia un puntatore a un oggetto ID2D1Brush.|
|[CD2DBrush::m_pBrushProperties](#m_pbrushproperties)|Proprietà dei pennelli.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DBrush`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="_dtorcd2dbrush"></a>  CD2DBrush::~CD2DBrush

Distruttore. Chiamato quando viene eliminata definitivamente un oggetto brush D2D.

```
virtual ~CD2DBrush();
```

##  <a name="attach"></a>  CD2DBrush::Attach

Associa interfaccia delle risorse per l'oggetto esistente.

```
void Attach(ID2D1Brush* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia di risorse esistente. Non può essere NULL.

##  <a name="cd2dbrush"></a>  CD2DBrush::CD2DBrush

Costruisce un oggetto CD2DBrush.

```
CD2DBrush(
    CRenderTarget* pParentTarget,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget*<br/>
Puntatore alla destinazione di rendering.

*pBrushProperties*<br/>
Un puntatore all'opacità e alla trasformazione di un pennello.

*bAutoDestroy*<br/>
Indica che l'oggetto viene distrutto dal proprietario (pParentTarget).

##  <a name="destroy"></a>  CD2DBrush:: Destroy

Elimina un oggetto CD2DBrush.

```
virtual void Destroy();
```

##  <a name="detach"></a>  CD2DBrush::Detach

Scollega interfaccia di risorse dall'oggetto.

```
ID2D1Brush* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia risorse scollegato.

##  <a name="get"></a>  CD2DBrush::Get

Restituisce l'interfaccia ID2D1Brush

```
ID2D1Brush* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Brush o NULL se l'oggetto non è ancora inizializzato.

##  <a name="getopacity"></a>  CD2DBrush::GetOpacity

Ottiene il livello di opacità di questo pennello

```
FLOAT GetOpacity() const;
```

### <a name="return-value"></a>Valore restituito

Un valore compreso tra 0 e 1 che indica l'opacità del pennello. Questo valore è un moltiplicatore costante che viene ridimensionata in modo lineare il valore alfa di tutti i pixel riempita con il pennello. I valori dell'opacità sono compresi nell'intervallo da 0 a 1 prima che essi vengono moltiplicati insieme.

##  <a name="gettransform"></a>  CD2DBrush::GetTransform

Ottiene la trasformazione corrente della destinazione di rendering

```
void GetTransform(D2D1_MATRIX_3X2_F* transform) const;
```

### <a name="parameters"></a>Parametri

*transform*<br/>
Quando viene restituito, contiene la trasformazione corrente della destinazione di rendering. Questo parametro viene passato non inizializzato.

##  <a name="isvalid"></a>  CD2DBrush::IsValid

Verifica la validità della risorsa

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

##  <a name="m_pbrush"></a>  CD2DBrush::m_pBrush

Archivia un puntatore a un oggetto ID2D1Brush.

```
ID2D1Brush* m_pBrush;
```

##  <a name="m_pbrushproperties"></a>  CD2DBrush::m_pBrushProperties

Proprietà dei pennelli.

```
CD2DBrushProperties* m_pBrushProperties;
```

##  <a name="operator_id2d1brush_star"></a>  CD2DBrush::operator ID2D1Brush *

Restituisce l'interfaccia ID2D1Brush

```
operator ID2D1Brush*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Brush o NULL se l'oggetto non è ancora inizializzato.

##  <a name="setopacity"></a>  CD2DBrush::SetOpacity

Imposta il livello di opacità di questo pennello

```
void SetOpacity(FLOAT opacity);
```

### <a name="parameters"></a>Parametri

*opacity*<br/>
Un valore compreso tra 0 e 1 che indica l'opacità del pennello. Questo valore è un moltiplicatore costante che viene ridimensionata in modo lineare il valore alfa di tutti i pixel riempita con il pennello. I valori dell'opacità sono compresi nell'intervallo da 0 a 1 prima che essi vengono moltiplicati insieme.

##  <a name="settransform"></a>  CD2DBrush::SetTransform

Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegnare successive si verificano nello spazio trasformato.

```
void SetTransform(const D2D1_MATRIX_3X2_F* transform);
```

### <a name="parameters"></a>Parametri

*transform*<br/>
La trasformazione da applicare nella destinazione di rendering

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
