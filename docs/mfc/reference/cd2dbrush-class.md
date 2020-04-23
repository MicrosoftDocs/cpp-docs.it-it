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
ms.openlocfilehash: 536d84fe2c2f68d62490e1ce2b65085426762e87
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754199"
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
|[Pennello CD2D::CD2DBrush](#cd2dbrush)|Costruisce un oggetto CD2DBrush.|
|[Pennello CD2D: sbarrato CD2D](#_dtorcd2dbrush)|Distruttore. Chiamato quando un oggetto pennello D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBrush::Associare](#attach)|Associa all'oggetto un'interfaccia di risorsa esistente|
|[Pennello CD2D: :Destroy](#destroy)|Elimina un oggetto CD2DBrush. (Esegue l'override di [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[Pennello CD2D::Detach](#detach)|Scollega l'interfaccia delle risorse dall'oggetto|
|[CD2DBrush::Get](#get)|Restituisce l'interfaccia ID2D1Brush|
|[Cd2DBrush::GetOpacity](#getopacity)|Ottiene il grado di opacità di questo pennello|
|[Oggetto CD2DBrush::GetTransformCD2DBrush::GetTransform](#gettransform)|Ottiene la trasformazione corrente della destinazione di rendering|
|[Pennello CD2D::IsValid](#isvalid)|Controlla la validità delle risorse (sostituisce [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[Pennello CD2D::SetOpacity](#setopacity)|Imposta il grado di opacità di questo pennello|
|[Oggetto CD2DBrush::SetTransformCD2DBrush::SetTransform](#settransform)|Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegno successive si verificano nello spazio trasformato|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Errore CD2D::operator ID2D1Brush](#operator_id2d1brush_star)|Restituisce l'interfaccia ID2D1Brush|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBrush::m_pBrush](#m_pbrush)|Archivia un puntatore a un ID2D1Brush oggetto.|
|[CD2DBrush::m_pBrushProperties](#m_pbrushproperties)|Proprietà del pennello.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource (informazioni in confronto a 3)](../../mfc/reference/cd2dresource-class.md)

`CD2DBrush`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dbrushcd2dbrush"></a><a name="_dtorcd2dbrush"></a>Pennello CD2D: sbarrato CD2D

Distruttore. Chiamato quando un oggetto pennello D2D viene eliminato definitivamente.

```
virtual ~CD2DBrush();
```

## <a name="cd2dbrushattach"></a><a name="attach"></a>CD2DBrush::Associare

Associa l'interfaccia delle risorse esistente all'oggetto.

```cpp
void Attach(ID2D1Brush* pResource);
```

### <a name="parameters"></a>Parametri

*pRisorsa*<br/>
Interfaccia delle risorse esistente. Non può essere NULL.

## <a name="cd2dbrushcd2dbrush"></a><a name="cd2dbrush"></a>Pennello CD2D::CD2DBrush

Costruisce un oggetto CD2DBrush.

```
CD2DBrush(
    CRenderTarget* pParentTarget,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget (Destinazionepadre)*<br/>
Puntatore alla destinazione di rendering.

*pBrushProperties (Proprietà Pennello)*<br/>
Puntatore all'opacità e alla trasformazione di un pennello.

*bAutoDistruggi*<br/>
Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).

## <a name="cd2dbrushdestroy"></a><a name="destroy"></a>Pennello CD2D: :Destroy

Elimina un oggetto CD2DBrush.

```
virtual void Destroy();
```

## <a name="cd2dbrushdetach"></a><a name="detach"></a>Pennello CD2D::Detach

Scollega l'interfaccia delle risorse dall'oggetto.

```
ID2D1Brush* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia delle risorse disconnesse.

## <a name="cd2dbrushget"></a><a name="get"></a>CD2DBrush::Get

Restituisce l'interfaccia ID2D1Brush

```
ID2D1Brush* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un ID2D1Brush interfaccia o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dbrushgetopacity"></a><a name="getopacity"></a>Cd2DBrush::GetOpacity

Ottiene il grado di opacità di questo pennello

```
FLOAT GetOpacity() const;
```

### <a name="return-value"></a>Valore restituito

Valore compreso tra zero e 1 che indica l'opacità del pennello. Questo valore è un moltiplicatore costante che scala linearmente il valore alfa di tutti i pixel riempiti dal pennello. I valori di opacità vengono bloccati nell'intervallo da 0 a 1 prima di essere moltiplicati insieme.

## <a name="cd2dbrushgettransform"></a><a name="gettransform"></a>Oggetto CD2DBrush::GetTransformCD2DBrush::GetTransform

Ottiene la trasformazione corrente della destinazione di rendering

```cpp
void GetTransform(D2D1_MATRIX_3X2_F* transform) const;
```

### <a name="parameters"></a>Parametri

*Trasformare*<br/>
Quando questo metodo termina, contiene la trasformazione corrente della destinazione di rendering. Questo parametro viene passato non inizializzato.

## <a name="cd2dbrushisvalid"></a><a name="isvalid"></a>Pennello CD2D::IsValid

Controlla la validità delle risorse

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dbrushm_pbrush"></a><a name="m_pbrush"></a>CD2DBrush::m_pBrush

Archivia un puntatore a un ID2D1Brush oggetto.

```
ID2D1Brush* m_pBrush;
```

## <a name="cd2dbrushm_pbrushproperties"></a><a name="m_pbrushproperties"></a>CD2DBrush::m_pBrushProperties

Proprietà del pennello.

```
CD2DBrushProperties* m_pBrushProperties;
```

## <a name="cd2dbrushoperator-id2d1brush"></a><a name="operator_id2d1brush_star"></a>Errore CD2D::operator ID2D1Brush

Restituisce l'interfaccia ID2D1Brush

```
operator ID2D1Brush*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un ID2D1Brush interfaccia o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dbrushsetopacity"></a><a name="setopacity"></a>Pennello CD2D::SetOpacity

Imposta il grado di opacità di questo pennello

```cpp
void SetOpacity(FLOAT opacity);
```

### <a name="parameters"></a>Parametri

*Opacità*<br/>
Valore compreso tra zero e 1 che indica l'opacità del pennello. Questo valore è un moltiplicatore costante che scala linearmente il valore alfa di tutti i pixel riempiti dal pennello. I valori di opacità vengono bloccati nell'intervallo da 0 a 1 prima di essere moltiplicati insieme.

## <a name="cd2dbrushsettransform"></a><a name="settransform"></a>Oggetto CD2DBrush::SetTransformCD2DBrush::SetTransform

Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegno successive si verificano nello spazio trasformato.

```cpp
void SetTransform(const D2D1_MATRIX_3X2_F* transform);
```

### <a name="parameters"></a>Parametri

*Trasformare*<br/>
Trasformazione da applicare alla destinazione di rendering

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
