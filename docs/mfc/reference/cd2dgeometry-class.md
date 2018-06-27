---
title: Classe CD2DGeometry | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 51e3c24464ff74ab262cd241dcdce68037d530f9
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36955102"
---
# <a name="cd2dgeometry-class"></a>Classe CD2DGeometry
Wrapper per ID2D1Geometry.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DGeometry : public CD2DResource;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometry::CD2DGeometry](#cd2dgeometry)|Costruisce un oggetto CD2DGeometry.|  
|[CD2DGeometry:: ~ CD2DGeometry](#_dtorcd2dgeometry)|Distruttore. Chiamata eseguita quando viene eliminata definitivamente un oggetto di tipo geometry D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometry::Attach](#attach)|Associa esistente interfaccia risorsa per l'oggetto|  
|[CD2DGeometry::CombineWithGeometry](#combinewithgeometry)|Combina questa geometria con la geometria specificata e archivia il risultato in un ID2D1SimplifiedGeometrySink.|  
|[CD2DGeometry::CompareWithGeometry](#comparewithgeometry)|Descrive l'intersezione tra questa geometria e la geometria specificata. Il confronto viene eseguito utilizzando la tolleranza di conversione specificata.|  
|[CD2DGeometry::ComputeArea](#computearea)|Calcola l'area della geometria dopo che è stato trasformato dalla matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.|  
|[CD2DGeometry::ComputeLength](#computelength)|Calcola la lunghezza della geometria come se fosse ogni segmento spiegato in una riga.|  
|[CD2DGeometry::ComputePointAtLength](#computepointatlength)|Calcola il punto e il vettore tangente alla distanza indicata lungo la geometria dopo che è stato trasformato dalla matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.|  
|[CD2DGeometry:: Destroy](#destroy)|Elimina un oggetto CD2DGeometry. (Esegue l'override [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|  
|[CD2DGeometry::Detach](#detach)|Disconnette l'interfaccia di risorsa dall'oggetto|  
|[CD2DGeometry::FillContainsPoint](#fillcontainspoint)|Indica se l'area riempita dalla geometria conterrebbe al punto specificato specificato la tolleranza di conversione specificata.|  
|[CD2DGeometry::Get](#get)|Restituisce l'interfaccia ID2D1Geometry|  
|[CD2DGeometry::GetBounds](#getbounds)||  
|[CD2DGeometry::GetWidenedBounds](#getwidenedbounds)|Ottiene i limiti della geometria dopo che è stata ampliata tramite lo spessore del tratto specificati e lo stile e trasformato dalla matrice specificata.|  
|[CD2DGeometry::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|  
|[CD2DGeometry::Outline](#outline)|Calcola la struttura della geometria e scrive il risultato in un ID2D1SimplifiedGeometrySink.|  
|[CD2DGeometry::Simplify](#simplify)|Crea una versione semplificata della geometria che contiene solo le linee e curve di Bezier cubiche (facoltativamente) e scrive il risultato in un ID2D1SimplifiedGeometrySink.|  
|[CD2DGeometry::StrokeContainsPoint](#strokecontainspoint)|Determina se il tratto della geometria contiene il punto specificato dato il spessore del tratto specificati, lo stile e trasformazione.|  
|[CD2DGeometry::Tessellate](#tessellate)|Crea un set di triangoli in senso orario curvatura che analizza la geometria dopo che è stata trasformata utilizzando la matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.|  
|[CD2DGeometry::Widen](#widen)|Ingrandisce la geometria per il tratto specificato e scrive il risultato in un ID2D1SimplifiedGeometrySink dopo che è stato trasformato dalla matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometry::operator ID2D1Geometry *](#operator_id2d1geometry_star)|Restituisce l'interfaccia ID2D1Geometry|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometry::m_pGeometry](#m_pgeometry)|Puntatore a un ID2D1Geometry.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 `CD2DGeometry`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dgeometry"></a>  CD2DGeometry:: ~ CD2DGeometry  
 Distruttore. Chiamata eseguita quando viene eliminata definitivamente un oggetto di tipo geometry D2D.  
  
```  
virtual ~CD2DGeometry();
```  
  
##  <a name="attach"></a>  CD2DGeometry::Attach  
 Associa esistente interfaccia risorsa per l'oggetto  
  
```  
void Attach(ID2D1Geometry* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 *pResource*  
 Interfaccia risorsa esistente. Non può essere NULL  
  
##  <a name="cd2dgeometry"></a>  CD2DGeometry::CD2DGeometry  
 Costruisce un oggetto CD2DGeometry.  
  
```  
CD2DGeometry(
    CRenderTarget* pParentTarget,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *pParentTarget*  
 Puntatore alla destinazione di rendering.  
  
 *flag bAutoDestroy*  
 Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).  
  
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
 *inputGeometry*  
 La geometria da combinare con questa istanza.  
  
 *combineMode*  
 Il tipo di operazione di combinazione da eseguire.  
  
 *inputGeometryTransform*  
 La trasformazione da applicare a inputGeometry prima della combinazione.  
  
 *geometrySink*  
 Il risultato dell'operazione di combinazione.  
  
 *flatteningTolerance*  
 I limiti massimi la distanza tra punti nell'approssimazione poligonale delle geometrie. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="comparewithgeometry"></a>  CD2DGeometry::CompareWithGeometry  
 Descrive l'intersezione tra questa geometria e la geometria specificata. Il confronto viene eseguito utilizzando la tolleranza di conversione specificata.  
  
```  
D2D1_GEOMETRY_RELATION CompareWithGeometry(
    CD2DGeometry& inputGeometry,  
    const D2D1_MATRIX_3X2_F& inputGeometryTransform,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *inputGeometry*  
 La geometria da testare.  
  
 *inputGeometryTransform*  
 La trasformazione da applicare a inputGeometry.  
  
 *flatteningTolerance*  
 I limiti massimi la distanza tra punti nell'approssimazione poligonale delle geometrie. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
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
 *worldTransform*  
 La trasformazione da applicare a questa geometria prima del calcolo dell'area.  
  
 *Area*  
 Quando termina, questo metodo contiene un puntatore all'area della versione trasformata e bidimensionale di questa geometria. È necessario allocare spazio di archiviazione per questo parametro.  
  
 *flatteningTolerance*  
 I limiti massimi la distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
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
 *worldTransform*  
 La trasformazione da applicare alla geometria prima di calcolare la lunghezza.  
  
 *length*  
 Quando termina, questo metodo contiene un puntatore alla lunghezza della geometria. Per le geometrie chiuse, la lunghezza include un segmento di chiusura implicita. È necessario allocare spazio di archiviazione per questo parametro.  
  
 *flatteningTolerance*  
 I limiti massimi la distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
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
 *length*  
 La distanza lungo la geometria del punto e della tangente da trovare. Se la distanza è inferiore a 0, questo metodo viene calcolato automaticamente il primo punto di geometria. Se la distanza è maggiore della lunghezza della geometria, questo metodo calcola l'ultimo punto della geometria.  
  
 *worldTransform*  
 La trasformazione da applicare alla geometria prima di calcolare il punto specificato e tangente.  
  
 *Punto*  
 Il percorso alla distanza indicata lungo la geometria. Se la geometria è vuota, questo punto contiene NaN come x e y valori.  
  
 *unitTangentVector*  
 Quando termina, questo metodo contiene un puntatore al vettore tangente alla distanza indicata lungo la geometria. Se la geometria è vuota, il vettore contiene NaN come x e y valori. È necessario allocare spazio di archiviazione per questo parametro.  
  
 *flatteningTolerance*  
 I limiti massimi la distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="destroy"></a>  CD2DGeometry:: Destroy  
 Elimina un oggetto CD2DGeometry.  
  
```  
virtual void Destroy();
```  
  
##  <a name="detach"></a>  CD2DGeometry::Detach  
 Disconnette l'interfaccia di risorsa dall'oggetto  
  
```  
ID2D1Geometry* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia risorsa scollegato.  
  
##  <a name="fillcontainspoint"></a>  CD2DGeometry::FillContainsPoint  
 Indica se l'area riempita dalla geometria conterrebbe al punto specificato specificato la tolleranza di conversione specificata.  
  
```  
BOOL FillContainsPoint(
    CD2DPointF point,  
    const D2D1_MATRIX_3X2_F& worldTransform,  
    BOOL* contains,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *Punto*  
 Punto da verificare.  
  
 *worldTransform*  
 La trasformazione da applicare alla geometria prima di testare il contenimento.  
  
 *Contiene*  
 Quando termina, questo metodo contiene un valore booleano che è TRUE se l'area riempita dalla geometria contiene punto; in caso contrario, FALSE. È necessario allocare spazio di archiviazione per questo parametro.  
  
 *flatteningTolerance*  
 La precisione numerica con cui il percorso geometrico preciso e intersezione del percorso viene calcolata. Punti in cui Manca il riempimento per meno la tolleranza ancora considerati all'interno. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="get"></a>  CD2DGeometry::Get  
 Restituisce l'interfaccia ID2D1Geometry  
  
```  
ID2D1Geometry* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1Geometry o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="getbounds"></a>  CD2DGeometry::GetBounds  
  
```   
BOOL GetBounds(
const D2D1_MATRIX_3X2_F& worldTransform,  
CD2DRectF& bounds) const; 
```  
  
### <a name="parameters"></a>Parametri  
 *worldTransform*  
 *limiti*  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="getwidenedbounds"></a>  CD2DGeometry::GetWidenedBounds  
 Ottiene i limiti della geometria dopo che è stata ampliata tramite lo spessore del tratto specificati e lo stile e trasformato dalla matrice specificata.  
  
```  
BOOL GetWidenedBounds(
    FLOAT strokeWidth,  
    ID2D1StrokeStyle* strokeStyle,  
    const D2D1_MATRIX_3X2_F& worldTransform,  
    CD2DRectF& bounds,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *strokeWidth*  
 Quantità in base al quale aumentare la geometria da traccia il contorno.  
  
 *strokeStyle*  
 Lo stile del tratto che amplia la geometria.  
  
 *worldTransform*  
 Una trasformazione da applicare alla geometria dopo che la geometria viene trasformata e dopo che la geometria che è stata tracciata.  
  
 *limiti*  
 Quando questo metodo viene restituito, contiene i limiti della geometria ingrandita. È necessario allocare spazio di archiviazione per questo parametro.  
  
 *flatteningTolerance*  
 I limiti massimi la distanza tra punti nell'approssimazione poligonale delle geometrie. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="isvalid"></a>  CD2DGeometry::IsValid  
 Verifica la validità della risorsa  
  
```  
virtual BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la risorsa è valido. in caso contrario, FALSE.  
  
##  <a name="m_pgeometry"></a>  CD2DGeometry::m_pGeometry  
 Puntatore a un ID2D1Geometry.  
  
```  
ID2D1Geometry* m_pGeometry;  
```  
  
##  <a name="operator_id2d1geometry_star"></a>  CD2DGeometry::operator ID2D1Geometry *  
 Restituisce l'interfaccia ID2D1Geometry  
  
```  
operator ID2D1Geometry*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1Geometry o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="outline"></a>  CD2DGeometry::Outline  
 Calcola la struttura della geometria e scrive il risultato in un ID2D1SimplifiedGeometrySink.  
  
```  
BOOL Outline(
    const D2D1_MATRIX_3X2_F& worldTransform,  
    ID2D1SimplifiedGeometrySink* geometrySink,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *worldTransform*  
 La trasformazione da applicare alla struttura della geometria.  
  
 *geometrySink*  
 ID2D1SimplifiedGeometrySink a cui è accodata struttura trasformato della geometria.  
  
 *flatteningTolerance*  
 I limiti massimi la distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="simplify"></a>  CD2DGeometry::Simplify  
 Crea una versione semplificata della geometria che contiene solo le linee e curve di Bezier cubiche (facoltativamente) e scrive il risultato in un ID2D1SimplifiedGeometrySink.  
  
```  
BOOL Simplify(
    D2D1_GEOMETRY_SIMPLIFICATION_OPTION simplificationOption,  
    const D2D1_MATRIX_3X2_F& worldTransform,  
    ID2D1SimplifiedGeometrySink* geometrySink,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *simplificationOption*  
 Un valore che specifica se la geometria semplificata deve contenere le curve.  
  
 *worldTransform*  
 La trasformazione da applicare alla geometria semplificata.  
  
 *geometrySink*  
 ID2D1SimplifiedGeometrySink a cui viene aggiunta la geometria semplificata.  
  
 *flatteningTolerance*  
 I limiti massimi la distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
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
 *Punto*  
 Punto da verificare per il contenimento.  
  
 *strokeWidth*  
 Lo spessore del tratto da applicare.  
  
 *strokeStyle*  
 Stile del tratto da applicare.  
  
 *worldTransform*  
 La trasformazione da applicare alla geometria tratteggiata.  
  
 *Contiene*  
 Quando termina, questo metodo contiene un valore booleano impostato su TRUE se il tratto della geometria contiene il punto specificato; in caso contrario, FALSE. È necessario allocare spazio di archiviazione per questo parametro.  
  
 *flatteningTolerance*  
 La precisione numerica con cui il percorso geometrico preciso e intersezione del percorso viene calcolata. Punti in cui Manca il tratto da meno di tolleranza vengono comunque considerati all'interno. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="tessellate"></a>  CD2DGeometry::Tessellate  
 Crea un set di triangoli in senso orario curvatura che analizza la geometria dopo che è stata trasformata utilizzando la matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.  
  
```  
BOOL Tessellate(
    const D2D1_MATRIX_3X2_F& worldTransform,  
    ID2D1TessellationSink* tessellationSink,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *worldTransform*  
 La trasformazione da applicare al geometry o NULL.  
  
 *tessellationSink*  
 ID2D1TessellationSink a cui viene aggiunto.  
  
 *flatteningTolerance*  
 I limiti massimi la distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="widen"></a>  CD2DGeometry::Widen  
 Ingrandisce la geometria per il tratto specificato e scrive il risultato in un ID2D1SimplifiedGeometrySink dopo che è stato trasformato dalla matrice specificata e resa bidimensionale utilizzando la tolleranza specificata.  
  
```  
BOOL Widen(
    FLOAT strokeWidth,  
    ID2D1StrokeStyle* strokeStyle,  
    const D2D1_MATRIX_3X2_F& worldTransform,  
    ID2D1SimplifiedGeometrySink* geometrySink,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *strokeWidth*  
 Quantità in base al quale aumentare la geometria.  
  
 *strokeStyle*  
 Stile del tratto da applicare alla geometria, o NULL.  
  
 *worldTransform*  
 La trasformazione da applicare alla geometria dopo averla ingrandita.  
  
 *geometrySink*  
 ID2D1SimplifiedGeometrySink a cui viene aggiunta la geometria ampliata.  
  
 *flatteningTolerance*  
 I limiti massimi la distanza tra punti nell'approssimazione poligonale della geometria. Valori inferiori o superiori producono risultati più precisi, ma possono rallentare l'esecuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
