---
title: Classe CPoint | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CPoint
- ATLTYPES/ATL::CPoint
- ATLTYPES/ATL::CPoint::CPoint
- ATLTYPES/ATL::CPoint::Offset
dev_langs:
- C++
helpviewer_keywords:
- LPPOINT structure
- POINT structure
- CPoint class
ms.assetid: a6d4db93-35cc-444d-9221-c3e160f6edaa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a1ab725391b03eeba35e230c3e0a5ebe0913fec2
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49328350"
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
|[CPoint::Offset](#offset)|Aggiunge i valori per il `x` e `y` i membri del `CPoint`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPoint::operator-](#operator_-)|Restituisce la differenza tra un `CPoint` e una dimensione o la negazione di un punto o la differenza dimensioni tra due punti o l'offset in base alle dimensioni negative.|
|[CPoint::operator! =](#operator_neq)|Verifica la disuguaglianza tra due punti.|
|[CPoint::operator +](#operator_add)|Restituisce la somma di una `CPoint` e una dimensione o un punto, o un `CRect` offset in base a una dimensione.|
|[+ = CPoint::operator](#operator_add_eq)|Viene eseguito l'offset `CPoint` mediante l'aggiunta di una dimensione o un punto.|
|[CPoint::operator =](#operator_-_eq)|Viene eseguito l'offset `CPoint` sottraendo una dimensione o un punto.|
|[CPoint::operator = =](#operator_eq_eq)|Verifica l'uguaglianza tra due punti.|

## <a name="remarks"></a>Note

Include anche le funzioni membro per manipolare `CPoint` e [punto](../../mfc/reference/point-structure.md) strutture.

Oggetto `CPoint` oggetto può essere utilizzato ovunque un `POINT` struttura viene utilizzata. Gli operatori che interagiscono con un "size" di questa classe accettano uno [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetti oppure [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) strutture, poiché i due sono intercambiabili.

> [!NOTE]
>  Questa classe è derivata dal `tagPOINT` struttura. (Il nome `tagPOINT` è un nome usato meno di frequente per il `POINT` struttura.) Ciò significa che i membri dati della `POINT` struttura `x` e `y`, sono membri di dati accessibili di `CPoint`.

> [!NOTE]
>  Per ulteriori informazioni sulle classi di utilità condivisi (ad esempio `CPoint`), vedere [classi condivise](../../atl-mfc-shared/atl-mfc-shared-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagPOINT`

`CPoint`

## <a name="requirements"></a>Requisiti

**Intestazione:** atltypes. h

##  <a name="cpoint"></a>  CPoint::CPoint

Costruisce un oggetto `CPoint`.

```
CPoint() throw();
CPoint(int initX, int initY) throw();
CPoint(POINT initPt) throw();
CPoint(SIZE initSize) throw();
CPoint(LPARAM dwPoint) throw();
```

### <a name="parameters"></a>Parametri

*initX*  
Specificare il valore del membro `x` di `CPoint`.

*initY*  
Specificare il valore del membro `y` di `CPoint`.

*initPt*  
[PUNTO](../../mfc/reference/point-structure.md) struttura oppure `CPoint` che specifica i valori utilizzati per inizializzare `CPoint`.

*initSize*  
[Le dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura oppure [CSize](../../atl-mfc-shared/reference/csize-class.md) che specifica i valori utilizzati per inizializzare `CPoint`.

*dwPoint*  
Imposta il `x` membro per la parola meno significativa di *dwPoint* e il `y` membro per la parola più significativa della *dwPoint*.

### <a name="remarks"></a>Note

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

##  <a name="offset"></a>  CPoint::Offset

Aggiunge i valori per il `x` e `y` i membri del `CPoint`.

```
void Offset(int xOffset, int yOffset) throw();
void Offset(POINT point) throw();
void Offset(SIZE size) throw();
```

### <a name="parameters"></a>Parametri

*Sfalsamento x*  
Specifica la quantità di offset il `x` membro del `CPoint`.

*OffsetY*  
Specifica la quantità di offset il `y` membro del `CPoint`.

*punto*  
Specifica la quantità ( [punto](../../mfc/reference/point-structure.md) oppure `CPoint`) per compensare la `CPoint`.

*size*  
Specifica la quantità ( [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) oppure [CSize](../../atl-mfc-shared/reference/csize-class.md)) per compensare la `CPoint`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#28](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_1.cpp)]

##  <a name="operator_eq_eq"></a>  CPoint::operator = =

Verifica l'uguaglianza tra due punti.

```
BOOL operator==(POINT point) const throw();
```

### <a name="parameters"></a>Parametri

*punto*  
Contiene un [punto](../../mfc/reference/point-structure.md) struttura o `CPoint` oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i punti sono uguali. in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#29](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_2.cpp)]

##  <a name="operator_neq"></a>  CPoint::operator! =

Verifica la disuguaglianza tra due punti.

```
BOOL operator!=(POINT point) const throw();
```

### <a name="parameters"></a>Parametri

*punto*  
Contiene un [punto](../../mfc/reference/point-structure.md) struttura o `CPoint` oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i punti non sono uguali. in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#30](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_3.cpp)]

##  <a name="operator_add_eq"></a>  + = CPoint::operator

Il primo overload aggiunge una dimensione per la `CPoint`.

```
void operator+=(SIZE size) throw(); 
void operator+=(POINT point) throw();
```

### <a name="parameters"></a>Parametri

*size*  
Contiene un [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura oppure [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.

*punto*  
Contiene un [punto](../../mfc/reference/point-structure.md) struttura oppure [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.

### <a name="remarks"></a>Note

Il secondo overload viene aggiunto un punto per il `CPoint`.

In entrambi i casi, addizione viene eseguita aggiungendo il `x` (o `cx`) membro dell'operando destro per il `x` membro del `CPoint` e l'aggiunta del `y` (o `cy`) membro dell'operando destro per il `y` membro del `CPoint`.

Ad esempio, aggiungendo `CPoint(5, -7)` a una variabile che contiene `CPoint(30, 40)` la variabile viene modificato `CPoint(35, 33)`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#31](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_4.cpp)]

##  <a name="operator_-_eq"></a>  CPoint::operator =

Il primo overload Sottrae una dimensione dalla `CPoint`.

```
void operator-=(SIZE size) throw(); 
void operator-=(POINT point) throw();
```

### <a name="parameters"></a>Parametri

*size*  
Contiene un [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura oppure [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.

*punto*  
Contiene un [punto](../../mfc/reference/point-structure.md) struttura oppure [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.

### <a name="remarks"></a>Note

Il secondo overload consente di sottrarre un punto dal `CPoint`.

In entrambi i casi, la sottrazione viene eseguita sottraendo il `x` (o `cx`) membro dell'operando destro dalle `x` membro del `CPoint` e sottraendo il `y` (o `cy`) appartenente a destra operando dal `y` membro del `CPoint`.

Ad esempio, la sottrazione `CPoint(5, -7)` da una variabile che contiene `CPoint(30, 40)` la variabile viene modificato `CPoint(25, 47)`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#32](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_5.cpp)]

##  <a name="operator_add"></a>  CPoint::operator +

Usare questo operatore per compensare `CPoint` da un `CPoint` o `CSize` oggetto, o compensare un `CRect` da un `CPoint`.

```
CPoint operator+(SIZE size) const throw();
CPoint operator+(POINT point) const throw();
CRect operator+(const RECT* lpRect) const throw();
```

### <a name="parameters"></a>Parametri

*size*  
Contiene un [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura oppure [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.

*punto*  
Contiene un [punto](../../mfc/reference/point-structure.md) struttura oppure [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.

*lpRect*  
Contiene un puntatore a un [RECT](../../mfc/reference/rect-structure.md) struttura oppure [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Oggetto `CPoint` spostato da una dimensione, una `CPoint` spostato da un punto o un `CRect` offset in base a un punto.

### <a name="remarks"></a>Note

Ad esempio, usando uno dei primi due overload per il punto di offset `CPoint(25, -19)` da un punto `CPoint(15, 5)` o la dimensione `CSize(15, 5)` restituisce il valore `CPoint(40, -14)`.

Aggiunta di un rettangolo a un punto di restituisce il rettangolo dopo l'offset per il `x` e `y` valori specificati nel punto. Ad esempio, usando l'ultimo overload di un rettangolo offset `CRect(125, 219, 325, 419)` da un punto `CPoint(25, -19)` restituisce `CRect(150, 200, 350, 400)`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#33](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_6.cpp)]

##  <a name="operator_-"></a>  CPoint::operator-

Uno dei primi due overload consente di sottrarre un `CPoint` oppure `CSize` dall'oggetto `CPoint`.

```
CSize operator-(POINT point) const throw();
CPoint operator-(SIZE size) const throw();
CRect operator-(const RECT* lpRect) const throw();
CPoint operator-() const throw();
```

### <a name="parameters"></a>Parametri

*punto*  
Oggetto [punto](../../mfc/reference/point-structure.md) struttura oppure [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.

*size*  
Oggetto [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura oppure [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.

*lpRect*  
Un puntatore a un [RECT](../../mfc/reference/rect-structure.md) struttura o un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Oggetto `CSize` vale a dire la differenza tra due punti, un `CPoint` spostato dalla negazione di una dimensione, un `CRect` spostato dalla negazione di un punto o un `CPoint` vale a dire la negazione di un punto.

### <a name="remarks"></a>Note

Il terzo overload offset di un `CRect` dalla negazione del `CPoint`. Infine, usare l'operatore unario da negare `CPoint`.

Ad esempio, usando il primo overload per trovare la differenza tra due punti `CPoint(25, -19)` e `CPoint(15, 5)` restituisce `CSize(10, -24)`.

Sottrazione di un `CSize` dal `CPoint` non lo stesso calcolo come illustrato in precedenza ma restituisce un `CPoint` dell'oggetto, non un `CSize` oggetto. Ad esempio, tramite il secondo overload per trovare la differenza tra il punto `CPoint(25, -19)` e la dimensione `CSize(15, 5)` restituisce `CPoint(10, -24)`.

Sottrazione di un rettangolo da un punto di restituisce l'offset del rettangolo da negativi delle `x` e `y` valori specificati nel punto. Ad esempio, usando l'ultimo overload di offset il rettangolo `CRect(125, 200, 325, 400)` dal punto `CPoint(25, -19)` restituisce `CRect(100, 219, 300, 419)`.

Usare l'operatore unario da negare un punto. Ad esempio, utilizzando l'operatore unario con il punto `CPoint(25, -19)` restituisce `CPoint(-25, 19)`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#34](../../atl-mfc-shared/codesnippet/cpp/cpoint-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC MDI](../../visual-cpp-samples.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Struttura POINT](../../mfc/reference/point-structure.md)<br/>
[Classe CRect](../../atl-mfc-shared/reference/crect-class.md)<br/>
[Classe CSize](../../atl-mfc-shared/reference/csize-class.md)

