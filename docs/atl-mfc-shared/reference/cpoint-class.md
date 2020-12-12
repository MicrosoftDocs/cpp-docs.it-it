---
description: 'Altre informazioni su: classe CPoint'
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
ms.openlocfilehash: 9d1c6ecb628e4d47d80503bb7a441efc4deb1252
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166759"
---
# <a name="cpoint-class"></a>Classe CPoint

Simile alla struttura `POINT` di Windows.

## <a name="syntax"></a>Sintassi

```
class CPoint : public tagPOINT
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CPoint:: CPoint](#cpoint)|Costruisce un oggetto `CPoint`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CPoint:: offset](#offset)|Aggiunge valori ai `x` membri e `y` dell'oggetto `CPoint` .|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[Operatore CPoint:: operator-](#operator_-)|Restituisce la differenza tra un oggetto `CPoint` e una dimensione o la negazione di un punto o la differenza di dimensione tra due punti oppure l'offset di una dimensione negativa.|
|[CPoint:: operator! =](#operator_neq)|Verifica la disuguaglianza tra due punti.|
|[CPoint:: operator +](#operator_add)|Restituisce la somma di un oggetto `CPoint` e una dimensione o un punto oppure un `CRect` offset in base a una dimensione.|
|[CPoint:: operator + =](#operator_add_eq)|Offset `CPoint` mediante l'aggiunta di una dimensione o di un punto.|
|[CPoint:: operator-=](#operator_-_eq)|Offset `CPoint` sottraendo una dimensione o un punto.|
|[CPoint:: operator = =](#operator_eq_eq)|Verifica l'uguaglianza tra due punti.|

## <a name="remarks"></a>Commenti

Include anche funzioni membro per la modifica `CPoint` e la struttura di [punti](/windows/win32/api/windef/ns-windef-point) .

Un `CPoint` oggetto può essere usato ogni volta che `POINT` viene usata una struttura. Gli operatori di questa classe che interagiscono con una "dimensione" accettano oggetti [CSize](../../atl-mfc-shared/reference/csize-class.md) o strutture di [dimensioni](/windows/win32/api/windef/ns-windef-size) , dal momento che i due sono intercambiabili.

> [!NOTE]
> Questa classe è derivata dalla `tagPOINT` struttura. Il nome `tagPOINT` è un nome usato meno di frequente per la `POINT` struttura. Ciò significa che i membri dati della `POINT` struttura, `x` e `y` , sono membri dati accessibili di `CPoint` .

> [!NOTE]
> Per ulteriori informazioni sulle classi di utilità condivise, ad esempio `CPoint` , vedere [classi condivise](../../atl-mfc-shared/atl-mfc-shared-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagPOINT`

`CPoint`

## <a name="requirements"></a>Requisiti

**Intestazione:** atltypes. h

## <a name="cpointcpoint"></a><a name="cpoint"></a> CPoint:: CPoint

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

*Inity*<br/>
Specificare il valore del membro `y` di `CPoint`.

*initPt*<br/>
Struttura [Point](/windows/win32/api/windef/ns-windef-point) o `CPoint` che specifica i valori utilizzati per l'inizializzazione `CPoint` .

*initSize*<br/>
Struttura [size](/windows/win32/api/windef/ns-windef-size) o [CSize](../../atl-mfc-shared/reference/csize-class.md) che specifica i valori utilizzati per l'inizializzazione `CPoint` .

*dwPoint*<br/>
Imposta il `x` membro sulla parola di ordine inferiore di *dwPoint* e il `y` membro sulla parola di ordine superiore di *dwPoint*.

### <a name="remarks"></a>Commenti

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

## <a name="cpointoffset"></a><a name="offset"></a> CPoint:: offset

Aggiunge valori ai `x` membri e `y` dell'oggetto `CPoint` .

```cpp
void Offset(int xOffset, int yOffset) throw();
void Offset(POINT point) throw();
void Offset(SIZE size) throw();
```

### <a name="parameters"></a>Parametri

*xOffset*<br/>
Specifica la quantità di offset del `x` membro dell'oggetto `CPoint` .

*yOffset*<br/>
Specifica la quantità di offset del `y` membro dell'oggetto `CPoint` .

*punto*<br/>
Specifica la quantità ( [punto](/windows/win32/api/windef/ns-windef-point) o `CPoint` ) per l'offset dell'oggetto `CPoint` .

*size*<br/>
Specifica la quantità ( [size](/windows/win32/api/windef/ns-windef-size) o [CSize](../../atl-mfc-shared/reference/csize-class.md)) di cui eseguire l'offset `CPoint` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#28](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_1.cpp)]

## <a name="cpointoperator-"></a><a name="operator_eq_eq"></a> CPoint:: operator = =

Verifica l'uguaglianza tra due punti.

```
BOOL operator==(POINT point) const throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Contiene una struttura di [punti](/windows/win32/api/windef/ns-windef-point) o un `CPoint` oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i punti sono uguali; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#29](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_2.cpp)]

## <a name="cpointoperator-"></a><a name="operator_neq"></a> CPoint:: operator! =

Verifica la disuguaglianza tra due punti.

```
BOOL operator!=(POINT point) const throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Contiene una struttura di [punti](/windows/win32/api/windef/ns-windef-point) o un `CPoint` oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i punti non sono uguali. in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#30](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_3.cpp)]

## <a name="cpointoperator-"></a><a name="operator_add_eq"></a> CPoint:: operator + =

Il primo overload aggiunge una dimensione a `CPoint` .

```cpp
void operator+=(SIZE size) throw();
void operator+=(POINT point) throw();
```

### <a name="parameters"></a>Parametri

*size*<br/>
Contiene una struttura di [dimensioni](/windows/win32/api/windef/ns-windef-size) o un oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) .

*punto*<br/>
Contiene una struttura [Point](/windows/win32/api/windef/ns-windef-point) o un oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) .

### <a name="remarks"></a>Commenti

Il secondo overload aggiunge un punto a `CPoint` .

In entrambi i casi, l'aggiunta viene eseguita aggiungendo il `x` membro (o `cx` ) dell'operando destro al `x` membro della `CPoint` e aggiungendo il `y` membro (o `cy` ) dell'operando destro al `y` membro di `CPoint` .

Ad esempio, `CPoint(5, -7)` l'aggiunta a una variabile che contiene `CPoint(30, 40)` modifica la variabile in `CPoint(35, 33)` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#31](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_4.cpp)]

## <a name="cpointoperator--"></a><a name="operator_-_eq"></a> CPoint:: operator-=

Il primo overload sottrae una dimensione da `CPoint` .

```cpp
void operator-=(SIZE size) throw();
void operator-=(POINT point) throw();
```

### <a name="parameters"></a>Parametri

*size*<br/>
Contiene una struttura di [dimensioni](/windows/win32/api/windef/ns-windef-size) o un oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) .

*punto*<br/>
Contiene una struttura [Point](/windows/win32/api/windef/ns-windef-point) o un oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) .

### <a name="remarks"></a>Commenti

Il secondo overload sottrae un punto da `CPoint` .

In entrambi i casi, la sottrazione viene eseguita sottraendo il `x` membro (o `cx` ) dell'operando destro dal `x` membro di `CPoint` e sottraendo il `y` membro (o `cy` ) dell'operando destro dal `y` membro di `CPoint` .

Se, ad esempio, `CPoint(5, -7)` si sottrae da una variabile che contiene `CPoint(30, 40)` le modifiche apportate alla variabile `CPoint(25, 47)` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#32](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_5.cpp)]

## <a name="cpointoperator-"></a><a name="operator_add"></a> CPoint:: operator +

Utilizzare questo operatore per eseguire l'offset `CPoint` in base a un `CPoint` oggetto o oppure `CSize` per compensare un oggetto `CRect` in base a `CPoint` .

```
CPoint operator+(SIZE size) const throw();
CPoint operator+(POINT point) const throw();
CRect operator+(const RECT* lpRect) const throw();
```

### <a name="parameters"></a>Parametri

*size*<br/>
Contiene una struttura di [dimensioni](/windows/win32/api/windef/ns-windef-size) o un oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) .

*punto*<br/>
Contiene una struttura [Point](/windows/win32/api/windef/ns-windef-point) o un oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) .

*lpRect*<br/>
Contiene un puntatore a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) o a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) .

### <a name="return-value"></a>Valore restituito

Offset in `CPoint` base a una dimensione, un offset `CPoint` di un punto o un `CRect` offset in base a un punto.

### <a name="remarks"></a>Commenti

Se ad esempio si usa uno dei primi due overload per compensare il punto `CPoint(25, -19)` in base a un punto o a una dimensione, viene `CPoint(15, 5)` `CSize(15, 5)` restituito il valore `CPoint(40, -14)` .

L'aggiunta di un rettangolo a un punto restituisce il rettangolo dopo essere stato sottoposta a offset dai `x` `y` valori e specificati nel punto. Se ad esempio si usa l'ultimo overload per eseguire l'offset di un rettangolo `CRect(125, 219, 325, 419)` in base a un punto, viene `CPoint(25, -19)` restituito `CRect(150, 200, 350, 400)` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#33](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_6.cpp)]

## <a name="cpointoperator--"></a><a name="operator_-"></a> Operatore CPoint:: operator-

Usare uno dei primi due overload per sottrarre un `CPoint` `CSize` oggetto o da `CPoint` .

```
CSize operator-(POINT point) const throw();
CPoint operator-(SIZE size) const throw();
CRect operator-(const RECT* lpRect) const throw();
CPoint operator-() const throw();
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Una struttura [Point](/windows/win32/api/windef/ns-windef-point) o un oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) .

*size*<br/>
Struttura [size](/windows/win32/api/windef/ns-windef-size) o oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) .

*lpRect*<br/>
Puntatore a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) o a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) .

### <a name="return-value"></a>Valore restituito

Oggetto `CSize` che rappresenta la differenza tra due punti, un `CPoint` offset in base alla negazione di una dimensione, un oggetto che viene `CRect` offset dalla negazione di un punto o `CPoint` che è la negazione di un punto.

### <a name="remarks"></a>Commenti

Il terzo overload compensa un oggetto `CRect` in base alla negazione di `CPoint` . Infine, usare l'operatore unario per negare `CPoint` .

Ad esempio, usando il primo overload per trovare la differenza tra due punti `CPoint(25, -19)` e `CPoint(15, 5)` restituisce `CSize(10, -24)` .

La sottrazione `CSize` di un da `CPoint` esegue lo stesso calcolo precedente, ma restituisce un `CPoint` oggetto, non un `CSize` oggetto. Ad esempio, usando il secondo overload per trovare la differenza tra il punto `CPoint(25, -19)` e la dimensione `CSize(15, 5)` restituisce `CPoint(10, -24)` .

La sottrazione di un rettangolo da un punto restituisce l'offset del rettangolo in base ai `x` valori negativi dei `y` valori e specificati nel punto. Ad esempio, se si usa l'ultimo overload per compensare il rettangolo `CRect(125, 200, 325, 400)` dal punto, viene `CPoint(25, -19)` restituito `CRect(100, 219, 300, 419)` .

Usare l'operatore unario per negare un punto. Ad esempio, l'uso dell'operatore unario con il punto `CPoint(25, -19)` restituisce `CPoint(-25, 19)` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#34](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Struttura POINT](/windows/win32/api/windef/ns-windef-point)<br/>
[Classe CRect](../../atl-mfc-shared/reference/crect-class.md)<br/>
[Classe CSize](../../atl-mfc-shared/reference/csize-class.md)
