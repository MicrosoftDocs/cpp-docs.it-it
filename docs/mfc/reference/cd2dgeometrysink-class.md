---
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
ms.openlocfilehash: 48c88f0b837b2e49e4c87f07a9aa28c16a66c1e3
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57271203"
---
# <a name="cd2dgeometrysink-class"></a>Classe CD2DGeometrySink

Un wrapper per ID2D1GeometrySink.

## <a name="syntax"></a>Sintassi

```
class CD2DGeometrySink;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DGeometrySink::CD2DGeometrySink](#cd2dgeometrysink)|Costruisce un oggetto CD2DGeometrySink dall'oggetto CD2DPathGeometry.|
|[CD2DGeometrySink:: ~ CD2DGeometrySink](#_dtorcd2dgeometrysink)|Distruttore. Chiamato quando viene eliminata definitivamente un oggetto sink di geometry D2D.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DGeometrySink::AddArc](#addarc)|Aggiunge un arco singolo per la geometria del percorso|
|[CD2DGeometrySink::AddBezier](#addbezier)|Crea una curva di Bézier cubica tra il punto corrente e il punto finale specificato.|
|[CD2DGeometrySink::AddBeziers](#addbeziers)|Crea una sequenza di curve di Bézier cubiche e li aggiunge al sink di geometria.|
|[CD2DGeometrySink::AddLine](#addline)|Crea un segmento di linea tra il punto corrente e il punto finale specificato e lo aggiunge al sink di geometria.|
|[CD2DGeometrySink::AddLines](#addlines)|Crea una sequenza di righe usando i punti specificati e li aggiunge al sink di geometria.|
|[CD2DGeometrySink::AddQuadraticBezier](#addquadraticbezier)|Crea una curva di Bézier quadratica tra il punto corrente e il punto finale specificato.|
|[CD2DGeometrySink::AddQuadraticBeziers](#addquadraticbeziers)|Aggiunge una sequenza di segmenti di curva di Bezier quadratica sotto forma di matrice in una singola chiamata.|
|[CD2DGeometrySink::BeginFigure](#beginfigure)|Avvia una nuova figura nel punto specificato.|
|[CD2DGeometrySink::Close](#close)|Chiude il sink di geometria|
|[CD2DGeometrySink::EndFigure](#endfigure)|Termina la figura corrente. Facoltativamente, lo chiude.|
|[CD2DGeometrySink::Get](#get)|Restituisce l'interfaccia ID2D1GeometrySink|
|[CD2DGeometrySink::IsValid](#isvalid)|Controlla la validità di sink di geometria|
|[CD2DGeometrySink::SetFillMode](#setfillmode)|Specifica il metodo utilizzato per determinare quali punti si trovano all'interno della geometria descritta da questo sink geometry e quali punti sono di fuori.|
|[CD2DGeometrySink::SetSegmentFlags](#setsegmentflags)|Specifica le opzioni di traccia e join da applicare ai nuovi segmenti aggiunti al sink di geometria.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DGeometrySink::operator ID2D1GeometrySink *](#operator_id2d1geometrysink_star)|Restituisce l'interfaccia ID2D1GeometrySink|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CD2DGeometrySink::m_pSink](#m_psink)|Puntatore a un ID2D1GeometrySink.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CD2DGeometrySink`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="_dtorcd2dgeometrysink"></a>  CD2DGeometrySink:: ~ CD2DGeometrySink

Distruttore. Chiamato quando viene eliminata definitivamente un oggetto sink di geometry D2D.

```
virtual ~CD2DGeometrySink();
```

##  <a name="addarc"></a>  CD2DGeometrySink::AddArc

Aggiunge un arco singolo per la geometria del percorso

```
void AddArc(const D2D1_ARC_SEGMENT& arc);
```

### <a name="parameters"></a>Parametri

*arc*<br/>
Il segmento di arco da aggiungere alla figura

##  <a name="addbezier"></a>  CD2DGeometrySink::AddBezier

Crea una curva di Bézier cubica tra il punto corrente e il punto finale specificato.

```
void AddBezier(const D2D1_BEZIER_SEGMENT& bezier);
```

### <a name="parameters"></a>Parametri

*bezier*<br/>
Struttura che descrive i punti di controllo e il punto finale della curva di Bézier da aggiungere.

##  <a name="addbeziers"></a>  CD2DGeometrySink::AddBeziers

Crea una sequenza di curve di Bézier cubiche e li aggiunge al sink di geometria.

```
void AddBeziers(
    const CArray<D2D1_BEZIER_SEGMENT,
    D2D1_BEZIER_SEGMENT>& beziers);
```

### <a name="parameters"></a>Parametri

*beziers*<br/>
Una matrice di segmenti di Bézier che descrive le curve di Bezier per creare. Una curva viene disegnata dal punto corrente del sink di geometria (il punto finale dell'ultimo segmento disegnata o alla posizione specificata da BeginFigure) per il punto finale del segmento di Bézier prima nella matrice. Se la matrice contiene altri segmenti di curva di Bezier, ogni segmento di Bézier successivo Usa il punto finale del segmento di Bézier precedente come punto di inizio.

##  <a name="addline"></a>  CD2DGeometrySink::AddLine

Crea un segmento di linea tra il punto corrente e il punto finale specificato e lo aggiunge al sink di geometria.

```
void AddLine(CD2DPointF point);
```

### <a name="parameters"></a>Parametri

*point*<br/>
Il punto finale della riga da disegnare.

##  <a name="addlines"></a>  CD2DGeometrySink::AddLines

Crea una sequenza di righe usando i punti specificati e li aggiunge al sink di geometria.

```
void AddLines(
    const CArray<CD2DPointF,
    CD2DPointF>& points);
```

### <a name="parameters"></a>Parametri

*points*<br/>
Matrice di uno o più punti che descrivono le righe da disegnare. Viene tracciata una linea dal punto corrente del sink di geometria (il punto finale dell'ultimo segmento disegnata o alla posizione specificata da BeginFigure) per il primo punto della matrice. Se la matrice contiene punti aggiuntivi, dal primo punto viene disegnata una linea e il secondo punto nella matrice, dal punto di secondo per il terzo punto e così via. Matrice di una sequenza dei punti di fine di righe da disegnare.

##  <a name="addquadraticbezier"></a>  CD2DGeometrySink::AddQuadraticBezier

Crea una curva di Bézier quadratica tra il punto corrente e il punto finale specificato.

```
void AddQuadraticBezier(const D2D1_QUADRATIC_BEZIER_SEGMENT& bezier);
```

### <a name="parameters"></a>Parametri

*bezier*<br/>
Struttura che descrive il punto di controllo e il punto finale della curva di Bézier quadratica da aggiungere.

##  <a name="addquadraticbeziers"></a>  CD2DGeometrySink::AddQuadraticBeziers

Aggiunge una sequenza di segmenti di curva di Bezier quadratica sotto forma di matrice in una singola chiamata.

```
void AddQuadraticBeziers(
    const CArray<D2D1_QUADRATIC_BEZIER_SEGMENT,
    D2D1_QUADRATIC_BEZIER_SEGMENT>& beziers);
```

### <a name="parameters"></a>Parametri

*beziers*<br/>
Matrice di una sequenza di segmenti di curva di Bezier quadratica.

##  <a name="beginfigure"></a>  CD2DGeometrySink::BeginFigure

Avvia una nuova figura nel punto specificato.

```
void BeginFigure(
    CD2DPointF startPoint,
    D2D1_FIGURE_BEGIN figureBegin);
```

### <a name="parameters"></a>Parametri

*startPoint*<br/>
Il punto da cui iniziare la nuova figura.

*figureBegin*<br/>
Indica se la nuova figura deve essere vuota o piena.

##  <a name="cd2dgeometrysink"></a>  CD2DGeometrySink::CD2DGeometrySink

Costruisce un oggetto CD2DGeometrySink dall'oggetto CD2DPathGeometry.

```
CD2DGeometrySink(CD2DPathGeometry& pathGeometry);
```

### <a name="parameters"></a>Parametri

*pathGeometry*<br/>
Oggetto CD2DPathGeometry esistente.

##  <a name="close"></a>  CD2DGeometrySink::Close

Chiude il sink di geometria

```
BOOL Close();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. in caso contrario, FALSE.

##  <a name="endfigure"></a>  CD2DGeometrySink::EndFigure

Termina la figura corrente. Facoltativamente, lo chiude.

```
void EndFigure(D2D1_FIGURE_END figureEnd);
```

### <a name="parameters"></a>Parametri

*figureEnd*<br/>
Un valore che indica se la figura corrente è chiuso. Se nella figura è chiusa, viene tracciata una linea tra il punto corrente e il punto di inizio specificato da BeginFigure.

##  <a name="get"></a>  CD2DGeometrySink::Get

Restituisce l'interfaccia ID2D1GeometrySink

```
ID2D1GeometrySink* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1GeometrySink o NULL se l'oggetto non è ancora inizializzato.

##  <a name="isvalid"></a>  CD2DGeometrySink::IsValid

Controlla la validità di sink di geometria

```
BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il sink di geometry è valido. in caso contrario, FALSE.

##  <a name="m_psink"></a>  CD2DGeometrySink::m_pSink

Puntatore a un ID2D1GeometrySink.

```
ID2D1GeometrySink* m_pSink;
```

##  <a name="operator_id2d1geometrysink_star"></a>  CD2DGeometrySink::operator ID2D1GeometrySink *

Restituisce l'interfaccia ID2D1GeometrySink

```
operator ID2D1GeometrySink*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1GeometrySink o NULL se l'oggetto non è ancora inizializzato.

##  <a name="setfillmode"></a>  CD2DGeometrySink::SetFillMode

Specifica il metodo utilizzato per determinare quali punti si trovano all'interno della geometria descritta da questo sink geometry e quali punti sono di fuori.

```
void SetFillMode(D2D1_FILL_MODE fillMode);
```

### <a name="parameters"></a>Parametri

*fillMode*<br/>
Il metodo utilizzato per determinare se un determinato punto fa parte della geometria.

##  <a name="setsegmentflags"></a>  CD2DGeometrySink::SetSegmentFlags

Specifica le opzioni di traccia e join da applicare ai nuovi segmenti aggiunti al sink di geometria.

```
void SetSegmentFlags(D2D1_PATH_SEGMENT vertexFlags);
```

### <a name="parameters"></a>Parametri

*vertexFlags*<br/>
Le opzioni di traccia e join da applicare ai nuovi segmenti aggiunti alla geometria di sink.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
