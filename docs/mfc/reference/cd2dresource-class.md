---
title: Classe CD2DResource
ms.date: 03/27/2019
f1_keywords:
- CD2DResource
- AFXRENDERTARGET/CD2DResource
- AFXRENDERTARGET/CD2DResource::CD2DResource
- AFXRENDERTARGET/CD2DResource::Create
- AFXRENDERTARGET/CD2DResource::Destroy
- AFXRENDERTARGET/CD2DResource::IsValid
- AFXRENDERTARGET/CD2DResource::IsAutoDestroy
- AFXRENDERTARGET/CD2DResource::ReCreate
- AFXRENDERTARGET/CD2DResource::m_bIsAutoDestroy
- AFXRENDERTARGET/CD2DResource::m_pParentTarget
helpviewer_keywords:
- CD2DResource [MFC], CD2DResource
- CD2DResource [MFC], Create
- CD2DResource [MFC], Destroy
- CD2DResource [MFC], IsValid
- CD2DResource [MFC], IsAutoDestroy
- CD2DResource [MFC], ReCreate
- CD2DResource [MFC], m_bIsAutoDestroy
- CD2DResource [MFC], m_pParentTarget
ms.assetid: 34e3ee18-aab6-4c39-9294-de869e1f7820
ms.openlocfilehash: 5e747eda42e625d0f4cf65859e471933bbb043ed
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369099"
---
# <a name="cd2dresource-class"></a>Classe CD2DResource

Classe astratta che fornisce un'interfaccia per la creazione e la gestione di risorse D2D, ad esempio pennelli, livelli e testi.

## <a name="syntax"></a>Sintassi

```
class CD2DResource : public CObject;
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRisorsa::CD2DResource](#cd2dresource)|Costruisce un oggetto CD2DResource.|
|[Cd2DRisorsa: : CD2DResource](#_dtorcd2dresource)|Distruttore. Chiamato quando un oggetto risorsa D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DResource::Creare](#create)|Crea un CD2DResource.|
|[CD2DRisorsa::Destroy](#destroy)|Elimina un oggetto CD2DResource.|
|[CD2DResource::IsValid](#isvalid)|Controlla la validità delle risorse|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DResource::IsAutoDestroy](#isautodestroy)|Controllare auto distruggere flag.|
|[CD2DResource::Ricrea](#recreate)|Ricrea un CD2DResource.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRisorsa::m_bIsAutoDestroy](#m_bisautodestroy)|La risorsa verrà distrutta dal proprietario (CRenderTarget)Resource will be destroyed by owner (CRenderTarget)|
|[CD2DRisorsa::m_pParentTarget](#m_pparenttarget)|Puntatore all'elemento padre CRenderTarget)|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CD2DResource`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dresourcecd2dresource"></a><a name="_dtorcd2dresource"></a>Cd2DRisorsa: : CD2DResource

Distruttore. Chiamato quando un oggetto risorsa D2D viene eliminato definitivamente.

```
virtual ~CD2DResource();
```

## <a name="cd2dresourcecd2dresource"></a><a name="cd2dresource"></a>CD2DRisorsa::CD2DResource

Costruisce un oggetto CD2DResource.

```
CD2DResource(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy);
```

### <a name="parameters"></a>Parametri

*pParentTarget (Destinazionepadre)*<br/>
Puntatore alla destinazione di rendering.

*bAutoDistruggi*<br/>
Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).

## <a name="cd2dresourcecreate"></a><a name="create"></a>CD2DResource::Creare

Crea un CD2DResource.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget) = 0;
```

### <a name="parameters"></a>Parametri

*pRenderTarget (informazioni in base alla proprietà*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dresourcedestroy"></a><a name="destroy"></a>CD2DRisorsa::Destroy

Elimina un oggetto CD2DResource.

```
virtual void Destroy() = 0;
```

## <a name="cd2dresourceisautodestroy"></a><a name="isautodestroy"></a>CD2DResource::IsAutoDestroy

Controllare auto distruggere flag.

```
BOOL IsAutoDestroy() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe l'oggetto verrà eliminato dal relativo proprietario. in caso contrario, FALSE.

## <a name="cd2dresourceisvalid"></a><a name="isvalid"></a>CD2DResource::IsValid

Controlla la validità delle risorse

```
virtual BOOL IsValid() const = 0;
```

### <a name="return-value"></a>Valore restituito

TRUESe la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dresourcem_bisautodestroy"></a><a name="m_bisautodestroy"></a>CD2DRisorsa::m_bIsAutoDestroy

La risorsa verrà distrutta dal proprietario (CRenderTarget)Resource will be destroyed by owner (CRenderTarget)

```
BOOL m_bIsAutoDestroy;
```

## <a name="cd2dresourcem_pparenttarget"></a><a name="m_pparenttarget"></a>CD2DRisorsa::m_pParentTarget

Puntatore all'elemento padre CRenderTarget)

```
CRenderTarget* m_pParentTarget;
```

## <a name="cd2dresourcerecreate"></a><a name="recreate"></a>CD2DResource::Ricrea

Ricrea un CD2DResource.

```
virtual HRESULT ReCreate(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget (informazioni in base alla proprietà*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
