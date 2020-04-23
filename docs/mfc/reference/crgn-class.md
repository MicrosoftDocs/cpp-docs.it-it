---
title: Classe CRgn
ms.date: 11/04/2016
f1_keywords:
- CRgn
- AFXWIN/CRgn
- AFXWIN/CRgn::CRgn
- AFXWIN/CRgn::CombineRgn
- AFXWIN/CRgn::CopyRgn
- AFXWIN/CRgn::CreateEllipticRgn
- AFXWIN/CRgn::CreateEllipticRgnIndirect
- AFXWIN/CRgn::CreateFromData
- AFXWIN/CRgn::CreateFromPath
- AFXWIN/CRgn::CreatePolygonRgn
- AFXWIN/CRgn::CreatePolyPolygonRgn
- AFXWIN/CRgn::CreateRectRgn
- AFXWIN/CRgn::CreateRectRgnIndirect
- AFXWIN/CRgn::CreateRoundRectRgn
- AFXWIN/CRgn::EqualRgn
- AFXWIN/CRgn::FromHandle
- AFXWIN/CRgn::GetRegionData
- AFXWIN/CRgn::GetRgnBox
- AFXWIN/CRgn::OffsetRgn
- AFXWIN/CRgn::PtInRegion
- AFXWIN/CRgn::RectInRegion
- AFXWIN/CRgn::SetRectRgn
helpviewer_keywords:
- CRgn [MFC], CRgn
- CRgn [MFC], CombineRgn
- CRgn [MFC], CopyRgn
- CRgn [MFC], CreateEllipticRgn
- CRgn [MFC], CreateEllipticRgnIndirect
- CRgn [MFC], CreateFromData
- CRgn [MFC], CreateFromPath
- CRgn [MFC], CreatePolygonRgn
- CRgn [MFC], CreatePolyPolygonRgn
- CRgn [MFC], CreateRectRgn
- CRgn [MFC], CreateRectRgnIndirect
- CRgn [MFC], CreateRoundRectRgn
- CRgn [MFC], EqualRgn
- CRgn [MFC], FromHandle
- CRgn [MFC], GetRegionData
- CRgn [MFC], GetRgnBox
- CRgn [MFC], OffsetRgn
- CRgn [MFC], PtInRegion
- CRgn [MFC], RectInRegion
- CRgn [MFC], SetRectRgn
ms.assetid: d904da84-76aa-481e-8780-b09485f49e64
ms.openlocfilehash: e84526eec8f4fd4b1935fa39bc7f4ed3c4d5dd71
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754482"
---
# <a name="crgn-class"></a>Classe CRgn

Incapsula un'area GDI (Graphics Device Interface) di Windows.

## <a name="syntax"></a>Sintassi

```
class CRgn : public CGdiObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRgn::CRgn](#crgn)|Costruisce un oggetto `CRgn`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRgn::CombineRgn](#combinergn)|Imposta `CRgn` un oggetto in modo che sia `CRgn` equivalente all'unione di due oggetti specificati.|
|[CRgn::CopyRgn](#copyrgn)|Imposta `CRgn` un oggetto in modo che `CRgn` sia una copia di un oggetto specificato.|
|[CRgn::CreateEllipticRgn](#createellipticrgn)|Inizializza un `CRgn` oggetto con un'area ellittica.|
|[CRgn::CreateEllipticRgnIndiretto](#createellipticrgnindirect)|Inizializza un `CRgn` oggetto con un'area ellittica definita da una struttura [RECT.](/windows/win32/api/windef/ns-windef-rect)|
|[CRgn::CreateFromData](#createfromdata)|Crea un'area dai dati di area e trasformazione indicati.|
|[CRgn::CreateFromPath](#createfrompath)|Crea un'area dal percorso selezionato nel contesto di periferica specificato.|
|[CRgn::CreatePolygonRgn](#createpolygonrgn)|Inizializza un `CRgn` oggetto con una regione poligonale. Il sistema chiude automaticamente il poligono, se necessario, disegnando una linea dall'ultimo vertice al primo.|
|[CRgn::CreatePolyPolygonRgn](#createpolypolygonrgn)|Inizializza un `CRgn` oggetto con una regione costituita da una serie di poligoni chiusi. I poligoni possono essere disgiunti o sovrapposti.|
|[CRgn::CreateRectRgn](#createrectrgn)|Inizializza un `CRgn` oggetto con un'area rettangolare.|
|[CRgn::CreateRectRgnIndiretto](#createrectrgnindirect)|Inizializza un `CRgn` oggetto con un'area rettangolare definita da un tructure [RECT.](/windows/win32/api/windef/ns-windef-rect)|
|[CRgn::CreateRoundRectRgn](#createroundrectrgn)|Inizializza un `CRgn` oggetto con un'area rettangolare con angoli arrotondati.|
|[CRgn::EqualRgn](#equalrgn)|Controlla `CRgn` due oggetti per determinare se sono equivalenti.|
|[CRgn::FromHandle](#fromhandle)|Restituisce un `CRgn` puntatore a un oggetto quando viene fornito un handle a un'area di Windows.|
|[CRgn::GetRegionData](#getregiondata)|Riempie il buffer specificato con i dati che descrivono l'area specificata.|
|[CRgn::GetRgnBox](#getrgnbox)|Recupera le coordinate del rettangolo `CRgn` di delimitazione di un oggetto.|
|[CRgn::OffsetRgn](#offsetrgn)|Sposta `CRgn` un oggetto in base agli offset specificati.|
|[CRgn::PtInRegion](#ptinregion)|Determina se un punto specificato si trova nell'area.|
|[CRgn::RectInRegion](#rectinregion)|Determina se una parte di un rettangolo specificato si trova entro i limiti dell'area.|
|[CRgn::SetRectRgn](#setrectrgn)|Imposta `CRgn` l'oggetto sull'area rettangolare specificata.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRgn::operator HRGN](#operator_hrgn)|Restituisce l'handle `CRgn` di Windows contenuto nell'oggetto.|

## <a name="remarks"></a>Osservazioni

Una regione è un'area ellittica o poligonale all'interno di una finestra. Per utilizzare le aree, utilizzare `CRgn` le funzioni membro della classe `CDC`con le funzioni di ritaglio definite come membri della classe .

Le funzioni `CRgn` membro di create, modifica e recupero informazioni sull'oggetto area per cui vengono chiamate.

Per ulteriori informazioni `CRgn`sull'utilizzo di , vedere [Oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CRgn`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="crgncombinergn"></a><a name="combinergn"></a>CRgn::CombineRgn

Crea una nuova area GDI combinando due aree esistenti.

```
int CombineRgn(
    CRgn* pRgn1,
    CRgn* pRgn2,
    int nCombineMode);
```

### <a name="parameters"></a>Parametri

*pRgn1*<br/>
Identifica un'area esistente.

*pRgn2 (in base al tr)*<br/>
Identifica un'area esistente.

*nModaleCombinazione*<br/>
Specifica l'operazione da eseguire quando si combinano le due aree di origine. Può essere uno dei seguenti valori:

- RGN_AND Utilizza aree sovrapposte di entrambe le regioni (intersezione).

- RGN_COPY Crea una copia della regione 1 (identificata da *pRgn1*).

- RGN_DIFF Crea una regione costituita dalle aree della regione 1 (identificate da *pRgn1*) che non fanno parte della regione 2 (identificata da *pRgn2*).

- RGN_OR Combina entrambe le regioni nella loro interezza (unione).

- RGN_XOR Combina entrambe le regioni ma rimuove le aree sovrapposte.

### <a name="return-value"></a>Valore restituito

Specifica il tipo di area risultante. Può essere uno dei valori seguenti:

- COMPLEXREGION La nuova regione ha bordi sovrapposti.

- ERRORE Nessuna nuova area creata.

- NULLREGION La nuova area è vuota.

- SIMPLEREGION La nuova area non ha bordi sovrapposti.

### <a name="remarks"></a>Osservazioni

Le aree vengono combinate come specificato da *nCombineMode*.

Le due aree specificate vengono combinate e `CRgn` l'handle di area risultante viene archiviato nell'oggetto. Pertanto, qualsiasi area `CRgn` memorizzata nell'oggetto viene sostituita dall'area combinata.

La dimensione di un'area è limitata a 32.767 per 32.767 unità logiche o 64K di memoria, a seconda di quale sia più piccola.

Utilizzare [CopyRgn](#copyrgn) per copiare semplicemente un'area in un'altra area.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#144](../../mfc/codesnippet/cpp/crgn-class_1.cpp)]

## <a name="crgncopyrgn"></a><a name="copyrgn"></a>CRgn::CopyRgn

Copia nell'oggetto `CRgn` l'area definita da *pRgnSrc.*

```
int CopyRgn(CRgn* pRgnSrc);
```

### <a name="parameters"></a>Parametri

*pRgnSrc*<br/>
Identifica un'area esistente.

### <a name="return-value"></a>Valore restituito

Specifica il tipo di area risultante. Può essere uno dei valori seguenti:

- COMPLEXREGION La nuova regione ha bordi sovrapposti.

- ERRORE Nessuna nuova area creata.

- NULLREGION La nuova area è vuota.

- SIMPLEREGION La nuova area non ha bordi sovrapposti.

### <a name="remarks"></a>Osservazioni

La nuova area sostituisce l'area precedentemente memorizzata nell'oggetto. `CRgn` Questa funzione è un caso speciale della funzione membro [CombineRgn.](#combinergn)

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRgn::CreateEllipticRgn](#createellipticrgn).

## <a name="crgncreateellipticrgn"></a><a name="createellipticrgn"></a>CRgn::CreateEllipticRgn

Crea un'area ellittica.

```
BOOL CreateEllipticRgn(
    int x1,
    int y1,
    int x2,
    int y2);
```

### <a name="parameters"></a>Parametri

*x1 (in modo non in0*<br/>
Specifica la coordinata x logica dell'angolo superiore sinistro del rettangolo di delimitazione dell'ellisse.

*y1*<br/>
Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo di delimitazione dell'ellisse.

*x2 (in modo non in0*<br/>
Specifica la coordinata x logica dell'angolo inferiore destro del rettangolo di delimitazione dell'ellisse.

*y2*<br/>
Specifica la coordinata y logica dell'angolo inferiore destro del rettangolo di delimitazione dell'ellisse.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'area è definita dal rettangolo di delimitazione specificato da *x1*, *y1*, *x2*e *y2*. L'area viene `CRgn` archiviata nell'oggetto.

La dimensione di un'area è limitata a 32.767 per 32.767 unità logiche o 64K di memoria, a seconda di quale sia più piccola.

Al termine dell'utilizzo di `CreateEllipticRgn` un'area creata con la funzione, un'applicazione `DeleteObject` deve selezionare l'area al di fuori del contesto di dispositivo e usare la funzione per rimuoverla.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#145](../../mfc/codesnippet/cpp/crgn-class_2.cpp)]

## <a name="crgncreateellipticrgnindirect"></a><a name="createellipticrgnindirect"></a>CRgn::CreateEllipticRgnIndiretto

Crea un'area ellittica.

```
BOOL CreateEllipticRgnIndirect(LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*Lprect*<br/>
Punta a `RECT` una `CRect` struttura o a un oggetto che contiene le coordinate logiche degli angoli superiore sinistro e inferiore destro del rettangolo di delimitazione dell'ellisse.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'area è definita dalla struttura o dall'oggetto a `CRgn` cui punta *lpRect* e viene archiviata nell'oggetto.

La dimensione di un'area è limitata a 32.767 per 32.767 unità logiche o 64K di memoria, a seconda di quale sia più piccola.

Al termine dell'utilizzo di `CreateEllipticRgnIndirect` un'area creata con la funzione, un'applicazione `DeleteObject` deve selezionare l'area al di fuori del contesto di dispositivo e usare la funzione per rimuoverla.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRgn::CreateRectRgnIndirect](#createrectrgnindirect).

## <a name="crgncreatefromdata"></a><a name="createfromdata"></a>CRgn::CreateFromData

Crea un'area dai dati di area e trasformazione indicati.

```
BOOL CreateFromData(
    const XFORM* lpXForm,
    int nCount,
    const RGNDATA* pRgnData);
```

### <a name="parameters"></a>Parametri

*Maschera lpX*<br/>
Punta a una struttura ata [XFORM](/windows/win32/api/wingdi/ns-wingdi-xform)che definisce la trasformazione da eseguire sulla regione. Se questo puntatore è NULL, viene utilizzata la trasformazione di identità.

*nConteggio*<br/>
Specifica il numero di byte a cui punta *pRgnData*.

*pRgnData (informazioni in base al taè)*<br/>
Punta a una struttura di dati [RGNDATA](/windows/win32/api/wingdi/ns-wingdi-rgndata) che contiene i dati della regione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Un'applicazione può recuperare i dati `CRgn::GetRegionData` per un'area chiamando la funzione.

## <a name="crgncreatefrompath"></a><a name="createfrompath"></a>CRgn::CreateFromPath

Crea un'area dal percorso selezionato nel contesto di periferica specificato.

```
BOOL CreateFromPath(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Identifica un contesto di dispositivo che contiene un percorso chiuso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Il contesto di dispositivo identificato dal parametro *pDC* deve contenere un percorso chiuso. Dopo `CreateFromPath` aver convertito un percorso in un'area, Windows elimina il percorso chiuso dal contesto di periferica.

## <a name="crgncreatepolygonrgn"></a><a name="createpolygonrgn"></a>CRgn::CreatePolygonRgn

Crea una regione poligonale.

```
BOOL CreatePolygonRgn(
    LPPOINT lpPoints,
    int nCount,
    int nMode);
```

### <a name="parameters"></a>Parametri

*LpPunti*<br/>
Punta a una `POINT` matrice di `CPoint` strutture o a una matrice di oggetti. Ogni struttura specifica la coordinata x e la coordinata y di un vertice del poligono. La `POINT` struttura ha la seguente forma:

```cpp
typedef struct tagPOINT {
    int x;
    int y;
} POINT;
```

*nConteggio*<br/>
Specifica il numero `POINT` di `CPoint` strutture o oggetti nella matrice a cui punta *lpPoints*.

*nModalità*<br/>
Specifica la modalità di riempimento per l'area. Questo parametro può essere ALTERNATE o WINDING.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il sistema chiude automaticamente il poligono, se necessario, disegnando una linea dall'ultimo vertice al primo. L'area risultante `CRgn` viene archiviata nell'oggetto.

La dimensione di un'area è limitata a 32.767 per 32.767 unità logiche o 64K di memoria, a seconda di quale sia più piccola.

Quando la modalità di riempimento poligono è ALTERNATE, il sistema riempie l'area tra i lati del poligono dispari e pari su ogni linea di scansione. Cioè, il sistema riempie l'area tra il primo e il secondo lato, tra il terzo e il quarto lato e così via.

Quando la modalità di riempimento poligono è WINDING, il sistema utilizza la direzione in cui è stata disegnata una figura per determinare se riempire un'area. Ogni segmento di linea in un poligono viene disegnato in senso orario o antiorario. Ogni volta che una linea immaginaria tracciata da un'area chiusa all'esterno di una figura passa attraverso un segmento di linea in senso orario, viene incrementato un conteggio. Quando la linea passa attraverso un segmento di riga in senso antiorario, il conteggio viene decrementato. L'area viene riempita se il conteggio è diverso da zero quando la linea raggiunge l'esterno della figura.

Quando un'applicazione ha terminato `CreatePolygonRgn` di usare un'area creata con la funzione, deve selezionare l'area al di fuori del contesto di dispositivo e usare la `DeleteObject` funzione per rimuoverla.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#146](../../mfc/codesnippet/cpp/crgn-class_3.cpp)]

## <a name="crgncreatepolypolygonrgn"></a><a name="createpolypolygonrgn"></a>CRgn::CreatePolyPolygonRgn

Crea una regione costituita da una serie di poligoni chiusi.

```
BOOL CreatePolyPolygonRgn(
    LPPOINT lpPoints,
    LPINT lpPolyCounts,
    int nCount,
    int nPolyFillMode);
```

### <a name="parameters"></a>Parametri

*LpPunti*<br/>
Punta a una `POINT` matrice di `CPoint` strutture o a una matrice di oggetti che definisce i vertici dei poligoni. Ogni poligono deve essere chiuso in modo esplicito perché il sistema non li chiude automaticamente. I poligoni vengono specificati consecutivamente. La `POINT` struttura ha la seguente forma:

```cpp
typedef struct tagPOINT {
    int x;
    int y;
} POINT;
```

*lpPolyCounts*<br/>
Punta a una matrice di interi. Il primo numero intero specifica il numero di vertici nel primo poligono nella matrice *lpPoints,* il secondo numero intero specifica il numero di vertici nel secondo poligono e così via.

*nConteggio*<br/>
Specifica il numero totale di numeri interi nella matrice *lpPolyCounts.*

*nPolyFillMode (modalità di riempimento)*<br/>
Specifica la modalità di riempimento poligono. Questo valore può essere ALTERNATE o WINDING.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'area risultante `CRgn` viene archiviata nell'oggetto.

I poligoni possono essere disgiunti o sovrapposti.

La dimensione di un'area è limitata a 32.767 per 32.767 unità logiche o 64K di memoria, a seconda di quale sia più piccola.

Quando la modalità di riempimento poligono è ALTERNATE, il sistema riempie l'area tra i lati del poligono dispari e pari su ogni linea di scansione. Cioè, il sistema riempie l'area tra il primo e il secondo lato, tra il terzo e il quarto lato e così via.

Quando la modalità di riempimento poligono è WINDING, il sistema utilizza la direzione in cui è stata disegnata una figura per determinare se riempire un'area. Ogni segmento di linea in un poligono viene disegnato in senso orario o antiorario. Ogni volta che una linea immaginaria tracciata da un'area chiusa all'esterno di una figura passa attraverso un segmento di linea in senso orario, viene incrementato un conteggio. Quando la linea passa attraverso un segmento di riga in senso antiorario, il conteggio viene decrementato. L'area viene riempita se il conteggio è diverso da zero quando la linea raggiunge l'esterno della figura.

Quando un'applicazione ha terminato `CreatePolyPolygonRgn` di utilizzare un'area creata con la funzione, è necessario selezionare l'area al di fuori del contesto di dispositivo e utilizzare la funzione membro [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) per rimuoverla.

## <a name="crgncreaterectrgn"></a><a name="createrectrgn"></a>CRgn::CreateRectRgn

Crea un'area rettangolare `CRgn` memorizzata nell'oggetto.

```
BOOL CreateRectRgn(
    int x1,
    int y1,
    int x2,
    int y2);
```

### <a name="parameters"></a>Parametri

*x1 (in modo non in0*<br/>
Specifica la coordinata x logica dell'angolo superiore sinistro dell'area.

*y1*<br/>
Specifica la coordinata y logica dell'angolo superiore sinistro dell'area.

*x2 (in modo non in0*<br/>
Specifica la coordinata x logica dell'angolo inferiore destro dell'area.

*y2*<br/>
Specifica la coordinata y logica dell'angolo inferiore destro dell'area.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La dimensione di un'area è limitata a 32.767 per 32.767 unità logiche o 64K di memoria, a seconda di quale sia più piccola.

Al termine dell'utilizzo di `CreateRectRgn`un'area creata da , un'applicazione deve utilizzare la funzione membro [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) per rimuovere l'area.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#147](../../mfc/codesnippet/cpp/crgn-class_4.cpp)]

Per un altro esempio, vedere [CRgn::CombineRgn](#combinergn).

## <a name="crgncreaterectrgnindirect"></a><a name="createrectrgnindirect"></a>CRgn::CreateRectRgnIndiretto

Crea un'area rettangolare `CRgn` memorizzata nell'oggetto.

```
BOOL CreateRectRgnIndirect(LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*Lprect*<br/>
Punta a `RECT` una `CRect` struttura o a un oggetto che contiene le coordinate logiche degli angoli superiore sinistro e inferiore destro dell'area. La `RECT` struttura ha la seguente forma:

```cpp
typedef struct tagRECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La dimensione di un'area è limitata a 32.767 per 32.767 unità logiche o 64K di memoria, a seconda di quale sia più piccola.

Al termine dell'utilizzo di `CreateRectRgnIndirect`un'area creata da , un'applicazione deve utilizzare la funzione membro [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) per rimuovere l'area.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#148](../../mfc/codesnippet/cpp/crgn-class_5.cpp)]

## <a name="crgncreateroundrectrgn"></a><a name="createroundrectrgn"></a>CRgn::CreateRoundRectRgn

Crea un'area rettangolare con angoli `CRgn` arrotondati memorizzati nell'oggetto.

```
BOOL CreateRoundRectRgn(
    int x1,
    int y1,
    int x2,
    int y2,
    int x3,
    int y3);
```

### <a name="parameters"></a>Parametri

*x1 (in modo non in0*<br/>
Specifica la coordinata x logica dell'angolo superiore sinistro dell'area.

*y1*<br/>
Specifica la coordinata y logica dell'angolo superiore sinistro dell'area.

*x2 (in modo non in0*<br/>
Specifica la coordinata x logica dell'angolo inferiore destro dell'area.

*y2*<br/>
Specifica la coordinata y logica dell'angolo inferiore destro dell'area.

*x3 (in modo non instato*<br/>
Specifica la larghezza dell'ellisse utilizzata per creare gli angoli arrotondati.

*y3*<br/>
Specifica l'altezza dell'ellisse utilizzata per creare gli angoli arrotondati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La dimensione di un'area è limitata a 32.767 per 32.767 unità logiche o 64K di memoria, a seconda di quale sia più piccola.

Quando un'applicazione ha terminato `CreateRoundRectRgn` di utilizzare un'area creata con la funzione, è necessario selezionare l'area al di fuori del contesto di dispositivo e utilizzare la funzione membro [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) per rimuoverla.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#149](../../mfc/codesnippet/cpp/crgn-class_6.cpp)]

## <a name="crgncrgn"></a><a name="crgn"></a>CRgn::CRgn

Costruisce un oggetto `CRgn`.

```
CRgn();
```

### <a name="remarks"></a>Osservazioni

Il `m_hObject` membro dati non contiene un'area GDI di Windows valida finché `CRgn` l'oggetto non viene inizializzato con una o più delle altre funzioni membro.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRgn::CreateRoundRectRgn](#createroundrectrgn).

## <a name="crgnequalrgn"></a><a name="equalrgn"></a>CRgn::EqualRgn

Determina se l'area specificata è equivalente `CRgn` all'area archiviata nell'oggetto.

```
BOOL EqualRgn(CRgn* pRgn) const;
```

### <a name="parameters"></a>Parametri

*pRgn*<br/>
Identifica un'area.

### <a name="return-value"></a>Valore restituito

Diverso da zero se le due regioni sono equivalenti; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#150](../../mfc/codesnippet/cpp/crgn-class_7.cpp)]

## <a name="crgnfromhandle"></a><a name="fromhandle"></a>CRgn::FromHandle

Restituisce un `CRgn` puntatore a un oggetto quando viene fornito un handle a un'area di Windows.

```
static CRgn* PASCAL FromHandle(HRGN hRgn);
```

### <a name="parameters"></a>Parametri

*hRgn*<br/>
Specifica un handle per un'area di Windows.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CRgn`. Se la funzione non ha avuto esito positivo, il valore restituito è NULL.

### <a name="remarks"></a>Osservazioni

Se `CRgn` un oggetto non è già associato `CRgn` alla maniglia, viene creato e associato un oggetto temporaneo. Questo `CRgn` oggetto temporaneo è valido solo fino alla successiva inattività dell'applicazione nel ciclo di eventi, in cui vengono eliminati tutti gli oggetti grafici temporanei. Un altro modo per dire questo è che l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

## <a name="crgngetregiondata"></a><a name="getregiondata"></a>CRgn::GetRegionData

Riempie il buffer specificato con i dati che descrivono l'area.

```
int GetRegionData(
    LPRGNDATA lpRgnData,
    int nCount) const;
```

### <a name="parameters"></a>Parametri

*lpRgnData (informazioni in base a un'azione*<br/>
Punta a una struttura di dati [RGNDATA](/windows/win32/api/wingdi/ns-wingdi-rgndata) che riceve le informazioni. Se questo parametro è NULL, il valore restituito contiene il numero di byte necessari per i dati dell'area.

*nConteggio*<br/>
Specifica la dimensione, in byte, del buffer *lpRgnData.*

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo e *nCount* specifica un numero adeguato di byte, il valore restituito è sempre *nCount*. Se la funzione ha esito negativo o se *nCount* specifica un numero di byte inferiore a quello adeguato, il valore restituito è 0 (errore).

### <a name="remarks"></a>Osservazioni

Questi dati includono le dimensioni dei rettangoli che costituiscono l'area. Questa funzione viene utilizzata `CRgn::CreateFromData` insieme alla funzione.

## <a name="crgngetrgnbox"></a><a name="getrgnbox"></a>CRgn::GetRgnBox

Recupera le coordinate del rettangolo `CRgn` di delimitazione dell'oggetto.

```
int GetRgnBox(LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*Lprect*<br/>
Punta a `RECT` una `CRect` struttura o a un oggetto per ricevere le coordinate del rettangolo di delimitazione. La `RECT` struttura ha la seguente forma:

`typedef struct tagRECT {`

`int left;`

`int top;`

`int right;`

`int bottom;`

`} RECT;`

### <a name="return-value"></a>Valore restituito

Specifica il tipo di area. Può essere uno dei valori seguenti:

- COMPLEXREGION La regione ha bordi sovrapposti.

- L'area NULLREGION è vuota.

- L'oggetto ERROR `CRgn` non specifica un'area valida.

- L'area SIMPLEREGION non ha bordi sovrapposti.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRgn::CreatePolygonRgn](#createpolygonrgn).

## <a name="crgnoffsetrgn"></a><a name="offsetrgn"></a>CRgn::OffsetRgn

Sposta l'area `CRgn` memorizzata nell'oggetto in base agli offset specificati.

```
int OffsetRgn(
    int x,
    int y);

int OffsetRgn(POINT point);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Specifica il numero di unità da spostare a sinistra o a destra.

*Y*<br/>
Specifica il numero di unità da spostare verso l'alto o verso il basso.

*Punto*<br/>
La coordinata x del *punto* specifica il numero di unità da spostare a sinistra o a destra. La coordinata y del *punto* specifica il numero di unità da spostare verso l'alto o verso il basso. Il parametro *point* `POINT` può essere `CPoint` una struttura o un oggetto.

### <a name="return-value"></a>Valore restituito

Tipo della nuova area. Può essere uno dei seguenti valori:

- COMPLEXREGION La regione ha bordi sovrapposti.

- Errore L'handle dell'area non è valido.

- L'area NULLREGION è vuota.

- L'area SIMPLEREGION non ha bordi sovrapposti.

### <a name="remarks"></a>Osservazioni

La funzione sposta le unità *x* della regione lungo l'asse x e le unità *y* lungo l'asse y.

I valori delle coordinate di un'area devono essere minori o uguali a 32.767 e maggiori o uguali a -32.768. I parametri *x* e *y* devono essere scelti con attenzione per evitare coordinate di regione non valide.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRgn::CreateEllipticRgn](#createellipticrgn).

## <a name="crgnoperator-hrgn"></a><a name="operator_hrgn"></a>CRgn::operator HRGN

Utilizzare questo operatore per ottenere l'handle `CRgn` GDI di Windows associato dell'oggetto.

```
operator HRGN() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un `CRgn` handle per l'oggetto GDI di Windows rappresentato dall'oggetto; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto HRGN.

Per altre informazioni sull'uso di oggetti grafici, vedere l'articolo [Oggetti grafici](/windows/win32/gdi/graphic-objects) in Windows SDK.

## <a name="crgnptinregion"></a><a name="ptinregion"></a>CRgn::PtInRegion

Controlla se il punto specificato da *x* e `CRgn` *y* si trova nell'area memorizzata nell'oggetto.

```
BOOL PtInRegion(
    int x,
    int y) const;

BOOL PtInRegion(POINT point) const;
```

### <a name="parameters"></a>Parametri

*x*<br/>
Specifica la coordinata x logica del punto da testare.

*Y*<br/>
Specifica la coordinata y logica del punto da testare.

*Punto*<br/>
Le coordinate x e y del *punto* specificano le coordinate x e y del punto di cui verificare il valore. Il parametro *point* `POINT` può essere `CPoint` una struttura o un oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il punto si trova nell'area; in caso contrario 0.

## <a name="crgnrectinregion"></a><a name="rectinregion"></a>CRgn::RectInRegion

Determina se qualsiasi parte del rettangolo specificato da *lpRect* si `CRgn` trova all'interno dei limiti dell'area archiviata nell'oggetto.

```
BOOL RectInRegion(LPCRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*Lprect*<br/>
Punta a `RECT` una `CRect` struttura o a un oggetto. La `RECT` struttura ha la seguente forma:

```cpp
typedef struct tagRECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se una parte del rettangolo specificato si trova all'interno dei limiti dell'area; in caso contrario 0.

## <a name="crgnsetrectrgn"></a><a name="setrectrgn"></a>CRgn::SetRectRgn

Crea un'area rettangolare.

```cpp
void SetRectRgn(
    int x1,
    int y1,
    int x2,
    int y2);

void SetRectRgn(LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*x1 (in modo non in0*<br/>
Specifica la coordinata x dell'angolo superiore sinistro dell'area rettangolare.

*y1*<br/>
Specifica la coordinata y dell'angolo superiore sinistro dell'area rettangolare.

*x2 (in modo non in0*<br/>
Specifica la coordinata x dell'angolo inferiore destro dell'area rettangolare.

*y2*<br/>
Specifica la coordinata y dell'angolo inferiore destro dell'area rettangolare.

*Lprect*<br/>
Specifica l'area rettangolare. Può essere un puntatore a una `RECT` struttura o un `CRect` oggetto.

### <a name="remarks"></a>Osservazioni

A differenza di [CreateRectRgn](#createrectrgn), tuttavia, non alloca memoria aggiuntiva dall'heap dell'applicazione Windows locale. Utilizza invece lo spazio allocato `CRgn` per l'area archiviata nell'oggetto. Ciò significa `CRgn` che l'oggetto deve essere già stato `SetRectRgn`inizializzato con un'area Windows valida prima di chiamare . I punti forniti da *x1*, *y1*, *x2*e *y2* specificano la dimensione minima dello spazio allocato.

Utilizzare questa funzione `CreateRectRgn` anziché la funzione membro per evitare chiamate al gestore della memoria locale.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
