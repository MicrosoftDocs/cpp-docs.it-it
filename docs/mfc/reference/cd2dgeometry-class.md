---
title: Classe CD2DGeometry
ms.date: 11/04/2016
f1_keywords:
- CD2DGeometry
- AFXRENDERTARGET/CD2DGeometry
- AFXRENDERTARGET/CD2DGeometry::CD2DGeometry
- AFXRENDERTARGET/CD2DGeometry::Attach
- AFXRENDERTARGET/CD2DGeometry::CombineWithGeometry
- AFXRENDERTARGET/CD2DGeometry::CompareWithGeometry
- AFXRENDERTARGET/CD2DGeometry::ComputeArea
- AFXRENDERTARGET/CD2DGeometry::ComputeLength
- AFXRENDERTARGET/CD2DGeometry::ComputePointAtLength
- AFXRENDERTARGET/CD2DGeometry::Destroy
- AFXRENDERTARGET/CD2DGeometry::Detach
- AFXRENDERTARGET/CD2DGeometry::FillContainsPoint
- AFXRENDERTARGET/CD2DGeometry::Get
- AFXRENDERTARGET/CD2DGeometry::GetBounds
- AFXRENDERTARGET/CD2DGeometry::GetWidenedBounds
- AFXRENDERTARGET/CD2DGeometry::IsValid
- AFXRENDERTARGET/CD2DGeometry::Outline
- AFXRENDERTARGET/CD2DGeometry::Simplify
- AFXRENDERTARGET/CD2DGeometry::StrokeContainsPoint
- AFXRENDERTARGET/CD2DGeometry::Tessellate
- AFXRENDERTARGET/CD2DGeometry::Widen
- AFXRENDERTARGET/CD2DGeometry::m_pGeometry
helpviewer_keywords:
- CD2DGeometry [MFC], CD2DGeometry
- CD2DGeometry [MFC], Attach
- CD2DGeometry [MFC], CombineWithGeometry
- CD2DGeometry [MFC], CompareWithGeometry
- CD2DGeometry [MFC], ComputeArea
- CD2DGeometry [MFC], ComputeLength
- CD2DGeometry [MFC], ComputePointAtLength
- CD2DGeometry [MFC], Destroy
- CD2DGeometry [MFC], Detach
- CD2DGeometry [MFC], FillContainsPoint
- CD2DGeometry [MFC], Get
- CD2DGeometry [MFC], GetBounds
- CD2DGeometry [MFC], GetWidenedBounds
- CD2DGeometry [MFC], IsValid
- CD2DGeometry [MFC], Outline
- CD2DGeometry [MFC], Simplify
- CD2DGeometry [MFC], StrokeContainsPoint
- CD2DGeometry [MFC], Tessellate
- CD2DGeometry [MFC], Widen
- CD2DGeometry [MFC], m_pGeometry
ms.assetid: 3f95054b-fdb8-4e87-87f2-9fc3df7279ec
ms.openlocfilehash: 4549b2e7981d5f8493ddf9f24477e75a94ddde8b
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57271229"
---
# <a name="cd2dgeometry-class"></a>Classe CD2DGeometry

Un wrapper per a ID2D1Geometry.

## <a name="syntax"></a>Sintassi

```
class CD2DGeometry : public CD2DResource;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DGeometry::CD2DGeometry](#cd2dgeometry)|Costruisce un oggetto CD2DGeometry.|
|[CD2DGeometry:: ~ CD2DGeometry](#_dtorcd2dgeometry)|Distruttore. Chiamato quando viene eliminata definitivamente un oggetto geometry D2D.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DGeometry::Attach](#attach)|Collega esistente all'oggetto di interfaccia delle risorse|
|[CD2DGeometry::CombineWithGeometry](#combinewithgeometry)|Combina questa geometria con la geometria specificata e archivia il risultato in un ID2D1SimplifiedGeometrySink.|
|[CD2DGeometry::CompareWithGeometry](#comparewithgeometry)|Descrive l'intersezione tra la geometria e la geometria specificata. Il confronto viene eseguito utilizzando l'appiattimento tolleranza specificata.|
|[CD2DGeometry::ComputeArea](#computearea)|Calcola l'area della geometria dopo che è stato trasformato dalla matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.|
|[CD2DGeometry::ComputeLength](#computelength)|Calcola la lunghezza della geometria come se fosse ogni segmento spiegato in una riga.|
|[CD2DGeometry::ComputePointAtLength](#computepointatlength)|Calcola il punto e il vettore tangente alla distanza indicata lungo la geometria dopo che è stato trasformato dalla matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.|
|[CD2DGeometry::Destroy](#destroy)|Elimina un oggetto CD2DGeometry. (Esegue l'override [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DGeometry::Detach](#detach)|Scollega interfaccia di risorse dall'oggetto|
|[CD2DGeometry::FillContainsPoint](#fillcontainspoint)|Indica se l'area riempita dalla geometria contiene il punto specificato dato l'appiattimento tolleranza specificata.|
|[CD2DGeometry::Get](#get)|Restituisce l'interfaccia ID2D1Geometry|
|[CD2DGeometry::GetBounds](#getbounds)||
|[CD2DGeometry::GetWidenedBounds](#getwidenedbounds)|Ottiene i limiti della geometria dopo che è stata ampliata tramite la larghezza del tratto specificato e lo stile e trasformato dalla matrice specificata.|
|[CD2DGeometry::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DGeometry::Outline](#outline)|Calcola la struttura della geometria e scrive il risultato in un ID2D1SimplifiedGeometrySink.|
|[CD2DGeometry::Simplify](#simplify)|Crea una versione semplificata della geometria che contiene solo linee e curve di Bézier cubiche (facoltativamente) e scrive il risultato in un ID2D1SimplifiedGeometrySink.|
|[CD2DGeometry::StrokeContainsPoint](#strokecontainspoint)|Determina se il tratto della geometria contiene il punto specificato dato il spessore del tratto specificati, lo stile e trasformazione.|
|[CD2DGeometry::Tessellate](#tessellate)|Crea un set di in senso orario triangoli che analizza la geometria dopo che è stata trasformata utilizzando la matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.|
|[CD2DGeometry::Widen](#widen)|Amplia la geometria da tratto specificato e scrive il risultato in un ID2D1SimplifiedGeometrySink dopo che è stato trasformato dalla matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DGeometry::operator ID2D1Geometry *](#operator_id2d1geometry_star)|Restituisce l'interfaccia ID2D1Geometry|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CD2DGeometry::m_pGeometry](#m_pgeometry)|Puntatore a ID2D1Geometry una.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DGeometry`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="_dtorcd2dgeometry"></a>  CD2DGeometry:: ~ CD2DGeometry

Distruttore. Chiamato quando viene eliminata definitivamente un oggetto geometry D2D.

```
virtual ~CD2DGeometry();
```

##  <a name="attach"></a>  CD2DGeometry::Attach

Collega esistente all'oggetto di interfaccia delle risorse

```
void Attach(ID2D1Geometry* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia di risorse esistente. Non può essere NULL

##  <a name="cd2dgeometry"></a>  CD2DGeometry::CD2DGeometry

Costruisce un oggetto CD2DGeometry.

```
CD2DGeometry(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget*<br/>
Puntatore alla destinazione di rendering.

*bAutoDestroy*<br/>
Indica che l'oggetto viene distrutto dal proprietario (pParentTarget).

##  <a name="combinewithgeometry"></a>  CD2DGeometry::CombineWithGeometry

Combina questa geometria con la geometria specificata e archivia il risultato in un ID2D1SimplifiedGeometrySink.

```
BOOL CombineWithGeometry(
    CD2DGeometry& inputGeometry,
    D2D1_COMBINE_MODE combineMode,
    const D2D1_MATRIX_3X2_F& inputGeometryTransform,
    ID2D1SimplifiedGeometrySink* geometrySink,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*inputGeometry*<br/>
Geometria da combinare con questa istanza.

*combineMode*<br/>
Il tipo di operazione di combinazione da eseguire.

*inputGeometryTransform*<br/>
La trasformazione da applicare a inputGeometry prima della combinazione.

*geometrySink*<br/>
Il risultato dell'operazione di combinazione.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra punti nell'approssimazione poligonale delle geometrie. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="comparewithgeometry"></a>  CD2DGeometry::CompareWithGeometry

Descrive l'intersezione tra la geometria e la geometria specificata. Il confronto viene eseguito utilizzando l'appiattimento tolleranza specificata.

```
D2D1_GEOMETRY_RELATION CompareWithGeometry(
    CD2DGeometry& inputGeometry,
    const D2D1_MATRIX_3X2_F& inputGeometryTransform,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*inputGeometry*<br/>
Geometria da testare.

*inputGeometryTransform*<br/>
La trasformazione da applicare a inputGeometry.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra punti nell'approssimazione poligonale delle geometrie. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="computearea"></a>  CD2DGeometry::ComputeArea

Calcola l'area della geometria dopo che è stato trasformato dalla matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.

```
BOOL ComputeArea(
    const D2D1_MATRIX_3X2_F& worldTransform,
    FLOAT& area,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*worldTransform*<br/>
La trasformazione da applicare a questa geometria prima di calcolare l'area.

*area*<br/>
Quando termina, questo metodo contiene un puntatore all'area della versione di questa geometria bidimensionale e trasformata. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="computelength"></a>  CD2DGeometry::ComputeLength

Calcola la lunghezza della geometria come se fosse ogni segmento spiegato in una riga.

```
BOOL ComputeLength(
    const D2D1_MATRIX_3X2_F& worldTransform,
    FLOAT& length,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*worldTransform*<br/>
La trasformazione da applicare alla geometria prima di calcolare la relativa lunghezza.

*length*<br/>
Quando termina, questo metodo contiene un puntatore alla lunghezza della geometria. Per le geometrie chiuse, la lunghezza include un segmento di chiusura implicita. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="computepointatlength"></a>  CD2DGeometry::ComputePointAtLength

Calcola il punto e il vettore tangente alla distanza indicata lungo la geometria dopo che è stato trasformato dalla matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.

```
BOOL ComputePointAtLength(
    FLOAT length,
    const D2D1_MATRIX_3X2_F& worldTransform,
    CD2DPointF& point,
    CD2DPointF& unitTangentVector,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*length*<br/>
La distanza lungo la geometria del punto e della tangente da trovare. Se la distanza è inferiore a 0, questo metodo calcola il primo punto di geometria. Se la distanza è maggiore della lunghezza della geometria, questo metodo calcola l'ultimo punto di geometria.

*worldTransform*<br/>
La trasformazione da applicare alla geometria prima di calcolare il punto specificato e una tangente.

*point*<br/>
Il percorso alla distanza indicata lungo la geometria. Se la geometria è vuota, questo punto contiene NaN come x e y valori.

*unitTangentVector*<br/>
Quando termina, questo metodo contiene un puntatore al vettore tangente alla distanza indicata lungo la geometria. Se la geometria è vuota, il vettore contiene NaN come x e y valori. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="destroy"></a>  CD2DGeometry:: Destroy

Elimina un oggetto CD2DGeometry.

```
virtual void Destroy();
```

##  <a name="detach"></a>  CD2DGeometry::Detach

Scollega interfaccia di risorse dall'oggetto

```
ID2D1Geometry* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia risorse scollegato.

##  <a name="fillcontainspoint"></a>  CD2DGeometry::FillContainsPoint

Indica se l'area riempita dalla geometria contiene il punto specificato dato l'appiattimento tolleranza specificata.

```
BOOL FillContainsPoint(
    CD2DPointF point,
    const D2D1_MATRIX_3X2_F& worldTransform,
    BOOL* contains,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*point*<br/>
Punto da testare.

*worldTransform*<br/>
La trasformazione da applicare alla geometria prima del test di contenimento.

*contains*<br/>
Quando termina, questo metodo contiene un valore booleano che è TRUE se l'area riempita dalla geometria contiene punto; in caso contrario, FALSE. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
La precisione numerica con cui il tracciato geometrico precisa e intersezione di percorso viene calcolato. Manca il riempimento per minore rispetto alla tolleranza per i punti sono ancora considerati interni. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="get"></a>  CD2DGeometry::Get

Restituisce l'interfaccia ID2D1Geometry

```
ID2D1Geometry* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia a ID2D1Geometry o NULL se l'oggetto non è ancora inizializzato.

##  <a name="getbounds"></a>  CD2DGeometry::GetBounds

```
BOOL GetBounds(
const D2D1_MATRIX_3X2_F& worldTransform,
CD2DRectF& bounds) const;
```

### <a name="parameters"></a>Parametri

*worldTransform*<br/>
*bounds*

### <a name="return-value"></a>Valore restituito

##  <a name="getwidenedbounds"></a>  CD2DGeometry::GetWidenedBounds

Ottiene i limiti della geometria dopo che è stata ampliata tramite la larghezza del tratto specificato e lo stile e trasformato dalla matrice specificata.

```
BOOL GetWidenedBounds(
    FLOAT strokeWidth,
    ID2D1StrokeStyle* strokeStyle,
    const D2D1_MATRIX_3X2_F& worldTransform,
    CD2DRectF& bounds,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*strokeWidth*<br/>
Valore in base al quale aumentare la geometria tracciandone il contorno.

*strokeStyle*<br/>
Lo stile del tratto che amplia la geometria.

*worldTransform*<br/>
Una trasformazione da applicare alla geometria dopo che la geometria viene trasformata e dopo che è stata tracciata la geometria.

*bounds*<br/>
Quando termina, questo metodo contiene i limiti della geometria ampliata. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra punti nell'approssimazione poligonale delle geometrie. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="isvalid"></a>  CD2DGeometry::IsValid

Verifica la validità della risorsa

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

##  <a name="m_pgeometry"></a>  CD2DGeometry::m_pGeometry

Puntatore a ID2D1Geometry una.

```
ID2D1Geometry* m_pGeometry;
```

##  <a name="operator_id2d1geometry_star"></a>  CD2DGeometry::operator ID2D1Geometry *

Restituisce l'interfaccia ID2D1Geometry

```
operator ID2D1Geometry*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia a ID2D1Geometry o NULL se l'oggetto non è ancora inizializzato.

##  <a name="outline"></a>  CD2DGeometry::Outline

Calcola la struttura della geometria e scrive il risultato in un ID2D1SimplifiedGeometrySink.

```
BOOL Outline(
    const D2D1_MATRIX_3X2_F& worldTransform,
    ID2D1SimplifiedGeometrySink* geometrySink,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*worldTransform*<br/>
La trasformazione da applicare alla struttura della geometria.

*geometrySink*<br/>
ID2D1SimplifiedGeometrySink a cui viene aggiunto nella struttura della geometria trasformata.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="simplify"></a>  CD2DGeometry::Simplify

Crea una versione semplificata della geometria che contiene solo linee e curve di Bézier cubiche (facoltativamente) e scrive il risultato in un ID2D1SimplifiedGeometrySink.

```
BOOL Simplify(
    D2D1_GEOMETRY_SIMPLIFICATION_OPTION simplificationOption,
    const D2D1_MATRIX_3X2_F& worldTransform,
    ID2D1SimplifiedGeometrySink* geometrySink,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*simplificationOption*<br/>
Un valore che specifica se la geometria semplificata deve contenere le curve.

*worldTransform*<br/>
La trasformazione da applicare alla geometria semplificata.

*geometrySink*<br/>
ID2D1SimplifiedGeometrySink a cui viene aggiunto alla geometria semplificata.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="strokecontainspoint"></a>  CD2DGeometry::StrokeContainsPoint

Determina se il tratto della geometria contiene il punto specificato dato il spessore del tratto specificati, lo stile e trasformazione.

```
BOOL StrokeContainsPoint(
    CD2DPointF point,
    FLOAT strokeWidth,
    ID2D1StrokeStyle* strokeStyle,
    const D2D1_MATRIX_3X2_F& worldTransform,
    BOOL* contains,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*point*<br/>
Il punto di test di contenimento.

*strokeWidth*<br/>
Lo spessore del tratto da applicare.

*strokeStyle*<br/>
Lo stile del tratto da applicare.

*worldTransform*<br/>
La trasformazione da applicare alla geometria tratteggiata.

*contains*<br/>
Quando termina, questo metodo contiene un valore booleano impostato su TRUE se il tratto della geometria contiene il punto specificato; in caso contrario, FALSE. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
La precisione numerica con cui il tracciato geometrico precisa e intersezione di percorso viene calcolato. Manca il tratto dalla minore rispetto alla tolleranza per i punti sono ancora considerati interni. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="tessellate"></a>  CD2DGeometry::Tessellate

Crea un set di in senso orario triangoli che analizza la geometria dopo che è stata trasformata utilizzando la matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.

```
BOOL Tessellate(
    const D2D1_MATRIX_3X2_F& worldTransform,
    ID2D1TessellationSink* tessellationSink,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*worldTransform*<br/>
La trasformazione da applicare a questa geometria oppure NULL.

*tessellationSink*<br/>
ID2D1TessellationSink a cui viene aggiunto.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="widen"></a>  CD2DGeometry::Widen

Amplia la geometria da tratto specificato e scrive il risultato in un ID2D1SimplifiedGeometrySink dopo che è stato trasformato dalla matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.

```
BOOL Widen(
    FLOAT strokeWidth,
    ID2D1StrokeStyle* strokeStyle,
    const D2D1_MATRIX_3X2_F& worldTransform,
    ID2D1SimplifiedGeometrySink* geometrySink,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*strokeWidth*<br/>
Valore in base al quale aumentare la geometria.

*strokeStyle*<br/>
Stile del tratto da applicare alla geometria oppure NULL.

*worldTransform*<br/>
La trasformazione da applicare alla geometria dopo averla ingrandita.

*geometrySink*<br/>
ID2D1SimplifiedGeometrySink a cui viene aggiunto alla geometria ampliata.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
