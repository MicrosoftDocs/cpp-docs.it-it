---
title: Classe CPoint
ms.date: 11/04/2016
f1_keywords:
- CPoint
- ATLTYPES/ATL::CPoint
- ATLTYPES/ATL::CPoint::CPoint
- ATLTYPES/ATL::CPoint::Offset
helpviewer_keywords:
- LPPOINT structure
- POINT structure
- CPoint class
ms.assetid: a6d4db93-35cc-444d-9221-c3e160f6edaa
ms.openlocfilehash: 331b89ff118f727303e887670960ee6078b01fb1
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81747088"
---
# <a name="cpoint-class"></a>Classe CPoint

Simile alla struttura `POINT` di Windows.

## <a name="syntax"></a>Sintassi

```
class CPoint : public tagPOINT
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPoint::CPoint](#cpoint)|Costruisce un oggetto `CPoint`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPoint::Offset](#offset)|Aggiunge valori `x` ai membri e `y` dell'oggetto `CPoint`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPoint::operatore -](#operator_-)|Restituisce la `CPoint` differenza di una dimensione e e, la negazione di un punto, o la differenza di dimensione tra due punti o l'offset di una dimensione negativa.|
|[CPoint::operator !](#operator_neq)|Verifica la disuguaglianza tra due punti.|
|[CPoint::operatore](#operator_add)|Restituisce la `CPoint` somma di una dimensione `CRect` e di un punto o di un offset di una dimensione.|
|[CPoint::operatore](#operator_add_eq)|Offset `CPoint` aggiungendo una dimensione o un punto.|
|[CPoint::operatore](#operator_-_eq)|Offset `CPoint` sottraendo una dimensione o un punto.|
|[CPoint::operatore](#operator_eq_eq)|Verifica l'uguaglianza tra due punti.|

## <a name="remarks"></a>Osservazioni

Include anche funzioni membro `CPoint` per modificare e [POINT](/windows/win32/api/windef/ns-windef-point) strutture.

Un `CPoint` oggetto può essere `POINT` utilizzato ovunque venga utilizzata una struttura. Gli operatori di questa classe che interagiscono con una "dimensione" accettano oggetti [CSize](../../atl-mfc-shared/reference/csize-class.md) o [strutture DIMENSIONI,](/windows/win32/api/windef/ns-windef-size) poiché i due sono intercambiabili.

> [!NOTE]
> Questa classe è `tagPOINT` derivata dalla struttura. (Il `tagPOINT` nome è un nome `POINT` meno comunemente usato per la struttura.) Ciò significa che i `POINT` membri `x` `y`dati della struttura `CPoint`e , sono membri dati accessibili di .

> [!NOTE]
> Per ulteriori informazioni sulle classi `CPoint`di utilità condivise (ad esempio ), vedere [Classi condivise](../../atl-mfc-shared/atl-mfc-shared-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagPOINT`

`CPoint`

## <a name="requirements"></a>Requisiti

**Intestazione:** atltypes.h

## <a name="cpointcpoint"></a><a name="cpoint"></a>CPoint::CPoint

Costruisce un oggetto `CPoint`.

```
CPoint() throw();
CPoint(int initX, int initY) throw();
CPoint(POINT initPt) throw();
CPoint(SIZE initSize) throw();
CPoint(LPARAM dwPoint) throw();
```

### <a name="parameters"></a>Parametri

*initX*<br/>
Specificare il valore del membro `x` di `CPoint`.

*initY*<br/>
Specificare il valore del membro `y` di `CPoint`.

*initPt*<br/>
[Point](/windows/win32/api/windef/ns-windef-point) o `CPoint` che specifica i valori `CPoint`utilizzati per inizializzare .

*initSize (initSize)*<br/>
[DIMENSIONE](/windows/win32/api/windef/ns-windef-size) o [CSize](../../atl-mfc-shared/reference/csize-class.md) che specifica i `CPoint`valori utilizzati per inizializzare .

*dwPoint (dwPoint)*<br/>
Imposta `x` il membro sulla parola di ordine basso `y` di *dwPoint* e il membro sulla parola più in ordine superiore di *dwPoint*.

### <a name="remarks"></a>Osservazioni

Se non viene fornito alcun argomento, i membri `x` e `y` vengono impostate su 0.

### <a name="example"></a>Esempio

```cpp
CPoint   ptTopLeft(0, 0);
// works from a POINT, too

POINT   ptHere;
ptHere.x = 35;
ptHere.y = 95;

CPoint   ptMFCHere(ptHere);

// works from a SIZE
SIZE   sHowBig;
sHowBig.cx = 300;
sHowBig.cy = 10;

CPoint ptMFCBig(sHowBig);
// or from a DWORD

DWORD   dwSize;
dwSize = MAKELONG(35, 95);

CPoint ptFromDouble(dwSize);
ASSERT(ptFromDouble == ptMFCHere);
```

## <a name="cpointoffset"></a><a name="offset"></a>CPoint::Offset

Aggiunge valori `x` ai membri e `y` dell'oggetto `CPoint`.

```cpp
void Offset(int xOffset, int yOffset) throw();
void Offset(POINT point) throw();
void Offset(SIZE size) throw();
```

### <a name="parameters"></a>Parametri

*xOffset*<br/>
Specifica la quantità di `x` offset `CPoint`del membro del file .

*yOffset*<br/>
Specifica la quantità di `y` offset `CPoint`del membro del file .

*Punto*<br/>
Specifica la quantità [POINT](/windows/win32/api/windef/ns-windef-point) ( `CPoint`POINT o `CPoint`) per compensare il file .

*size*<br/>
Specifica la quantità ( [SIo'](/windows/win32/api/windef/ns-windef-size) o `CPoint` [DimensioneC](../../atl-mfc-shared/reference/csize-class.md)) per compensare l'oggetto .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#28](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_1.cpp)]

## <a name="cpointoperator-"></a><a name="operator_eq_eq"></a>CPoint::operatore

Verifica l'uguaglianza tra due punti.

```
BOOL operator==(POINT point) const throw();
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
Contiene una struttura `CPoint` o un oggetto [POINT.](/windows/win32/api/windef/ns-windef-point)

### <a name="return-value"></a>Valore restituito

Diverso da zero se i punti sono uguali; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#29](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_2.cpp)]

## <a name="cpointoperator-"></a><a name="operator_neq"></a>CPoint::operator !

Verifica la disuguaglianza tra due punti.

```
BOOL operator!=(POINT point) const throw();
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
Contiene una struttura `CPoint` o un oggetto [POINT.](/windows/win32/api/windef/ns-windef-point)

### <a name="return-value"></a>Valore restituito

Diverso da zero se i punti non sono uguali; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#30](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_3.cpp)]

## <a name="cpointoperator-"></a><a name="operator_add_eq"></a>CPoint::operatore

Il primo overload aggiunge `CPoint`una dimensione all'oggetto .

```cpp
void operator+=(SIZE size) throw();
void operator+=(POINT point) throw();
```

### <a name="parameters"></a>Parametri

*size*<br/>
Contiene una struttura [di DIMENSIONE](/windows/win32/api/windef/ns-windef-size) o un oggetto [CSize.](../../atl-mfc-shared/reference/csize-class.md)

*Punto*<br/>
Contiene una struttura [POINT](/windows/win32/api/windef/ns-windef-point) o un oggetto [CPoint.](../../atl-mfc-shared/reference/cpoint-class.md)

### <a name="remarks"></a>Osservazioni

Il secondo overload aggiunge `CPoint`un punto all'oggetto .

In entrambi i casi, l'aggiunta viene eseguita aggiungendo il `x` membro `x` (o) `CPoint` `cx`dell'operando di destra al membro dell'oggetto `y` e `CPoint`aggiungendo il `y` membro (o) `cy`dell'operando di destra al membro dell'oggetto .

Ad esempio, `CPoint(5, -7)` l'aggiunta `CPoint(30, 40)` a una `CPoint(35, 33)`variabile che contiene modifica la variabile in .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#31](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_4.cpp)]

## <a name="cpointoperator--"></a><a name="operator_-_eq"></a>CPoint::operatore

Il primo overload sottrae una dimensione da `CPoint`.

```cpp
void operator-=(SIZE size) throw();
void operator-=(POINT point) throw();
```

### <a name="parameters"></a>Parametri

*size*<br/>
Contiene una struttura [di DIMENSIONE](/windows/win32/api/windef/ns-windef-size) o un oggetto [CSize.](../../atl-mfc-shared/reference/csize-class.md)

*Punto*<br/>
Contiene una struttura [POINT](/windows/win32/api/windef/ns-windef-point) o un oggetto [CPoint.](../../atl-mfc-shared/reference/cpoint-class.md)

### <a name="remarks"></a>Osservazioni

Il secondo overload sottrae un punto dall'oggetto `CPoint`.

In entrambi i casi, la sottrazione viene eseguita sottraendo `x` il membro (o) `cx`dell'operando di `x` destra dal membro dell'oggetto `CPoint` `CPoint` e sottraendo il `y` membro (o) `cy`dell'operando di destra dal membro dell'oggetto `y` .

Ad esempio, `CPoint(5, -7)` sottraendo `CPoint(30, 40)` da una `CPoint(25, 47)`variabile che contiene la variabile viene modificata in .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#32](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_5.cpp)]

## <a name="cpointoperator-"></a><a name="operator_add"></a>CPoint::operatore

Utilizzare questo operatore `CPoint` per `CSize` eseguire l'offset `CRect` `CPoint` di `CPoint`un oggetto o per eseguire l'offset di un oggetto .

```
CPoint operator+(SIZE size) const throw();
CPoint operator+(POINT point) const throw();
CRect operator+(const RECT* lpRect) const throw();
```

### <a name="parameters"></a>Parametri

*size*<br/>
Contiene una struttura [di DIMENSIONE](/windows/win32/api/windef/ns-windef-size) o un oggetto [CSize.](../../atl-mfc-shared/reference/csize-class.md)

*Punto*<br/>
Contiene una struttura [POINT](/windows/win32/api/windef/ns-windef-point) o un oggetto [CPoint.](../../atl-mfc-shared/reference/cpoint-class.md)

*Lprect*<br/>
Contiene un puntatore a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Oggetto `CPoint` con offset di una `CPoint` dimensione, un oggetto che `CRect` è compensato da un punto o un offset da un punto.

### <a name="remarks"></a>Osservazioni

Ad esempio, l'utilizzo di uno dei `CPoint(25, -19)` primi due `CPoint(15, 5)` overload `CSize(15, 5)` per `CPoint(40, -14)`eseguire l'offset del punto di un punto o di una dimensione restituisce il valore .

L'aggiunta di un rettangolo a un `x` `y` punto restituisce il rettangolo dopo essere stato eseguito l'offset dei valori e specificati nel punto. Ad esempio, l'utilizzo dell'ultimo overload per eseguire l'offset di un rettangolo `CRect(125, 219, 325, 419)` di un punto `CPoint(25, -19)` restituisce `CRect(150, 200, 350, 400)`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#33](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_6.cpp)]

## <a name="cpointoperator--"></a><a name="operator_-"></a>CPoint::operatore -

Utilizzare uno dei primi due overload `CPoint` `CSize` per `CPoint`sottrarre un oggetto o da .

```
CSize operator-(POINT point) const throw();
CPoint operator-(SIZE size) const throw();
CRect operator-(const RECT* lpRect) const throw();
CPoint operator-() const throw();
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
Una struttura [POINT](/windows/win32/api/windef/ns-windef-point) o un oggetto [CPoint.](../../atl-mfc-shared/reference/cpoint-class.md)

*size*<br/>
Una struttura [di DIMENSIONE](/windows/win32/api/windef/ns-windef-size) o un oggetto [CSize.](../../atl-mfc-shared/reference/csize-class.md)

*Lprect*<br/>
Puntatore a un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Oggetto `CSize` che è la differenza `CPoint` tra due punti, un oggetto che `CRect` è compensato dalla negazione di una `CPoint` dimensione, un che è compensato dalla negazione di un punto, o un che è la negazione di un punto.

### <a name="remarks"></a>Osservazioni

Il terzo overload `CRect` esegue l'offset `CPoint`di a con la negazione di . Infine, utilizzare l'operatore `CPoint`unario per negare .

Ad esempio, utilizzando il primo overload per `CPoint(25, -19)` `CPoint(15, 5)` trovare `CSize(10, -24)`la differenza tra due punti e restituisce .

`CSize` Sottraendo un `CPoint` da esegue lo `CPoint` stesso calcolo di cui sopra, ma restituisce un oggetto, non un `CSize` oggetto. Ad esempio, l'utilizzo del secondo overload `CPoint(25, -19)` per `CSize(15, 5)` trovare `CPoint(10, -24)`la differenza tra il punto e la dimensione restituisce .

Sottraendo un rettangolo da un punto `x` restituisce l'offset del rettangolo dai negativi dei valori e `y` specificati nel punto. Ad esempio, utilizzando l'ultimo `CRect(125, 200, 325, 400)` overload per `CPoint(25, -19)` `CRect(100, 219, 300, 419)`eseguire l'offset del rettangolo in base al punto restituisce .

Utilizzare l'operatore unario per negare un punto. Ad esempio, l'utilizzo dell'operatore unario con il punto `CPoint(25, -19)` restituisce `CPoint(-25, 19)`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#34](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Struttura POINT](/windows/win32/api/windef/ns-windef-point)<br/>
[Classe CRect](../../atl-mfc-shared/reference/crect-class.md)<br/>
[Classe CSize](../../atl-mfc-shared/reference/csize-class.md)
