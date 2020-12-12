---
description: 'Altre informazioni su: classe CD2DBrush'
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
ms.openlocfilehash: 6d19601258951a297a734aa304e2a22c98baf5c9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227572"
---
# <a name="cd2dbrush-class"></a>Classe CD2DBrush

Wrapper per ID2D1Brush.

## <a name="syntax"></a>Sintassi

```
class CD2DBrush : public CD2DResource;
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Description|
|----------|-----------------|
|[CD2DBrush:: CD2DBrush](#cd2dbrush)|Costruisce un oggetto CD2DBrush.|
|[CD2DBrush:: ~ CD2DBrush](#_dtorcd2dbrush)|Distruttore. Chiamato quando un oggetto Brush D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DBrush:: Connetti](#attach)|Connette l'interfaccia di risorsa esistente all'oggetto|
|[CD2DBrush::D estroy](#destroy)|Elimina definitivamente un oggetto CD2DBrush. Esegue l'override di [CD2DResource::D estroy](../../mfc/reference/cd2dresource-class.md#destroy).|
|[CD2DBrush::D etach](#detach)|Scollega l'interfaccia della risorsa dall'oggetto|
|[CD2DBrush:: Get](#get)|Restituisce l'interfaccia ID2D1Brush|
|[CD2DBrush:: GetOpacity](#getopacity)|Ottiene il grado di opacità del pennello|
|[CD2DBrush:: GetTransform](#gettransform)|Ottiene la trasformazione corrente della destinazione di rendering|
|[CD2DBrush:: IsValid](#isvalid)|Verifica la validità delle risorse (esegue l'override di [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DBrush:: toopacity](#setopacity)|Imposta il grado di opacità del pennello|
|[CD2DBrush:: setransform](#settransform)|Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegno successive si verificano nello spazio trasformato|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DBrush:: operator ID2D1Brush *](#operator_id2d1brush_star)|Restituisce l'interfaccia ID2D1Brush|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DBrush:: m_pBrush](#m_pbrush)|Archivia un puntatore a un oggetto ID2D1Brush.|
|[CD2DBrush:: m_pBrushProperties](#m_pbrushproperties)|Proprietà del pennello.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DBrush`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dbrushcd2dbrush"></a><a name="_dtorcd2dbrush"></a> CD2DBrush:: ~ CD2DBrush

Distruttore. Chiamato quando un oggetto Brush D2D viene eliminato definitivamente.

```
virtual ~CD2DBrush();
```

## <a name="cd2dbrushattach"></a><a name="attach"></a> CD2DBrush:: Connetti

Connette l'interfaccia di risorsa esistente all'oggetto.

```cpp
void Attach(ID2D1Brush* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia risorsa esistente. Non può essere NULL.

## <a name="cd2dbrushcd2dbrush"></a><a name="cd2dbrush"></a> CD2DBrush:: CD2DBrush

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
Puntatore all'opacità e alla trasformazione di un pennello.

*bAutoDestroy*<br/>
Indica che l'oggetto verrà eliminato definitivamente dal proprietario (pParentTarget).

## <a name="cd2dbrushdestroy"></a><a name="destroy"></a> CD2DBrush::D estroy

Elimina definitivamente un oggetto CD2DBrush.

```
virtual void Destroy();
```

## <a name="cd2dbrushdetach"></a><a name="detach"></a> CD2DBrush::D etach

Scollega l'interfaccia della risorsa dall'oggetto.

```
ID2D1Brush* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di risorsa scollegata.

## <a name="cd2dbrushget"></a><a name="get"></a> CD2DBrush:: Get

Restituisce l'interfaccia ID2D1Brush

```
ID2D1Brush* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Brush o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dbrushgetopacity"></a><a name="getopacity"></a> CD2DBrush:: GetOpacity

Ottiene il grado di opacità del pennello

```
FLOAT GetOpacity() const;
```

### <a name="return-value"></a>Valore restituito

Valore compreso tra 0 e 1 che indica l'opacità del pennello. Questo valore è un moltiplicatore costante che scala linearmente il valore alfa di tutti i pixel riempiti dal pennello. I valori di opacità vengono fissati nell'intervallo compreso tra 0 e 1 prima che vengano moltiplicati insieme.

## <a name="cd2dbrushgettransform"></a><a name="gettransform"></a> CD2DBrush:: GetTransform

Ottiene la trasformazione corrente della destinazione di rendering

```cpp
void GetTransform(D2D1_MATRIX_3X2_F* transform) const;
```

### <a name="parameters"></a>Parametri

*trasformazione*<br/>
Quando viene restituito, contiene la trasformazione corrente della destinazione di rendering. Questo parametro viene passato non inizializzato.

## <a name="cd2dbrushisvalid"></a><a name="isvalid"></a> CD2DBrush:: IsValid

Verifica la validità delle risorse

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dbrushm_pbrush"></a><a name="m_pbrush"></a> CD2DBrush:: m_pBrush

Archivia un puntatore a un oggetto ID2D1Brush.

```
ID2D1Brush* m_pBrush;
```

## <a name="cd2dbrushm_pbrushproperties"></a><a name="m_pbrushproperties"></a> CD2DBrush:: m_pBrushProperties

Proprietà del pennello.

```
CD2DBrushProperties* m_pBrushProperties;
```

## <a name="cd2dbrushoperator-id2d1brush"></a><a name="operator_id2d1brush_star"></a> CD2DBrush:: operator ID2D1Brush *

Restituisce l'interfaccia ID2D1Brush

```
operator ID2D1Brush*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Brush o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dbrushsetopacity"></a><a name="setopacity"></a> CD2DBrush:: toopacity

Imposta il grado di opacità del pennello

```cpp
void SetOpacity(FLOAT opacity);
```

### <a name="parameters"></a>Parametri

*opacità*<br/>
Valore compreso tra 0 e 1 che indica l'opacità del pennello. Questo valore è un moltiplicatore costante che scala linearmente il valore alfa di tutti i pixel riempiti dal pennello. I valori di opacità vengono fissati nell'intervallo compreso tra 0 e 1 prima che vengano moltiplicati insieme.

## <a name="cd2dbrushsettransform"></a><a name="settransform"></a> CD2DBrush:: setransform

Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegno successive si verificano nello spazio trasformato.

```cpp
void SetTransform(const D2D1_MATRIX_3X2_F* transform);
```

### <a name="parameters"></a>Parametri

*trasformazione*<br/>
Trasformazione da applicare alla destinazione di rendering

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
