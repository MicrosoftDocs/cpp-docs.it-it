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
ms.openlocfilehash: 66721f34a8ac2b6dac6addcfa04a88b46a37ee60
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916834"
---
# <a name="crgn-class"></a>Classe CRgn

Incapsula un'area GDI (Graphics Device Interface) di Windows.

## <a name="syntax"></a>Sintassi

```
class CRgn : public CGdiObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRgn::CRgn](#crgn)|Costruisce un oggetto `CRgn`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CRgn::CombineRgn](#combinergn)|Imposta un `CRgn` oggetto in modo che sia equivalente all'Unione di due oggetti specificati `CRgn` .|
|[CRgn::CopyRgn](#copyrgn)|Imposta un `CRgn` oggetto in modo che sia una copia di un oggetto `CRgn` specificato.|
|[CRgn::CreateEllipticRgn](#createellipticrgn)|Inizializza un `CRgn` oggetto con un'area ellittica.|
|[CRgn::CreateEllipticRgnIndirect](#createellipticrgnindirect)|Inizializza un `CRgn` oggetto con un'area ellittica definita da una struttura [Rect](/windows/desktop/api/windef/ns-windef-tagrect) .|
|[CRgn::CreateFromData](#createfromdata)|Crea un'area dall'area e dai dati di trasformazione specificati.|
|[CRgn::CreateFromPath](#createfrompath)|Crea un'area dal percorso selezionato nel contesto di dispositivo specificato.|
|[CRgn::CreatePolygonRgn](#createpolygonrgn)|Inizializza un `CRgn` oggetto con un'area poligonale. Il sistema chiude automaticamente il poligono, se necessario, disegnando una linea dall'ultimo vertice alla prima.|
|[CRgn::CreatePolyPolygonRgn](#createpolypolygonrgn)|Inizializza un `CRgn` oggetto con un'area costituita da una serie di poligoni chiusi. I poligoni possono essere non contigui oppure possono sovrapporsi.|
|[CRgn::CreateRectRgn](#createrectrgn)|Inizializza un `CRgn` oggetto con un'area rettangolare.|
|[CRgn::CreateRectRgnIndirect](#createrectrgnindirect)|Inizializza un `CRgn` oggetto con un'area rettangolare definita da una struttura [Rect](/windows/desktop/api/windef/ns-windef-tagrect) .|
|[CRgn::CreateRoundRectRgn](#createroundrectrgn)|Inizializza un `CRgn` oggetto con un'area rettangolare con angoli arrotondati.|
|[CRgn::EqualRgn](#equalrgn)|Controlla due `CRgn` oggetti per determinare se sono equivalenti.|
|[CRgn:: FromHandle](#fromhandle)|Restituisce un puntatore a un `CRgn` oggetto quando viene fornito un handle a un'area di Windows.|
|[CRgn::GetRegionData](#getregiondata)|Riempie il buffer specificato con i dati che descrivono l'area specificata.|
|[CRgn::GetRgnBox](#getrgnbox)|Recupera le coordinate del rettangolo di delimitazione di un `CRgn` oggetto.|
|[CRgn::OffsetRgn](#offsetrgn)|Sposta un `CRgn` oggetto in base agli offset specificati.|
|[CRgn::P tInRegion](#ptinregion)|Determina se un punto specificato si trova nell'area.|
|[CRgn::RectInRegion](#rectinregion)|Determina se una parte di un rettangolo specificato si trova all'interno dei limiti dell'area.|
|[CRgn::SetRectRgn](#setrectrgn)|Imposta l' `CRgn` oggetto sull'area rettangolare specificata.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CRgn:: operator HRGN](#operator_hrgn)|Restituisce l'handle di Windows contenuto nell' `CRgn` oggetto.|

## <a name="remarks"></a>Note

Un'area è un'area ellittica o poligonale all'interno di una finestra. Per usare le aree, è possibile usare le funzioni membro `CRgn` della classe con le funzioni di ritaglio definite come `CDC`membri della classe.

Le funzioni membro di `CRgn` creano, modificano e recuperano informazioni sull'oggetto Region per il quale vengono chiamati.

Per ulteriori informazioni sull'utilizzo `CRgn`di, vedere [oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CRgn`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="combinergn"></a>  CRgn::CombineRgn

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

*pRgn2*<br/>
Identifica un'area esistente.

*nCombineMode*<br/>
Specifica l'operazione da eseguire quando si combinano le due aree di origine. Può essere uno dei valori seguenti:

- RGN_AND USA aree sovrapposte di entrambe le aree (intersezione).

- RGN_COPY crea una copia dell'area 1 (identificata da *pRgn1*).

- RGN_DIFF crea un'area costituita dalle aree dell'area 1 (identificate da *pRgn1*) che non fanno parte dell'area 2 (identificata da *pRgn2*).

- RGN_OR combina entrambe le aree nel loro complesso (Unione).

- RGN_XOR combina entrambe le aree, ma rimuove le aree sovrapposte.

### <a name="return-value"></a>Valore restituito

Specifica il tipo dell'area risultante. Può essere uno dei valori seguenti:

- COMPLEXREGION nuova area presenta bordi sovrapposti.

- ERRORE non è stata creata alcuna nuova area.

- DINULLREGION nuova area è vuota.

- SIMPLEREGION nuova area non presenta bordi sovrapposti.

### <a name="remarks"></a>Note

Le aree vengono combinate come specificato da *nCombineMode*.

Le due aree specificate vengono combinate e l'handle dell'area risultante viene archiviato nell' `CRgn` oggetto. Pertanto, qualsiasi area viene archiviata nell' `CRgn` oggetto viene sostituita dall'area combinata.

Le dimensioni di un'area sono limitate a 32.767 da 32.767 unità logiche o 64K di memoria, a seconda del valore minore.

Usare [CopyRgn](#copyrgn) per copiare semplicemente un'area in un'altra area.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#144](../../mfc/codesnippet/cpp/crgn-class_1.cpp)]

##  <a name="copyrgn"></a>CRgn:: CopyRgn

Copia l'area definita da *pRgnSrc* nell' `CRgn` oggetto.

```
int CopyRgn(CRgn* pRgnSrc);
```

### <a name="parameters"></a>Parametri

*pRgnSrc*<br/>
Identifica un'area esistente.

### <a name="return-value"></a>Valore restituito

Specifica il tipo dell'area risultante. Può essere uno dei valori seguenti:

- COMPLEXREGION nuova area presenta bordi sovrapposti.

- ERRORE non è stata creata alcuna nuova area.

- DINULLREGION nuova area è vuota.

- SIMPLEREGION nuova area non presenta bordi sovrapposti.

### <a name="remarks"></a>Note

La nuova area sostituisce l'area precedentemente archiviata nell' `CRgn` oggetto. Questa funzione è un caso speciale della funzione membro [CombineRgn](#combinergn) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRgn:: CreateEllipticRgn](#createellipticrgn).

##  <a name="createellipticrgn"></a>  CRgn::CreateEllipticRgn

Crea un'area ellittica.

```
BOOL CreateEllipticRgn(
    int x1,
    int y1,
    int x2,
    int y2);
```

### <a name="parameters"></a>Parametri

*x1*<br/>
Specifica la coordinata x logica dell'angolo superiore sinistro del rettangolo di delimitazione dell'ellisse.

*y1*<br/>
Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo di delimitazione dell'ellisse.

*x2*<br/>
Specifica la coordinata x logica dell'angolo inferiore destro del rettangolo di delimitazione dell'ellisse.

*y2*<br/>
Specifica la coordinata y logica dell'angolo inferiore destro del rettangolo di delimitazione dell'ellisse.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

L'area è definita dal rettangolo di delimitazione specificato da *X1*, *Y1*, *X2*e *Y2*. L'area viene archiviata nell' `CRgn` oggetto.

Le dimensioni di un'area sono limitate a 32.767 da 32.767 unità logiche o 64K di memoria, a seconda del valore minore.

Al termine dell'uso di un'area creata con la `CreateEllipticRgn` funzione, un'applicazione deve selezionare l'area al di fuori del contesto di dispositivo e `DeleteObject` usare la funzione per rimuoverla.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#145](../../mfc/codesnippet/cpp/crgn-class_2.cpp)]

##  <a name="createellipticrgnindirect"></a>  CRgn::CreateEllipticRgnIndirect

Crea un'area ellittica.

```
BOOL CreateEllipticRgnIndirect(LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a una `RECT` struttura o a `CRect` un oggetto che contiene le coordinate logiche degli angoli superiore sinistro e inferiore destro del rettangolo di delimitazione dell'ellisse.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

L'area è definita dalla struttura o dall'oggetto a cui punta *lpRect* e viene archiviato nell' `CRgn` oggetto.

Le dimensioni di un'area sono limitate a 32.767 da 32.767 unità logiche o 64K di memoria, a seconda del valore minore.

Al termine dell'uso di un'area creata con la `CreateEllipticRgnIndirect` funzione, un'applicazione deve selezionare l'area al di fuori del contesto di dispositivo e `DeleteObject` usare la funzione per rimuoverla.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRgn:: CreateRectRgnIndirect](#createrectrgnindirect).

##  <a name="createfromdata"></a>CRgn:: CreateFromData

Crea un'area dall'area e dai dati di trasformazione specificati.

```
BOOL CreateFromData(
    const XFORM* lpXForm,
    int nCount,
    const RGNDATA* pRgnData);
```

### <a name="parameters"></a>Parametri

*lpXForm*<br/>
Punta a una struttura di dati [XFORM](/windows/desktop/api/wingdi/ns-wingdi-tagxform) che definisce la trasformazione da eseguire sull'area. Se questo puntatore è NULL, viene utilizzata la trasformazione di identità.

*nCount*<br/>
Specifica il numero di byte a cui punta *pRgnData*.

*pRgnData*<br/>
Punta a una struttura di dati [rgnData](/windows/desktop/api/wingdi/ns-wingdi-rgndata) che contiene i dati dell'area.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Un'applicazione può recuperare i dati per un'area chiamando la `CRgn::GetRegionData` funzione.

##  <a name="createfrompath"></a>  CRgn::CreateFromPath

Crea un'area dal percorso selezionato nel contesto di dispositivo specificato.

```
BOOL CreateFromPath(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Identifica un contesto di dispositivo che contiene un percorso chiuso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Il contesto di dispositivo identificato dal parametro *PDC* deve contenere un percorso chiuso. Dopo `CreateFromPath` che converte un percorso in un'area, Windows elimina il percorso chiuso dal contesto di dispositivo.

##  <a name="createpolygonrgn"></a>CRgn:: CreatePolygonRgn

Crea un'area poligonale.

```
BOOL CreatePolygonRgn(
    LPPOINT lpPoints,
    int nCount,
    int nMode);
```

### <a name="parameters"></a>Parametri

*lpPoints*<br/>
Punta a una matrice di `POINT` strutture o a una matrice `CPoint` di oggetti. Ogni struttura specifica la coordinata x e la coordinata y di un vertice del poligono. La `POINT` struttura ha il formato seguente:

```cpp
typedef struct tagPOINT {
    int x;
    int y;
} POINT;
```

*nCount*<br/>
Specifica il numero di `POINT` strutture o `CPoint` oggetti nella matrice a cui punta *lpPoints*.

*nMode*<br/>
Specifica la modalità di riempimento per l'area. Questo parametro può essere alternativo o a vento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Il sistema chiude automaticamente il poligono, se necessario, disegnando una linea dall'ultimo vertice alla prima. L'area risultante viene archiviata nell' `CRgn` oggetto.

Le dimensioni di un'area sono limitate a 32.767 da 32.767 unità logiche o 64K di memoria, a seconda del valore minore.

Quando la modalità di riempimento del poligono è alternativa, il sistema riempie l'area tra i lati del poligono con numero dispari e pari a ogni riga di analisi. Ovvero il sistema riempie l'area tra il primo e il secondo lato, tra il terzo e il quarto lato e così via.

Quando la modalità di riempimento del poligono viene completata, il sistema utilizza la direzione in cui è stata disegnata una figura per determinare se riempire un'area. Ogni segmento di linea in un poligono viene disegnato in senso orario o in senso antiorario. Ogni volta che una linea immaginaria disegnata da un'area racchiusa all'esterno di una figura passa attraverso un segmento di linea in senso orario, viene incrementato un conteggio. Quando la linea passa attraverso un segmento di linea in senso antiorario, il conteggio viene decrementato. L'area viene riempita se il conteggio è diverso da zero quando la linea raggiunge l'esterno della figura.

Quando un'applicazione ha terminato di usare un'area creata con `CreatePolygonRgn` la funzione, deve selezionare l'area al di fuori del contesto di dispositivo e `DeleteObject` usare la funzione per rimuoverla.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#146](../../mfc/codesnippet/cpp/crgn-class_3.cpp)]

##  <a name="createpolypolygonrgn"></a>  CRgn::CreatePolyPolygonRgn

Crea un'area costituita da una serie di poligoni chiusi.

```
BOOL CreatePolyPolygonRgn(
    LPPOINT lpPoints,
    LPINT lpPolyCounts,
    int nCount,
    int nPolyFillMode);
```

### <a name="parameters"></a>Parametri

*lpPoints*<br/>
Punta a una matrice di `POINT` strutture o a una matrice `CPoint` di oggetti che definisce i vertici dei poligoni. Ogni poligono deve essere chiuso in modo esplicito perché il sistema non li chiude automaticamente. I poligoni vengono specificati consecutivamente. La `POINT` struttura ha il formato seguente:

```cpp
typedef struct tagPOINT {
    int x;
    int y;
} POINT;
```

*lpPolyCounts*<br/>
Punta a una matrice di numeri interi. Il primo valore integer specifica il numero di vertici nel primo poligono nella matrice *lpPoints* , il secondo Integer specifica il numero di vertici nel secondo poligono e così via.

*nCount*<br/>
Specifica il numero totale di numeri interi nella matrice *lpPolyCounts* .

*nPolyFillMode*<br/>
Specifica la modalità di riempimento del poligono. Questo valore può essere alternativo o di AVVOLGImento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

L'area risultante viene archiviata nell' `CRgn` oggetto.

I poligoni possono essere non contigui oppure possono sovrapporsi.

Le dimensioni di un'area sono limitate a 32.767 da 32.767 unità logiche o 64K di memoria, a seconda del valore minore.

Quando la modalità di riempimento del poligono è alternativa, il sistema riempie l'area tra i lati del poligono con numero dispari e pari a ogni riga di analisi. Ovvero il sistema riempie l'area tra il primo e il secondo lato, tra il terzo e il quarto lato e così via.

Quando la modalità di riempimento del poligono viene completata, il sistema utilizza la direzione in cui è stata disegnata una figura per determinare se riempire un'area. Ogni segmento di linea in un poligono viene disegnato in senso orario o in senso antiorario. Ogni volta che una linea immaginaria disegnata da un'area racchiusa all'esterno di una figura passa attraverso un segmento di linea in senso orario, viene incrementato un conteggio. Quando la linea passa attraverso un segmento di linea in senso antiorario, il conteggio viene decrementato. L'area viene riempita se il conteggio è diverso da zero quando la linea raggiunge l'esterno della figura.

Quando un'applicazione ha terminato di usare un'area creata con `CreatePolyPolygonRgn` la funzione, deve selezionare l'area al di fuori del contesto di dispositivo e usare la funzione membro [CGdiObject::D eleteobject](../../mfc/reference/cgdiobject-class.md#deleteobject) per rimuoverla.

##  <a name="createrectrgn"></a>  CRgn::CreateRectRgn

Crea un'area rettangolare archiviata nell' `CRgn` oggetto.

```
BOOL CreateRectRgn(
    int x1,
    int y1,
    int x2,
    int y2);
```

### <a name="parameters"></a>Parametri

*x1*<br/>
Specifica la coordinata x logica dell'angolo superiore sinistro dell'area.

*y1*<br/>
Specifica la coordinata y logica dell'angolo superiore sinistro dell'area.

*x2*<br/>
Specifica la coordinata x logica dell'angolo inferiore destro dell'area.

*y2*<br/>
Specifica la coordinata y logica dell'angolo inferiore destro dell'area.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Le dimensioni di un'area sono limitate a 32.767 da 32.767 unità logiche o 64K di memoria, a seconda del valore minore.

Al termine dell'uso di un'area creata da `CreateRectRgn`, un'applicazione deve usare la funzione membro [CGdiObject::D eleteobject](../../mfc/reference/cgdiobject-class.md#deleteobject) per rimuovere l'area.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#147](../../mfc/codesnippet/cpp/crgn-class_4.cpp)]

Per un esempio aggiuntivo, vedere [CRgn:: CombineRgn](#combinergn).

##  <a name="createrectrgnindirect"></a>  CRgn::CreateRectRgnIndirect

Crea un'area rettangolare archiviata nell' `CRgn` oggetto.

```
BOOL CreateRectRgnIndirect(LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a una `RECT` struttura o `CRect` a un oggetto che contiene le coordinate logiche degli angoli superiore sinistro e inferiore destro dell'area. La `RECT` struttura ha il formato seguente:

```cpp
typedef struct tagRECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Le dimensioni di un'area sono limitate a 32.767 da 32.767 unità logiche o 64K di memoria, a seconda del valore minore.

Al termine dell'uso di un'area creata da `CreateRectRgnIndirect`, un'applicazione deve usare la funzione membro [CGdiObject::D eleteobject](../../mfc/reference/cgdiobject-class.md#deleteobject) per rimuovere l'area.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#148](../../mfc/codesnippet/cpp/crgn-class_5.cpp)]

##  <a name="createroundrectrgn"></a>  CRgn::CreateRoundRectRgn

Crea un'area rettangolare con angoli arrotondati archiviati nell' `CRgn` oggetto.

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

*x1*<br/>
Specifica la coordinata x logica dell'angolo superiore sinistro dell'area.

*y1*<br/>
Specifica la coordinata y logica dell'angolo superiore sinistro dell'area.

*x2*<br/>
Specifica la coordinata x logica dell'angolo inferiore destro dell'area.

*y2*<br/>
Specifica la coordinata y logica dell'angolo inferiore destro dell'area.

*x3*<br/>
Specifica la larghezza dell'ellisse utilizzata per creare gli angoli arrotondati.

*y3*<br/>
Specifica l'altezza dell'ellisse utilizzata per creare gli angoli arrotondati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Le dimensioni di un'area sono limitate a 32.767 da 32.767 unità logiche o 64K di memoria, a seconda del valore minore.

Quando un'applicazione ha terminato di usare un'area creata con `CreateRoundRectRgn` la funzione, deve selezionare l'area al di fuori del contesto di dispositivo e usare la funzione membro [CGdiObject::D eleteobject](../../mfc/reference/cgdiobject-class.md#deleteobject) per rimuoverla.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#149](../../mfc/codesnippet/cpp/crgn-class_6.cpp)]

##  <a name="crgn"></a>  CRgn::CRgn

Costruisce un oggetto `CRgn`.

```
CRgn();
```

### <a name="remarks"></a>Note

Il `m_hObject` membro dati non contiene un'area di Windows GDI valida fino a quando l'oggetto non viene inizializzato con una o `CRgn` più delle altre funzioni membro.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRgn:: CreateRoundRectRgn](#createroundrectrgn).

##  <a name="equalrgn"></a>  CRgn::EqualRgn

Determina se l'area specificata è equivalente all'area archiviata nell' `CRgn` oggetto.

```
BOOL EqualRgn(CRgn* pRgn) const;
```

### <a name="parameters"></a>Parametri

*pRgn*<br/>
Identifica un'area.

### <a name="return-value"></a>Valore restituito

Diverso da zero se le due aree sono equivalenti; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#150](../../mfc/codesnippet/cpp/crgn-class_7.cpp)]

##  <a name="fromhandle"></a>CRgn:: FromHandle

Restituisce un puntatore a un `CRgn` oggetto quando viene fornito un handle a un'area di Windows.

```
static CRgn* PASCAL FromHandle(HRGN hRgn);
```

### <a name="parameters"></a>Parametri

*hRgn*<br/>
Specifica un handle per un'area di Windows.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CRgn` . Se la funzione ha esito negativo, il valore restituito è NULL.

### <a name="remarks"></a>Note

Se un `CRgn` oggetto non è già collegato all'handle, viene creato e `CRgn` collegato un oggetto temporaneo. Questo oggetto `CRgn` temporaneo è valido solo fino alla successiva esecuzione del tempo di inattività dell'applicazione nel ciclo di eventi, quindi vengono eliminati tutti gli oggetti grafici temporanei. Un altro modo per affermare questo problema è che l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

##  <a name="getregiondata"></a>CRgn:: GetRegionData

Riempie il buffer specificato con i dati che descrivono l'area.

```
int GetRegionData(
    LPRGNDATA lpRgnData,
    int nCount) const;
```

### <a name="parameters"></a>Parametri

*lpRgnData*<br/>
Punta a una struttura di dati [rgnData](/windows/desktop/api/wingdi/ns-wingdi-rgndata) che riceve le informazioni. Se questo parametro è NULL, il valore restituito contiene il numero di byte necessari per i dati dell'area.

*nCount*<br/>
Specifica la dimensione, in byte, del buffer *lpRgnData* .

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo e *nCount* specifica un numero appropriato di byte, il valore restituito è sempre *nCount*. Se la funzione ha esito negativo o se *nCount* specifica un numero di byte inferiore al numero appropriato, il valore restituito è 0 (errore).

### <a name="remarks"></a>Note

Questi dati includono le dimensioni dei rettangoli che costituiscono l'area. Questa funzione viene utilizzata insieme `CRgn::CreateFromData` alla funzione.

##  <a name="getrgnbox"></a>CRgn:: GetRgnBox

Recupera le coordinate del rettangolo di delimitazione dell' `CRgn` oggetto.

```
int GetRgnBox(LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a una `RECT` struttura o `CRect` a un oggetto per ricevere le coordinate del rettangolo di delimitazione. La `RECT` struttura ha il formato seguente:

`typedef struct tagRECT {`

`int left;`

`int top;`

`int right;`

`int bottom;`

`} RECT;`

### <a name="return-value"></a>Valore restituito

Specifica il tipo dell'area. Può essere uno dei valori seguenti:

- L'area COMPLEXREGION presenta bordi sovrapposti.

- L'area DINULLREGION è vuota.

- L' `CRgn` oggetto Error non specifica un'area valida.

- L'area SIMPLEREGION non presenta bordi sovrapposti.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRgn:: CreatePolygonRgn](#createpolygonrgn).

##  <a name="offsetrgn"></a>  CRgn::OffsetRgn

Sposta l'area archiviata nell' `CRgn` oggetto in base agli offset specificati.

```
int OffsetRgn(
    int x,
    int y);

int OffsetRgn(POINT point);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Specifica il numero di unità da spostare verso sinistra o verso destra.

*y*<br/>
Specifica il numero di unità da spostare verso l'alto o verso il basso.

*point*<br/>
La coordinata x del *punto* specifica il numero di unità da spostare verso sinistra o verso destra. La coordinata y del *punto* specifica il numero di unità da spostare verso l'alto o verso il basso. Il parametro *Point* può essere una `POINT` struttura o un `CPoint` oggetto.

### <a name="return-value"></a>Valore restituito

Tipo della nuova area. Può essere uno dei valori seguenti:

- L'area COMPLEXREGION presenta bordi sovrapposti.

- Handle dell'area di errore non valido.

- L'area DINULLREGION è vuota.

- L'area SIMPLEREGION non presenta bordi sovrapposti.

### <a name="remarks"></a>Note

La funzione sposta le unità dell'area *x* lungo l'asse x e le unità *y* lungo l'asse y.

I valori delle coordinate di un'area devono essere minori o uguali a 32.767 e maggiori o uguali a-32.768. È necessario scegliere attentamente i parametri *x* e *y* per evitare le coordinate dell'area non valide.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRgn:: CreateEllipticRgn](#createellipticrgn).

##  <a name="operator_hrgn"></a>CRgn:: operator HRGN

Utilizzare questo operatore per ottenere l'handle di Windows GDI associato dell' `CRgn` oggetto.

```
operator HRGN() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un handle per l'oggetto GDI Windows `CRgn` rappresentato dall'oggetto; in caso contrario, null.

### <a name="remarks"></a>Note

Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto HRGN.

Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere l'articolo [oggetti grafici](/windows/desktop/gdi/graphic-objects) nell'Windows SDK.

##  <a name="ptinregion"></a>CRgn::P tInRegion

Verifica se il punto specificato da *x* e *y* si trova nell'area `CRgn` archiviata nell'oggetto.

```
BOOL PtInRegion(
    int x,
    int y) const;

BOOL PtInRegion(POINT point) const;
```

### <a name="parameters"></a>Parametri

*x*<br/>
Specifica la coordinata x logica del punto da testare.

*y*<br/>
Specifica la coordinata y logica del punto da testare.

*point*<br/>
Le coordinate x e y del *punto* specificano le coordinate x e y del punto di cui verificare il valore. Il parametro *Point* può essere una `POINT` struttura o un `CPoint` oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il punto si trova nell'area; in caso contrario, 0.

##  <a name="rectinregion"></a>CRgn:: RectInRegion

Determina se una parte del rettangolo specificato da *lpRect* si trova all'interno dei limiti dell'area archiviata nell' `CRgn` oggetto.

```
BOOL RectInRegion(LPCRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a una `RECT` struttura o `CRect` a un oggetto. La `RECT` struttura ha il formato seguente:

```cpp
typedef struct tagRECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se una parte del rettangolo specificato si trova all'interno dei limiti dell'area; in caso contrario, 0.

##  <a name="setrectrgn"></a>  CRgn::SetRectRgn

Crea un'area rettangolare.

```
void SetRectRgn(
    int x1,
    int y1,
    int x2,
    int y2);

void SetRectRgn(LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*x1*<br/>
Specifica la coordinata x dell'angolo superiore sinistro dell'area rettangolare.

*y1*<br/>
Specifica la coordinata y dell'angolo superiore sinistro dell'area rettangolare.

*x2*<br/>
Specifica la coordinata x dell'angolo inferiore destro dell'area rettangolare.

*y2*<br/>
Specifica la coordinata y dell'angolo inferiore destro dell'area rettangolare.

*lpRect*<br/>
Specifica l'area rettangolare. Può essere un puntatore a una `RECT` struttura o a un `CRect` oggetto.

### <a name="remarks"></a>Note

A differenza di [CreateRectRgn](#createrectrgn), tuttavia, non alloca memoria aggiuntiva dall'heap dell'applicazione Windows locale. USA invece lo spazio allocato per l'area archiviata nell' `CRgn` oggetto. Ciò significa che l' `CRgn` oggetto deve essere già stato inizializzato con un'area di Windows valida `SetRectRgn`prima della chiamata a. I punti specificati da *X1*, *Y1*, *X2*e *Y2* specificano le dimensioni minime dello spazio allocato.

Utilizzare questa funzione al posto della `CreateRectRgn` funzione membro per evitare chiamate al gestore della memoria locale.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
