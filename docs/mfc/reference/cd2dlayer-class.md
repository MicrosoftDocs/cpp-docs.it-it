---
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
ms.openlocfilehash: aa6fb313bfcc2983f167936e5ad4f78be1e17a44
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369207"
---
# <a name="cd2dlayer-class"></a>Classe CD2DLayer

Un wrapper per ID2D1Layer.

## <a name="syntax"></a>Sintassi

```
class CD2DLayer : public CD2DResource;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DLayer::LivelloCD21Layer](#cd2dlayer)|Costruisce un oggetto CD2DLayer.|
|[CD2DLayer:: CD2DLayer](#_dtorcd2dlayer)|Distruttore. Chiamato quando un oggetto livello D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DLayer::Allega](#attach)|Associa all'oggetto un'interfaccia di risorsa esistente|
|[CD2DLayer::Creare](#create)|Crea un CD2DLayer. (Esegue l'override di [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DLayer::Destroy](#destroy)|Elimina un oggetto CD2DLayer. (Esegue l'override di [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DLayer::Detach](#detach)|Scollega l'interfaccia delle risorse dall'oggetto|
|[CD2DLayer::Ottenere](#get)|Restituisce l'interfaccia ID2D1Layer|
|[CD2DLayer::GetSize](#getsize)|Restituisce le dimensioni della destinazione di rendering in pixel indipendenti dal dispositivo|
|[CD2DLayer::IsValid](#isvalid)|Controlla la validità delle risorse (sostituisce [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DLayer::operator ID2D1Layer](#operator_id2d1layer_star)|Restituisce l'interfaccia ID2D1Layer|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DLayer::m_pLayer](#m_player)|Archivia un puntatore a un oggetto ID2D1Layer.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource (informazioni in confronto a 3)](../../mfc/reference/cd2dresource-class.md)

`CD2DLayer`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dlayercd2dlayer"></a><a name="_dtorcd2dlayer"></a>CD2DLayer:: CD2DLayer

Distruttore. Chiamato quando un oggetto livello D2D viene eliminato definitivamente.

```
virtual ~CD2DLayer();
```

## <a name="cd2dlayerattach"></a><a name="attach"></a>CD2DLayer::Allega

Associa all'oggetto un'interfaccia di risorsa esistente

```
void Attach(ID2D1Layer* pResource);
```

### <a name="parameters"></a>Parametri

*pRisorsa*<br/>
Interfaccia delle risorse esistente. Non può essere NULL

## <a name="cd2dlayercd2dlayer"></a><a name="cd2dlayer"></a>CD2DLayer::LivelloCD21Layer

Costruisce un oggetto CD2DLayer.

```
CD2DLayer(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget (Destinazionepadre)*<br/>
Puntatore alla destinazione di rendering.

*bAutoDistruggi*<br/>
Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).

## <a name="cd2dlayercreate"></a><a name="create"></a>CD2DLayer::Creare

Crea un CD2DLayer.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget (informazioni in base alla proprietà*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dlayerdestroy"></a><a name="destroy"></a>CD2DLayer::Destroy

Elimina un oggetto CD2DLayer.

```
virtual void Destroy();
```

## <a name="cd2dlayerdetach"></a><a name="detach"></a>CD2DLayer::Detach

Scollega l'interfaccia delle risorse dall'oggetto

```
ID2D1Layer* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia delle risorse disconnesse.

## <a name="cd2dlayerget"></a><a name="get"></a>CD2DLayer::Ottenere

Restituisce l'interfaccia ID2D1Layer

```
ID2D1Layer* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Layer o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dlayergetsize"></a><a name="getsize"></a>CD2DLayer::GetSize

Restituisce le dimensioni della destinazione di rendering in pixel indipendenti dal dispositivo

```
CD2DSizeF GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni correnti della destinazione di rendering in pixel indipendenti dal dispositivo

## <a name="cd2dlayerisvalid"></a><a name="isvalid"></a>CD2DLayer::IsValid

Controlla la validità delle risorse

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dlayerm_player"></a><a name="m_player"></a>CD2DLayer::m_pLayer

Archivia un puntatore a un oggetto ID2D1Layer.

```
ID2D1Layer* m_pLayer;
```

## <a name="cd2dlayeroperator-id2d1layer"></a><a name="operator_id2d1layer_star"></a>CD2DLayer::operator ID2D1Layer

Restituisce l'interfaccia ID2D1Layer

```
operator ID2D1Layer* ();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Layer o NULL se l'oggetto non è ancora inizializzato.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
