---
title: Classe CRect
ms.date: 11/06/2018
f1_keywords:
- CRect
- ATLTYPES/ATL::CRect
- ATLTYPES/ATL::CRect::CRect
- ATLTYPES/ATL::CRect::BottomRight
- ATLTYPES/ATL::CRect::CenterPoint
- ATLTYPES/ATL::CRect::CopyRect
- ATLTYPES/ATL::CRect::DeflateRect
- ATLTYPES/ATL::CRect::EqualRect
- ATLTYPES/ATL::CRect::Height
- ATLTYPES/ATL::CRect::InflateRect
- ATLTYPES/ATL::CRect::IntersectRect
- ATLTYPES/ATL::CRect::IsRectEmpty
- ATLTYPES/ATL::CRect::IsRectNull
- ATLTYPES/ATL::CRect::MoveToX
- ATLTYPES/ATL::CRect::MoveToXY
- ATLTYPES/ATL::CRect::MoveToY
- ATLTYPES/ATL::CRect::NormalizeRect
- ATLTYPES/ATL::CRect::OffsetRect
- ATLTYPES/ATL::CRect::PtInRect
- ATLTYPES/ATL::CRect::SetRect
- ATLTYPES/ATL::CRect::SetRectEmpty
- ATLTYPES/ATL::CRect::Size
- ATLTYPES/ATL::CRect::SubtractRect
- ATLTYPES/ATL::CRect::TopLeft
- ATLTYPES/ATL::CRect::UnionRect
- ATLTYPES/ATL::CRect::Width
helpviewer_keywords:
- LPCRECT data type
- CRect class
- LPRECT operator
- RECT structure
ms.assetid: dee4e752-15d6-4db4-b68f-1ad65b2ed6ca
ms.openlocfilehash: f45090971e8dbb89ae281b408cc3a14e102ffe17
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91502875"
---
# <a name="crect-class"></a>Classe CRect

Simile a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) di Windows.

## <a name="syntax"></a>Sintassi

```
class CRect : public tagRECT
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRect:: CRect](#crect)|Costruisce un oggetto `CRect`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRect:: BottomRight](#bottomright)|Restituisce il punto inferiore destro di `CRect` .|
|[CRect:: CenterPoint](#centerpoint)|Restituisce l'Centerpoint di `CRect` .|
|[CRect:: CopyRect](#copyrect)|Copia le dimensioni di un rettangolo di origine in `CRect` .|
|[CRect::D eflateRect](#deflaterect)|Riduce la larghezza e l'altezza di `CRect` .|
|[CRect:: EqualRect](#equalrect)|Determina se `CRect` è uguale al rettangolo specificato.|
|[CRect:: Height](#height)|Calcola l'altezza di `CRect` .|
|[CRect:: InflateRect](#inflaterect)|Aumenta la larghezza e l'altezza di `CRect` .|
|[CRect:: IntersectRect](#intersectrect)|Imposta `CRect` uguale all'intersezione di due rettangoli.|
|[CRect:: IsRectEmpty](#isrectempty)|Determina se `CRect` è vuoto. `CRect` è vuoto se la larghezza e/o l'altezza sono pari a 0.|
|[CRect:: IsRectNull](#isrectnull)|Determina se le `top` `bottom` `left` variabili membro,, e `right` sono tutte uguali a 0.|
|[CRect:: MoveToX](#movetox)|Passa `CRect` alla coordinata x specificata.|
|[CRect:: MoveToXY](#movetoxy)|Passa `CRect` alle coordinate x e y specificate.|
|[CRect:: MoveToY](#movetoy)|Passa `CRect` alla coordinata y specificata.|
|[CRect:: NormalizeRect](#normalizerect)|Standardizza l'altezza e la larghezza di `CRect` .|
|[CRect:: OffsetRect](#offsetrect)|Sposta `CRect` in base agli offset specificati.|
|[CRect::P tInRect](#ptinrect)|Determina se il punto specificato si trova all'interno di `CRect` .|
|[CRect:: serect](#setrect)|Imposta le dimensioni di `CRect` .|
|[CRect:: SetRectEmpty](#setrectempty)|Imposta `CRect` su un rettangolo vuoto (tutte le coordinate sono pari a 0).|
|[CRect:: size](#size)|Calcola la dimensione di `CRect` .|
|[CRect:: SubtractRect](#subtractrect)|Sottrae un rettangolo da un altro.|
|[CRect:: ToLeft](#topleft)|Restituisce il punto superiore sinistro di `CRect` .|
|[CRect:: UnionRect](#unionrect)|Imposta `CRect` uguale all'Unione di due rettangoli.|
|[CRect:: Width](#width)|Calcola la larghezza di `CRect` .|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRect:: operator-](#operator_-)|Sottrae gli offset `CRect` o deflats specificati `CRect` e restituisce l'oggetto risultante `CRect` .|
|[CRect:: operator LPCRECT](#operator_lpcrect)|Converte `CRect` in `LPCRECT`.|
|[CRect:: operator LPRECT](#operator_lprect)|Converte `CRect` in `LPRECT`.|
|[CRect:: operator! =](#operator_neq)|Determina se `CRect` non è uguale a un rettangolo.|
|[CRect:: operator &amp;](#operator_amp)|Crea l'intersezione di `CRect` e un rettangolo e restituisce l'oggetto risultante `CRect` .|
|[CRect:: operator &amp;=](#operator_amp_eq)|Imposta `CRect` uguale all'intersezione tra `CRect` e un rettangolo.|
|[CRect:: operator &#124;](#operator_or)|Crea l'Unione di `CRect` e di un rettangolo e restituisce l'oggetto risultante `CRect` .|
|[CRect:: operator &#124;=](#operator_or_eq)|Imposta `CRect` uguale all'Unione di `CRect` e di un rettangolo.|
|[CRect:: operator +](#operator_add)|Aggiunge gli offset specificati a `CRect` o inflat `CRect` e restituisce l'oggetto risultante `CRect` .|
|[CRect:: operator + =](#operator_add_eq)|Aggiunge gli offset specificati a `CRect` o inflat `CRect` .|
|[CRect:: operator =](#operator_eq)|Copia le dimensioni di un rettangolo in `CRect` .|
|[CRect:: operator-=](#operator_-_eq)|Sottrae gli offset `CRect` o i deflati specificati `CRect` .|
|[CRect:: operator = =](#operator_eq_eq)|Determina se `CRect` è uguale a un rettangolo.|

## <a name="remarks"></a>Osservazioni

`CRect` include anche funzioni membro per modificare `CRect` gli oggetti e le strutture di Windows `RECT` .

Un `CRect` oggetto può essere passato come parametro di funzione ogni volta che `RECT` `LPCRECT` è possibile passare una struttura, o `LPRECT` .

> [!NOTE]
> Questa classe è derivata dalla `tagRECT` struttura. Il nome `tagRECT` è un nome usato meno di frequente per la `RECT` struttura. Ciò significa che i membri dati ( `left` , `top` , `right` e `bottom` ) della `RECT` struttura sono membri dati accessibili di `CRect` .

Un oggetto `CRect` contiene le variabili membro che definiscono i punti superiore sinistro e inferiore destro di un rettangolo.

Quando si specifica un oggetto `CRect` , è necessario prestare attenzione a crearlo in modo che venga normalizzato, in altre parole, in modo che il valore della coordinata sinistra sia inferiore a destra e che la parte superiore sia inferiore alla parte inferiore. Ad esempio, in alto a sinistra (10, 10) e in basso a destra di (20, 20) viene definito un rettangolo normalizzato, ma in alto a sinistra (20, 20) e in basso a destra (10, 10) viene definito un rettangolo non normalizzato. Se il rettangolo non è normalizzato, molte `CRect` funzioni membro possono restituire risultati non corretti. Per un elenco di queste funzioni, vedere [CRect:: NormalizeRect](#normalizerect) . Prima di chiamare una funzione che richiede rettangoli normalizzati, è possibile normalizzare i rettangoli non normalizzati chiamando la `NormalizeRect` funzione.

Prestare attenzione quando si modifica un oggetto `CRect` con le funzioni membro [cdc::D Ptolp](../../mfc/reference/cdc-class.md#dptolp) e [CDC:: DPtoLP](../../mfc/reference/cdc-class.md#lptodp) . Se la modalità di mapping di un contesto di visualizzazione è tale che l'extent y è negativo, come in `MM_LOENGLISH` , `CDC::DPtoLP` trasformerà il in `CRect` modo che la sua parte superiore sia maggiore della parte inferiore. Funzioni come e restituiranno `Height` `Size` quindi valori negativi per l'altezza dell'oggetto trasformato `CRect` e il rettangolo non sarà normalizzato.

Quando si usano `CRect` gli operatori di overload, il primo operando deve essere un `CRect` ; il secondo può essere una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) o un `CRect` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagRECT`

`CRect`

## <a name="requirements"></a>Requisiti

**Intestazione:** atltypes. h

## <a name="crectbottomright"></a><a name="bottomright"></a> CRect:: BottomRight

Le coordinate vengono restituite come riferimento a un oggetto [CPoint](cpoint-class.md) contenuto in `CRect` .

```
CPoint& BottomRight() throw();
const CPoint& BottomRight() const throw();
```

### <a name="return-value"></a>Valore restituito

Coordinate dell'angolo inferiore destro del rettangolo.

### <a name="remarks"></a>Osservazioni

Questa funzione può essere utilizzata per ottenere o impostare l'angolo inferiore destro del rettangolo. Impostare l'angolo utilizzando questa funzione sul lato sinistro dell'operatore di assegnazione.

### <a name="example"></a>Esempio

```cpp
// use BottomRight() to retrieve the bottom
// right POINT
CRect rect(210, 150, 350, 900);
CPoint ptDown;

ptDown = rect.BottomRight();

// ptDown is now set to (350, 900)
ASSERT(ptDown == CPoint(350, 900));

// or, use BottomRight() to set the bottom
// right POINT
CRect rect2(10, 10, 350, 350);
CPoint ptLow(180, 180);

CRect rect2(10, 10, 350, 350);
CPoint ptLow(180, 180);
rect2.BottomRight() = ptLow;

// rect2 is now (10, 10, 180, 180)
ASSERT(rect2 == CRect(10, 10, 180, 180));
```

## <a name="crectcenterpoint"></a><a name="centerpoint"></a> CRect:: CenterPoint

Calcola l'Centerpoint di aggiungendo `CRect` i valori di sinistra e destra e dividendo per due e aggiungendo i valori superiore e inferiore e dividendo per due.

```
CPoint CenterPoint() const throw();
```

### <a name="return-value"></a>Valore restituito

`CPoint`Oggetto che rappresenta il Centerpoint di `CRect` .

### <a name="example"></a>Esempio

```cpp
// Code from this OnPaint() implementation can be pasted into your own application
// to draw lines that would look like a letter "Y" within your dialog.
void CMyDlg::OnPaint()
{
    CPaintDC dc(this);

    // device context for painting

    // get the size and position of the client area of
    // your window

    CRect rect;
    GetClientRect(&rect);

    // Move the current pen to the top left of the window. We call the
    // TopLeft() member of CRect here and it returns a CPoint object we
    // pass to the override of CDC::MoveTo() that accepts a CPoint.

    dc.MoveTo(rect.TopLeft());

    // Draw a line from the top left to the center of the window.
    // CenterPoint() gives us the middle point of the window as a
    // CPoint, and since CDC::LineTo() has an override that accepts a
    // CPoint, we can just pass it along.

    dc.LineTo(rect.CenterPoint());

    // Now, draw a line to the top right of the window. There's no
    // CRect member which returns a CPoint for the top right of the
    // window, so we'll reference the CPoint members directly and call
    // the CDC::LineTo() override which takes two integers.

    dc.LineTo(rect.right, rect.top);

    // The top part of the "Y" is drawn. Now, we'll draw the stem. We
    // start from the center point.

    dc.MoveTo(rect.CenterPoint());

    // and then draw to the middle of the bottom edge of the window.
    // We'll get the x-coordinate from the x member of the CPOINT
    // returned by CenterPoint(), and the y value comes directly from
    // the rect.

    dc.LineTo(rect.CenterPoint().x, rect.bottom);
}
```

## <a name="crectcopyrect"></a><a name="copyrect"></a> CRect:: CopyRect

Copia il `lpSrcRect` rettangolo in `CRect` .

```cpp
void CopyRect(LPCRECT lpSrcRect) throw();
```

### <a name="parameters"></a>Parametri

*lpSrcRect*<br/>
Punta alla struttura [RECT](/windows/win32/api/windef/ns-windef-rect) o `CRect` all'oggetto Rect da copiare.

### <a name="example"></a>Esempio

```cpp
CRect rectSource(35, 10, 125, 10);
CRect rectDest;

rectDest.CopyRect(&rectSource);

// rectDest is now set to (35, 10, 125, 10)

RECT rectSource2;
rectSource2.left = 0;
rectSource2.top = 0;
rectSource2.bottom = 480;
rectSource2.right = 640;

rectDest.CopyRect(&rectSource2);

// works against RECT structures, too!
// rectDest is now set to (0, 0, 640, 480)
```

## <a name="crectcrect"></a><a name="crect"></a> CRect:: CRect

Costruisce un oggetto `CRect`.

```
CRect() throw();
CRect(int l, int t, int r, int b) throw();
CRect(const RECT& srcRect) throw();
CRect(LPCRECT lpSrcRect) throw();
CRect(POINT point, SIZE size) throw();
CRect(POINT topLeft, POINT bottomRight) throw();
```

### <a name="parameters"></a>Parametri

*l*<br/>
Specifica la posizione a sinistra di `CRect` .

*t*<br/>
Specifica la parte superiore di `CRect` .

*r*<br/>
Specifica la posizione corretta di `CRect` .

*b*<br/>
Specifica la parte inferiore di `CRect` .

*srcRect*<br/>
Fa riferimento alla struttura [Rect](/windows/win32/api/windef/ns-windef-rect) con le coordinate per `CRect` .

*lpSrcRect*<br/>
Punta alla `RECT` struttura con le coordinate per `CRect` .

*punto*<br/>
Specifica il punto di origine per il rettangolo da costruire. Corrisponde all'angolo superiore sinistro.

*size*<br/>
Consente di specificare lo spostamento dall'angolo superiore sinistro all'angolo inferiore destro del rettangolo da costruire.

*topLeft*<br/>
Specifica la posizione in alto a sinistra di `CRect` .

*bottomRight*<br/>
Specifica la posizione in basso a destra di `CRect` .

### <a name="remarks"></a>Osservazioni

Se non viene specificato alcun argomento `left` , `top` `right` i membri,, e `bottom` vengono impostati su 0.

I `CRect` `const RECT&` costruttori () e `CRect` ( `LPCRECT` ) eseguono un [CopyRect](#copyrect). Gli altri costruttori inizializzano direttamente le variabili membro dell'oggetto.

### <a name="example"></a>Esempio

```cpp
// default constructor is equivalent to CRect(0, 0, 0, 0)
CRect emptyRect;

// four-integers are left, top, right, and bottom
CRect rect(0, 0, 100, 50);
ASSERT(rect.Width() == 100);
ASSERT(rect.Height() == 50);

// Initialize from RECT structure
RECT sdkRect;
sdkRect.left = 0;
sdkRect.top = 0;
sdkRect.right = 100;
sdkRect.bottom = 50;

CRect rect2(sdkRect);
// by reference
CRect rect3(&sdkRect);

// by address
ASSERT(rect2 == rect);
ASSERT(rect3 == rect);

// from a point and a size
CPoint pt(0, 0);
CSize sz(100, 50);
CRect rect4(pt, sz);
ASSERT(rect4 == rect2);

// from two points
CPoint ptBottomRight(100, 50);
CRect rect5(pt, ptBottomRight);
ASSERT(rect5 == rect4);
```

## <a name="crectdeflaterect"></a><a name="deflaterect"></a> CRect::D eflateRect

`DeflateRect` deflats `CRect` spostando i lati verso il centro.

```cpp
void DeflateRect(int x, int y) throw();
void DeflateRect(SIZE size) throw();
void DeflateRect(LPCRECT lpRect) throw();
void DeflateRect(int l, int t, int r, int b) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Specifica il numero di unità per deflatare i lati sinistro e destro di `CRect` .

*y*<br/>
Specifica il numero di unità per deflatare la parte superiore e inferiore di `CRect` .

*size*<br/>
[Dimensione](/windows/win32/api/windef/ns-windef-size) o [CSize](csize-class.md) che specifica il numero di unità da deflatre `CRect` . Il `cx` valore specifica il numero di unità per deflatare i lati sinistro e destro e il `cy` valore specifica il numero di unità per deflatare la parte superiore e inferiore.

*lpRect*<br/>
Punta a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) o `CRect` che specifica il numero di unità per deflatare ogni lato.

*l*<br/>
Specifica il numero di unità per deflatre il lato sinistro di `CRect` .

*t*<br/>
Specifica il numero di unità in base a cui deflatare la parte superiore `CRect` .

*r*<br/>
Specifica il numero di unità per cui deflatre il lato destro di `CRect` .

*b*<br/>
Specifica il numero di unità da cui deflatare la parte inferiore di `CRect` .

### <a name="remarks"></a>Osservazioni

A tale scopo, `DeflateRect` aggiunge unità a sinistra e in alto e sottrae le unità a destra e in basso. I parametri di `DeflateRect` sono valori con segno; i valori positivi sono deflate `CRect` e i valori negativi lo inflatano.

I primi due overload deflatano entrambe le coppie di lati opposti di `CRect` in modo che la larghezza totale venga ridotta di due volte *x* (o `cx` ) e l'altezza totale viene ridotta di due volte *y* (o `cy` ). Gli altri due overload deflatno ogni lato di `CRect` indipendentemente dagli altri.

### <a name="example"></a>Esempio

```cpp
CRect rect(10, 10, 50, 50);
rect.DeflateRect(1, 2);
ASSERT(rect.left == 11 && rect.right == 49);
ASSERT(rect.top == 12 && rect.bottom == 48);

CRect rect2(10, 10, 50, 50);
CRect rectDeflate(1, 2, 3, 4);
rect2.DeflateRect(&rectDeflate);
ASSERT(rect2.left == 11 && rect2.right == 47);
ASSERT(rect2.top == 12 && rect2.bottom == 46);
```

## <a name="crectequalrect"></a><a name="equalrect"></a> CRect:: EqualRect

Determina se `CRect` è uguale al rettangolo specificato.

```
BOOL EqualRect(LPCRECT lpRect) const throw();
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a una struttura o a un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) `CRect` che contiene le coordinate dell'angolo superiore sinistro e inferiore destro di un rettangolo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i due rettangoli hanno gli stessi valori in alto, a sinistra, in basso e a destra; in caso contrario, 0.

> [!NOTE]
> Entrambi i rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect rect1(35, 150, 10, 25);
CRect rect2(35, 150, 10, 25);
CRect rect3(98, 999, 6, 3);
ASSERT(rect1.EqualRect(rect2));
ASSERT(!rect1.EqualRect(rect3));
// works just fine against RECTs, as well

RECT test;
test.left = 35;
test.top = 150;
test.right = 10;
test.bottom = 25;

ASSERT(rect1.EqualRect(&test));
```

## <a name="crectheight"></a><a name="height"></a> CRect:: Height

Calcola l'altezza di `CRect` sottraendo il valore superiore dal valore inferiore.

```
int Height() const throw();
```

### <a name="return-value"></a>Valore restituito

Altezza di `CRect` .

### <a name="remarks"></a>Osservazioni

Il valore risultante può essere negativo.

> [!NOTE]
> Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare il rettangolo prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect rect(20, 30, 80, 70);
int nHt = rect.Height();

// nHt is now 40
ASSERT(nHt == 40);
```

## <a name="crectinflaterect"></a><a name="inflaterect"></a> CRect:: InflateRect

`InflateRect` si gonfia `CRect` spostando i lati fuori dal centro.

```cpp
void InflateRect(int x, int y) throw();
void InflateRect(SIZE size) throw();
void InflateRect(LPCRECT lpRect) throw();
void InflateRect(int l, int t, int r,  int b) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Specifica il numero di unità per ingrandire il lato sinistro e destro di `CRect` .

*y*<br/>
Specifica il numero di unità per ingrandire la parte superiore e inferiore di `CRect` .

*size*<br/>
[Dimensione](/windows/win32/api/windef/ns-windef-size) o [CSize](csize-class.md) che specifica il numero di unità da ingrandire `CRect` . Il `cx` valore specifica il numero di unità per ingrandire il lato sinistro e destro e il `cy` valore specifica il numero di unità per ingrandire la parte superiore e inferiore.

*lpRect*<br/>
Punta a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) o `CRect` che specifica il numero di unità per ingrandire ogni lato.

*l*<br/>
Specifica il numero di unità per ingrandire il lato sinistro di `CRect` .

*t*<br/>
Specifica il numero di unità per la quale è possibile ingrandire la parte superiore `CRect` .

*r*<br/>
Specifica il numero di unità per ingrandire il lato destro di `CRect` .

*b*<br/>
Specifica il numero di unità per ingrandire la parte inferiore di `CRect` .

### <a name="remarks"></a>Osservazioni

A tale scopo, `InflateRect` sottrae le unità dal lato sinistro e superiore e aggiunge le unità a destra e in basso. I parametri di `InflateRect` sono valori con segno; i valori positivi sono inflat `CRect` e i valori negativi lo deflatno.

I primi due overload inflatano entrambe le coppie di lati opposti di `CRect` in modo che la larghezza totale venga aumentata di due volte *x* (o `cx` ) e l'altezza totale viene aumentata di due volte *y* (o `cy` ). Gli altri due overload inflatno ogni lato di `CRect` indipendentemente dagli altri.

### <a name="example"></a>Esempio

```cpp
CRect rect(0, 0, 300, 300);
rect.InflateRect(50, 200);

// rect is now (-50, -200, 350, 500)
ASSERT(rect == CRect(-50, -200, 350, 500));
```

## <a name="crectintersectrect"></a><a name="intersectrect"></a> CRect:: IntersectRect

Rende `CRect` uguale all'intersezione di due rettangoli esistenti.

```
BOOL IntersectRect(LPCRECT lpRect1, LPCRECT lpRect2) throw();
```

### <a name="parameters"></a>Parametri

*lpRect1*<br/>
Punta a una struttura o a un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) `CRect` contenente un rettangolo di origine.

*lpRect2*<br/>
Punta a una `RECT` struttura o a un `CRect` oggetto che contiene un rettangolo di origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'intersezione non è vuota. 0 se l'intersezione è vuota.

### <a name="remarks"></a>Osservazioni

L'intersezione è il rettangolo più grande contenuto in entrambi i rettangoli esistenti.

> [!NOTE]
> Entrambi i rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect rectOne(125,  0, 150, 200);
CRect rectTwo(0, 75, 350, 95);
CRect rectInter;

rectInter.IntersectRect(rectOne, rectTwo);
ASSERT(rectInter == CRect(125, 75, 150, 95));
// operator &= can do the same task:

CRect rectInter2 = rectOne;
rectInter2 &= rectTwo;
ASSERT(rectInter2 == CRect(125, 75, 150, 95));
```

## <a name="crectisrectempty"></a><a name="isrectempty"></a> CRect:: IsRectEmpty

Determina se `CRect` è vuoto.

```
BOOL IsRectEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se `CRect` è vuoto; 0 se `CRect` non è vuoto.

### <a name="remarks"></a>Osservazioni

Un rettangolo è vuoto se la larghezza e/o l'altezza sono 0 o negativo. È diverso da `IsRectNull` , che determina se tutte le coordinate del rettangolo sono pari a zero.

> [!NOTE]
> Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare il rettangolo prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect rectNone(0, 0, 0, 0);
CRect rectSome(35, 50, 135, 150);
ASSERT(rectNone.IsRectEmpty());
ASSERT(!rectSome.IsRectEmpty());
CRect rectEmpty(35, 35, 35, 35);
ASSERT(rectEmpty.IsRectEmpty());
```

## <a name="crectisrectnull"></a><a name="isrectnull"></a> CRect:: IsRectNull

Determina se i valori superiore, sinistro, inferiore e destro di `CRect` sono tutti uguali a 0.

```
BOOL IsRectNull() const throw();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se `CRect` i valori in alto, a sinistra, in basso e a destra sono tutti uguali a 0; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

È diverso da `IsRectEmpty` , che determina se il rettangolo è vuoto.

### <a name="example"></a>Esempio

```cpp
CRect rectNone(0, 0, 0, 0);
CRect rectSome(35, 50, 135, 150);
ASSERT(rectNone.IsRectNull());
ASSERT(!rectSome.IsRectNull());
// note that null means _all_ zeros

CRect rectNotNull(0, 0, 35, 50);
ASSERT(!rectNotNull.IsRectNull());
```

## <a name="crectmovetox"></a><a name="movetox"></a> CRect:: MoveToX

Chiamare questa funzione per spostare il rettangolo sulla coordinata x assoluta specificata da *x*.

```cpp
void MoveToX(int x) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Coordinata x assoluta per l'angolo superiore sinistro del rettangolo.

### <a name="example"></a>Esempio

```cpp
CRect rect(0, 0, 100, 100);
rect.MoveToX(10);

// rect is now (10, 0, 110, 100);
ASSERT(rect == CRect(10, 0, 110, 100));
```

## <a name="crectmovetoxy"></a><a name="movetoxy"></a> CRect:: MoveToXY

Chiamare questa funzione per spostare il rettangolo nelle coordinate x e y assolute specificate.

```cpp
void MoveToXY(int x, int y) throw();
void MoveToXY(POINT point) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Coordinata x assoluta per l'angolo superiore sinistro del rettangolo.

*y*<br/>
Coordinata y assoluta per l'angolo superiore sinistro del rettangolo.

*punto*<br/>
`POINT`Struttura che specifica l'angolo superiore sinistro assoluto del rettangolo.

### <a name="example"></a>Esempio

```cpp
CRect rect(0, 0, 100, 100);
rect.MoveToXY(10, 10);
// rect is now (10, 10, 110, 110);
ASSERT(rect == CRect(10, 10, 110, 110));
```

## <a name="crectmovetoy"></a><a name="movetoy"></a> CRect:: MoveToY

Chiamare questa funzione per spostare il rettangolo sulla coordinata y assoluta specificata da *y*.

```cpp
void MoveToY(int y) throw();
```

### <a name="parameters"></a>Parametri

*y*<br/>
Coordinata y assoluta per l'angolo superiore sinistro del rettangolo.

### <a name="example"></a>Esempio

```cpp
CRect rect(0, 0, 100, 100);
rect.MoveToY(10);
// rect is now (0, 10, 100, 110);
ASSERT(rect == CRect(0, 10, 100, 110));
```

## <a name="crectnormalizerect"></a><a name="normalizerect"></a> CRect:: NormalizeRect

Normalizza in `CRect` modo che sia l'altezza che la larghezza siano positive.

```cpp
void NormalizeRect() throw();
```

### <a name="remarks"></a>Osservazioni

Il rettangolo viene normalizzato per il posizionamento del quarto quadrante, che in genere viene utilizzato da Windows per le coordinate. `NormalizeRect` Confronta i valori superiore e inferiore e li scambia se la parte superiore è maggiore della parte inferiore. Analogamente, scambia i valori di sinistra e di destra se il lato sinistro è maggiore di quello a destra. Questa funzione è utile quando si gestiscono diverse modalità di mapping e rettangoli invertiti.

> [!NOTE]
> Per il `CRect` corretto funzionamento delle funzioni membro seguenti sono necessari rettangoli normalizzati: [Height](#height), [Width](#width), [size](#size), [IsRectEmpty](#isrectempty), [PtInRect](#ptinrect), [EqualRect](#equalrect), [UnionRect](#unionrect), [IntersectRect](#intersectrect), [SubtractRect](#subtractrect), [operator = =](#operator_eq_eq), [operator! =](#operator_neq), Operator [&#124;](#operator_or), [operator &#124;=](#operator_or_eq), [operator &](#operator_amp)e [operator &=](#operator_amp_eq).

### <a name="example"></a>Esempio

```cpp
CRect rect1(110, 100, 250, 310);
CRect rect2(250, 310, 110, 100);
rect1.NormalizeRect();
rect2.NormalizeRect();
ASSERT(rect1 == rect2);
```

## <a name="crectoffsetrect"></a><a name="offsetrect"></a> CRect:: OffsetRect

Sposta `CRect` in base agli offset specificati.

```cpp
void OffsetRect(int x, int y) throw();
void OffsetRect(POINT point) throw();
void OffsetRect(SIZE size) throw();
```

### <a name="parameters"></a>Parametri

*x*<br/>
Specifica la quantità di spostamento verso sinistra o verso destra. È necessario che lo spostamento verso sinistra sia negativo.

*y*<br/>
Specifica la quantità di spostamento verso l'alto o verso il basso. Per spostarsi verso l'alto, è necessario che sia negativo.

*punto*<br/>
Contiene una struttura [Point](/windows/win32/api/windef/ns-windef-point) o un oggetto [CPoint](cpoint-class.md) che specifica entrambe le dimensioni in base alle quali spostare.

*size*<br/>
Contiene una struttura di [dimensioni](/windows/win32/api/windef/ns-windef-size) o un oggetto [CSize](csize-class.md) che specifica entrambe le dimensioni in base alle quali spostare.

### <a name="remarks"></a>Osservazioni

Sposta le `CRect` unità *x* lungo l'asse x e le unità *y* lungo l'asse y. I parametri *x* e *y* sono valori con segno, quindi `CRect` possono essere spostati a sinistra o a destra e in alto o in basso.

### <a name="example"></a>Esempio

```cpp
CRect rect(0, 0, 35, 35);
rect.OffsetRect(230, 230);

// rect is now (230, 230, 265, 265)
ASSERT(rect == CRect(230, 230, 265, 265));
```

## <a name="crectoperator-lpcrect-converts-a-crect-to-an-lpcrect"></a><a name="operator_lpcrect"></a> CRect:: operator LPCRECT converte un oggetto `CRect` in un [LPCRECT](../../mfc/reference/data-types-mfc.md).

```
operator LPCRECT() const throw();
```

### <a name="remarks"></a>Osservazioni

Quando si usa questa funzione, non è necessario l'operatore address-of ( **&** ). Questo operatore verrà usato automaticamente quando si passa un `CRect` oggetto a una funzione che prevede un `LPCRECT` .

## <a name="crectoperator-lprect"></a><a name="operator_lprect"></a> CRect:: operator LPRECT

Converte un oggetto `CRect` in un [lpRect](../../mfc/reference/data-types-mfc.md).

```
operator LPRECT() throw();
```

### <a name="remarks"></a>Osservazioni

Quando si usa questa funzione, non è necessario l'operatore address-of ( **&** ). Questo operatore verrà usato automaticamente quando si passa un `CRect` oggetto a una funzione che prevede un `LPRECT` .

### <a name="example"></a>Esempio

Vedere l'esempio per [CRect:: operator LPCRECT](#operator_lpcrect).

## <a name="crectoperator-"></a><a name="operator_eq"></a> CRect:: operator =

Assegna *srcRect* a `CRect` .

```cpp
void operator=(const RECT& srcRect) throw();
```

### <a name="parameters"></a>Parametri

*srcRect*<br/>
Fa riferimento a un rettangolo di origine. Può essere un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) o `CRect` .

### <a name="example"></a>Esempio

```cpp
CRect rect(0, 0, 127, 168);
CRect rect2;

rect2 = rect;
ASSERT(rect2 == CRect(0, 0, 127, 168));
```

## <a name="crectoperator-"></a><a name="operator_eq_eq"></a> CRect:: operator = =

Determina se `rect` è uguale a `CRect` confrontando le coordinate degli angoli superiore sinistro e inferiore destro.

```
BOOL operator==(const RECT& rect) const throw();
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Fa riferimento a un rettangolo di origine. Può essere un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) o `CRect` .

### <a name="return-value"></a>Valore restituito

Diverso da zero se uguale a; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Entrambi i rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect rect1(35, 150, 10, 25);
CRect rect2(35, 150, 10, 25);
CRect rect3(98, 999, 6, 3);
ASSERT(rect1 == rect2);
// works just fine against RECTs, as well

RECT test;
test.left = 35;
test.top = 150;
test.right = 10;
test.bottom = 25;

ASSERT(rect1 == test);
```

## <a name="crectoperator-"></a><a name="operator_neq"></a> CRect:: operator! =

Determina se *Rect* non è uguale a `CRect` confrontando le coordinate degli angoli superiore sinistro e inferiore destro.

```
BOOL operator!=(const RECT& rect) const throw();
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Fa riferimento a un rettangolo di origine. Può essere un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) o `CRect` .

### <a name="return-value"></a>Valore restituito

Diverso da zero se non uguale a; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Entrambi i rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect rect1(35, 150, 10, 25);
CRect rect2(35, 150, 10, 25);
CRect rect3(98, 999,  6,  3);
ASSERT(rect1 != rect3);
// works just fine against RECTs, as well

RECT test;
test.left = 35;
test.top = 150;
test.right = 10;
test.bottom = 25;

ASSERT(rect3 != test);
```

## <a name="crectoperator-"></a><a name="operator_add_eq"></a> CRect:: operator + =

I primi due overload vengono spostati `CRect` in base agli offset specificati.

```cpp
void operator+=(POINT point) throw();
void operator+=(SIZE size) throw();
void operator+=(LPCRECT lpRect) throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Struttura [Point](/windows/win32/api/windef/ns-windef-point) o oggetto [CPoint](cpoint-class.md) che specifica il numero di unità per spostare il rettangolo.

*size*<br/>
Struttura [size](/windows/win32/api/windef/ns-windef-size) o oggetto [CSize](csize-class.md) che specifica il numero di unità per spostare il rettangolo.

*lpRect*<br/>
Punta a una struttura o a un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) `CRect` che contiene il numero di unità per cui si desidera gonfiare ogni lato `CRect` .

### <a name="remarks"></a>Osservazioni

I valori *x* e *y* del parametro (o `cx` e `cy` ) vengono aggiunti a `CRect` .

Il terzo overload si gonfia `CRect` per il numero di unità specificate in ogni membro del parametro.

### <a name="example"></a>Esempio

```cpp
CRect   rect1(100, 235, 200, 335);
CPoint  pt(35, 65);
CRect   rect2(135, 300, 235, 400);

rect1 += pt;
ASSERT(rect1 == rect2);
```

## <a name="crectoperator--"></a><a name="operator_-_eq"></a> CRect:: operator-=

I primi due overload vengono spostati `CRect` in base agli offset specificati.

```cpp
void operator-=(POINT point) throw();
void operator-=(SIZE size) throw();
void operator-=(LPCRECT lpRect) throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Struttura [Point](/windows/win32/api/windef/ns-windef-point) o oggetto [CPoint](cpoint-class.md) che specifica il numero di unità per spostare il rettangolo.

*size*<br/>
Struttura [size](/windows/win32/api/windef/ns-windef-size) o oggetto [CSize](csize-class.md) che specifica il numero di unità per spostare il rettangolo.

*lpRect*<br/>
Punta a una struttura o a un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) `CRect` che contiene il numero di unità per cui deflatare ogni lato `CRect` .

### <a name="remarks"></a>Osservazioni

I valori *x* e *y* del parametro (o `cx` e `cy` ) vengono sottratti da `CRect` .

Il terzo overload viene deflatto `CRect` in base al numero di unità specificato in ogni membro del parametro. Si noti che questo overload funziona come [DeflateRect](#deflaterect).

### <a name="example"></a>Esempio

```cpp
CRect   rect1(100, 235, 200, 335);
CPoint pt(35, 65);

rect1 -= pt;
CRect   rectResult(65, 170, 165, 270);
ASSERT(rect1 == rectResult);
```

## <a name="crectoperator-amp"></a><a name="operator_amp_eq"></a> CRect:: operator &amp;=

Imposta `CRect` uguale all'intersezione di `CRect` e `rect` .

```cpp
void operator&=(const RECT& rect) throw();
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Contiene un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) o `CRect` .

### <a name="remarks"></a>Osservazioni

L'intersezione è il rettangolo più grande contenuto in entrambi i rettangoli.

> [!NOTE]
> Entrambi i rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

Vedere l'esempio per [CRect:: IntersectRect](#intersectrect).

## <a name="crectoperator-124"></a><a name="operator_or_eq"></a> CRect:: operator &#124;=

Imposta `CRect` uguale all'Unione di `CRect` e `rect` .

```cpp
void operator|=(const RECT& rect) throw();
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Contiene un oggetto `CRect` o [Rect](/windows/win32/api/windef/ns-windef-rect).

### <a name="remarks"></a>Osservazioni

L'Unione è il rettangolo più piccolo che contiene entrambi i rettangoli di origine.

> [!NOTE]
> Entrambi i rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect   rect1(100,  0, 200, 300);
CRect   rect2(0, 100, 300, 200);

rect1 |= rect2;
CRect   rectResult(0, 0, 300, 300);
ASSERT(rectResult == rect1);
```

## <a name="crectoperator-"></a><a name="operator_add"></a> CRect:: operator +

I primi due overload restituiscono un `CRect` oggetto uguale a spostato `CRect` dagli offset specificati.

```
CRect operator+(POINT point) const throw();
CRect operator+(LPCRECT lpRect) const throw();
CRect operator+(SIZE size) const throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Struttura [Point](/windows/win32/api/windef/ns-windef-point) o oggetto [CPoint](cpoint-class.md) che specifica il numero di unità per spostare il valore restituito.

*size*<br/>
Struttura [size](/windows/win32/api/windef/ns-windef-size) o oggetto [CSize](csize-class.md) che specifica il numero di unità per spostare il valore restituito.

*lpRect*<br/>
Punta a una struttura o a un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) `CRect` che contiene il numero di unità per ingrandire ogni lato del valore restituito.

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` risultante dallo spostamento o dal `CRect` numero di unità specificato nel parametro.

### <a name="remarks"></a>Osservazioni

I parametri *x* e *y* del parametro (o `cx` e `cy` ) vengono aggiunti alla `CRect` posizione di.

Il terzo overload restituisce un nuovo oggetto `CRect` uguale a `CRect` inflatd dal numero di unità specificate in ogni membro del parametro.

### <a name="example"></a>Esempio

```cpp
CRect   rect1(100, 235, 200, 335);
CPoint pt(35, 65);
CRect   rect2;

rect2 = rect1 + pt;
CRect   rectResult(135, 300, 235, 400);
ASSERT(rectResult == rect2);
```

## <a name="crectoperator--"></a><a name="operator_-"></a> CRect:: operator-

I primi due overload restituiscono un `CRect` oggetto uguale a spostato `CRect` dagli offset specificati.

```
CRect operator-(POINT point) const throw();
CRect operator-(SIZE size) const throw();
CRect operator-(LPCRECT lpRect) const throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Struttura di [punti](/windows/win32/api/windef/ns-windef-point) o `CPoint` oggetto che specifica il numero di unità per spostare il valore restituito.

*size*<br/>
Struttura di [dimensioni](/windows/win32/api/windef/ns-windef-size) o `CSize` oggetto che specifica il numero di unità per spostare il valore restituito.

*lpRect*<br/>
Punta a una struttura o a un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) `CRect` che contiene il numero di unità per deflatare ogni lato del valore restituito.

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` risultante dallo stato di trasferimento o Deflating `CRect` per il numero di unità specificato nel parametro.

### <a name="remarks"></a>Osservazioni

I parametri *x* e *y* del parametro (o `cx` e `cy` ) vengono sottratti dalla `CRect` posizione di.

Il terzo overload restituisce un nuovo oggetto `CRect` uguale a `CRect` deflatd dal numero di unità specificate in ogni membro del parametro. Si noti che questo overload funziona come [DeflateRect](#deflaterect), non [SubtractRect](#subtractrect).

### <a name="example"></a>Esempio

```cpp
CRect   rect1(100, 235, 200, 335);
CPoint pt(35, 65);
CRect   rect2;

rect2 = rect1 - pt;
CRect   rectResult(65, 170, 165, 270);
ASSERT(rect2 == rectResult);
```

## <a name="crectoperator-amp"></a><a name="operator_amp"></a> CRect:: operator &amp;

Restituisce un oggetto `CRect` che rappresenta l'intersezione di `CRect` e *rect2*.

```
CRect operator&(const RECT& rect2) const throw();
```

### <a name="parameters"></a>Parametri

*rect2*<br/>
Contiene un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) o `CRect` .

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` che rappresenta l'intersezione di `CRect` e *rect2*.

### <a name="remarks"></a>Osservazioni

L'intersezione è il rettangolo più grande contenuto in entrambi i rettangoli.

> [!NOTE]
> Entrambi i rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect   rect1(100,  0, 200, 300);
CRect   rect2(0, 100, 300, 200);
CRect   rect3;

rect3 = rect1 & rect2;
CRect   rectResult(100, 100, 200, 200);
ASSERT(rectResult == rect3);
```

## <a name="crectoperator-124"></a><a name="operator_or"></a> CRect:: operator &#124;

Restituisce un oggetto `CRect` che rappresenta l'Unione di `CRect` e *rect2*.

```
CRect operator|(const RECT&
rect2) const throw();
```

### <a name="parameters"></a>Parametri

*rect2*<br/>
Contiene un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) o `CRect` .

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` che rappresenta l'Unione di `CRect` e *rect2*.

### <a name="remarks"></a>Osservazioni

L'Unione è il rettangolo più piccolo che contiene entrambi i rettangoli.

> [!NOTE]
> Entrambi i rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect   rect1(100,  0, 200, 300);
CRect   rect2(0, 100, 300, 200);
CRect   rect3;

rect3 = rect1 | rect2;
CRect   rectResult(0, 0, 300, 300);
ASSERT(rectResult == rect3);
```

## <a name="crectptinrect"></a><a name="ptinrect"></a> CRect::P tInRect

Determina se il punto specificato si trova all'interno di `CRect` .

```
BOOL PtInRect(POINT point) const throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Contiene una struttura [Point](/windows/win32/api/windef/ns-windef-point) o un oggetto [CPoint](cpoint-class.md) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se il punto si trova all'interno di `CRect` ; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Un punto si trova all'interno `CRect` di se si trova sul lato sinistro o superiore oppure si trova all'interno di tutti e quattro i lati. Un punto sul lato destro o inferiore è esterno `CRect` .

> [!NOTE]
> Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare il rettangolo prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect rect(5, 5, 100, 100);
CPoint pt1(35, 50);
CPoint pt2(125, 298);

// this is true, because pt1 is inside the rectangle
ASSERT(rect.PtInRect(pt1));

// this is NOT true, because pt2 is outside the rectangle
ASSERT(!rect.PtInRect(pt2));

// note that the right and the bottom aren't inside
ASSERT(!rect.PtInRect(CPoint(35, 100)));
ASSERT(!rect.PtInRect(CPoint(100, 98)));

// but the top and the left are inside
ASSERT(rect.PtInRect(CPoint(5, 65)));
ASSERT(rect.PtInRect(CPoint(88, 5)));

// and that PtInRect() works against a POINT, too
POINT pt;
pt.x = 35;
pt.y = 50;
ASSERT(rect.PtInRect(pt));
```

## <a name="crectsetrect"></a><a name="setrect"></a> CRect:: serect

Imposta le dimensioni di sulle `CRect` coordinate specificate.

```cpp
void SetRect(int x1, int y1, int x2, int y2) throw();
```

### <a name="parameters"></a>Parametri

*X1*<br/>
Specifica la coordinata x dell'angolo superiore sinistro.

*Y1*<br/>
Specifica la coordinata y dell'angolo superiore sinistro.

*X2*<br/>
Specifica la coordinata x dell'angolo inferiore destro.

*Y2*<br/>
Specifica la coordinata y dell'angolo inferiore destro.

### <a name="example"></a>Esempio

```cpp
CRect rect;
rect.SetRect(256, 256, 512, 512);
ASSERT(rect == CRect(256, 256, 512, 512));
```

## <a name="crectsetrectempty"></a><a name="setrectempty"></a> CRect:: SetRectEmpty

Crea `CRect` un rettangolo null impostando tutte le coordinate su zero.

```cpp
void SetRectEmpty() throw();
```

### <a name="example"></a>Esempio

```cpp
CRect rect;
rect.SetRectEmpty();

// rect is now (0, 0, 0, 0)
ASSERT(rect.IsRectEmpty());
```

## <a name="crectsize"></a><a name="size"></a> CRect:: SIZE

I `cx` `cy` membri e del valore restituito contengono l'altezza e la larghezza di `CRect` .

```
CSize Size() const throw();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](csize-class.md) che contiene la dimensione di `CRect` .

### <a name="remarks"></a>Osservazioni

L'altezza o la larghezza possono essere negative.

> [!NOTE]
> Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare il rettangolo prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect rect(10, 10, 50, 50);
CSize sz = rect.Size();
ASSERT(sz.cx == 40 && sz.cy == 40);
```

## <a name="crectsubtractrect"></a><a name="subtractrect"></a> CRect:: SubtractRect

Rende le dimensioni di `CRect` uguale alla sottrazione di `lpRectSrc2` da `lpRectSrc1` .

```
BOOL SubtractRect(LPCRECT lpRectSrc1, LPCRECT lpRectSrc2) throw();
```

### <a name="parameters"></a>Parametri

*lpRectSrc1*<br/>
Punta alla struttura o all'oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) `CRect` da cui deve essere sottratto un rettangolo.

*Lprectsrc2 è*<br/>
Punta alla `RECT` struttura o `CRect` all'oggetto che deve essere sottratto dal rettangolo a cui punta il parametro *lpRectSrc1* .

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

La sottrazione è il rettangolo più piccolo che contiene tutti i punti in *lpRectScr1* che non si trovano nell'intersezione tra *lpRectScr1* e *lpRectScr2*.

Il rettangolo specificato da *lpRectSrc1* rimarrà invariato se il rettangolo specificato da *lpRectSrc2 è* non si sovrappone completamente al rettangolo specificato da *lpRectSrc1* in almeno una delle direzioni x o y.

Se, ad esempio, *lpRectSrc1* era (10, 10, 100.100) e *lpRectSrc2 è* era (50, 50, 150.150), il rettangolo a cui puntava *lpRectSrc1* sarebbe stato invariato quando la funzione restituiva. Se *lpRectSrc1* (10, 10, 100.100) e *lpRectSrc2 è* sono (50, 10, 150.150), tuttavia, il rettangolo a cui punta *lpRectSrc1* conterrà le coordinate (10, 10, 50.100) quando la funzione restituisce.

`SubtractRect` non è uguale a [operator-](#operator_-) and [operator-=](#operator_-_eq). Nessuno di questi operatori chiama mai `SubtractRect` .

> [!NOTE]
> Entrambi i rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
RECT   rectOne;
RECT   rectTwo;

rectOne.left = 10;
rectOne.top = 10;
rectOne.bottom = 100;
rectOne.right = 100;

rectTwo.left = 50;
rectTwo.top = 10;
rectTwo.bottom = 150;
rectTwo.right = 150;

CRect   rectDiff;

rectDiff.SubtractRect(&rectOne, &rectTwo);
CRect   rectResult(10, 10, 50, 100);

ASSERT(rectDiff == rectResult);

// works for CRect, too, since there is
// implicit CRect -> LPCRECT conversion

CRect rect1(10, 10, 100, 100);
CRect rect2(50, 10, 150, 150);
CRect rectOut;

rectOut.SubtractRect(rect1, rect2);
ASSERT(rectResult == rectOut);
```

## <a name="crecttopleft"></a><a name="topleft"></a> CRect:: ToLeft

Le coordinate vengono restituite come riferimento a un oggetto [CPoint](cpoint-class.md) contenuto in `CRect` .

```
CPoint& TopLeft() throw();
const CPoint& TopLeft() const throw();
```

### <a name="return-value"></a>Valore restituito

Coordinate dell'angolo superiore sinistro del rettangolo.

### <a name="remarks"></a>Osservazioni

Questa funzione può essere utilizzata per ottenere o impostare l'angolo superiore sinistro del rettangolo. Impostare l'angolo utilizzando questa funzione sul lato sinistro dell'operatore di assegnazione.

### <a name="example"></a>Esempio

Vedere l'esempio per [CRect:: Centerpoint](#centerpoint).

## <a name="crectunionrect"></a><a name="unionrect"></a> CRect:: UnionRect

Rende le dimensioni `CRect` uguali all'Unione dei due rettangoli di origine.

```
BOOL UnionRect(LPCRECT lpRect1, LPCRECT lpRect2) throw();
```

### <a name="parameters"></a>Parametri

*lpRect1*<br/>
Punta a un oggetto [Rect](/windows/win32/api/windef/ns-windef-rect) o `CRect` che contiene un rettangolo di origine.

*lpRect2*<br/>
Punta a un oggetto `RECT` o `CRect` che contiene un rettangolo di origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'Unione non è vuota. 0 se l'Unione è vuota.

### <a name="remarks"></a>Osservazioni

L'Unione è il rettangolo più piccolo che contiene entrambi i rettangoli di origine.

Windows ignora le dimensioni di un rettangolo vuoto; ovvero un rettangolo senza altezza o senza larghezza.

> [!NOTE]
> Entrambi i rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect   rect1(100,  0, 200, 300);
CRect   rect2(0, 100, 300, 200);
CRect   rect3;

rect3.UnionRect(&rect1, &rect2);
CRect   rectResult(0, 0, 300, 300);
ASSERT(rectResult == rect3);
```

## <a name="crectwidth"></a><a name="width"></a> CRect:: Width

Calcola la larghezza di `CRect` sottraendo il valore a sinistra dal valore a destra.

```
int Width() const throw();
```

### <a name="return-value"></a>Valore restituito

Larghezza di `CRect` .

### <a name="remarks"></a>Osservazioni

La larghezza può essere negativa.

> [!NOTE]
> Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare il rettangolo prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp
CRect rect(20, 30, 80, 70);
int nWid = rect.Width();
// nWid is now 60
ASSERT(nWid == 60);
```

## <a name="see-also"></a>Vedere anche

[Classe CPoint](cpoint-class.md)<br/>
[Classe CSize](csize-class.md)<br/>
[RECT](/windows/win32/api/windef/ns-windef-rect)
