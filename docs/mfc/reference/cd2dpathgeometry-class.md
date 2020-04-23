---
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
ms.openlocfilehash: 91460e3435130530ecc57bdcc09d1c7301333a3b
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753084"
---
# <a name="cd2dpathgeometry-class"></a>Classe CD2DPathGeometry

Wrapper per ID2D1PathGeometry.

## <a name="syntax"></a>Sintassi

```
class CD2DPathGeometry : public CD2DGeometry;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DPathGeometry::CD2DPathGeometry](#cd2dpathgeometry)|Costruisce un oggetto CD2DPathGeometry.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DPathGeometry::Associare](#attach)|Associa all'oggetto un'interfaccia di risorsa esistente|
|[CD2DPathGeometry::Creare](#create)|Crea un CD2DPathGeometry. (Esegue l'override di [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DPathGeometry::Destroy](#destroy)|Elimina un oggetto CD2DPathGeometry. (Esegue l'override di [CD2DGeometry::Destroy](../../mfc/reference/cd2dgeometry-class.md#destroy).)|
|[CD2DPathGeometry::Detach](#detach)|Scollega l'interfaccia delle risorse dall'oggetto|
|[CD2DPathGeometry::GetFigureCount](#getfigurecount)|Recupera il numero di figure nella geometria del tracciato.|
|[CD2DPathGeometry::GetSegmentCount](#getsegmentcount)|Recupera il numero di segmenti nella geometria del tracciato.|
|[CD2DPathGeometry::Open](#open)|Recupera il sink di geometria utilizzato per popolare la geometria del percorso con figure e segmenti.|
|[CD2DPathGeometry::Stream](#stream)|Copia il contenuto della geometria del percorso nell'oggetto ID2D1GeometrySink specificato.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DPathGeometry::m_pPathGeometry](#m_ppathgeometry)|Puntatore a un id2D1PathGeometry.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource (informazioni in confronto a 3)](../../mfc/reference/cd2dresource-class.md)

[Geometria CD2D](../../mfc/reference/cd2dgeometry-class.md)

`CD2DPathGeometry`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dpathgeometryattach"></a><a name="attach"></a>CD2DPathGeometry::Associare

Associa all'oggetto un'interfaccia di risorsa esistente

```cpp
void Attach(ID2D1PathGeometry* pResource);
```

### <a name="parameters"></a>Parametri

*pRisorsa*<br/>
Interfaccia delle risorse esistente. Non può essere NULL

## <a name="cd2dpathgeometrycd2dpathgeometry"></a><a name="cd2dpathgeometry"></a>CD2DPathGeometry::CD2DPathGeometry

Costruisce un oggetto CD2DPathGeometry.

```
CD2DPathGeometry(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget (Destinazionepadre)*<br/>
Puntatore alla destinazione di rendering.

*bAutoDistruggi*<br/>
Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).

## <a name="cd2dpathgeometrycreate"></a><a name="create"></a>CD2DPathGeometry::Creare

Crea un CD2DPathGeometry.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget (informazioni in base alla proprietà*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dpathgeometrydestroy"></a><a name="destroy"></a>CD2DPathGeometry::Destroy

Elimina un oggetto CD2DPathGeometry.

```
virtual void Destroy();
```

## <a name="cd2dpathgeometrydetach"></a><a name="detach"></a>CD2DPathGeometry::Detach

Scollega l'interfaccia delle risorse dall'oggetto

```
ID2D1PathGeometry* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia delle risorse disconnesse.

## <a name="cd2dpathgeometrygetfigurecount"></a><a name="getfigurecount"></a>CD2DPathGeometry::GetFigureCount

Recupera il numero di figure nella geometria del tracciato.

```
int GetFigureCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di figure nella geometria del percorso.

## <a name="cd2dpathgeometrygetsegmentcount"></a><a name="getsegmentcount"></a>CD2DPathGeometry::GetSegmentCount

Recupera il numero di segmenti nella geometria del tracciato.

```
int GetSegmentCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di segmenti nella geometria del tracciato.

## <a name="cd2dpathgeometrym_ppathgeometry"></a><a name="m_ppathgeometry"></a>CD2DPathGeometry::m_pPathGeometry

Puntatore a un id2D1PathGeometry.

```
ID2D1PathGeometry* m_pPathGeometry;
```

## <a name="cd2dpathgeometryopen"></a><a name="open"></a>CD2DPathGeometry::Open

Recupera il sink di geometria utilizzato per popolare la geometria del percorso con figure e segmenti.

```
ID2D1GeometrySink* Open();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'ID2D1GeometrySink utilizzato per popolare la geometria del percorso con figure e segmenti.

## <a name="cd2dpathgeometrystream"></a><a name="stream"></a>CD2DPathGeometry::Stream

Copia il contenuto della geometria del percorso nell'oggetto ID2D1GeometrySink specificato.

```
BOOL Stream(ID2D1GeometrySink* geometrySink);
```

### <a name="parameters"></a>Parametri

*geometrySink*<br/>
Sink in cui viene copiato il contenuto della geometria del percorso. La modifica di questo sink non modifica il contenuto di questa geometria del percorso.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
