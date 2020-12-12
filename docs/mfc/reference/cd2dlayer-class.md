---
description: 'Altre informazioni su: Classe CD2DLayer'
title: Classe CD2DLayer
ms.date: 11/04/2016
f1_keywords:
- CD2DLayer
- AFXRENDERTARGET/CD2DLayer
- AFXRENDERTARGET/CD2DLayer::CD2DLayer
- AFXRENDERTARGET/CD2DLayer::Attach
- AFXRENDERTARGET/CD2DLayer::Create
- AFXRENDERTARGET/CD2DLayer::Destroy
- AFXRENDERTARGET/CD2DLayer::Detach
- AFXRENDERTARGET/CD2DLayer::Get
- AFXRENDERTARGET/CD2DLayer::GetSize
- AFXRENDERTARGET/CD2DLayer::IsValid
- AFXRENDERTARGET/CD2DLayer::m_pLayer
helpviewer_keywords:
- CD2DLayer [MFC], CD2DLayer
- CD2DLayer [MFC], Attach
- CD2DLayer [MFC], Create
- CD2DLayer [MFC], Destroy
- CD2DLayer [MFC], Detach
- CD2DLayer [MFC], Get
- CD2DLayer [MFC], GetSize
- CD2DLayer [MFC], IsValid
- CD2DLayer [MFC], m_pLayer
ms.assetid: 2f96378e-66bb-40d1-9661-6afe324de3c1
ms.openlocfilehash: bd41cd591e6422c9434cd84d20cb6e5d778410bd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306950"
---
# <a name="cd2dlayer-class"></a>Classe CD2DLayer

Wrapper per ID2D1Layer.

## <a name="syntax"></a>Sintassi

```
class CD2DLayer : public CD2DResource;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DLayer:: CD2DLayer](#cd2dlayer)|Costruisce un oggetto CD2DLayer.|
|[CD2DLayer:: ~ CD2DLayer](#_dtorcd2dlayer)|Distruttore. Chiamato quando un oggetto livello D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DLayer:: Connetti](#attach)|Connette l'interfaccia di risorsa esistente all'oggetto|
|[CD2DLayer:: create](#create)|Crea un CD2DLayer. Esegue l'override di [CD2DResource:: create](../../mfc/reference/cd2dresource-class.md#create).|
|[CD2DLayer::D estroy](#destroy)|Elimina definitivamente un oggetto CD2DLayer. Esegue l'override di [CD2DResource::D estroy](../../mfc/reference/cd2dresource-class.md#destroy).|
|[CD2DLayer::D etach](#detach)|Scollega l'interfaccia della risorsa dall'oggetto|
|[CD2DLayer:: Get](#get)|Restituisce l'interfaccia ID2D1Layer|
|[CD2DLayer:: GetSize](#getsize)|Restituisce la dimensione della destinazione di rendering in pixel indipendenti dal dispositivo|
|[CD2DLayer:: IsValid](#isvalid)|Verifica la validità delle risorse (esegue l'override di [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DLayer:: operator ID2D1Layer *](#operator_id2d1layer_star)|Restituisce l'interfaccia ID2D1Layer|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DLayer:: m_pLayer](#m_player)|Archivia un puntatore a un oggetto ID2D1Layer.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DLayer`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dlayercd2dlayer"></a><a name="_dtorcd2dlayer"></a> CD2DLayer:: ~ CD2DLayer

Distruttore. Chiamato quando un oggetto livello D2D viene eliminato definitivamente.

```
virtual ~CD2DLayer();
```

## <a name="cd2dlayerattach"></a><a name="attach"></a> CD2DLayer:: Connetti

Connette l'interfaccia di risorsa esistente all'oggetto

```cpp
void Attach(ID2D1Layer* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia risorsa esistente. Non può essere NULL

## <a name="cd2dlayercd2dlayer"></a><a name="cd2dlayer"></a> CD2DLayer:: CD2DLayer

Costruisce un oggetto CD2DLayer.

```
CD2DLayer(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget*<br/>
Puntatore alla destinazione di rendering.

*bAutoDestroy*<br/>
Indica che l'oggetto verrà eliminato definitivamente dal proprietario (pParentTarget).

## <a name="cd2dlayercreate"></a><a name="create"></a> CD2DLayer:: create

Crea un CD2DLayer.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dlayerdestroy"></a><a name="destroy"></a> CD2DLayer::D estroy

Elimina definitivamente un oggetto CD2DLayer.

```
virtual void Destroy();
```

## <a name="cd2dlayerdetach"></a><a name="detach"></a> CD2DLayer::D etach

Scollega l'interfaccia della risorsa dall'oggetto

```
ID2D1Layer* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di risorsa scollegata.

## <a name="cd2dlayerget"></a><a name="get"></a> CD2DLayer:: Get

Restituisce l'interfaccia ID2D1Layer

```
ID2D1Layer* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Layer o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dlayergetsize"></a><a name="getsize"></a> CD2DLayer:: GetSize

Restituisce la dimensione della destinazione di rendering in pixel indipendenti dal dispositivo

```
CD2DSizeF GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni correnti della destinazione di rendering in pixel indipendenti dal dispositivo

## <a name="cd2dlayerisvalid"></a><a name="isvalid"></a> CD2DLayer:: IsValid

Verifica la validità delle risorse

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dlayerm_player"></a><a name="m_player"></a> CD2DLayer:: m_pLayer

Archivia un puntatore a un oggetto ID2D1Layer.

```
ID2D1Layer* m_pLayer;
```

## <a name="cd2dlayeroperator-id2d1layer"></a><a name="operator_id2d1layer_star"></a> CD2DLayer:: operator ID2D1Layer *

Restituisce l'interfaccia ID2D1Layer

```
operator ID2D1Layer* ();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Layer o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
