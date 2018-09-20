---
title: Classe CD2DPathGeometry | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 80d4116d71eb92474675968e15846f109b7390f0
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46388849"
---
# <a name="cd2dpathgeometry-class"></a>Classe CD2DPathGeometry

Un wrapper per ID2D1PathGeometry.

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
|[CD2DPathGeometry::Attach](#attach)|Collega esistente all'oggetto di interfaccia delle risorse|
|[CD2DPathGeometry::Create](#create)|Crea un CD2DPathGeometry. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DPathGeometry::Destroy](#destroy)|Elimina un oggetto CD2DPathGeometry. (Esegue l'override [CD2DGeometry:: Destroy](../../mfc/reference/cd2dgeometry-class.md#destroy).)|
|[CD2DPathGeometry::Detach](#detach)|Scollega interfaccia di risorse dall'oggetto|
|[CD2DPathGeometry::GetFigureCount](#getfigurecount)|Recupera il numero di cifre nella geometria del percorso.|
|[CD2DPathGeometry::GetSegmentCount](#getsegmentcount)|Recupera il numero di segmenti nella geometria del percorso.|
|[CD2DPathGeometry::Open](#open)|Recupera il sink di geometria che viene usato per popolare la geometria del percorso con cifre e segmenti.|
|[CD2DPathGeometry::Stream](#stream)|Copia il contenuto della geometria del percorso per il ID2D1GeometrySink specificato.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CD2DPathGeometry::m_pPathGeometry](#m_ppathgeometry)|Puntatore a un ID2D1PathGeometry.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DGeometry](../../mfc/reference/cd2dgeometry-class.md)

`CD2DPathGeometry`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="attach"></a>  CD2DPathGeometry::Attach

Collega esistente all'oggetto di interfaccia delle risorse

```
void Attach(ID2D1PathGeometry* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia di risorse esistente. Non può essere NULL

##  <a name="cd2dpathgeometry"></a>  CD2DPathGeometry::CD2DPathGeometry

Costruisce un oggetto CD2DPathGeometry.

```
CD2DPathGeometry(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget*<br/>
Puntatore alla destinazione di rendering.

*flag bAutoDestroy*<br/>
Indica che l'oggetto viene distrutto dal proprietario (pParentTarget).

##  <a name="create"></a>  CD2DPathGeometry::Create

Crea un CD2DPathGeometry.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="destroy"></a>  CD2DPathGeometry::Destroy

Elimina un oggetto CD2DPathGeometry.

```
virtual void Destroy();
```

##  <a name="detach"></a>  CD2DPathGeometry::Detach

Scollega interfaccia di risorse dall'oggetto

```
ID2D1PathGeometry* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia risorse scollegato.

##  <a name="getfigurecount"></a>  CD2DPathGeometry::GetFigureCount

Recupera il numero di cifre nella geometria del percorso.

```
int GetFigureCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di cifre nella geometria del percorso.

##  <a name="getsegmentcount"></a>  CD2DPathGeometry::GetSegmentCount

Recupera il numero di segmenti nella geometria del percorso.

```
int GetSegmentCount() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di segmenti nella geometria del percorso.

##  <a name="m_ppathgeometry"></a>  CD2DPathGeometry::m_pPathGeometry

Puntatore a un ID2D1PathGeometry.

```
ID2D1PathGeometry* m_pPathGeometry;
```

##  <a name="open"></a>  CD2DPathGeometry::Open

Recupera il sink di geometria che viene usato per popolare la geometria del percorso con cifre e segmenti.

```
ID2D1GeometrySink* Open();
```

### <a name="return-value"></a>Valore restituito

Puntatore a ID2D1GeometrySink che viene usata per popolare la geometria del percorso con cifre e segmenti.

##  <a name="stream"></a>  CD2DPathGeometry::Stream

Copia il contenuto della geometria del percorso per il ID2D1GeometrySink specificato.

```
BOOL Stream(ID2D1GeometrySink* geometrySink);
```

### <a name="parameters"></a>Parametri

*geometrySink*<br/>
Il sink in cui vengono copiati i contenuti della geometria del percorso. Modifica questo sink, il contenuto di questa geometria del percorso non viene modificato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
