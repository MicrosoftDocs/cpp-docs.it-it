---
title: Classe CSize
ms.date: 10/18/2018
f1_keywords:
- CSize
- ATLTYPES/ATL::CSize
- ATLTYPES/ATL::CSize::CSize
helpviewer_keywords:
- SIZE
- dimensions, MFC
- dimensions
- CSize class
ms.assetid: fb2cf85a-0bc1-46f8-892b-309c108b52ae
ms.openlocfilehash: 26bb43355f4dff3f77a905068bea83dd1ceaf79c
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491647"
---
# <a name="csize-class"></a>Classe CSize

Simile alla struttura [SIZE](/windows/win32/api/windef/ns-windef-size) di Windows, che implementa una coordinata o una posizione relativa.

## <a name="syntax"></a>Sintassi

```
class CSize : public tagSIZE
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSize:: CSize](#csize)|Costruisce un oggetto `CSize`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore CSize:: operator-](#operator_-)|Sottrae due dimensioni.|
|[CSize:: operator! =](#operator_neq)|Verifica la disuguaglianza tra `CSize` e una dimensione.|
|[CSize:: operator +](#operator_add)|Aggiunge due dimensioni.|
|[CSize:: operator + =](#operator_add_eq)|Aggiunge una dimensione a `CSize`.|
|[CSize:: operator-=](#operator_-_eq)|Sottrae una dimensione da `CSize`.|
|[CSize:: operator = =](#operator_eq_eq)|Verifica l'uguaglianza tra `CSize` e una dimensione.|

## <a name="remarks"></a>Note

Questa classe è derivata dalla `SIZE` struttura. Ciò significa che è possibile passare `CSize` un oggetto in un parametro che chiama `SIZE` per un e che `SIZE` i membri dati della struttura sono membri dati accessibili `CSize`di.

I `cx` membri `cy` e di `SIZE` ( e`CSize`) sono pubblici. `CSize` Implementa inoltre le funzioni membro per modificare la `SIZE` struttura.

> [!NOTE]
> Per ulteriori informazioni sulle classi di utilità condivise, `CSize`ad esempio, vedere [classi condivise](../../atl-mfc-shared/atl-mfc-shared-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagSIZE`

`CSize`

## <a name="requirements"></a>Requisiti

**Intestazione:** atltypes. h

##  <a name="csize"></a>CSize:: CSize

Costruisce un oggetto `CSize`.

```
CSize() throw();
CSize( int initCX, int initCY) throw();
CSize( SIZE initSize) throw();
CSize( POINT initPt) throw();
CSize( DWORD dwSize) throw();
```

### <a name="parameters"></a>Parametri

*initCX*<br/>
Imposta il `cx` membro per l' `CSize`oggetto.

*initCY*<br/>
Imposta il `cy` membro per l' `CSize`oggetto.

*initSize*<br/>
Struttura di [dimensioni](/windows/win32/api/windef/ns-windef-size) o `CSize` oggetto utilizzato per `CSize`inizializzare.

*initPt*<br/>
Struttura [Point](/windows/win32/api/windef/ns-windef-point) o `CPoint` oggetto utilizzato per inizializzare `CSize`.

*dwSize*<br/>
DWORD utilizzato per inizializzare `CSize`. La parola di basso livello è il `cx` membro e la parola più ordinata è il `cy` membro.

### <a name="remarks"></a>Note

Se non viene fornito alcun argomento `cx` , `cy` e vengono inizializzati su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#97](../../atl-mfc-shared/codesnippet/cpp/csize-class_1.cpp)]

##  <a name="operator_eq_eq"></a>CSize:: operator = =

Verifica l'uguaglianza tra due dimensioni.

```
BOOL operator==(SIZE size) const throw();
```

### <a name="remarks"></a>Note

Restituisce un valore diverso da zero se le dimensioni sono uguali, otherwize 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#98](../../atl-mfc-shared/codesnippet/cpp/csize-class_2.cpp)]

##  <a name="operator_neq"></a>CSize:: operator! =

Verifica la disuguaglianza tra due dimensioni.

```
BOOL operator!=(SIZE size) const throw();
```

### <a name="remarks"></a>Note

Restituisce un valore diverso da zero se le dimensioni non sono uguali; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#99](../../atl-mfc-shared/codesnippet/cpp/csize-class_3.cpp)]

##  <a name="operator_add_eq"></a>CSize:: operator + =

Aggiunge una dimensione a questa `CSize`.

```
void operator+=(SIZE size) throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#100](../../atl-mfc-shared/codesnippet/cpp/csize-class_4.cpp)]

##  <a name="operator_-_eq"></a>CSize:: operator-=

Sottrae una dimensione da questo `CSize`oggetto.

```
void operator-=(SIZE size) throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#101](../../atl-mfc-shared/codesnippet/cpp/csize-class_5.cpp)]

##  <a name="operator_add"></a>CSize:: operator +

Questi operatori aggiungono `CSize` questo valore al valore del parametro.

```
CSize operator+(SIZE size) const throw();
CPoint operator+(POINT point) const throw();
CRect operator+(const RECT* lpRect) const throw();
```

### <a name="remarks"></a>Note

Vedere le descrizioni seguenti dei singoli operatori:

- **operatore + (** *dimensioni* **)**

  Questa operazione aggiunge due `CSize` valori.

- **operator +(** *point* **)**

  Questa operazione compensa (sposta) un valore [Point](/previous-versions/dd162805\(v=vs.85\)) (o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md)) in base a `CSize` questo valore. I `cx` membri `cy` e di questo `CSize` valore vengono `x` aggiuntiai`y` membri dati e del valore.`POINT` È analogo alla versione di [CPoint:: operator +](../../atl-mfc-shared/reference/cpoint-class.md#operator_add) che accetta un parametro [size](/windows/win32/api/windef/ns-windef-size) .

- **operator +(** *lpRect* **)**

   Questa operazione compensa (sposta) un valore [Rect](/previous-versions/dd162897\(v=vs.85\)) (o [CRect](../../atl-mfc-shared/reference/crect-class.md)) in base a `CSize` questo valore. I `cx` membri `cy` e di questo `CSize` valore vengono aggiunti ai `left`membri dati `top`, `right`, e `bottom` del `RECT` valore. È analogo alla versione di [CRect:: operator +](../../atl-mfc-shared/reference/crect-class.md#operator_add) che accetta un parametro [size](/windows/win32/api/windef/ns-windef-size) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#102](../../atl-mfc-shared/codesnippet/cpp/csize-class_6.cpp)]

##  <a name="operator_-"></a>Operatore CSize:: operator-

I primi tre di questi operatori sottraono `CSize` questo valore al valore del parametro.

```
CSize operator-(SIZE size) const throw();
CPoint operator-(POINT point) const throw();
CRect operator-(const RECT* lpRect) const throw();
CSize operator-() const throw();
```

### <a name="remarks"></a>Note

Il quarto operatore, il meno unario, modifica il segno del `CSize` valore. Vedere le descrizioni seguenti dei singoli operatori:

- **operatore-(** *dimensioni* **)**

  Questa operazione Sottrae due `CSize` valori.

- **operatore-(** *Point* **)**

  Questa operazione compensa (sposta) un valore [Point](/previous-versions/dd162805\(v=vs.85\)) o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) per l'inverso additivo di questo `CSize` valore. `y` `x` E di questo valore`CSize` vengono sottratti dai membri dati e del `POINT` valore. `cy` `cx` È analogo alla versione di [CPoint:: operator,](../../atl-mfc-shared/reference/cpoint-class.md#operator_-) che accetta un parametro [size](/windows/win32/api/windef/ns-windef-size) .

- **operator -(** *lpRect* **)**

  Questa operazione compensa (sposta) un valore [Rect](/previous-versions/dd162897\(v=vs.85\)) o [CRect](../../atl-mfc-shared/reference/crect-class.md) dall'inverso additivo di questo `CSize` valore. I `cx` membri `cy` e di questo `CSize` valore vengono sottratti dai `left`membri dati `top`, `right`, e `bottom` del `RECT` valore. È analogo alla versione di [CRect:: operator,](../../atl-mfc-shared/reference/crect-class.md#operator_-) che accetta un parametro [size](/windows/win32/api/windef/ns-windef-size) .

- **operatore-()**

  Questa operazione restituisce l'inverso additivo di `CSize` questo valore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#103](../../atl-mfc-shared/codesnippet/cpp/csize-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CRect](../../atl-mfc-shared/reference/crect-class.md)<br/>
[Classe CPoint](../../atl-mfc-shared/reference/cpoint-class.md)
