---
description: 'Altre informazioni su: classe CD2DGeometrySink'
title: Classe CD2DGeometrySink
ms.date: 11/04/2016
f1_keywords:
- CD2DGeometrySink
- AFXRENDERTARGET/CD2DGeometrySink
- AFXRENDERTARGET/CD2DGeometrySink::CD2DGeometrySink
- AFXRENDERTARGET/CD2DGeometrySink::AddArc
- AFXRENDERTARGET/CD2DGeometrySink::AddBezier
- AFXRENDERTARGET/CD2DGeometrySink::AddBeziers
- AFXRENDERTARGET/CD2DGeometrySink::AddLine
- AFXRENDERTARGET/CD2DGeometrySink::AddLines
- AFXRENDERTARGET/CD2DGeometrySink::AddQuadraticBezier
- AFXRENDERTARGET/CD2DGeometrySink::AddQuadraticBeziers
- AFXRENDERTARGET/CD2DGeometrySink::BeginFigure
- AFXRENDERTARGET/CD2DGeometrySink::Close
- AFXRENDERTARGET/CD2DGeometrySink::EndFigure
- AFXRENDERTARGET/CD2DGeometrySink::Get
- AFXRENDERTARGET/CD2DGeometrySink::IsValid
- AFXRENDERTARGET/CD2DGeometrySink::SetFillMode
- AFXRENDERTARGET/CD2DGeometrySink::SetSegmentFlags
- AFXRENDERTARGET/CD2DGeometrySink::m_pSink
helpviewer_keywords:
- CD2DGeometrySink [MFC], CD2DGeometrySink
- CD2DGeometrySink [MFC], AddArc
- CD2DGeometrySink [MFC], AddBezier
- CD2DGeometrySink [MFC], AddBeziers
- CD2DGeometrySink [MFC], AddLine
- CD2DGeometrySink [MFC], AddLines
- CD2DGeometrySink [MFC], AddQuadraticBezier
- CD2DGeometrySink [MFC], AddQuadraticBeziers
- CD2DGeometrySink [MFC], BeginFigure
- CD2DGeometrySink [MFC], Close
- CD2DGeometrySink [MFC], EndFigure
- CD2DGeometrySink [MFC], Get
- CD2DGeometrySink [MFC], IsValid
- CD2DGeometrySink [MFC], SetFillMode
- CD2DGeometrySink [MFC], SetSegmentFlags
- CD2DGeometrySink [MFC], m_pSink
ms.assetid: e5e07f41-0343-4ab1-9d6b-8c62ed33c04a
ms.openlocfilehash: e7916cdb39272e924a9d6ef6c0a8322d8ce6fb1f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193422"
---
# <a name="cd2dgeometrysink-class"></a>Classe CD2DGeometrySink

Wrapper per ID2D1GeometrySink.

## <a name="syntax"></a>Sintassi

```
class CD2DGeometrySink;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DGeometrySink:: CD2DGeometrySink](#cd2dgeometrysink)|Costruisce un oggetto CD2DGeometrySink dall'oggetto CD2DPathGeometry.|
|[CD2DGeometrySink:: ~ CD2DGeometrySink](#_dtorcd2dgeometrysink)|Distruttore. Chiamato quando un oggetto sink di geometria D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DGeometrySink:: AddArc](#addarc)|Aggiunge un singolo arco alla geometria del percorso|
|[CD2DGeometrySink:: AddBezier](#addbezier)|Crea una curva di Bézier cubica tra il punto corrente e il punto finale specificato.|
|[CD2DGeometrySink:: AddBeziers](#addbeziers)|Crea una sequenza di curve di Bézier cubiche e le aggiunge al sink di geometria.|
|[CD2DGeometrySink:: AddLine](#addline)|Crea un segmento di linea tra il punto corrente e il punto finale specificato e lo aggiunge al sink di geometria.|
|[CD2DGeometrySink:: AddLines](#addlines)|Crea una sequenza di linee usando i punti specificati e le aggiunge al sink di geometria.|
|[CD2DGeometrySink:: AddQuadraticBezier](#addquadraticbezier)|Crea una curva di Bézier quadratica tra il punto corrente e il punto finale specificato.|
|[CD2DGeometrySink:: AddQuadraticBeziers](#addquadraticbeziers)|Aggiunge una sequenza di segmenti di Bezier quadratici come una matrice in una singola chiamata.|
|[CD2DGeometrySink:: BeginFigure](#beginfigure)|Avvia una nuova figura in corrispondenza del punto specificato.|
|[CD2DGeometrySink:: Close](#close)|Chiude il sink di geometria|
|[CD2DGeometrySink:: EndFigure](#endfigure)|Termina la figura corrente. Facoltativamente, lo chiude.|
|[CD2DGeometrySink:: Get](#get)|Restituisce l'interfaccia ID2D1GeometrySink|
|[CD2DGeometrySink:: IsValid](#isvalid)|Verifica la validità del sink Geometry|
|[CD2DGeometrySink:: SetFillMode](#setfillmode)|Specifica il metodo usato per determinare i punti che si trovano all'interno della geometria descritta dal sink di geometria e i punti esterni.|
|[CD2DGeometrySink:: SetSegmentFlags](#setsegmentflags)|Specifica le opzioni di tratto e join da applicare ai nuovi segmenti aggiunti al sink di geometria.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DGeometrySink:: operator ID2D1GeometrySink *](#operator_id2d1geometrysink_star)|Restituisce l'interfaccia ID2D1GeometrySink|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DGeometrySink:: m_pSink](#m_psink)|Puntatore a un ID2D1GeometrySink.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CD2DGeometrySink`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dgeometrysinkcd2dgeometrysink"></a><a name="_dtorcd2dgeometrysink"></a> CD2DGeometrySink:: ~ CD2DGeometrySink

Distruttore. Chiamato quando un oggetto sink di geometria D2D viene eliminato definitivamente.

```
virtual ~CD2DGeometrySink();
```

## <a name="cd2dgeometrysinkaddarc"></a><a name="addarc"></a> CD2DGeometrySink:: AddArc

Aggiunge un singolo arco alla geometria del percorso

```cpp
void AddArc(const D2D1_ARC_SEGMENT& arc);
```

### <a name="parameters"></a>Parametri

*arco*<br/>
Segmento di arco da aggiungere alla figura

## <a name="cd2dgeometrysinkaddbezier"></a><a name="addbezier"></a> CD2DGeometrySink:: AddBezier

Crea una curva di Bézier cubica tra il punto corrente e il punto finale specificato.

```cpp
void AddBezier(const D2D1_BEZIER_SEGMENT& bezier);
```

### <a name="parameters"></a>Parametri

*Bezier*<br/>
Struttura che descrive i punti di controllo e il punto finale della curva di Bezier da aggiungere.

## <a name="cd2dgeometrysinkaddbeziers"></a><a name="addbeziers"></a> CD2DGeometrySink:: AddBeziers

Crea una sequenza di curve di Bézier cubiche e le aggiunge al sink di geometria.

```cpp
void AddBeziers(
    const CArray<D2D1_BEZIER_SEGMENT,
    D2D1_BEZIER_SEGMENT>& beziers);
```

### <a name="parameters"></a>Parametri

*Beziers*<br/>
Matrice di segmenti di Bezier che descrive le curve di Bezier da creare. Viene disegnata una curva dal punto corrente del sink di geometria (il punto finale dell'ultimo segmento disegnato o dalla posizione specificata da BeginFigure) al punto finale del primo segmento di Bezier nella matrice. Se la matrice contiene segmenti di Bezier aggiuntivi, ogni segmento di Bezier successivo utilizzerà il punto finale del segmento di Bezier precedente come punto iniziale.

## <a name="cd2dgeometrysinkaddline"></a><a name="addline"></a> CD2DGeometrySink:: AddLine

Crea un segmento di linea tra il punto corrente e il punto finale specificato e lo aggiunge al sink di geometria.

```cpp
void AddLine(CD2DPointF point);
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Punto finale della linea da creare.

## <a name="cd2dgeometrysinkaddlines"></a><a name="addlines"></a> CD2DGeometrySink:: AddLines

Crea una sequenza di linee usando i punti specificati e le aggiunge al sink di geometria.

```cpp
void AddLines(
    const CArray<CD2DPointF,
    CD2DPointF>& points);
```

### <a name="parameters"></a>Parametri

*punti*<br/>
Matrice di uno o più punti che descrivono le linee da creare. Viene disegnata una linea dal punto corrente del sink di geometria (il punto finale dell'ultimo segmento disegnato o dalla posizione specificata da BeginFigure) al primo punto della matrice. Se la matrice contiene punti aggiuntivi, viene disegnata una linea dal primo punto al secondo punto della matrice, dal secondo punto al terzo punto e così via. Matrice di una sequenza di punti finali delle linee da creare.

## <a name="cd2dgeometrysinkaddquadraticbezier"></a><a name="addquadraticbezier"></a> CD2DGeometrySink:: AddQuadraticBezier

Crea una curva di Bézier quadratica tra il punto corrente e il punto finale specificato.

```cpp
void AddQuadraticBezier(const D2D1_QUADRATIC_BEZIER_SEGMENT& bezier);
```

### <a name="parameters"></a>Parametri

*Bezier*<br/>
Struttura che descrive il punto di controllo e il punto finale della curva di Bezier quadratica da aggiungere.

## <a name="cd2dgeometrysinkaddquadraticbeziers"></a><a name="addquadraticbeziers"></a> CD2DGeometrySink:: AddQuadraticBeziers

Aggiunge una sequenza di segmenti di Bezier quadratici come una matrice in una singola chiamata.

```cpp
void AddQuadraticBeziers(
    const CArray<D2D1_QUADRATIC_BEZIER_SEGMENT,
    D2D1_QUADRATIC_BEZIER_SEGMENT>& beziers);
```

### <a name="parameters"></a>Parametri

*Beziers*<br/>
Matrice di una sequenza di segmenti di Bezier quadratici.

## <a name="cd2dgeometrysinkbeginfigure"></a><a name="beginfigure"></a> CD2DGeometrySink:: BeginFigure

Avvia una nuova figura in corrispondenza del punto specificato.

```cpp
void BeginFigure(
    CD2DPointF startPoint,
    D2D1_FIGURE_BEGIN figureBegin);
```

### <a name="parameters"></a>Parametri

*startPoint*<br/>
Punto da cui iniziare la nuova figura.

*figureBegin*<br/>
Indica se la nuova figura deve essere vuota o compilata.

## <a name="cd2dgeometrysinkcd2dgeometrysink"></a><a name="cd2dgeometrysink"></a> CD2DGeometrySink:: CD2DGeometrySink

Costruisce un oggetto CD2DGeometrySink dall'oggetto CD2DPathGeometry.

```
CD2DGeometrySink(CD2DPathGeometry& pathGeometry);
```

### <a name="parameters"></a>Parametri

*pathGeometry*<br/>
Oggetto CD2DPathGeometry esistente.

## <a name="cd2dgeometrysinkclose"></a><a name="close"></a> CD2DGeometrySink:: Close

Chiude il sink di geometria

```
BOOL Close();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario, FALSE.

## <a name="cd2dgeometrysinkendfigure"></a><a name="endfigure"></a> CD2DGeometrySink:: EndFigure

Termina la figura corrente. Facoltativamente, lo chiude.

```cpp
void EndFigure(D2D1_FIGURE_END figureEnd);
```

### <a name="parameters"></a>Parametri

*figureEnd*<br/>
Valore che indica se la figura corrente è chiusa. Se la figura è chiusa, viene disegnata una linea tra il punto corrente e il punto iniziale specificato da BeginFigure.

## <a name="cd2dgeometrysinkget"></a><a name="get"></a> CD2DGeometrySink:: Get

Restituisce l'interfaccia ID2D1GeometrySink

```
ID2D1GeometrySink* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1GeometrySink o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dgeometrysinkisvalid"></a><a name="isvalid"></a> CD2DGeometrySink:: IsValid

Verifica la validità del sink Geometry

```
BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il sink di geometria è valido. in caso contrario, FALSE.

## <a name="cd2dgeometrysinkm_psink"></a><a name="m_psink"></a> CD2DGeometrySink:: m_pSink

Puntatore a un ID2D1GeometrySink.

```
ID2D1GeometrySink* m_pSink;
```

## <a name="cd2dgeometrysinkoperator-id2d1geometrysink"></a><a name="operator_id2d1geometrysink_star"></a> CD2DGeometrySink:: operator ID2D1GeometrySink *

Restituisce l'interfaccia ID2D1GeometrySink

```
operator ID2D1GeometrySink*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1GeometrySink o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dgeometrysinksetfillmode"></a><a name="setfillmode"></a> CD2DGeometrySink:: SetFillMode

Specifica il metodo usato per determinare i punti che si trovano all'interno della geometria descritta dal sink di geometria e i punti esterni.

```cpp
void SetFillMode(D2D1_FILL_MODE fillMode);
```

### <a name="parameters"></a>Parametri

*fillMode*<br/>
Metodo utilizzato per determinare se un punto specificato fa parte della geometria.

## <a name="cd2dgeometrysinksetsegmentflags"></a><a name="setsegmentflags"></a> CD2DGeometrySink:: SetSegmentFlags

Specifica le opzioni di tratto e join da applicare ai nuovi segmenti aggiunti al sink di geometria.

```cpp
void SetSegmentFlags(D2D1_PATH_SEGMENT vertexFlags);
```

### <a name="parameters"></a>Parametri

*vertexFlags*<br/>
Opzioni di tratto e join da applicare ai nuovi segmenti aggiunti al sink di geometria.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
