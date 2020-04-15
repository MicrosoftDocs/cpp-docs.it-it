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
ms.openlocfilehash: 6d1b82e3f60428e3a778709dc69de983a7f886bf
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317666"
---
# <a name="csize-class"></a>Classe CSize

Simile alla struttura [SIZE](/windows/win32/api/windef/ns-windef-size) di Windows, che implementa una coordinata o una posizione relativa.

## <a name="syntax"></a>Sintassi

```
class CSize : public tagSIZE
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSize::CSize](#csize)|Costruisce un oggetto `CSize`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSize::operatore -](#operator_-)|Sottrae due dimensioni.|
|[CSize::operator !](#operator_neq)|Verifica la disuguaglianza tra `CSize` e una dimensione.|
|[CSize::operatore](#operator_add)|Aggiunge due dimensioni.|
|[CSize::operatore](#operator_add_eq)|Aggiunge una `CSize`dimensione a .|
|[CSize::operatore -](#operator_-_eq)|Sottrae `CSize`una dimensione da .|
|[Proprietà CSize::operator](#operator_eq_eq)|Verifica l'uguaglianza tra `CSize` e una dimensione.|

## <a name="remarks"></a>Osservazioni

Questa classe è `SIZE` derivata dalla struttura. Ciò significa che `CSize` è possibile passare `SIZE` un in un parametro che richiede un e che i membri dati della `SIZE` struttura sono membri dati accessibili di `CSize`.

I `cx` `cy` membri `SIZE` e `CSize`di (e) sono pubblici. Inoltre, `CSize` implementa le funzioni `SIZE` membro per modificare la struttura.

> [!NOTE]
> Per ulteriori informazioni sulle classi `CSize`di utilità condivise (ad esempio ), vedere [Classi condivise](../../atl-mfc-shared/atl-mfc-shared-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagSIZE`

`CSize`

## <a name="requirements"></a>Requisiti

**Intestazione:** atltypes.h

## <a name="csizecsize"></a><a name="csize"></a>CSize::CSize

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
Imposta `cx` il membro `CSize`per l'oggetto .

*initCY*<br/>
Imposta `cy` il membro `CSize`per l'oggetto .

*initSize (initSize)*<br/>
[Struttura](/windows/win32/api/windef/ns-windef-size) di `CSize` DIMENSIONE o `CSize`oggetto utilizzato per inizializzare .

*initPt*<br/>
[Struttura](/windows/win32/api/windef/ns-windef-point) o `CPoint` oggetto POINT `CSize`utilizzato per inizializzare .

*dwSize (Dimensioni dwSize)*<br/>
DWORD utilizzato `CSize`per inizializzare . La parola di ordine `cx` basso è il membro `cy` e la parola più in ordine è il membro.

### <a name="remarks"></a>Osservazioni

Se non viene `cx` fornito `cy` alcun argomento e vengono inizializzati su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#97](../../atl-mfc-shared/codesnippet/cpp/csize-class_1.cpp)]

## <a name="csizeoperator-"></a><a name="operator_eq_eq"></a>Proprietà CSize::operator

Verifica l'uguaglianza tra due dimensioni.

```
BOOL operator==(SIZE size) const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce diverso da zero se le dimensioni sono uguali, otherwize 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#98](../../atl-mfc-shared/codesnippet/cpp/csize-class_2.cpp)]

## <a name="csizeoperator-"></a><a name="operator_neq"></a>CSize::operator !

Verifica la disuguaglianza tra due dimensioni.

```
BOOL operator!=(SIZE size) const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce diverso da zero se le dimensioni non sono uguali, in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#99](../../atl-mfc-shared/codesnippet/cpp/csize-class_3.cpp)]

## <a name="csizeoperator-"></a><a name="operator_add_eq"></a>CSize::operatore

Aggiunge una dimensione `CSize`a questo oggetto .

```
void operator+=(SIZE size) throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#100](../../atl-mfc-shared/codesnippet/cpp/csize-class_4.cpp)]

## <a name="csizeoperator--"></a><a name="operator_-_eq"></a>CSize::operatore -

Sottrae una `CSize`dimensione da questo oggetto .

```
void operator-=(SIZE size) throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#101](../../atl-mfc-shared/codesnippet/cpp/csize-class_5.cpp)]

## <a name="csizeoperator-"></a><a name="operator_add"></a>CSize::operatore

Questi operatori `CSize` aggiungono questo valore al valore del parametro.

```
CSize operator+(SIZE size) const throw();
CPoint operator+(POINT point) const throw();
CRect operator+(const RECT* lpRect) const throw();
```

### <a name="remarks"></a>Osservazioni

Vedere le seguenti descrizioni dei singoli operatori:

- **operatore : (** *size* **)**

  Questa operazione `CSize` aggiunge due valori.

- **operatore : (** *punto* **)**

  Questa operazione esegue l'offset di un valore [POINT](/previous-versions/dd162805\(v=vs.85\)) (o [CPoint)](../../atl-mfc-shared/reference/cpoint-class.md)in base a questo `CSize` valore. I `cx` `cy` membri e `CSize` di questo `x` valore `y` vengono aggiunti `POINT` ai membri dati e del valore. È analogo alla versione di [CPoint::operator](../../atl-mfc-shared/reference/cpoint-class.md#operator_add) , che accetta un parametro [di dimensione.](/windows/win32/api/windef/ns-windef-size)

- **operatore : (** *lpRect* **)**

   Questa operazione esegue l'offset di un valore [RECT](/previous-versions/dd162897\(v=vs.85\)) (o [CRect](../../atl-mfc-shared/reference/crect-class.md)) in base a questo `CSize` valore. I `cx` `cy` membri e `CSize` di questo `left`valore `top` `right`vengono `bottom` aggiunti ai `RECT` membri dati , , e del valore . È analogo alla versione di [CRect::operator ,](../../atl-mfc-shared/reference/crect-class.md#operator_add) che accetta un parametro [di dimensione.](/windows/win32/api/windef/ns-windef-size)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#102](../../atl-mfc-shared/codesnippet/cpp/csize-class_6.cpp)]

## <a name="csizeoperator--"></a><a name="operator_-"></a>CSize::operatore -

I primi tre di `CSize` questi operatori sottraggono questo valore al valore del parametro.

```
CSize operator-(SIZE size) const throw();
CPoint operator-(POINT point) const throw();
CRect operator-(const RECT* lpRect) const throw();
CSize operator-() const throw();
```

### <a name="remarks"></a>Osservazioni

Il quarto operatore, il meno unario, modifica il segno del `CSize` valore. Vedere le seguenti descrizioni dei singoli operatori:

- **operatore -(** *size* **)**

  Questa operazione sottrae due `CSize` valori.

- **operator -(** *point* **)**

  Questa operazione esegue l'offset (sposta) di un [POINT](/previous-versions/dd162805\(v=vs.85\)) o `CSize` di un valore [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) in base all'inverso additivo di questo valore. E `cx` `cy` di `CSize` questo valore vengono `x` sottratti dai membri dati e `y` del `POINT` valore. È analogo alla versione di [CPoint::operator -](../../atl-mfc-shared/reference/cpoint-class.md#operator_-) che accetta un parametro [di dimensione.](/windows/win32/api/windef/ns-windef-size)

- **operatore -(** *lpRect* **)**

  Questa operazione esegue l'offset (sposta) un [valore RECT](/previous-versions/dd162897\(v=vs.85\)) o `CSize` [CRect](../../atl-mfc-shared/reference/crect-class.md) dall'inverso additivo di questo valore. I `cx` `cy` membri e `CSize` di questo valore `left` `top`vengono `right`sottratti dai membri dati , , e `bottom` del `RECT` valore . È analogo alla versione di [CRect::operator -](../../atl-mfc-shared/reference/crect-class.md#operator_-) che accetta un parametro [di dimensione.](/windows/win32/api/windef/ns-windef-size)

- **operatore -()**

  Questa operazione restituisce l'inverso additivo di questo `CSize` valore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#103](../../atl-mfc-shared/codesnippet/cpp/csize-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CRect](../../atl-mfc-shared/reference/crect-class.md)<br/>
[Classe CPoint](../../atl-mfc-shared/reference/cpoint-class.md)
