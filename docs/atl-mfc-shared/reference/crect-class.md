---
title: Classe CRect | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- LPCRECT data type
- CRect class
- LPRECT operator
- RECT structure
ms.assetid: dee4e752-15d6-4db4-b68f-1ad65b2ed6ca
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e8033ceb709ab66c37e1801cd4033e6830467f2b
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49808615"
---
# <a name="crect-class"></a>Classe CRect

Simile a un Windows [RECT](../../mfc/reference/rect-structure.md) struttura.

## <a name="syntax"></a>Sintassi

```
class CRect : public tagRECT  
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRect::CRect](#crect)|Costruisce un oggetto `CRect`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRect::BottomRight](#bottomright)|Restituisce la posizione in basso a destra del `CRect`.|
|[CRect::CenterPoint](#centerpoint)|Restituisce il punto centrale di `CRect`.|
|[CRect::CopyRect](#copyrect)|Copia le dimensioni di un rettangolo di origine a `CRect`.|
|[CRect::DeflateRect](#deflaterect)|Consente di ridurre la larghezza e altezza del `CRect`.|
|[CRect::EqualRect](#equalrect)|Determina se `CRect` è uguale al rettangolo specificato.|
|[CRect::Height](#height)|Calcola l'altezza di `CRect`.|
|[CRect::InflateRect](#inflaterect)|Aumenta la larghezza e altezza del `CRect`.|
|[CRect::IntersectRect](#intersectrect)|Set `CRect` uguale l'intersezione dei due rettangoli.|
|[CRect::IsRectEmpty](#isrectempty)|Determina se `CRect` è vuoto. `CRect` è vuoto se la larghezza e/o l'altezza è pari a 0.|
|[CRect::IsRectNull](#isrectnull)|Determina se il `top`, `bottom`, `left`, e `right` variabili membro sono tutti uguali a 0.|
|[CRect::MoveToX](#movetox)|Sposta `CRect` per la coordinata x specificata.|
|[CRect::MoveToXY](#movetoxy)|Sposta `CRect` alle coordinate x e y specificate.|
|[CRect::MoveToY](#movetoy)|Sposta `CRect` per la coordinata y specificata.|
|[CRect:: NormalizeRect](#normalizerect)|Consente di standardizzare l'altezza e larghezza di `CRect`.|
|[CRect::OffsetRect](#offsetrect)|Sposta `CRect` dall'offset specificati.|
|[CRect::PtInRect](#ptinrect)|Determina se il punto specificato si trova all'interno di `CRect`.|
|[CRect::SetRect](#setrect)|Imposta le dimensioni di `CRect`.|
|[CRect::SetRectEmpty](#setrectempty)|Set `CRect` a un rettangolo vuoto (tutte le coordinate è uguale a 0).|
|[CRect::Size](#size)|Calcola le dimensioni di `CRect`.|
|[CRect::SubtractRect](#subtractrect)|Sottrae un rettangolo da un altro.|
|[CRect::TopLeft](#topleft)|Restituisce il punto superiore sinistro di `CRect`.|
|[CRect::UnionRect](#unionrect)|Set `CRect` uguale all'unione di due rettangoli.|
|[CRect::Width](#width)|Calcola la larghezza di `CRect`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRect::operator-](#operator_-)|Sottrae gli offset specificati da `CRect` o riduzione del Balloon `CRect` e restituisce l'oggetto risultante `CRect`.|
|[CRect::operator LPCRECT](#operator_lpcrect)|Converte `CRect` in `LPCRECT`.|
|[CRect::operator LPRECT](#operator_lprect)|Converte `CRect` in `LPRECT`.|
|[CRect::operator! =](#operator_neq)|Determina se `CRect` non è uguale a un rettangolo.|
|[CRect::operator &amp;](#operator_amp)|Crea punto di intersezione tra `CRect` e un rettangolo e restituisce l'oggetto risultante `CRect`.|
|[CRect::operator &amp;=](#operator_amp_eq)|Set `CRect` uguale al punto di intersezione tra `CRect` e un rettangolo.|
|[CRect::operator |](#operator_or)|Crea l'unione tra `CRect` e un rettangolo e restituisce l'oggetto risultante `CRect`.|
|[CRect::operator |=](#operator_or_eq)|Set `CRect` uguale all'unione della `CRect` e un rettangolo.|
|[CRect::operator +](#operator_add)|Aggiunge gli offset specificati da `CRect` o la ingrandisce `CRect` e restituisce l'oggetto risultante `CRect`.|
|[+ = CRect::operator](#operator_add_eq)|Aggiunge gli offset specificati da `CRect` o la ingrandisce `CRect`.|
|[CRect::operator =](#operator_eq)|Copia le dimensioni di un rettangolo a `CRect`.|
|[CRect::operator =](#operator_-_eq)|Sottrae gli offset specificati da `CRect` o riduzione del Balloon `CRect`.|
|[CRect::operator = =](#operator_eq_eq)|Determina se `CRect` è uguale a un rettangolo.|

## <a name="remarks"></a>Note

`CRect` include anche le funzioni membro per manipolare `CRect` gli oggetti e Windows `RECT` strutture.

Oggetto `CRect` oggetto può essere passato come parametro di funzione ogni volta che un `RECT` struttura `LPCRECT`, o `LPRECT` può essere passato.

> [!NOTE]
>  Questa classe è derivata dal `tagRECT` struttura. (Il nome `tagRECT` è un nome meno comunemente utilizzati per il `RECT` struttura.) Ciò significa che i membri dati (`left`, `top`, `right`, e `bottom`) del `RECT` struttura sono membri di dati accessibili di `CRect`.

Oggetto `CRect` contiene le variabili membro che definiscono i punti in alto a sinistra e basso a destra di un rettangolo.

Quando si specifica un `CRect`, è necessario prestare attenzione per crearlo in modo che viene normalizzato, in altre parole, tale che il valore della coordinata di sinistra è minore di destra e la parte superiore è minore di fine. Ad esempio, una parte superiore sinistra della (10,10) e basso a destra (20,20) definisce un rettangolo normalizzato, ma una parte superiore sinistra della (20,20) e basso a destra (10,10) definisce un rettangolo non normalizzato. Se il rettangolo non è normalizzato, molti `CRect` funzioni membro possono restituire risultati non corretti. (Vedere [CRect:: NormalizeRect](#normalizerect) per un elenco di queste funzioni.) Prima di chiamare una funzione che richiede i rettangoli normalizzati, è possibile normalizzare i rettangoli non normalizzato chiamando il `NormalizeRect` (funzione).

Prestare attenzione quando si modifica un `CRect` con il [CDC::DPtoLP](../../mfc/reference/cdc-class.md#dptolp) e [CDC::LPtoDP](../../mfc/reference/cdc-class.md#lptodp) funzioni membro. Se la modalità di mapping di un contesto di visualizzazione è tale che l'extent di y è negativo, come in `MM_LOENGLISH`, quindi `CDC::DPtoLP` trasformerà il `CRect` in modo che la parte superiore è maggiore di quella inferiore. Le funzioni come `Height` e `Size` restituirà quindi i valori negativi per l'altezza di trasformato `CRect`, e il rettangolo sarà non normalizzato.  


Quando tramite l'overload `CRect` operatori, il primo operando deve essere un `CRect`; il secondo può essere una [RECT](../../mfc/reference/rect-structure.md) struttura o un `CRect` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagRECT`

`CRect`

## <a name="requirements"></a>Requisiti

**Intestazione:** atltypes. h

##  <a name="bottomright"></a>  CRect::BottomRight

Le coordinate vengono restituite come un riferimento a un [CPoint](cpoint-class.md) oggetto contenuto in `CRect`.

```
CPoint& BottomRight() throw();
const CPoint& BottomRight() const throw();
```

### <a name="return-value"></a>Valore restituito

Le coordinate dell'angolo inferiore destro del rettangolo.

### <a name="remarks"></a>Note

È possibile utilizzare questa funzione per ottenere o impostare l'angolo inferiore destro del rettangolo. Impostare l'angolo mediante questa funzione sul lato sinistro dell'operatore di assegnazione.

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

##  <a name="centerpoint"></a>  CRect::CenterPoint

Calcola il punto centrale di `CRect` aggiungendo i valori a sinistra e destro e dividendo per due e aggiungere i valori superiore e inferiore e dividendo per due.

```
CPoint CenterPoint() const throw();
```

### <a name="return-value"></a>Valore restituito

Oggetto `CPoint` oggetto, ovvero il punto centrale di `CRect`.

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

##  <a name="copyrect"></a>  CRect::CopyRect

Copia il `lpSrcRect` rettangolo in `CRect`.

```
void CopyRect(LPCRECT lpSrcRect) throw(); 
```

### <a name="parameters"></a>Parametri

*lpSrcRect*<br/>
Punta al [RECT](../../mfc/reference/rect-structure.md) struttura o `CRect` oggetto che deve essere copiato.

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


##  <a name="crect"></a>  CRect::CRect

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
Specifica la posizione a sinistra del `CRect`.

*t*<br/>
Specifica la parte superiore della `CRect`.

*r*<br/>
Specifica la posizione a destra del `CRect`.

*b*<br/>
Specifica la parte inferiore della `CRect`.

*srcRect*<br/>
Si intende il [RECT](../../mfc/reference/rect-structure.md) struttura con le coordinate per `CRect`.

*lpSrcRect*<br/>
Punta al `RECT` struttura con le coordinate per `CRect`.

*punto*<br/>
Specifica il punto di origine per il rettangolo da costruire. Corrisponde all'angolo superiore sinistro.

*size*<br/>
Specifica lo scostamento dall'angolo superiore sinistro all'angolo inferiore destro del rettangolo da costruire.

*topLeft*<br/>
Specifica la posizione dell'angolo superiore sinistro del `CRect`.

*bottomRight*<br/>
Specifica la posizione in basso a destra del `CRect`.

### <a name="remarks"></a>Note

Se viene fornito alcun argomento, `left`, `top`, `right`, e `bottom` membri non vengono inizializzati.

Il `CRect`(`const RECT&`) e `CRect`(`LPCRECT`) costruttori eseguono una [CopyRect](#copyrect). Gli altri costruttori inizializzano le variabili membro dell'oggetto direttamente.

### <a name="example"></a>Esempio

```cpp  
// default constructor doesn't initialize!
CRect rectUnknown;

// four-integers are left, top, right, and bottom
CRect rect(0, 0, 100, 50);
ASSERT(rect.Width() == 100);
ASSERT(rect.Height() == 50);

// Initialize from RECT stucture
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

##  <a name="deflaterect"></a>  CRect::DeflateRect

`DeflateRect` riduzione del Balloon `CRect` spostando i lati verso il centro.

```
void DeflateRect(int x, int y) throw();
void DeflateRect(SIZE size) throw();
void DeflateRect(LPCRECT lpRect) throw();
void DeflateRect(int l, int t, int r, int b) throw();  
```

### <a name="parameters"></a>Parametri

*x*<br/>
Specifica il numero di unità da deflate sinistra e a destra del `CRect`.

*y*<br/>
Specifica il numero di unità da deflate superiore e inferiore di `CRect`.

*size*<br/>
Oggetto [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) oppure [CSize](csize-class.md) che specifica il numero di unità da deflate `CRect`. Il `cx` valore specifica il numero di unità da deflate i lati sinistro e destro e `cy` valore specifica il numero di unità da deflate superiore e inferiore.

*lpRect*<br/>
Punta a un [RECT](../../mfc/reference/rect-structure.md) struttura o `CRect` che specifica il numero di unità per ogni lato di compressione.

*l*<br/>
Specifica il numero di unità da deflate lato sinistro della `CRect`.

*t*<br/>
Specifica il numero di unità da deflate cima `CRect`.

*r*<br/>
Specifica il numero di unità da deflate lato destro della `CRect`.

*b*<br/>
Specifica il numero di unità da deflate fondo `CRect`.

### <a name="remarks"></a>Note

A tale scopo, `DeflateRect` aggiunge unità sinistro e superiore e consente di sottrarre le unità da destra e sotto. I parametri del `DeflateRect` effettuato valori; i valori positivi deflate `CRect` e i valori negativi aumento.

I primi due overload deflate entrambe le coppie di lati opposti del `CRect` in modo che la larghezza totale viene diminuita di due volte *x* (oppure `cx`) e l'altezza totale viene diminuito di due volte *y* ( o `cy`). I due overload deflate ogni lato della `CRect` indipendentemente dagli altri.

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

##  <a name="equalrect"></a>  CRect::EqualRect

Determina se `CRect` è uguale al rettangolo specificato.

```
BOOL EqualRect(LPCRECT lpRect) const throw();
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a un [RECT](../../mfc/reference/rect-structure.md) struttura o `CRect` oggetto che contiene le coordinate dell'angolo superiore sinistro e inferiore destro di un rettangolo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i due rettangoli hanno la stessa top, left, inferiore e i valori a destra; in caso contrario 0.

> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

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

##  <a name="height"></a>  CRect::Height

Calcola l'altezza di `CRect` sottraendo il valore superiore rispetto a quello basso.

```
int Height() const throw();
```

### <a name="return-value"></a>Valore restituito

L'altezza di `CRect`.

### <a name="remarks"></a>Note

Il valore risultante può essere negativo.

> [!NOTE]
>  Il rettangolo debba essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare il rettangolo prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp  
CRect rect(20, 30, 80, 70);
int nHt = rect.Height();

```cpp  
   CRect rect(20, 30, 80, 70);
int nHt = rect.Height();

   // nHt is now 40
   ASSERT(nHt == 40);   
```


##  <a name="inflaterect"></a>  CRect::InflateRect

`InflateRect` aumento del Balloon `CRect` spostando i lati fuori dal centro.

```
void InflateRect(int x, int y) throw();
void InflateRect(SIZE size) throw();
void InflateRect(LPCRECT lpRect) throw();
void InflateRect(int l, int t, int r,  int b) throw();  
```

### <a name="parameters"></a>Parametri

*x*<br/>
Specifica il numero di unità di ingrandimento a sinistra e a destra del `CRect`.

*y*<br/>
Specifica il numero di unità di ingrandimento superiore e inferiore di `CRect`.

*size*<br/>
Oggetto [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) oppure [CSize](csize-class.md) che specifica il numero di unità ingrandimento `CRect`. Il `cx` valore specifica il numero di unità ingrandimento i lati sinistro e destro e `cy` valore specifica il numero di unità ingrandimento superiore e inferiore.

*lpRect*<br/>
Punta a un [RECT](../../mfc/reference/rect-structure.md) struttura o `CRect` che specifica il numero di unità ingrandimento ogni lato.

*l*<br/>
Specifica il numero di unità di ingrandimento a sinistra del `CRect`.

*t*<br/>
Specifica il numero di unità di ingrandimento cima `CRect`.

*r*<br/>
Specifica il numero di unità di ingrandimento a destra della `CRect`.

*b*<br/>
Specifica il numero di unità di ingrandimento fondo `CRect`.

### <a name="remarks"></a>Note

A tale scopo, `InflateRect` sottrae unità dalla parte superiore sinistra e aggiunge le unità a destra e sotto. I parametri del `InflateRect` effettuato valori positivi valori aumento `CRect` e i valori negativi deflate.

I primi due overload aumento entrambe le coppie di lati opposti del `CRect` in modo che la larghezza totale viene aumentata di due volte *x* (oppure `cx`) e l'altezza totale viene aumentata di due volte *y* ( o `cy`). I due overload aumento ogni lato della `CRect` indipendentemente dagli altri.

### <a name="example"></a>Esempio

```cpp  
CRect rect(0, 0, 300, 300);
rect.InflateRect(50, 200);

// rect is now (-50, -200, 350, 500)
ASSERT(rect == CRect(-50, -200, 350, 500));  
```

##  <a name="intersectrect"></a>  CRect::IntersectRect

Rende un `CRect` uguale l'intersezione dei due rettangoli esistenti.

```
BOOL IntersectRect(LPCRECT lpRect1, LPCRECT lpRect2) throw();  
```

### <a name="parameters"></a>Parametri

*lpRect1*<br/>
Punta a un [RECT](../../mfc/reference/rect-structure.md) struttura o `CRect` oggetto che contiene un rettangolo di origine.

*lpRect2*<br/>
Punta a un `RECT` struttura o `CRect` oggetto che contiene un rettangolo di origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'intersezione non è vuota. 0 se l'intersezione è vuota.

### <a name="remarks"></a>Note

L'intersezione è il rettangolo più grande contenuto in entrambi i rettangoli esistenti.

> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp  
CRect rectOne(125, 0, 150, 200);
CRect rectTwo(0, 75, 350,  95);
CRect rectInter;

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

##  <a name="isrectempty"></a>  CRect::IsRectEmpty

Determina se `CRect` è vuoto.

```
BOOL IsRectEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se `CRect` è vuoto; 0 se `CRect` non è vuota.

### <a name="remarks"></a>Note

Un rettangolo è vuoto se la larghezza e/o l'altezza è pari a 0 o negativo. È diverso da `IsRectNull`, che determina se tutte le coordinate del rettangolo sono pari a zero.

> [!NOTE]
>  Il rettangolo debba essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare il rettangolo prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp  
CRect rectNone(0, 0, 0, 0);
CRect rectSome(35, 50, 135, 150);

```cpp  
   CRect rectNone(0, 0, 0, 0);
   CRect rectSome(35, 50, 135, 150);
ASSERT(rectNone.IsRectEmpty());
   ASSERT(!rectSome.IsRectEmpty());
CRect rectEmpty(35, 35, 35, 35);
   ASSERT(rectEmpty.IsRectEmpty());   
```


##  <a name="isrectnull"></a>  CRect::IsRectNull

Determina se il superiore, sinistro, inferiore e a destra i valori di `CRect` sono tutti uguali a 0.

```
BOOL IsRectNull() const throw();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se `CRect`del bordo superiore, sinistro, inferiore e i valori a destra sono tutti pari a 0; in caso contrario 0.

### <a name="remarks"></a>Note

È diverso da `IsRectEmpty`, che determina se il rettangolo è vuoto.

### <a name="example"></a>Esempio

```cpp  
CRect rectNone(0, 0, 0, 0);
CRect rectSome(35, 50, 135, 150);

```cpp  
   CRect rectNone(0, 0, 0, 0);
   CRect rectSome(35, 50, 135, 150);
ASSERT(rectNone.IsRectNull());
   ASSERT(!rectSome.IsRectNull());
// note that null means _all_ zeros

CRect rectNotNull(0, 0, 35, 50);
ASSERT(!rectNotNull.IsRectNull());  
```

##  <a name="movetox"></a>  CRect::MoveToX

Chiamare questa funzione per spostare il rettangolo alla coordinata x assoluta specificata da *x*.

```
void MoveToX(int x) throw();  
```

### <a name="parameters"></a>Parametri

*x*<br/>
Coordinata x assoluta per l'angolo superiore sinistro del rettangolo.

### <a name="example"></a>Esempio

```cpp  
CRect rect(0, 0, 100, 100);
rect.MoveToX(10);

```cpp  
   CRect rect(0, 0, 100, 100);
rect.MoveToX(10);

   // rect is now (10, 0, 110, 100);
   ASSERT(rect == CRect(10, 0, 110, 100));   
```

##  <a name="movetoxy"></a>  CRect::MoveToXY

Chiamare questa funzione per spostare il rettangolo per l'assoluto coordinate x e y-specificata.

```
void MoveToXY(int x, int y) throw();
void MoveToXY(POINT point) throw();  
```

### <a name="parameters"></a>Parametri

*x*<br/>
Coordinata x assoluta per l'angolo superiore sinistro del rettangolo.

*y*<br/>
Coordinata y assoluta per l'angolo superiore sinistro del rettangolo.

*punto*<br/>
Oggetto `POINT` struttura che specifica l'assoluto nell'angolo superiore sinistro del rettangolo.

### <a name="example"></a>Esempio

```cpp  
CRect rect(0, 0, 100, 100);
rect.MoveToXY(10, 10);

```cpp  
   CRect rect(0, 0, 100, 100);
   rect.MoveToXY(10, 10);
// rect is now (10, 10, 110, 110);
   ASSERT(rect == CRect(10, 10, 110, 110));   
```


##  <a name="movetoy"></a>  CRect::MoveToY

Chiamare questa funzione per spostare il rettangolo alla coordinata y assoluta specificata da *y*.

```
void MoveToY(int y) throw();  
```

### <a name="parameters"></a>Parametri

*y*<br/>
Coordinata y assoluta per l'angolo superiore sinistro del rettangolo.

### <a name="example"></a>Esempio

```cpp  
CRect rect(0, 0, 100, 100);
rect.MoveToY(10);

```cpp  
   CRect rect(0, 0, 100, 100);
   rect.MoveToY(10);
// rect is now (0, 10, 100, 110);
   ASSERT(rect == CRect(0, 10, 100, 110));   
```


##  <a name="normalizerect"></a>  CRect:: NormalizeRect

Normalizza `CRect` in modo che sia l'altezza e larghezza sono positivi.

```
void NormalizeRect() throw();
```

### <a name="remarks"></a>Note

Il rettangolo viene normalizzato per il quarto quadranti posizionamento, che Windows Usa in genere per le coordinate. `NormalizeRect` Confronta i valori superiore e inferiore che vengono inseriti se all'inizio è maggiore di fine. Allo stesso modo, lo Scambia i valori a sinistra e destro se sinistra è maggiore di destra. Questa funzione è utile quando si lavora con le modalità di mapping diverso e invertito rettangoli.

> [!NOTE]
>  Quanto segue `CRect` funzioni membro richiedono rettangoli normalizzati per il funzionamento corretto: [altezza](#height), [larghezza](#width), [dimensioni](#size), [ IsRectEmpty](#isrectempty), [PtInRect](#ptinrect), [EqualRect](#equalrect), [UnionRect](#unionrect), [IntersectRect](#intersectrect), [ SubtractRect](#subtractrect), [operator = =](#operator_eq_eq), [operator! =](#operator_neq), [operatore &#124; ](#operator_or), [operatore &#124;=](#operator_or_eq), [operator &](#operator_amp), e [operatore & =](#operator_amp_eq).

### <a name="example"></a>Esempio

```cpp  
CRect rect1(110, 100, 250, 310);
CRect rect2(250, 310, 110, 100);

```cpp  
   CRect rect1(110, 100, 250, 310);
   CRect rect2(250, 310, 110, 100);
rect1.NormalizeRect();
   rect2.NormalizeRect();
ASSERT(rect1 == rect2);  
```

##  <a name="offsetrect"></a>  CRect::OffsetRect

Sposta `CRect` dall'offset specificati.

```
void OffsetRect(int x, int y) throw();
void OffsetRect(POINT point) throw();
void OffsetRect(SIZE size) throw();  
```

### <a name="parameters"></a>Parametri

*x*<br/>
Specifica la quantità per spostare a sinistra o destra. Deve essere negativo per spostare a sinistra.

*y*<br/>
Specifica la quantità per spostare verso l'alto o verso il basso. Deve essere negativo per spostare verso l'alto.

*punto*<br/>
Contiene un [punto](../../mfc/reference/point-structure.md) struttura oppure [CPoint](cpoint-class.md) oggetto specificare entrambe le dimensioni per eseguire lo spostamento.

*size*<br/>
Contiene un [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura oppure [CSize](csize-class.md) oggetto specificare entrambe le dimensioni per eseguire lo spostamento.

### <a name="remarks"></a>Note

Sposta `CRect` *x* unità lungo l'asse x e *y* unità lungo l'asse y. Il *x* e *y* parametri sono pertanto i valori con segno, `CRect` possono essere spostati a sinistra o a destra e attivo o inattivo.

### <a name="example"></a>Esempio

```cpp  
CRect rect(0, 0, 35, 35);
rect.OffsetRect(230, 230);

```cpp  
   CRect rect(0, 0, 35, 35);
   rect.OffsetRect(230, 230);

   // rect is now (230, 230, 265, 265)
   ASSERT(rect == CRect(230, 230, 265, 265));   
```


##  <a name="operator_lpcrect"></a>  CRect::operator LPCRECT converte una `CRect` a un [LPCRECT](../../mfc/reference/data-types-mfc.md).  


```
operator LPCRECT() const throw();
```

### <a name="remarks"></a>Note

Quando si usa questa funzione, non occorre address-of (**&**) operatore. Questo operatore verrà automaticamente usato quando si passa un' `CRect` oggetto a una funzione che prevede un `LPCRECT`.

##  <a name="operator_lprect"></a>  CRect::operator LPRECT

Converte un `CRect` a un [LPRECT](../../mfc/reference/data-types-mfc.md).  


```
operator LPRECT() throw();
```

### <a name="remarks"></a>Note

Quando si usa questa funzione, non occorre address-of (**&**) operatore. Questo operatore verrà automaticamente usato quando si passa un' `CRect` oggetto a una funzione che prevede un `LPRECT`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CRect::operator LPCRECT](#operator_lpcrect).

##  <a name="operator_eq"></a>  CRect::operator =

Assegna *srcRect* a `CRect`.

```
void operator=(const RECT& srcRect) throw();
```

### <a name="parameters"></a>Parametri

*srcRect*<br/>
Fa riferimento a un rettangolo di origine. Può essere un' [RECT](../../mfc/reference/rect-structure.md) o `CRect`.

### <a name="example"></a>Esempio

```cpp  
CRect rect(0, 0, 127, 168);
CRect rect2;

```cpp  
   CRect rect(0, 0, 127, 168);
   CRect rect2;

   rect2 = rect;
   ASSERT(rect2 == CRect(0, 0, 127, 168));   
```


##  <a name="operator_eq_eq"></a>  CRect::operator = =

Determina se `rect` è uguale a `CRect` confrontando le coordinate di angoli superiore sinistro e inferiore destro.

```
BOOL operator==(const RECT& rect) const throw();
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Fa riferimento a un rettangolo di origine. Può essere un' [RECT](../../mfc/reference/rect-structure.md) o `CRect`.

### <a name="return-value"></a>Valore restituito

Diverso da zero se uguali. in caso contrario 0.

### <a name="remarks"></a>Note

> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp  
CRect rect1(35, 150, 10, 25);
CRect rect2(35, 150, 10, 25);
CRect rect3(98, 999,  6,  3);

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


##  <a name="operator_neq"></a>  CRect::operator! =

Determina se *rect* non è uguale a `CRect` confrontando le coordinate di angoli superiore sinistro e inferiore destro.

```
BOOL operator!=(const RECT& rect) const throw();
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Fa riferimento a un rettangolo di origine. Può essere un' [RECT](../../mfc/reference/rect-structure.md) o `CRect`.

### <a name="return-value"></a>Valore restituito

Diverso da zero se non è uguale; in caso contrario 0.

### <a name="remarks"></a>Note

> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp  
CRect rect1(35, 150, 10, 25);
CRect rect2(35, 150, 10, 25);
CRect rect3(98, 999,  6,  3);

```cpp  
   CRect rect1(35, 150, 10, 25);
   CRect rect2(35, 150, 10, 25);
   CRect rect3(98, 999, 6, 3);
ASSERT(rect1 != rect3);
// works just fine against RECTs, as well

RECT test;
test.left = 35;
test.top = 150;
test.right = 10;
test.bottom = 25;

ASSERT(rect3 != test);  
```

##  <a name="operator_add_eq"></a>  + = CRect::operator

Spostare i primi due overload `CRect` dall'offset specificati.

```
void operator+=(POINT point) throw();
void operator+=(SIZE size) throw();
void operator+=(LPCRECT lpRect) throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Oggetto [punto](../../mfc/reference/point-structure.md) struttura oppure [CPoint](cpoint-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.

*size*<br/>
Oggetto [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura oppure [CSize](csize-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.

*lpRect*<br/>
Punta a un [RECT](../../mfc/reference/rect-structure.md) struttura oppure `CRect` oggetto che contiene il numero di unità ingrandimento ogni lato della `CRect`.

### <a name="remarks"></a>Note

Il parametro *x* e *y* (o `cx` e `cy`) vengono aggiunti valori a `CRect`.

Il terzo overload ingrandisce `CRect` dal numero di unità specificata in ogni membro del parametro.

### <a name="example"></a>Esempio

```cpp  
CRect rect1(100, 235, 200, 335);
CPoint pt(35, 65);
CRect rect2(135, 300, 235, 400);

```cpp  
   CRect   rect1(100, 235, 200, 335);
   CPoint pt(35, 65);
   CRect   rect2(135, 300, 235, 400);

   rect1 += pt;
   ASSERT(rect1 == rect2);   
```

##  <a name="operator_-_eq"></a>  CRect::operator =

Spostare i primi due overload `CRect` dall'offset specificati.

```
void operator-=(POINT point) throw();
void operator-=(SIZE size) throw();
void operator-=(LPCRECT lpRect) throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Oggetto [punto](../../mfc/reference/point-structure.md) struttura oppure [CPoint](cpoint-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.

*size*<br/>
Oggetto [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura oppure [CSize](csize-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.

*lpRect*<br/>
Punta a un [RECT](../../mfc/reference/rect-structure.md) struttura oppure `CRect` oggetto che contiene il numero di unità per ogni lato della deflate `CRect`.

### <a name="remarks"></a>Note

Il parametro *x* e *y* (o `cx` e `cy`) i valori vengono sottratti dal `CRect`.

Il terzo overload decompressi `CRect` dal numero di unità specificata in ogni membro del parametro. Si noti che questo overload è analogo [DeflateRect](#deflaterect).

### <a name="example"></a>Esempio

```cpp  
CRect rect1(100, 235, 200, 335);
CPoint pt(35, 65);
rect1 -= pt;

```cpp  
   CRect   rect1(100, 235, 200, 335);
   CPoint pt(35, 65);

   rect1 -= pt;
   CRect   rectResult(65, 170, 165, 270);
   ASSERT(rect1 == rectResult);   
```

##  <a name="operator_amp_eq"></a>  CRect::operator &amp;=

Set `CRect` uguale al punto di intersezione tra `CRect` e `rect`.

```
void operator&=(const RECT& rect) throw();
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Contiene un [RECT](../../mfc/reference/rect-structure.md) o `CRect`.

### <a name="remarks"></a>Note

L'intersezione è il rettangolo più grande che è contenuto in entrambi i rettangoli.

> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CRect::IntersectRect](#intersectrect).

##  <a name="operator_or_eq"></a>  CRect::operator &#124;=

Set `CRect` uguale all'unione della `CRect` e `rect`.

```
void operator|=(const RECT& rect) throw();
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Contiene un `CRect` oppure [RECT](../../mfc/reference/rect-structure.md).

### <a name="remarks"></a>Note

L'unione è il rettangolo più piccolo che contiene entrambi i rettangoli di origine.

> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp  
CRect rect1(100,   0, 200, 300);
CRect rect2( 0, 100, 300, 200);
rect1 |= rect2;

```cpp  
   CRect   rect1(100,  0, 200, 300);
   CRect   rect2(0, 100, 300, 200);

   rect1 |= rect2;
   CRect   rectResult(0, 0, 300, 300);
   ASSERT(rectResult == rect1);   
```


##  <a name="operator_add"></a>  CRect::operator +

I primi due overload restituiscono un `CRect` è uguale all'oggetto `CRect` vengano spostati dall'offset specificati.

```
CRect operator+(POINT point) const throw();
CRect operator+(LPCRECT lpRect) const throw();
CRect operator+(SIZE size) const throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Oggetto [punto](../../mfc/reference/point-structure.md) struttura oppure [CPoint](cpoint-class.md) oggetto che specifica il numero di unità da spostare il valore restituito.

*size*<br/>
Oggetto [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura oppure [CSize](csize-class.md) oggetto che specifica il numero di unità da spostare il valore restituito.

*lpRect*<br/>
Punta a un [RECT](../../mfc/reference/rect-structure.md) struttura o `CRect` oggetto che contiene il numero di unità ingrandimento ogni lato del valore restituito.

### <a name="return-value"></a>Valore restituito

Il `CRect` risultante da spostare o ciò fa aumentare erroneamente `CRect` dal numero di unità specificata nel parametro.

### <a name="remarks"></a>Note

Il parametro *x* e *y* (o `cx` e `cy`) vengono aggiunti al parametri `CRect`posizione.

Il terzo overload restituisce un nuovo `CRect` che è uguale a `CRect` sottoposto a inflating per il numero di unità specificata in ogni membro del parametro.

### <a name="example"></a>Esempio

```cpp  
   CRect   rect1(100, 235, 200, 335);
   CPoint pt(35, 65);
   CRect   rect2;

   rect2 = rect1 + pt;
   CRect   rectResult(135, 300, 235, 400);
   ASSERT(rectResult == rect2);   
```


##  <a name="operator_-"></a>  CRect::operator-

I primi due overload restituiscono un `CRect` è uguale all'oggetto `CRect` vengano spostati dall'offset specificati.

```
CRect operator-(POINT point) const throw();
CRect operator-(SIZE size) const throw();
CRect operator-(LPCRECT lpRect) const throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Oggetto [punto](../../mfc/reference/point-structure.md) struttura o `CPoint` oggetto che specifica il numero di unità da spostare il valore restituito.

*size*<br/>
Oggetto [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o `CSize` oggetto che specifica il numero di unità da spostare il valore restituito.

*lpRect*<br/>
Punta a un [RECT](../../mfc/reference/rect-structure.md) struttura o `CRect` oggetto che contiene il numero di unità per ogni lato del valore restituito di compressione.

### <a name="return-value"></a>Valore restituito

Il `CRect` risultante da spostare o deflazionando `CRect` dal numero di unità specificata nel parametro.

### <a name="remarks"></a>Note

Il parametro *x* e *y* (o `cx` e `cy`) vengono sottratti parametri `CRect`posizione.

Il terzo overload restituisce un nuovo `CRect` che è uguale a `CRect` ridotto per il numero di unità specificata in ogni membro del parametro. Si noti che questo overload è analogo [DeflateRect](#deflaterect), non [SubtractRect](#subtractrect).

### <a name="example"></a>Esempio

```cpp  
   CRect   rect1(100, 235, 200, 335);
   CPoint pt(35, 65);
   CRect   rect2;

   rect2 = rect1 - pt;
   CRect   rectResult(65, 170, 165, 270);
   ASSERT(rect2 == rectResult);   
```


##  <a name="operator_amp"></a>  CRect::operator &amp;

Restituisce un `CRect` che rappresenta l'intersezione dei `CRect` e *rect2*.

```
CRect operator&(const RECT& rect2) const throw();
```

### <a name="parameters"></a>Parametri

*rect2*<br/>
Contiene un [RECT](../../mfc/reference/rect-structure.md) o `CRect`.

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` che rappresenta l'intersezione dei `CRect` e *rect2*.

### <a name="remarks"></a>Note

L'intersezione è il rettangolo più grande che è contenuto in entrambi i rettangoli.

> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp  
   CRect   rect1(100,  0, 200, 300);
   CRect   rect2(0, 100, 300, 200);
   CRect   rect3;

   rect3 = rect1 & rect2;
   CRect   rectResult(100, 100, 200, 200);
   ASSERT(rectResult == rect3);   
```


##  <a name="operator_or"></a>  CRect::operator&#124;

Restituisce un `CRect` che rappresenta l'unione dei `CRect` e *rect2*.

``` 
CRect operator|(const RECT& 
rect2) const throw(); 
```

### <a name="parameters"></a>Parametri

*rect2*<br/>
Contiene un [RECT](../../mfc/reference/rect-structure.md) o `CRect`.

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` che rappresenta l'unione dei `CRect` e *rect2*.

### <a name="remarks"></a>Note

L'unione è il rettangolo più piccolo che contiene entrambi i rettangoli.

> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp  
CRect rect1(100,   0, 200, 300);
CRect rect2( 0, 100, 300, 200);
CRect rect3;

```cpp  
   CRect   rect1(100,  0, 200, 300);
   CRect   rect2(0, 100, 300, 200);
   CRect   rect3;

   rect3 = rect1 | rect2;
   CRect   rectResult(0, 0, 300, 300);
   ASSERT(rectResult == rect3);   
```


##  <a name="ptinrect"></a>  CRect::PtInRect

Determina se il punto specificato si trova all'interno di `CRect`.

``` 
BOOL PtInRect(POINT point) const throw(); 
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Contiene un [punto](../../mfc/reference/point-structure.md) struttura oppure [CPoint](cpoint-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il punto si trova all'interno di `CRect`; in caso contrario, 0.

### <a name="remarks"></a>Note

Un punto è all'interno di `CRect` se lo si trova sul lato sinistro o superiore oppure si trova all'interno di tutti e quattro i lati. Non è un punto sul lato destro o inferiore compreso `CRect`.

> [!NOTE]
>  Il rettangolo debba essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare il rettangolo prima di chiamare questa funzione.

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

##  <a name="setrect"></a>  CRect::SetRect

Imposta le dimensioni di `CRect` alle coordinate specificate.

``` 
void SetRect(int x1, int y1, int x2, int y2) throw(); 
```

### <a name="parameters"></a>Parametri

*x1*<br/>
Specifica la coordinata x dell'angolo superiore sinistro.

*y1*<br/>
Specifica la coordinata y dell'angolo superiore sinistro.

*x2*<br/>
Specifica la coordinata x dell'angolo inferiore destro.

*y2*<br/>
Specifica la coordinata y dell'angolo inferiore destro.

### <a name="example"></a>Esempio

```cpp  
CRect rect;
rect.SetRect(256, 256, 512, 512);

```cpp  
   CRect rect;
   rect.SetRect(256, 256, 512, 512);
   ASSERT(rect == CRect(256, 256, 512, 512));   
```


##  <a name="setrectempty"></a>  CRect::SetRectEmpty

Rende `CRect` un rettangolo null impostando tutte le coordinate a zero.

```
void SetRectEmpty() throw();
```

### <a name="example"></a>Esempio

```cpp  
CRect rect;
rect.SetRectEmpty();

// rect is now (0, 0, 0, 0)
ASSERT(rect.IsRectEmpty());  
```

##  <a name="size"></a>  CRect::SIZE

Il `cx` e `cy` i membri del valore restituito contengono l'altezza e larghezza di `CRect`.

```
CSize Size() const throw();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](csize-class.md) oggetto che contiene la dimensione del `CRect`.

### <a name="remarks"></a>Note

L'altezza o larghezza può essere negativa.

> [!NOTE]
>  Il rettangolo debba essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare il rettangolo prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp  
CRect rect(10, 10, 50, 50);
CSize sz = rect.Size();
ASSERT(sz.cx == 40 && sz.cy == 40);  
```

##  <a name="subtractrect"></a>  CRect::SubtractRect

Rende le dimensioni dei `CRect` uguale alla sottrazione di `lpRectSrc2` da `lpRectSrc1`.

```
BOOL SubtractRect(LPCRECT lpRectSrc1, LPCRECT lpRectSrc2) throw();
```

### <a name="parameters"></a>Parametri

*lpRectSrc1*<br/>
Punta al [RECT](../../mfc/reference/rect-structure.md) struttura o `CRect` oggetto da cui deve essere sottratto un rettangolo.

*lpRectSrc2*<br/>
Punta al `RECT` struttura oppure `CRect` oggetto che deve essere sottratto dal rettangolo a cui punta il *lpRectSrc1* parametro.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

La sottrazione è il rettangolo più piccolo che contiene tutti i punti *lpRectScr1* che non sono presenti l'intersezione dei *lpRectScr1* e *lpRectScr2*.

Il rettangolo specificato da *lpRectSrc1* rimarrà invariata se il rettangolo specificato da *lpRectSrc2* non sovrapporsi completamente il rettangolo specificato da *lpRectSrc1*almeno a uno di direzioni x o y.

Ad esempio, se *lpRectSrc1* sono state (10,10, 100,100) e *lpRectSrc2* sono stati (50,50, 150,150), il rettangolo a cui fa riferimento *lpRectSrc1* potrebbe essere non modificato quando il funzione restituito. Se *lpRectSrc1* erano (10,10, 100,100) e *lpRectSrc2* erano (50,10, 150,150), tuttavia, il rettangolo a cui fa riferimento *lpRectSrc1* contiene le coordinate (10,10, 50,100) quando la funzione ha restituito.

`SubtractRect` non è identico [operatore -](#operator_-) né [operatore-=](#operator_-_eq). Nessuno di questi operatori mai chiama `SubtractRect`.

> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

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

##  <a name="topleft"></a>  CRect::TopLeft

Le coordinate vengono restituite come un riferimento a un [CPoint](cpoint-class.md) oggetto contenuto in `CRect`.

```
CPoint& TopLeft() throw();
const CPoint& TopLeft() const throw(); 
```

### <a name="return-value"></a>Valore restituito

Le coordinate dell'angolo superiore sinistro del rettangolo.

### <a name="remarks"></a>Note

È possibile utilizzare questa funzione per ottenere o impostare l'angolo superiore sinistro del rettangolo. Impostare l'angolo mediante questa funzione sul lato sinistro dell'operatore di assegnazione.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CRect::CenterPoint](#centerpoint).

##  <a name="unionrect"></a>  CRect::UnionRect

Rende le dimensioni di `CRect` uguale all'unione dei rettangoli due di origine.

```
BOOL UnionRect(LPCRECT lpRect1, LPCRECT lpRect2) throw();
```

### <a name="parameters"></a>Parametri

*lpRect1*<br/>
Punta a un [RECT](../../mfc/reference/rect-structure.md) o `CRect` che contiene un rettangolo di origine.

*lpRect2*<br/>
Punta a un `RECT` o `CRect` che contiene un rettangolo di origine.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'unione non è vuota. 0 se l'unione è vuoto.

### <a name="remarks"></a>Note

L'unione è il rettangolo più piccolo che contiene entrambi i rettangoli di origine.

Windows ignora le dimensioni di un rettangolo vuoto; vale a dire, un rettangolo che non presenta nessuna altezza o nessuna larghezza.

> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.

### <a name="example"></a>Esempio

```cpp  
   CRect   rect1(100,  0, 200, 300);
   CRect   rect2(0, 100, 300, 200);
   CRect   rect3;

   rect3.UnionRect(&rect1, &rect2);
   CRect   rectResult(0, 0, 300, 300);
   ASSERT(rectResult == rect3);   
```

##  <a name="width"></a>  CRect::Width

Calcola la larghezza di `CRect` sottraendo il valore a sinistra rispetto a quello a destra.

```
int Width() const throw();
```

### <a name="return-value"></a>Valore restituito

La larghezza del `CRect`.

### <a name="remarks"></a>Note

La larghezza può essere negativa.

> [!NOTE]
>  Il rettangolo debba essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare il rettangolo prima di chiamare questa funzione.

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
[RECT](../../mfc/reference/rect-structure.md)

