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
ms.openlocfilehash: f4ad6fd054eeb8576c2fdb2dc924f70034b3abad
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62396366"
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
|[CD2DMesh:: ~ CD2DMesh](#_dtorcd2dmesh)|Distruttore. Chiamato quando viene eliminata definitivamente un oggetto reticolato D2D.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DMesh::Attach](#attach)|Collega esistente all'oggetto di interfaccia delle risorse|
|[CD2DMesh::Create](#create)|Crea un CD2DMesh. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DMesh::Destroy](#destroy)|Elimina un oggetto CD2DMesh. (Esegue l'override [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DMesh::Detach](#detach)|Scollega interfaccia di risorse dall'oggetto|
|[CD2DMesh::Get](#get)|Restituisce l'interfaccia ID2D1Mesh|
|[CD2DMesh::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DMesh::Open](#open)|Apre il mesh per il popolamento.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DMesh::operator ID2D1Mesh *](#operator_id2d1mesh_star)|Restituisce l'interfaccia ID2D1Mesh|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DMesh::m_pMesh](#m_pmesh)|Puntatore a un ID2D1Mesh.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DMesh`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="_dtorcd2dmesh"></a>  CD2DMesh:: ~ CD2DMesh

Distruttore. Chiamato quando viene eliminata definitivamente un oggetto reticolato D2D.

```
virtual ~CD2DMesh();
```

##  <a name="attach"></a>  CD2DMesh::Attach

Collega esistente all'oggetto di interfaccia delle risorse

```
void Attach(ID2D1Mesh* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia di risorse esistente. Non può essere NULL

##  <a name="cd2dmesh"></a>  CD2DMesh::CD2DMesh

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
Indica che l'oggetto viene distrutto dal proprietario (pParentTarget).

##  <a name="create"></a>  CD2DMesh::Create

Crea un CD2DMesh.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="destroy"></a>  CD2DMesh::Destroy

Elimina un oggetto CD2DMesh.

```
virtual void Destroy();
```

##  <a name="detach"></a>  CD2DMesh::Detach

Scollega interfaccia di risorse dall'oggetto

```
ID2D1Mesh* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia risorse scollegato.

##  <a name="get"></a>  CD2DMesh::Get

Restituisce l'interfaccia ID2D1Mesh

```
ID2D1Mesh* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Mesh o NULL se l'oggetto non è ancora inizializzato.

##  <a name="isvalid"></a>  CD2DMesh::IsValid

Verifica la validità della risorsa

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

##  <a name="m_pmesh"></a>  CD2DMesh::m_pMesh

Puntatore a un ID2D1Mesh.

```
ID2D1Mesh* m_pMesh;
```

##  <a name="open"></a>  CD2DMesh::Open

Apre il mesh per il popolamento.

```
ID2D1TessellationSink* Open();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un ID2D1TessellationSink che viene usata per popolare il mesh.

##  <a name="operator_id2d1mesh_star"></a>  CD2DMesh::operator ID2D1Mesh *

Restituisce l'interfaccia ID2D1Mesh

```
operator ID2D1Mesh*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Mesh o NULL se l'oggetto non è ancora inizializzato.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
