---
description: 'Altre informazioni su: Classe CD2DPathGeometry'
title: Classe CD2DPathGeometry
ms.date: 11/04/2016
f1_keywords:
- CD2DPathGeometry
- AFXRENDERTARGET/CD2DPathGeometry
- AFXRENDERTARGET/CD2DPathGeometry::CD2DPathGeometry
- AFXRENDERTARGET/CD2DPathGeometry::Attach
- AFXRENDERTARGET/CD2DPathGeometry::Create
- AFXRENDERTARGET/CD2DPathGeometry::Destroy
- AFXRENDERTARGET/CD2DPathGeometry::Detach
- AFXRENDERTARGET/CD2DPathGeometry::GetFigureCount
- AFXRENDERTARGET/CD2DPathGeometry::GetSegmentCount
- AFXRENDERTARGET/CD2DPathGeometry::Open
- AFXRENDERTARGET/CD2DPathGeometry::Stream
- AFXRENDERTARGET/CD2DPathGeometry::m_pPathGeometry
helpviewer_keywords:
- CD2DPathGeometry [MFC], CD2DPathGeometry
- CD2DPathGeometry [MFC], Attach
- CD2DPathGeometry [MFC], Create
- CD2DPathGeometry [MFC], Destroy
- CD2DPathGeometry [MFC], Detach
- CD2DPathGeometry [MFC], GetFigureCount
- CD2DPathGeometry [MFC], GetSegmentCount
- CD2DPathGeometry [MFC], Open
- CD2DPathGeometry [MFC], Stream
- CD2DPathGeometry [MFC], m_pPathGeometry
ms.assetid: 686216eb-5080-4242-ace5-8fa1ce96307c
ms.openlocfilehash: eb33d498436c887eb038b3312e2b98ca04d6620b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97280534"
---
# <a name="cd2dpathgeometry-class"></a>Classe CD2DPathGeometry

Wrapper per ID2D1PathGeometry.

## <a name="syntax"></a>Sintassi

```
class CD2DPathGeometry : public CD2DGeometry;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DPathGeometry:: CD2DPathGeometry](#cd2dpathgeometry)|Costruisce un oggetto CD2DPathGeometry.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DPathGeometry:: Connetti](#attach)|Connette l'interfaccia di risorsa esistente all'oggetto|
|[CD2DPathGeometry:: create](#create)|Crea un CD2DPathGeometry. Esegue l'override di [CD2DResource:: create](../../mfc/reference/cd2dresource-class.md#create).|
|[CD2DPathGeometry::D estroy](#destroy)|Elimina definitivamente un oggetto CD2DPathGeometry. Esegue l'override di [CD2DGeometry::D estroy](../../mfc/reference/cd2dgeometry-class.md#destroy).|
|[CD2DPathGeometry::D etach](#detach)|Scollega l'interfaccia della risorsa dall'oggetto|
|[CD2DPathGeometry:: GetFigureCount](#getfigurecount)|Recupera il numero di cifre nella geometria del percorso.|
|[CD2DPathGeometry:: GetSegmentCount](#getsegmentcount)|Recupera il numero di segmenti nella geometria del percorso.|
|[CD2DPathGeometry:: Open](#open)|Recupera il sink di geometria utilizzato per popolare la geometria del percorso con figure e segmenti.|
|[CD2DPathGeometry:: Stream](#stream)|Copia il contenuto della geometria del percorso nel ID2D1GeometrySink specificato.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DPathGeometry:: m_pPathGeometry](#m_ppathgeometry)|Puntatore a un ID2D1PathGeometry.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DGeometry](../../mfc/reference/cd2dgeometry-class.md)

`CD2DPathGeometry`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dpathgeometryattach"></a><a name="attach"></a> CD2DPathGeometry:: Connetti

Connette l'interfaccia di risorsa esistente all'oggetto

```cpp
void Attach(ID2D1PathGeometry* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia risorsa esistente. Non può essere NULL

## <a name="cd2dpathgeometrycd2dpathgeometry"></a><a name="cd2dpathgeometry"></a> CD2DPathGeometry:: CD2DPathGeometry

Costruisce un oggetto CD2DPathGeometry.

```
CD2DPathGeometry(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget*<br/>
Puntatore alla destinazione di rendering.

*bAutoDestroy*<br/>
Indica che l'oggetto verrà eliminato definitivamente dal proprietario (pParentTarget).

## <a name="cd2dpathgeometrycreate"></a><a name="create"></a> CD2DPathGeometry:: create

Crea un CD2DPathGeometry.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dpathgeometrydestroy"></a><a name="destroy"></a> CD2DPathGeometry::D estroy

Elimina definitivamente un oggetto CD2DPathGeometry.

```
virtual void Destroy();
```

## <a name="cd2dpathgeometrydetach"></a><a name="detach"></a> CD2DPathGeometry::D etach

Scollega l'interfaccia della risorsa dall'oggetto

```
ID2D1PathGeometry* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di risorsa scollegata.

## <a name="cd2dpathgeometrygetfigurecount"></a><a name="getfigurecount"></a> CD2DPathGeometry:: GetFigureCount

Recupera il numero di cifre nella geometria del percorso.

```
int GetFigureCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di cifre nella geometria del percorso.

## <a name="cd2dpathgeometrygetsegmentcount"></a><a name="getsegmentcount"></a> CD2DPathGeometry:: GetSegmentCount

Recupera il numero di segmenti nella geometria del percorso.

```
int GetSegmentCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di segmenti nella geometria del percorso.

## <a name="cd2dpathgeometrym_ppathgeometry"></a><a name="m_ppathgeometry"></a> CD2DPathGeometry:: m_pPathGeometry

Puntatore a un ID2D1PathGeometry.

```
ID2D1PathGeometry* m_pPathGeometry;
```

## <a name="cd2dpathgeometryopen"></a><a name="open"></a> CD2DPathGeometry:: Open

Recupera il sink di geometria utilizzato per popolare la geometria del percorso con figure e segmenti.

```
ID2D1GeometrySink* Open();
```

### <a name="return-value"></a>Valore restituito

Puntatore a ID2D1GeometrySink usato per popolare la geometria del percorso con figure e segmenti.

## <a name="cd2dpathgeometrystream"></a><a name="stream"></a> CD2DPathGeometry:: Stream

Copia il contenuto della geometria del percorso nel ID2D1GeometrySink specificato.

```
BOOL Stream(ID2D1GeometrySink* geometrySink);
```

### <a name="parameters"></a>Parametri

*geometrySink*<br/>
Sink in cui vengono copiati i contenuti della geometria del percorso. La modifica di questo sink non comporta la modifica del contenuto di questa geometria del percorso.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
