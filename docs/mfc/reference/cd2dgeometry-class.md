---
description: 'Altre informazioni su: classe CD2DGeometry'
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
ms.openlocfilehash: 2c902554ba5377ce9f7a4a481d4001a9ef7a47f9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193448"
---
# <a name="cd2dgeometry-class"></a>Classe CD2DGeometry

Wrapper per ID2D1Geometry.

## <a name="syntax"></a>Sintassi

```
class CD2DGeometry : public CD2DResource;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DGeometry:: CD2DGeometry](#cd2dgeometry)|Costruisce un oggetto CD2DGeometry.|
|[CD2DGeometry:: ~ CD2DGeometry](#_dtorcd2dgeometry)|Distruttore. Chiamato quando un oggetto Geometry D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DGeometry:: Connetti](#attach)|Connette l'interfaccia di risorsa esistente all'oggetto|
|[CD2DGeometry:: CombineWithGeometry](#combinewithgeometry)|Combina questa geometria con la geometria specificata e archivia il risultato in un ID2D1SimplifiedGeometrySink.|
|[CD2DGeometry:: CompareWithGeometry](#comparewithgeometry)|Descrive l'intersezione tra la geometria e la geometria specificata. Il confronto viene eseguito usando la tolleranza di Flat specificata.|
|[CD2DGeometry:: ComputeArea](#computearea)|Calcola l'area della geometria dopo che è stata trasformata dalla matrice specificata e appiattita utilizzando la tolleranza specificata.|
|[CD2DGeometry:: ComputeLength](#computelength)|Calcola la lunghezza della geometria come se ogni segmento venisse registrato in una riga.|
|[CD2DGeometry:: ComputePointAtLength](#computepointatlength)|Calcola il vettore punto e tangente alla distanza specificata lungo la geometria dopo che è stato trasformato dalla matrice specificata e bidimensionale utilizzando la tolleranza specificata.|
|[CD2DGeometry::D estroy](#destroy)|Elimina definitivamente un oggetto CD2DGeometry. Esegue l'override di [CD2DResource::D estroy](../../mfc/reference/cd2dresource-class.md#destroy).|
|[CD2DGeometry::D etach](#detach)|Scollega l'interfaccia della risorsa dall'oggetto|
|[CD2DGeometry:: FillContainsPoint](#fillcontainspoint)|Indica se l'area riempita dalla geometria deve contenere il punto specificato in base alla tolleranza di Flat specificata.|
|[CD2DGeometry:: Get](#get)|Restituisce l'interfaccia ID2D1Geometry|
|[CD2DGeometry:: GetBounds](#getbounds)||
|[CD2DGeometry:: GetWidenedBounds](#getwidenedbounds)|Ottiene i limiti della geometria dopo che è stato ampliato in base alla larghezza e allo stile del tratto specificato e trasformato dalla matrice specificata.|
|[CD2DGeometry:: IsValid](#isvalid)|Verifica la validità delle risorse (esegue l'override di [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|
|[CD2DGeometry:: Outline](#outline)|Calcola il contorno della geometria e scrive il risultato in un ID2D1SimplifiedGeometrySink.|
|[CD2DGeometry:: semplifica](#simplify)|Crea una versione semplificata della geometria che contiene solo righe e (facoltativamente) curve di Bézier cubiche e scrive il risultato in un ID2D1SimplifiedGeometrySink.|
|[CD2DGeometry:: StrokeContainsPoint](#strokecontainspoint)|Determina se il tratto della geometria contiene il punto specificato dato lo spessore, lo stile e la trasformazione del tratto specificato.|
|[CD2DGeometry:: conteggiarla suddividerla](#tessellate)|Crea un set di triangoli in senso orario che analizza la geometria dopo che è stata trasformata utilizzando la matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.|
|[CD2DGeometry:: Widen](#widen)|Amplia la geometria in base al tratto specificato e scrive il risultato in un ID2D1SimplifiedGeometrySink dopo che è stato trasformato dalla matrice specificata e appiattito con la tolleranza specificata.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DGeometry:: operator ID2D1Geometry *](#operator_id2d1geometry_star)|Restituisce l'interfaccia ID2D1Geometry|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DGeometry:: m_pGeometry](#m_pgeometry)|Puntatore a un ID2D1Geometry.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DGeometry`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dgeometrycd2dgeometry"></a><a name="_dtorcd2dgeometry"></a> CD2DGeometry:: ~ CD2DGeometry

Distruttore. Chiamato quando un oggetto Geometry D2D viene eliminato definitivamente.

```
virtual ~CD2DGeometry();
```

## <a name="cd2dgeometryattach"></a><a name="attach"></a> CD2DGeometry:: Connetti

Connette l'interfaccia di risorsa esistente all'oggetto

```cpp
void Attach(ID2D1Geometry* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia risorsa esistente. Non può essere NULL

## <a name="cd2dgeometrycd2dgeometry"></a><a name="cd2dgeometry"></a> CD2DGeometry:: CD2DGeometry

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
Indica che l'oggetto verrà eliminato definitivamente dal proprietario (pParentTarget).

## <a name="cd2dgeometrycombinewithgeometry"></a><a name="combinewithgeometry"></a> CD2DGeometry:: CombineWithGeometry

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
Tipo di operazione di combinazione da eseguire.

*inputGeometryTransform*<br/>
Trasformazione da applicare a inputGeometry prima di combinare.

*geometrySink*<br/>
Risultato dell'operazione di combinazione.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra i punti nell'approssimazione poligonale delle geometrie. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dgeometrycomparewithgeometry"></a><a name="comparewithgeometry"></a> CD2DGeometry:: CompareWithGeometry

Descrive l'intersezione tra la geometria e la geometria specificata. Il confronto viene eseguito usando la tolleranza di Flat specificata.

```
D2D1_GEOMETRY_RELATION CompareWithGeometry(
    CD2DGeometry& inputGeometry,
    const D2D1_MATRIX_3X2_F& inputGeometryTransform,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*inputGeometry*<br/>
Geometria da verificare.

*inputGeometryTransform*<br/>
Trasformazione da applicare a inputGeometry.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra i punti nell'approssimazione poligonale delle geometrie. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dgeometrycomputearea"></a><a name="computearea"></a> CD2DGeometry:: ComputeArea

Calcola l'area della geometria dopo che è stata trasformata dalla matrice specificata e appiattita utilizzando la tolleranza specificata.

```
BOOL ComputeArea(
    const D2D1_MATRIX_3X2_F& worldTransform,
    FLOAT& area,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*worldTransform*<br/>
Trasformazione da applicare a questa geometria prima di calcolare la relativa area.

*area*<br/>
Quando termina, questo metodo contiene un puntatore all'area della versione trasformata bidimensionale di questa geometria. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra i punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dgeometrycomputelength"></a><a name="computelength"></a> CD2DGeometry:: ComputeLength

Calcola la lunghezza della geometria come se ogni segmento venisse registrato in una riga.

```
BOOL ComputeLength(
    const D2D1_MATRIX_3X2_F& worldTransform,
    FLOAT& length,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*worldTransform*<br/>
Trasformazione da applicare alla geometria prima di calcolare la lunghezza.

*length*<br/>
Quando termina, questo metodo contiene un puntatore alla lunghezza della geometria. Per le geometrie chiuse, la lunghezza include un segmento di chiusura implicito. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra i punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dgeometrycomputepointatlength"></a><a name="computepointatlength"></a> CD2DGeometry:: ComputePointAtLength

Calcola il vettore punto e tangente alla distanza specificata lungo la geometria dopo che è stato trasformato dalla matrice specificata e bidimensionale utilizzando la tolleranza specificata.

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
Distanza lungo la geometria del punto e della tangente da trovare. Se questa distanza è minore di 0, questo metodo calcola il primo punto della geometria. Se la distanza è maggiore della lunghezza della geometria, questo metodo calcola l'ultimo punto della geometria.

*worldTransform*<br/>
Trasformazione da applicare alla geometria prima del calcolo del punto e della tangente specificati.

*punto*<br/>
Posizione alla distanza specificata lungo la geometria. Se la geometria è vuota, questo punto contiene NaN come valori x e y.

*unitTangentVector*<br/>
Quando termina, questo metodo contiene un puntatore al vettore tangente alla distanza specificata lungo la geometria. Se la geometria è vuota, questo vettore contiene NaN come valori x e y. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra i punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dgeometrydestroy"></a><a name="destroy"></a> CD2DGeometry::D estroy

Elimina definitivamente un oggetto CD2DGeometry.

```
virtual void Destroy();
```

## <a name="cd2dgeometrydetach"></a><a name="detach"></a> CD2DGeometry::D etach

Scollega l'interfaccia della risorsa dall'oggetto

```
ID2D1Geometry* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di risorsa scollegata.

## <a name="cd2dgeometryfillcontainspoint"></a><a name="fillcontainspoint"></a> CD2DGeometry:: FillContainsPoint

Indica se l'area riempita dalla geometria deve contenere il punto specificato in base alla tolleranza di Flat specificata.

```
BOOL FillContainsPoint(
    CD2DPointF point,
    const D2D1_MATRIX_3X2_F& worldTransform,
    BOOL* contains,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Il punto da testare.

*worldTransform*<br/>
Trasformazione da applicare alla geometria prima di eseguire il test di contenimento.

*contains*<br/>
Quando termina, questo metodo contiene un valore bool che è TRUE se l'area riempita dalla geometria contiene il punto; in caso contrario, FALSE. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
Precisione numerica con cui viene calcolato il percorso geometrico preciso e l'intersezione del percorso. I punti mancanti del riempimento inferiore alla tolleranza sono ancora considerati all'interno. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dgeometryget"></a><a name="get"></a> CD2DGeometry:: Get

Restituisce l'interfaccia ID2D1Geometry

```
ID2D1Geometry* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Geometry o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dgeometrygetbounds"></a><a name="getbounds"></a> CD2DGeometry:: GetBounds

```
BOOL GetBounds(
const D2D1_MATRIX_3X2_F& worldTransform,
CD2DRectF& bounds) const;
```

### <a name="parameters"></a>Parametri

*worldTransform*<br/>
*limiti*

### <a name="return-value"></a>Valore restituito

## <a name="cd2dgeometrygetwidenedbounds"></a><a name="getwidenedbounds"></a> CD2DGeometry:: GetWidenedBounds

Ottiene i limiti della geometria dopo che è stato ampliato in base alla larghezza e allo stile del tratto specificato e trasformato dalla matrice specificata.

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
Valore in base al quale ampliare la geometria tracciando il contorno.

*strokeStyle*<br/>
Stile del tratto che allarga la geometria.

*worldTransform*<br/>
Trasformazione da applicare alla geometria dopo che la geometria è stata trasformata e dopo che la geometria è stata tracciata.

*limiti*<br/>
Quando termina, questo metodo contiene i limiti della geometria ampliata. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra i punti nell'approssimazione poligonale delle geometrie. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dgeometryisvalid"></a><a name="isvalid"></a> CD2DGeometry:: IsValid

Verifica la validità delle risorse

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dgeometrym_pgeometry"></a><a name="m_pgeometry"></a> CD2DGeometry:: m_pGeometry

Puntatore a un ID2D1Geometry.

```
ID2D1Geometry* m_pGeometry;
```

## <a name="cd2dgeometryoperator-id2d1geometry"></a><a name="operator_id2d1geometry_star"></a> CD2DGeometry:: operator ID2D1Geometry *

Restituisce l'interfaccia ID2D1Geometry

```
operator ID2D1Geometry*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Geometry o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dgeometryoutline"></a><a name="outline"></a> CD2DGeometry:: Outline

Calcola il contorno della geometria e scrive il risultato in un ID2D1SimplifiedGeometrySink.

```
BOOL Outline(
    const D2D1_MATRIX_3X2_F& worldTransform,
    ID2D1SimplifiedGeometrySink* geometrySink,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*worldTransform*<br/>
Trasformazione da applicare alla struttura di geometria.

*geometrySink*<br/>
ID2D1SimplifiedGeometrySink a cui viene accodata la struttura Geometry trasformata.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra i punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dgeometrysimplify"></a><a name="simplify"></a> CD2DGeometry:: semplifica

Crea una versione semplificata della geometria che contiene solo righe e (facoltativamente) curve di Bézier cubiche e scrive il risultato in un ID2D1SimplifiedGeometrySink.

```
BOOL Simplify(
    D2D1_GEOMETRY_SIMPLIFICATION_OPTION simplificationOption,
    const D2D1_MATRIX_3X2_F& worldTransform,
    ID2D1SimplifiedGeometrySink* geometrySink,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*simplificationOption*<br/>
Valore che specifica se la geometria semplificata deve contenere curve.

*worldTransform*<br/>
Trasformazione da applicare alla geometria semplificata.

*geometrySink*<br/>
ID2D1SimplifiedGeometrySink a cui viene aggiunta la geometria semplificata.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra i punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dgeometrystrokecontainspoint"></a><a name="strokecontainspoint"></a> CD2DGeometry:: StrokeContainsPoint

Determina se il tratto della geometria contiene il punto specificato dato lo spessore, lo stile e la trasformazione del tratto specificato.

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

*punto*<br/>
Punto di cui eseguire il test di contenimento.

*strokeWidth*<br/>
Spessore del tratto da applicare.

*strokeStyle*<br/>
Stile del tratto da applicare.

*worldTransform*<br/>
Trasformazione da applicare alla geometria tratteggiata.

*contains*<br/>
Quando termina, questo metodo contiene un valore booleano impostato su TRUE se il tratto della geometria contiene il punto specificato; in caso contrario, FALSE. È necessario allocare spazio di archiviazione per questo parametro.

*flatteningTolerance*<br/>
Precisione numerica con cui viene calcolato il percorso geometrico preciso e l'intersezione del percorso. I punti mancanti del tratto da minore di quanto la tolleranza sono ancora considerati all'interno. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dgeometrytessellate"></a><a name="tessellate"></a> CD2DGeometry:: conteggiarla suddividerla

Crea un set di triangoli in senso orario che analizza la geometria dopo che è stata trasformata utilizzando la matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.

```
BOOL Tessellate(
    const D2D1_MATRIX_3X2_F& worldTransform,
    ID2D1TessellationSink* tessellationSink,
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;
```

### <a name="parameters"></a>Parametri

*worldTransform*<br/>
Trasformazione da applicare a questa geometria o NULL.

*tessellationSink*<br/>
ID2D1TessellationSink a cui viene accodato tassellati.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra i punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="cd2dgeometrywiden"></a><a name="widen"></a> CD2DGeometry:: Widen

Amplia la geometria in base al tratto specificato e scrive il risultato in un ID2D1SimplifiedGeometrySink dopo che è stato trasformato dalla matrice specificata e appiattito con la tolleranza specificata.

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
Valore in base al quale ampliare la geometria.

*strokeStyle*<br/>
Stile del tratto da applicare alla geometria o NULL.

*worldTransform*<br/>
Trasformazione da applicare alla geometria dopo che è stata ampliata.

*geometrySink*<br/>
ID2D1SimplifiedGeometrySink a cui viene aggiunta la geometria ampliata.

*flatteningTolerance*<br/>
Limiti massimi della distanza tra i punti nell'approssimazione poligonale della geometria. Valori inferiori producono risultati più precisi ma possono rallentare l'esecuzione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
