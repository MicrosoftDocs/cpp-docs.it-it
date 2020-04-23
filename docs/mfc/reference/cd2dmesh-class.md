---
title: Classe CD2DMesh
ms.date: 11/04/2016
f1_keywords:
- CD2DMesh
- AFXRENDERTARGET/CD2DMesh
- AFXRENDERTARGET/CD2DMesh::CD2DMesh
- AFXRENDERTARGET/CD2DMesh::Attach
- AFXRENDERTARGET/CD2DMesh::Create
- AFXRENDERTARGET/CD2DMesh::Destroy
- AFXRENDERTARGET/CD2DMesh::Detach
- AFXRENDERTARGET/CD2DMesh::Get
- AFXRENDERTARGET/CD2DMesh::IsValid
- AFXRENDERTARGET/CD2DMesh::Open
- AFXRENDERTARGET/CD2DMesh::m_pMesh
helpviewer_keywords:
- CD2DMesh [MFC], CD2DMesh
- CD2DMesh [MFC], Attach
- CD2DMesh [MFC], Create
- CD2DMesh [MFC], Destroy
- CD2DMesh [MFC], Detach
- CD2DMesh [MFC], Get
- CD2DMesh [MFC], IsValid
- CD2DMesh [MFC], Open
- CD2DMesh [MFC], m_pMesh
ms.assetid: 11a2c78a-1367-40e8-a34f-44aa0509a4c9
ms.openlocfilehash: eaecdb6ba6f1382f16177e0567b31c9fd09da6ff
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753090"
---
# <a name="cd2dmesh-class"></a>Classe CD2DMesh

Un wrapper per ID2D1Mesh.

## <a name="syntax"></a>Sintassi

```
class CD2DMesh : public CD2DResource;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DMesh::CD2DMesh](#cd2dmesh)|Costruisce un oggetto CD2DMesh.|
|[CD2DMesh::CD2DMesh](#_dtorcd2dmesh)|Distruttore. Chiamato quando un oggetto mesh D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DMesh::Associare](#attach)|Associa all'oggetto un'interfaccia di risorsa esistente|
|[CD2DMesh::Creare](#create)|Crea un CD2DMesh. (Esegue l'override di [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DMesh::Destroy](#destroy)|Elimina un oggetto CD2DMesh. (Esegue l'override di [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DMesh::Detach](#detach)|Scollega l'interfaccia delle risorse dall'oggetto|
|[CD2DMesh::Ottenere](#get)|Restituisce l'interfaccia ID2D1Mesh|
|[CD2DMesh::IsValid](#isvalid)|Controlla la validità delle risorse (sostituisce [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DMesh::Aperto](#open)|Apre la mesh per la popolazione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DMesh::operatore ID2D1Mesh](#operator_id2d1mesh_star)|Restituisce l'interfaccia ID2D1Mesh|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DMesh::m_pMesh](#m_pmesh)|Puntatore a un ID2D1Mesh.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource (informazioni in confronto a 3)](../../mfc/reference/cd2dresource-class.md)

`CD2DMesh`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dmeshcd2dmesh"></a><a name="_dtorcd2dmesh"></a>CD2DMesh::CD2DMesh

Distruttore. Chiamato quando un oggetto mesh D2D viene eliminato definitivamente.

```
virtual ~CD2DMesh();
```

## <a name="cd2dmeshattach"></a><a name="attach"></a>CD2DMesh::Associare

Associa all'oggetto un'interfaccia di risorsa esistente

```cpp
void Attach(ID2D1Mesh* pResource);
```

### <a name="parameters"></a>Parametri

*pRisorsa*<br/>
Interfaccia delle risorse esistente. Non può essere NULL

## <a name="cd2dmeshcd2dmesh"></a><a name="cd2dmesh"></a>CD2DMesh::CD2DMesh

Costruisce un oggetto CD2DMesh.

```
CD2DMesh(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget (Destinazionepadre)*<br/>
Puntatore alla destinazione di rendering.

*bAutoDistruggi*<br/>
Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).

## <a name="cd2dmeshcreate"></a><a name="create"></a>CD2DMesh::Creare

Crea un CD2DMesh.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget (informazioni in base alla proprietà*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dmeshdestroy"></a><a name="destroy"></a>CD2DMesh::Destroy

Elimina un oggetto CD2DMesh.

```
virtual void Destroy();
```

## <a name="cd2dmeshdetach"></a><a name="detach"></a>CD2DMesh::Detach

Scollega l'interfaccia delle risorse dall'oggetto

```
ID2D1Mesh* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia delle risorse disconnesse.

## <a name="cd2dmeshget"></a><a name="get"></a>CD2DMesh::Ottenere

Restituisce l'interfaccia ID2D1Mesh

```
ID2D1Mesh* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Mesh o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dmeshisvalid"></a><a name="isvalid"></a>CD2DMesh::IsValid

Controlla la validità delle risorse

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dmeshm_pmesh"></a><a name="m_pmesh"></a>CD2DMesh::m_pMesh

Puntatore a un ID2D1Mesh.

```
ID2D1Mesh* m_pMesh;
```

## <a name="cd2dmeshopen"></a><a name="open"></a>CD2DMesh::Aperto

Apre la mesh per la popolazione.

```
ID2D1TessellationSink* Open();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un ID2D1TessellationSink utilizzato per popolare la mesh.

## <a name="cd2dmeshoperator-id2d1mesh"></a><a name="operator_id2d1mesh_star"></a>CD2DMesh::operatore ID2D1Mesh

Restituisce l'interfaccia ID2D1Mesh

```
operator ID2D1Mesh*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Mesh o NULL se l'oggetto non è ancora inizializzato.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
