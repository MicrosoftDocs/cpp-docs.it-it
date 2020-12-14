---
description: 'Altre informazioni su: classe CD2DMesh'
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
ms.openlocfilehash: fbdb941d04b87df5c136f1925445564caab63443
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193370"
---
# <a name="cd2dmesh-class"></a>Classe CD2DMesh

Wrapper per ID2D1Mesh.

## <a name="syntax"></a>Sintassi

```
class CD2DMesh : public CD2DResource;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DMesh:: CD2DMesh](#cd2dmesh)|Costruisce un oggetto CD2DMesh.|
|[CD2DMesh:: ~ CD2DMesh](#_dtorcd2dmesh)|Distruttore. Chiamato quando un oggetto mesh D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DMesh:: Connetti](#attach)|Connette l'interfaccia di risorsa esistente all'oggetto|
|[CD2DMesh:: create](#create)|Crea un CD2DMesh. Esegue l'override di [CD2DResource:: create](../../mfc/reference/cd2dresource-class.md#create).|
|[CD2DMesh::D estroy](#destroy)|Elimina definitivamente un oggetto CD2DMesh. Esegue l'override di [CD2DResource::D estroy](../../mfc/reference/cd2dresource-class.md#destroy).|
|[CD2DMesh::D etach](#detach)|Scollega l'interfaccia della risorsa dall'oggetto|
|[CD2DMesh:: Get](#get)|Restituisce l'interfaccia ID2D1Mesh|
|[CD2DMesh:: IsValid](#isvalid)|Verifica la validità delle risorse (esegue l'override di [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DMesh:: Open](#open)|Apre il mesh per la popolazione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DMesh:: operator ID2D1Mesh *](#operator_id2d1mesh_star)|Restituisce l'interfaccia ID2D1Mesh|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DMesh:: m_pMesh](#m_pmesh)|Puntatore a un ID2D1Mesh.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DMesh`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dmeshcd2dmesh"></a><a name="_dtorcd2dmesh"></a> CD2DMesh:: ~ CD2DMesh

Distruttore. Chiamato quando un oggetto mesh D2D viene eliminato definitivamente.

```
virtual ~CD2DMesh();
```

## <a name="cd2dmeshattach"></a><a name="attach"></a> CD2DMesh:: Connetti

Connette l'interfaccia di risorsa esistente all'oggetto

```cpp
void Attach(ID2D1Mesh* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia risorsa esistente. Non può essere NULL

## <a name="cd2dmeshcd2dmesh"></a><a name="cd2dmesh"></a> CD2DMesh:: CD2DMesh

Costruisce un oggetto CD2DMesh.

```
CD2DMesh(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget*<br/>
Puntatore alla destinazione di rendering.

*bAutoDestroy*<br/>
Indica che l'oggetto verrà eliminato definitivamente dal proprietario (pParentTarget).

## <a name="cd2dmeshcreate"></a><a name="create"></a> CD2DMesh:: create

Crea un CD2DMesh.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dmeshdestroy"></a><a name="destroy"></a> CD2DMesh::D estroy

Elimina definitivamente un oggetto CD2DMesh.

```
virtual void Destroy();
```

## <a name="cd2dmeshdetach"></a><a name="detach"></a> CD2DMesh::D etach

Scollega l'interfaccia della risorsa dall'oggetto

```
ID2D1Mesh* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di risorsa scollegata.

## <a name="cd2dmeshget"></a><a name="get"></a> CD2DMesh:: Get

Restituisce l'interfaccia ID2D1Mesh

```
ID2D1Mesh* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Mesh o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dmeshisvalid"></a><a name="isvalid"></a> CD2DMesh:: IsValid

Verifica la validità delle risorse

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dmeshm_pmesh"></a><a name="m_pmesh"></a> CD2DMesh:: m_pMesh

Puntatore a un ID2D1Mesh.

```
ID2D1Mesh* m_pMesh;
```

## <a name="cd2dmeshopen"></a><a name="open"></a> CD2DMesh:: Open

Apre il mesh per la popolazione.

```
ID2D1TessellationSink* Open();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un ID2D1TessellationSink usato per popolare la mesh.

## <a name="cd2dmeshoperator-id2d1mesh"></a><a name="operator_id2d1mesh_star"></a> CD2DMesh:: operator ID2D1Mesh *

Restituisce l'interfaccia ID2D1Mesh

```
operator ID2D1Mesh*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Mesh o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
