---
title: Classe CRect | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRect
dev_langs:
- C++
helpviewer_keywords:
- LPCRECT data type
- CRect class
- LPRECT operator
- RECT structure
ms.assetid: dee4e752-15d6-4db4-b68f-1ad65b2ed6ca
caps.latest.revision: 24
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: fa528d300c546bfdeaab55ff88735efcaf8533a5
ms.lasthandoff: 02/24/2017

---
# <a name="crect-class"></a>CRect (classe)
Simile a un Windows [RECT](../../mfc/reference/rect-structure1.md) struttura.  
  
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
|[CRect::BottomRight](#bottomright)|Restituisce il punto in basso a destra di `CRect`.|  
|[CRect::CenterPoint](#centerpoint)|Restituisce il punto centrale di `CRect`.|  
|[CRect::CopyRect](#copyrect)|Copia le dimensioni di un rettangolo di origine per `CRect`.|  
|[CRect::DeflateRect](#deflaterect)|Consente di ridurre la larghezza e altezza di `CRect`.|  
|[CRect::EqualRect](#equalrect)|Determina se `CRect` è uguale al rettangolo specificato.|  
|[CRect::Height](#height)|Calcola l'altezza di `CRect`.|  
|[CRect::InflateRect](#inflaterect)|Aumenta la larghezza e altezza di `CRect`.|  
|[CRect::IntersectRect](#intersectrect)|Set `CRect` uguale all'intersezione di due rettangoli.|  
|[CRect::IsRectEmpty](#isrectempty)|Determina se `CRect` è vuoto. `CRect`Se la larghezza e/o altezza è pari a 0 è vuota.|  
|[CRect::IsRectNull](#isrectnull)|Determina se il **inizio**, **inferiore**, **sinistro**, e **destra** variabili membro sono tutti uguali a 0.|  
|[CRect::MoveToX](#movetox)|Sposta `CRect` alla coordinata x specificata.|  
|[CRect::MoveToXY](#movetoxy)|Sposta `CRect` alle coordinate x e y specificate.|  
|[CRect::MoveToY](#movetoy)|Sposta `CRect` alla coordinata y specificata.|  
|[CRect:: NormalizeRect](#normalizerect)|Consente di standardizzare l'altezza e larghezza di `CRect`.|  
|[CRect::OffsetRect](#offsetrect)|Sposta `CRect` degli offset specificati.|  
|[CRect::PtInRect](#ptinrect)|Determina se il punto specificato si trova all'interno di `CRect`.|  
|[CRect::SetRect](#setrect)|Imposta le dimensioni di `CRect`.|  
|[CRect::SetRectEmpty](#setrectempty)|Set `CRect` a un rettangolo vuoto (tutte le coordinate pari a 0).|  
|[CRect::Size](#size)|Calcola le dimensioni di `CRect`.|  
|[CRect::SubtractRect](#subtractrect)|Sottrae un rettangolo da un altro.|  
|[CRect::TopLeft](#topleft)|Restituisce il punto superiore sinistro di `CRect`.|  
|[CRect::UnionRect](#unionrect)|Set `CRect` uguale all'unione di due rettangoli.|  
|[CRect::Width](#width)|Calcola la larghezza di `CRect`.|  
  
### <a name="public-operators"></a>Operatori pubblici    
|Nome|Descrizione|  
|----------|-----------------|  
|[CRect::operator-](#operator_-)|Sottrae gli offset specificati da `CRect` o decompressi `CRect` e restituisce l'oggetto risultante `CRect`.|  
|[CRect::operator LPCRECT](#operator_lpcrect)|Converte un `CRect` per un **LPCRECT**.|  
|[CRect::operator LPRECT](#operator_lprect)|Converte un `CRect` per un `LPRECT`.|  
|[CRect::operator! =](#operator_neq)|Determina se `CRect` non è uguale a un rettangolo.|  
|[CRect::operator&amp;](#operator_amp)|Crea punto di intersezione tra `CRect` e un rettangolo e restituisce l'oggetto risultante `CRect`.|  
|[CRect::operator&amp;=](#operator_amp_eq)|Set `CRect` uguale all'intersezione tra `CRect` e un rettangolo.|  
|[CRect::operator |](#operator_or)|Crea l'unione di `CRect` e un rettangolo e restituisce l'oggetto risultante `CRect`.|  
|[CRect::operator |=](#operator_or_eq)|Set `CRect` uguale all'unione di `CRect` e un rettangolo.|  
|[CRect::operator +](#operator_add)|Aggiunge gli offset specificati a `CRect` o ingrandisce `CRect` e restituisce l'oggetto risultante `CRect`.|  
|[+ = CRect::operator](#operator_add_eq)|Aggiunge l'offset specificati a `CRect` o ingrandisce `CRect`.|  
|[CRect::operator =](#operator_eq)|Copia le dimensioni del rettangolo da `CRect`.|  
|[CRect::operator =](#operator_-_eq)|Sottrae degli offset specificati da `CRect` o decompressi `CRect`.|  
|[CRect::operator = =](#operator_eq_eq)|Determina se `CRect` è uguale a un rettangolo.|  
  
## <a name="remarks"></a>Note  
 `CRect`include anche le funzioni membro per manipolare `CRect` oggetti e Windows `RECT` strutture.  
  
 Oggetto `CRect` oggetto può essere passato come parametro di funzione ovunque un `RECT` struttura, **LPCRECT**, o `LPRECT` può essere passato.  
  
> [!NOTE]
>  Questa classe è derivata dal **tagRECT** struttura. (Il nome **tagRECT** è un nome meno comunemente utilizzati per il `RECT` struttura.) Ciò significa che i membri dati (**sinistro**, **inizio**, **destra**, e **inferiore**) del `RECT` struttura sono membri di dati accessibili di `CRect`.  
  
 Oggetto `CRect` contiene le variabili membro che definiscono i punti in alto a sinistra e in basso a destra di un rettangolo.  
  
 Quando si specifica un `CRect`, è necessario prestare attenzione creare l'oggetto in modo che è normalizzato, in altre parole, in modo che il valore della coordinata sinistra è minore di destra e la parte superiore è minore di nella parte inferiore. Ad esempio, una parte superiore sinistra del (10,10) e basso a destra (20,20) definisce un rettangolo normalizzato, ma una parte superiore sinistra del (20,20) e basso a destra (10,10) definisce un rettangolo non normalizzato. Se il rettangolo non è normalizzato, molti `CRect` funzioni membro possono restituire risultati non corretti. (Vedere [CRect:: NormalizeRect](#normalizerect) per un elenco di queste funzioni.) Prima di chiamare una funzione che richiede i rettangoli normalizzati, è possibile normalizzare i rettangoli non normalizzato chiamando il `NormalizeRect` (funzione).  
  
 Prestare attenzione quando si modifica un `CRect` con il [CDC::DPtoLP](../../mfc/reference/cdc-class.md#dptolp) e [CDC::LPtoDP](../../mfc/reference/cdc-class.md#lptodp) funzioni membro. Se la modalità di mapping di un contesto di visualizzazione è tale che l'extent di y è negativo, come in `MM_LOENGLISH`, quindi `CDC::DPtoLP` trasformerà il `CRect` in modo che il top è maggiore di quello inferiore. Le funzioni come **altezza** e **dimensioni** restituirà quindi i valori negativi per l'altezza di trasformato `CRect`, e il rettangolo non normalizzato.  

  
 Quando tramite overload `CRect` operatori, il primo operando deve essere un `CRect`; il secondo può essere un [RECT](../../mfc/reference/rect-structure1.md) struttura o un `CRect` oggetto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `tagRECT`  
  
 `CRect`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atltypes. h  
  
##  <a name="a-namebottomrighta--crectbottomright"></a><a name="bottomright"></a>CRect::BottomRight  
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
  
##  <a name="a-namecenterpointa--crectcenterpoint"></a><a name="centerpoint"></a>CRect::CenterPoint 
 Calcola il punto centrale di `CRect` aggiungendo i valori sinistro e destro e dividendo per due e aggiungere i valori superiore e inferiore e diviso per due.  
  
```  
CPoint CenterPoint() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CPoint` oggetto che è il punto centrale di `CRect`.  
  
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
  
##  <a name="a-namecopyrecta--crectcopyrect"></a><a name="copyrect"></a>CRect::CopyRect  
 Copie di `lpSrcRect` rettangolo in `CRect`.  
  
```  
void CopyRect(LPCRECT lpSrcRect) throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 `lpSrcRect`  
 Punta al [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` che deve essere copiati.  
  
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

  
##  <a name="a-namecrecta--crectcrect"></a><a name="crect"></a>CRect::CRect  
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
 *l*  
 Specifica la posizione a sinistra di `CRect`.  
  
 *t*  
 Specifica le proprietà di `CRect`.  
  
 *r*  
 Specifica la posizione corretta di `CRect`.  
  
 *b*  
 Specifica la parte inferiore della `CRect`.  
  
 *srcRect*  
 Si intende il [RECT](../../mfc/reference/rect-structure1.md) struttura con le coordinate per `CRect`.  
  
 `lpSrcRect`  
 Indichi il `RECT` struttura con le coordinate per `CRect`.  
  
 `point`  
 Specifica il punto di origine per il rettangolo deve essere costruita. Corrisponde all'angolo superiore sinistro.  
  
 `size`  
 Specifica lo spostamento dall'angolo superiore sinistro all'angolo inferiore destro del rettangolo deve essere costruita.  
  
 *topLeft*  
 Specifica la posizione superiore sinistro di `CRect`.  
  
 *bottomRight*  
 Specifica la posizione in basso a destra di `CRect`.  
  
### <a name="remarks"></a>Note  
 Se viene fornito alcun argomento, **sinistro**, **inizio**, **destra**, e **inferiore** membri non vengono inizializzati.  
  
 Il `CRect`(**RECT const /**) e `CRect`(**LPCRECT**) costruttori eseguono un [CopyRect](#copyrect). Gli altri costruttori inizializzano le variabili membro dell'oggetto direttamente.  
  
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
  
##  <a name="a-namedeflaterecta--crectdeflaterect"></a><a name="deflaterect"></a>CRect::DeflateRect  
 `DeflateRect`decompressi `CRect` spostando i lati verso il centro.  
  
```  
void DeflateRect(int x, int y) throw();
void DeflateRect(SIZE size) throw();
void DeflateRect(LPCRECT lpRect) throw();
void DeflateRect(int l, int t, int r, int b) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica il numero di unità da deflate sinistra e destra del `CRect`.  
  
 *y*  
 Specifica il numero di unità da deflate nella parte superiore e inferiore di `CRect`.  
  
 `size`  
 Oggetto [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) o [CSize](csize-class.md) che specifica il numero di unità da deflate `CRect`. Il `cx` valore specifica il numero di unità da deflate i lati sinistro e destro e `cy` valore specifica il numero di unità da deflate superiore e inferiore.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` che specifica il numero di unità da deflate ogni lato.  
  
 *l*  
 Specifica il numero di unità da deflate lato sinistro della `CRect`.  
  
 *t*  
 Specifica il numero di unità da deflate cima `CRect`.  
  
 *r*  
 Specifica il numero di unità da deflate lato destro della `CRect`.  
  
 *b*  
 Specifica il numero di unità da deflate fondo `CRect`.  
  
### <a name="remarks"></a>Note  
 A tale scopo, `DeflateRect` aggiunge unità a sinistra e superiore e sottrae unità da destra e sotto. I parametri di `DeflateRect` sono firmati valori; i valori positivi deflate `CRect` e i valori negativi ingrandimento.  
  
 I primi due overload deflate entrambe le coppie di lati opposti del `CRect` in modo che la larghezza totale viene diminuita di due volte *x* (o `cx`) e l'altezza totale viene diminuito di due volte *y* (o `cy`). I due overload deflate ogni lato della `CRect` indipendentemente dagli altri.  
  
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
  
##  <a name="a-nameequalrecta--crectequalrect"></a><a name="equalrect"></a>CRect::EqualRect  
 Determina se `CRect` è uguale al rettangolo specificato.  
  
```  
BOOL EqualRect(LPCRECT lpRect) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene le coordinate dell'angolo superiore sinistro e in basso a destra di un rettangolo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i due rettangoli hanno la stessa top, left, inferiore e i valori corretti; in caso contrario 0.  
  
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

##  <a name="a-nameheighta--crectheight"></a><a name="height"></a>CRect::Height  
 Calcola l'altezza di `CRect` sottraendo il valore superiore rispetto a quello inferiore.  
  
```  
int Height() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza di `CRect`.  
  
### <a name="remarks"></a>Note  
 Il valore risulta può essere negativo.  
  
> [!NOTE]
>  Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) normalizzare il rettangolo prima di chiamare questa funzione.  
  
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

  
##  <a name="a-nameinflaterecta--crectinflaterect"></a><a name="inflaterect"></a>CRect::InflateRect  
 `InflateRect`Ingrandisce `CRect` spostando i lati dal centro.  
  
```  
void InflateRect(int x, int y) throw();
void InflateRect(SIZE size) throw();
void InflateRect(LPCRECT lpRect) throw();
void InflateRect(int l, int t, int r,  int b) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica il numero di unità ingrandimento sinistra e a destra di `CRect`.  
  
 *y*  
 Specifica il numero di unità di ingrandimento nella parte superiore e inferiore di `CRect`.  
  
 `size`  
 Oggetto [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) o [CSize](csize-class.md) che specifica il numero di unità ingrandimento `CRect`. Il `cx` valore specifica il numero di unità di ingrandimento il lato sinistro e destro e `cy` valore specifica il numero di unità di ingrandimento nella parte superiore e inferiore.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` che specifica il numero di unità di ingrandimento ogni lato.  
  
 *l*  
 Specifica il numero di unità ingrandimento lato sinistro della `CRect`.  
  
 *t*  
 Specifica il numero di unità ingrandimento cima `CRect`.  
  
 *r*  
 Specifica il numero di unità di ingrandimento a destra della `CRect`.  
  
 *b*  
 Specifica il numero di unità ingrandimento fondo `CRect`.  
  
### <a name="remarks"></a>Note  
 A tale scopo, `InflateRect` sottrae unità dalla parte superiore sinistra e aggiunge l'unità a destra e sotto. I parametri di `InflateRect` sono firmati i valori positivi ingrandimento valori `CRect` e i valori negativi deflate.  
  
 I primi due overload ingrandimento entrambe le coppie di lati opposti del `CRect` in modo che la larghezza totale è aumentata di due volte *x* (o `cx`) e l'altezza totale è aumentato di due volte *y* (o `cy`). I due overload ingrandimento ogni lato della `CRect` indipendentemente dagli altri.  
  
### <a name="example"></a>Esempio  
```cpp  
 CRect rect(0, 0, 300, 300);
 rect.InflateRect(50, 200);

 // rect is now (-50, -200, 350, 500)
 ASSERT(rect == CRect(-50, -200, 350, 500));  
```
  
##  <a name="a-nameintersectrecta--crectintersectrect"></a><a name="intersectrect"></a>CRect::IntersectRect  
 Rende un `CRect` uguale all'intersezione di due rettangoli esistenti.  
  
```  
BOOL IntersectRect(LPCRECT lpRect1, LPCRECT lpRect2) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect1`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene un rettangolo di origine.  
  
 `lpRect2`  
 Punta a un `RECT` struttura o `CRect` oggetto che contiene un rettangolo di origine.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'intersezione non è vuoto. 0 se l'intersezione è vuota.  
  
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
  
##  <a name="a-nameisrectemptya--crectisrectempty"></a><a name="isrectempty"></a>CRect::IsRectEmpty  
 Determina se `CRect` è vuoto.  
  
```  
BOOL IsRectEmpty() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se `CRect` è vuoto; 0 se `CRect` non è vuoto.  
  
### <a name="remarks"></a>Note  
 Un rettangolo è vuoto se la larghezza e/o altezza è pari a 0 o negativo. È diverso da `IsRectNull`, che determina se tutte le coordinate del rettangolo sono pari a zero.  
  
> [!NOTE]
>  Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) normalizzare il rettangolo prima di chiamare questa funzione.  
  
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

  
##  <a name="a-nameisrectnulla--crectisrectnull"></a><a name="isrectnull"></a>CRect::IsRectNull  
 Determina se sinistra, in basso a destra i valori di `CRect` sono tutti uguali a 0.  
  
```  
BOOL IsRectNull() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se `CRect`di sinistra in basso e valori corretti sono tutti pari a 0; in caso contrario 0.  
  
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
  
##  <a name="a-namemovetoxa--crectmovetox"></a><a name="movetox"></a>CRect::MoveToX  
 Chiamare questa funzione per spostare il rettangolo alla coordinata x assoluta specificata da *x*.  
  
```  
void MoveToX(int x) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
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
  
##  <a name="a-namemovetoxya--crectmovetoxy"></a><a name="movetoxy"></a>CRect::MoveToXY  
 Chiamare questa funzione per spostare il rettangolo per l'assoluto coordinate x e y-specificata.  
  
```  
void MoveToXY(int x, int y) throw();
void MoveToXY(POINT point) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Coordinata x assoluta per l'angolo superiore sinistro del rettangolo.  
  
 *y*  
 Coordinata y assoluta per l'angolo superiore sinistro del rettangolo.  
  
 `point`  
 Oggetto **punto** struttura specificando l'assoluto angolo superiore sinistro del rettangolo.  
  
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

  
##  <a name="a-namemovetoya--crectmovetoy"></a><a name="movetoy"></a>CRect::MoveToY  
 Chiamare questa funzione per spostare il rettangolo alla coordinata y assoluta specificata da *y*.  
  
```  
void MoveToY(int y) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 *y*  
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

  
##  <a name="a-namenormalizerecta--crectnormalizerect"></a><a name="normalizerect"></a>CRect:: NormalizeRect  
 Normalizza `CRect` in modo che sia l'altezza e larghezza sono positivi.  
  
```  
void NormalizeRect() throw();
```  
  
### <a name="remarks"></a>Note  
 Il rettangolo è normalizzato per il quarto quadrante posizionamento, Windows utilizza in genere per le coordinate. `NormalizeRect`Confronta i valori superiore e inferiore che vengono inseriti se inizio è maggiore di fondo. Analogamente, inverte i valori sinistro e destro se sinistra è maggiore di destra. Questa funzione è utile quando si utilizzano le modalità di mapping diverso e invertito rettangoli.  
  
> [!NOTE]
>  Le operazioni seguenti `CRect` funzioni membro richiedono rettangoli normalizzati per il corretto funzionamento: [altezza](#height), [larghezza](#width), [dimensioni](#size), [IsRectEmpty](#isrectempty), [PtInRect](#ptinrect), [EqualRect](#equalrect), [UnionRect](#unionrect), [IntersectRect](#intersectrect), [SubtractRect](#subtractrect), [operatore = =](#operator_eq_eq), [operatore! =](#operator_neq), [operatore |](#operator_or), [operatore | =](#operator_or_eq), [operatore /](#operator_amp), e [operatore / =](#operator_amp_eq).  
  
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
  
##  <a name="a-nameoffsetrecta--crectoffsetrect"></a><a name="offsetrect"></a>CRect::OffsetRect  
 Sposta `CRect` degli offset specificati.  
  
```  
void OffsetRect(int x, int y) throw();
void OffsetRect(POINT point) throw();
void OffsetRect(SIZE size) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la quantità per spostare a sinistra o destra. Deve essere negativo per spostare a sinistra.  
  
 *y*  
 Specifica la quantità per spostare verso l'alto o verso il basso. Deve essere negativo per spostare verso l'alto.  
  
 `point`  
 Contiene un [punto](../../mfc/reference/point-structure1.md) struttura o [CPoint](cpoint-class.md) specificando entrambe le dimensioni da cui si desidera spostare.  
  
 `size`  
 Contiene un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](csize-class.md) specificando entrambe le dimensioni da cui si desidera spostare.  
  
### <a name="remarks"></a>Note  
 Sposta `CRect` *x* unità lungo l'asse x e *y* unità lungo l'asse y. Il *x* e *y* i parametri sono pertanto valori con segno, `CRect` può essere spostato a sinistra o destra e verso l'alto o verso il basso.  
  
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

  
##  <a name="a-nameoperatorlpcrecta--crectoperator-lpcrect-converts-a-crect-to-an-lpcrectmfcreferencedata-types-mfcmd"></a><a name="operator_lpcrect"></a>Converte LPCRECT CRect::operator un `CRect` per un [LPCRECT](../../mfc/reference/data-types-mfc.md).  

  
```  
operator LPCRECT() const throw();
```  
  
### <a name="remarks"></a>Note  
 Quando si utilizza questa funzione, non è necessario address-of (**&**) (operatore). Questo operatore viene utilizzato automaticamente quando si passa un `CRect` oggetto a una funzione che prevede un **LPCRECT**.  
  

##  <a name="a-nameoperatorlprecta--crectoperator-lprect"></a><a name="operator_lprect"></a>CRect::operator LPRECT  
 Converte un `CRect` per un [LPRECT](../../mfc/reference/data-types-mfc.md).  

  
```
operator LPRECT() throw();
```  
  
### <a name="remarks"></a>Note  
 Quando si utilizza questa funzione, non è necessario address-of (**&**) (operatore). Questo operatore viene utilizzato automaticamente quando si passa un `CRect` oggetto a una funzione che prevede un `LPRECT`.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CRect::operator LPCRECT](#operator_lpcrect).  
  
##  <a name="a-nameoperatoreqa--crectoperator-"></a><a name="operator_eq"></a>CRect::operator =  
 Assegna *srcRect* a `CRect`.  
  
```  
void operator=(const RECT& srcRect) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *srcRect*  
 Fa riferimento a un rettangolo di origine. Can be a [RECT](../../mfc/reference/rect-structure1.md) or `CRect`.  
  
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

  
##  <a name="a-nameoperatoreqeqa--crectoperator-"></a><a name="operator_eq_eq"></a>CRect::operator = =  
 Determina se `rect` è uguale a `CRect` confrontando le coordinate di angoli in alto a sinistra e in basso a destra.  
  
```  
BOOL operator==(const RECT& rect) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Fa riferimento a un rettangolo di origine. Can be a [RECT](../../mfc/reference/rect-structure1.md) or `CRect`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è uguale; in caso contrario 0.  
  
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

  
##  <a name="a-nameoperatorneqa--crectoperator-"></a><a name="operator_neq"></a>CRect::operator! =  
 Determina se `rect` non è uguale a `CRect` confrontando le coordinate di angoli in alto a sinistra e in basso a destra.  
  
```  
BOOL operator!=(const RECT& rect) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Fa riferimento a un rettangolo di origine. Can be a [RECT](../../mfc/reference/rect-structure1.md) or `CRect`.  
  
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
  
##  <a name="a-nameoperatoraddeqa--crectoperator-"></a><a name="operator_add_eq"></a>+ = CRect::operator  
 Spostare i primi due overload `CRect` degli offset specificati.  
  
```  
void operator+=(POINT point) throw();
void operator+=(SIZE size) throw();
void operator+=(LPCRECT lpRect) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Oggetto [punto](../../mfc/reference/point-structure1.md) struttura o [CPoint](cpoint-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.  
  
 `size`  
 Oggetto [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](csize-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene il numero di unità per ogni lato di ingrandimento `CRect`.  
  
### <a name="remarks"></a>Note  
 Il parametro *x* e *y* (o `cx` e `cy`) vengono aggiunti valori a `CRect`.  
  
 Il terzo overload ingrandisce `CRect` dal numero di unità specificato in ogni membro del parametro.  
  
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
  
##  <a name="a-nameoperator-eqa--crectoperator--"></a><a name="operator_-_eq"></a>CRect::operator =  
 Spostare i primi due overload `CRect` degli offset specificati.  
  
```  
void operator-=(POINT point) throw();
void operator-=(SIZE size) throw();
void operator-=(LPCRECT lpRect) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Oggetto [punto](../../mfc/reference/point-structure1.md) struttura o [CPoint](cpoint-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.  
  
 `size`  
 Oggetto [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](csize-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene il numero di unità per ogni lato di deflate `CRect`.  
  
### <a name="remarks"></a>Note  
 Il parametro *x* e *y* (o `cx` e `cy`) i valori vengono sottratti `CRect`.  
  
 Il terzo overload decompressi `CRect` dal numero di unità specificato in ogni membro del parametro. Si noti che questo overload di funzioni come [DeflateRect](#deflaterect).  
  
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
  
##  <a name="a-nameoperatorampeqa--crectoperator-amp"></a><a name="operator_amp_eq"></a>CRect::operator&amp;=  
 Set `CRect` uguale all'intersezione tra `CRect` e `rect`.  
  
```  
void operator&=(const RECT& rect) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Contiene un [RECT](../../mfc/reference/rect-structure1.md) o `CRect`.  
  
### <a name="remarks"></a>Note  
 L'intersezione è il rettangolo più grande che è contenuto in entrambi i rettangoli.  
  
> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CRect::IntersectRect](#intersectrect).  
  
##  <a name="a-nameoperatororeqa--crectoperator-124"></a><a name="operator_or_eq"></a>CRect::operator | =  
 Set `CRect` uguale all'unione di `CRect` e `rect`.  
  
```  
void operator|=(const RECT& rect) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Contiene un `CRect` o [RECT](../../mfc/reference/rect-structure1.md).  
  
### <a name="remarks"></a>Note  
 L'unione è il più piccolo rettangolo contenente entrambi i rettangoli di origine.  
  
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

  
##  <a name="a-nameoperatoradda--crectoperator-"></a><a name="operator_add"></a>CRect::operator +  
 I primi due overload restituiscono un `CRect` oggetto che è uguale a `CRect` spostato da degli offset specificati.  
  
```  
CRect operator+(POINT point) const throw();
CRect operator+(LPCRECT lpRect) const throw();
CRect operator+(SIZE size) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Oggetto [punto](../../mfc/reference/point-structure1.md) struttura o [CPoint](cpoint-class.md) oggetto che specifica il numero di unità da spostare il valore restituito.  
  
 `size`  
 Oggetto [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](csize-class.md) oggetto che specifica il numero di unità da spostare il valore restituito.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene il numero di unità di ingrandimento ogni lato del valore restituito.  
  
### <a name="return-value"></a>Valore restituito  
 Il `CRect` derivante da spostare o eccessi nella misurazione `CRect` dal numero di unità specificata nel parametro.  
  
### <a name="remarks"></a>Note  
 Il parametro *x* e *y* (o `cx` e `cy`) i parametri vengono aggiunti a `CRect`posizione.  
  
 Il terzo overload restituisce un nuovo `CRect` che è uguale a `CRect` ampliato per il numero di unità specificato in ogni membro del parametro.  
  
### <a name="example"></a>Esempio  
```cpp  
   CRect   rect1(100, 235, 200, 335);
   CPoint pt(35, 65);
   CRect   rect2;

   rect2 = rect1 + pt;
   CRect   rectResult(135, 300, 235, 400);
   ASSERT(rectResult == rect2);   
```

  
##  <a name="a-nameoperator-a--crectoperator--"></a><a name="operator_-"></a>CRect::operator-  
 I primi due overload restituiscono un `CRect` oggetto che è uguale a `CRect` spostato da degli offset specificati.  
  
```  
CRect operator-(POINT point) const throw();
CRect operator-(SIZE size) const throw();
CRect operator-(LPCRECT lpRect) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Oggetto [punto](../../mfc/reference/point-structure1.md) struttura o `CPoint` oggetto che specifica il numero di unità da spostare il valore restituito.  
  
 `size`  
 Oggetto [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o `CSize` oggetto che specifica il numero di unità da spostare il valore restituito.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene il numero di unità da deflate ogni lato del valore restituito.  
  
### <a name="return-value"></a>Valore restituito  
 Il `CRect` derivante da spostare o deflazionando `CRect` dal numero di unità specificata nel parametro.  
  
### <a name="remarks"></a>Note  
 Il parametro *x* e *y* (o `cx` e `cy`) i parametri vengono sottratti `CRect`posizione.  
  
 Il terzo overload restituisce un nuovo `CRect` che è uguale a `CRect` ridotta per il numero di unità specificato in ogni membro del parametro. Si noti che questo overload di funzioni come [DeflateRect](#deflaterect), non [SubtractRect](#subtractrect).  
  
### <a name="example"></a>Esempio  
```cpp  
   CRect   rect1(100, 235, 200, 335);
   CPoint pt(35, 65);
   CRect   rect2;

   rect2 = rect1 - pt;
   CRect   rectResult(65, 170, 165, 270);
   ASSERT(rect2 == rectResult);   
```

  
##  <a name="a-nameoperatorampa--crectoperator-amp"></a><a name="operator_amp"></a>CRect::operator&amp;  
 Restituisce un `CRect` che rappresenta l'intersezione di `CRect` e *rect2*.  
  
```  
CRect operator&(const RECT& rect2) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *rect2*  
 Contiene un [RECT](../../mfc/reference/rect-structure1.md) o `CRect`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CRect` che rappresenta l'intersezione di `CRect` e *rect2*.  
  
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

  
##  <a name="a-nameoperatorora--crectoperator-124"></a><a name="operator_or"></a>CRect::operator |  
 Restituisce un `CRect` che rappresenta l'unione di `CRect` e *rect2*.  
  
```   
CRect operator|(const RECT& 
rect2) const throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 *rect2*  
 Contiene un [RECT](../../mfc/reference/rect-structure1.md) o `CRect`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CRect` che rappresenta l'unione di `CRect` e *rect2*.  
  
### <a name="remarks"></a>Note  
 L'unione è il più piccolo rettangolo contenente entrambi i rettangoli.  
  
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

  
##  <a name="a-nameptinrecta--crectptinrect"></a><a name="ptinrect"></a>CRect::PtInRect  
 Determina se il punto specificato si trova all'interno di `CRect`.  
  
```   
BOOL PtInRect(POINT point) const throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Contiene un [punto](../../mfc/reference/point-structure1.md) struttura o [CPoint](cpoint-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il punto si trova all'interno di `CRect`; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 È un punto all'interno di `CRect` se si trova sul lato sinistro o superiore o si trova all'interno di tutti e quattro i lati. Un punto sul lato destro o inferiore si trova fuori `CRect`.  
  
> [!NOTE]
>  Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) normalizzare il rettangolo prima di chiamare questa funzione.  
  
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
  
##  <a name="a-namesetrecta--crectsetrect"></a><a name="setrect"></a>CRect::SetRect  
 Imposta le dimensioni di `CRect` delle coordinate specificate.  
  
```   
void SetRect(int x1, int y1, int x2, int y2) throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x dell'angolo superiore sinistro.  
  
 `y1`  
 Specifica la coordinata y dell'angolo superiore sinistro.  
  
 `x2`  
 Specifica la coordinata x dell'angolo inferiore destro.  
  
 `y2`  
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

  
##  <a name="a-namesetrectemptya--crectsetrectempty"></a><a name="setrectempty"></a>CRect::SetRectEmpty  
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
  
##  <a name="a-namesizea--crectsize"></a><a name="size"></a>CRect::SIZE 
 Il `cx` e `cy` i membri del valore restituito contengono l'altezza e larghezza di `CRect`.  
  
```  
CSize Size() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CSize](csize-class.md) oggetto che contiene la dimensione di `CRect`.  
  
### <a name="remarks"></a>Note  
 L'altezza o larghezza può essere negativa.  
  
> [!NOTE]
>  Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) normalizzare il rettangolo prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
```cpp  
 CRect rect(10, 10, 50, 50);
 CSize sz = rect.Size();
 ASSERT(sz.cx == 40 && sz.cy == 40);  
```

##  <a name="a-namesubtractrecta--crectsubtractrect"></a><a name="subtractrect"></a>CRect::SubtractRect  
 Rende le dimensioni del **CRect** uguale alla sottrazione di `lpRectSrc2` da `lpRectSrc1`.  
  
```  
BOOL SubtractRect(LPCRECT lpRectSrc1, LPCRECT lpRectSrc2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpRectSrc1`  
 Indichi il [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto da cui deve essere sottratto un rettangolo.  
  
 `lpRectSrc2`  
 Punta al `RECT` struttura o `CRect` oggetto che deve essere sottratto dal rettangolo a cui punta il `lpRectSrc1` parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 La sottrazione è il più piccolo rettangolo che contiene tutti i punti in `lpRectScr1` che non sono l'intersezione di `lpRectScr1` e *lpRectScr2*.  
  
 Il rettangolo specificato da `lpRectSrc1` sarà invariato se il rettangolo specificato da `lpRectSrc2` sovrapporsi completamente il rettangolo specificato da *lpRectSrc1* in almeno di direzioni x o y.  
  
 Ad esempio, se `lpRectSrc1` sono stati (10,10, 100,100) e `lpRectSrc2` sono stati (50,50, 150,150), il rettangolo a cui puntava `lpRectSrc1` sarebbe invariato quando la funzione ha restituito. Se `lpRectSrc1` sono stati (10,10, 100,100) e `lpRectSrc2` erano (50,10, 150,150), tuttavia, il rettangolo a cui puntava `lpRectSrc1` contiene le coordinate (10,10, 50,100) quando la funzione ha restituito.  
  
 `SubtractRect`non è identico [operatore -](#operator_-) né [operatore-=](#operator_-_eq). Nessuno di questi operatori mai chiama `SubtractRect`.  
  
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
  
##  <a name="a-nametoplefta--crecttopleft"></a><a name="topleft"></a>CRect::TopLeft  
 Le coordinate vengono restituite come un riferimento a un [CPoint](cpoint-class.md) oggetto contenuto in `CRect`.  
  
```  
CPoint& TopLeft() throw();
const CPoint& TopLeft() const throw(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Coordinate dell'angolo superiore sinistro del rettangolo.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare questa funzione per ottenere o impostare l'angolo superiore sinistro del rettangolo. Impostare l'angolo mediante questa funzione sul lato sinistro dell'operatore di assegnazione.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CRect::CenterPoint](#centerpoint).  
  
##  <a name="a-nameunionrecta--crectunionrect"></a><a name="unionrect"></a>CRect::UnionRect  
 Rende le dimensioni di `CRect` uguale all'unione dei rettangoli due di origine.  
  
```  
BOOL UnionRect(LPCRECT lpRect1, LPCRECT lpRect2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect1`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) o `CRect` che contiene un rettangolo di origine.  
  
 `lpRect2`  
 Punta a un `RECT` o `CRect` che contiene un rettangolo di origine.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'unione non è vuoto. 0 se l'unione è vuoto.  
  
### <a name="remarks"></a>Note  
 L'unione è il più piccolo rettangolo contenente entrambi i rettangoli di origine.  
  
 Windows ignora le dimensioni di un rettangolo vuoto; vale a dire un rettangolo che non presenta nessuna altezza o di nessuna larghezza.  
  
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
 
##  <a name="a-namewidtha--crectwidth"></a><a name="width"></a>CRect::Width  
 Calcola la larghezza di `CRect` sottraendo il valore a sinistra rispetto a quello destro.  
  
```  
int Width() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza di `CRect`.  
  
### <a name="remarks"></a>Note  
 La larghezza può essere negativa.  
  
> [!NOTE]
>  Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#normalizerect) normalizzare il rettangolo prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  

```cpp  
   CRect rect(20, 30, 80, 70);
int nWid = rect.Width();
   // nWid is now 60
   ASSERT(nWid == 60);   
```
## <a name="see-also"></a>Vedere anche  
 [Classe CPoint](cpoint-class.md)   
 [Classe CSize](csize-class.md)   
 [RECT](../../mfc/reference/rect-structure1.md)



