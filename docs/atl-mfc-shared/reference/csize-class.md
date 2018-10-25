---
title: Classe CSize | Microsoft Docs
ms.custom: ''
ms.date: 10/18/2018
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CSize
- ATLTYPES/ATL::CSize
- ATLTYPES/ATL::CSize::CSize
dev_langs:
- C++
helpviewer_keywords:
- SIZE
- dimensions, MFC
- dimensions
- CSize class
ms.assetid: fb2cf85a-0bc1-46f8-892b-309c108b52ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6d9927712077f7d0d57d9ece5ae72489be291866
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50055227"
---
# <a name="csize-class"></a>Classe CSize

Simile alla struttura [SIZE](https://msdn.microsoft.com/library/windows/desktop/dd145106) di Windows, che implementa una coordinata o una posizione relativa.

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
|[CSize::operator-](#operator_-)|Sottrae due dimensioni.|
|[CSize::operator! =](#operator_neq)|Verifica la disuguaglianza tra `CSize` e una dimensione.|
|[CSize::operator +](#operator_add)|Aggiunge due dimensioni.|
|[+ = CSize::operator](#operator_add_eq)|Aggiunge una dimensione per `CSize`.|
|[CSize::operator =](#operator_-_eq)|Sottrae una dimensione dal `CSize`.|
|[CSize::operator = =](#operator_eq_eq)|Verifica l'uguaglianza tra `CSize` e una dimensione.|

## <a name="remarks"></a>Note

Questa classe è derivata dal `SIZE` struttura. Ciò significa che è possibile passare un `CSize` in un parametro che richiede un `SIZE` e che i membri dati della `SIZE` struttura sono membri di dati accessibili di `CSize`.

Il `cx` e `cy` appartenenti `SIZE` (e `CSize`) sono pubblici. È inoltre `CSize` implementare le funzioni membro per manipolare il `SIZE` struttura.

> [!NOTE]
> Per ulteriori informazioni sulle classi di utilità condivisi (ad esempio `CSize`), vedere [classi condivise](../../atl-mfc-shared/atl-mfc-shared-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagSIZE`

`CSize`

## <a name="requirements"></a>Requisiti

**Intestazione:** atltypes. h

##  <a name="csize"></a>  CSize::CSize

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
Imposta il `cx` membro per il `CSize`.

*initCY*<br/>
Imposta il `cy` membro per il `CSize`.

*initSize*<br/>
[Le dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) struttura oppure `CSize` oggetto utilizzato per inizializzare `CSize`.

*initPt*<br/>
[PUNTO](../../mfc/reference/point-structure.md) struttura oppure `CPoint` oggetto utilizzato per inizializzare `CSize`.

*dwSize diverso da*<br/>
Consente di inizializzare DWORD `CSize`. La parola meno significativa è il `cx` membro e la parola più significativa è la `cy` membro.

### <a name="remarks"></a>Note

Se viene fornito alcun argomento, `cx` e `cy` vengono inizializzate su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#97](../../atl-mfc-shared/codesnippet/cpp/csize-class_1.cpp)]

##  <a name="operator_eq_eq"></a>  CSize::operator = =

Verifica l'uguaglianza tra due dimensioni.

```
BOOL operator==(SIZE size) const throw();
```

### <a name="remarks"></a>Note

Restituisce diversi da zero se le dimensioni sono uguali, otherwize 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#98](../../atl-mfc-shared/codesnippet/cpp/csize-class_2.cpp)]

##  <a name="operator_neq"></a>  CSize::operator! =

Verifica la disuguaglianza tra due dimensioni.

```
BOOL operator!=(SIZE size) const throw();
```

### <a name="remarks"></a>Note

Restituisce diversi da zero se le dimensioni non sono uguali, altrimenti 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#99](../../atl-mfc-shared/codesnippet/cpp/csize-class_3.cpp)]

##  <a name="operator_add_eq"></a>  + = CSize::operator

Aggiunge una dimensione a `CSize`.

```
void operator+=(SIZE size) throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#100](../../atl-mfc-shared/codesnippet/cpp/csize-class_4.cpp)]

##  <a name="operator_-_eq"></a>  CSize::operator =

Sottrae una dimensione da questo `CSize`.

```
void operator-=(SIZE size) throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#101](../../atl-mfc-shared/codesnippet/cpp/csize-class_5.cpp)]

##  <a name="operator_add"></a>  CSize::operator +

Aggiungere questo elemento questi operatori `CSize` al valore del parametro.

```
CSize operator+(SIZE size) const throw();
CPoint operator+(POINT point) const throw();
CRect operator+(const RECT* lpRect) const throw();
```

### <a name="remarks"></a>Note

Vedere le seguenti descrizioni dei singoli operatori:

- **operatore + (** `size` **)** questa operazione aggiunge due `CSize` valori.

- **operatore + (** `point` **)** questa operazione viene eseguito l'offset (sposta) un [punto](https://msdn.microsoft.com/library/windows/desktop/dd162805) (oppure [CPoint](../../atl-mfc-shared/reference/cpoint-class.md)) da questo valore `CSize` valore. Il **cx** e **cy** i membri di questo `CSize` valore vengono aggiunti per il **x** e **y** membri dati del **punto**  valore. Questo blocco è simile a quella di [CPoint::operator +](../../atl-mfc-shared/reference/cpoint-class.md#operator_add) che accetta un [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.

- **operatore + (** `lpRect` **)** questa operazione viene eseguito l'offset (sposta) un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) (oppure [CRect](../../atl-mfc-shared/reference/crect-class.md)) da questo valore `CSize` valore. Il **cx** e **cy** membri di questo `CSize` valore vengono aggiunti al **a sinistra**, **top**, **destra**, e **inferiore** membri dati del `RECT` valore. Questo blocco è simile a quella di [CRect::operator +](../../atl-mfc-shared/reference/crect-class.md#operator_add) che accetta un [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#102](../../atl-mfc-shared/codesnippet/cpp/csize-class_6.cpp)]

##  <a name="operator_-"></a>  CSize::operator-

I primi tre di questi operatori sottrarre questo `CSize` al valore del parametro.

```
CSize operator-(SIZE size) const throw();
CPoint operator-(POINT point) const throw();
CRect operator-(const RECT* lpRect) const throw();
CSize operator-() const throw();
```

### <a name="remarks"></a>Note

Il quarto operatore, il meno unario, modifica il segno del `CSize` valore. Vedere le seguenti descrizioni dei singoli operatori:

- **operatore-(** `size` **)** questa operazione sottrae due `CSize` valori.

- **operatore-(** `point` **)** questa operazione viene eseguito l'offset (sposta) un [punto](https://msdn.microsoft.com/library/windows/desktop/dd162805) oppure [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) valore in base all'inverso additivo di questo `CSize` valore. Il **cx** e **cy** di questo `CSize` valore vengono sottratti dal **x** e **y** membri dati del **punto**  valore. Questo blocco è simile a quella di [CPoint::operator -](../../atl-mfc-shared/reference/cpoint-class.md#operator_-) che accetta un [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.

- **operatore-(** `lpRect` **)** questa operazione viene eseguito l'offset (sposta) un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) oppure [CRect](../../atl-mfc-shared/reference/crect-class.md) valore in base all'inverso additivo di questo `CSize` valore. Il **cx** e **cy** membri di questo `CSize` valore vengono sottratti dal **a sinistra**, **top**, **destra**, e **inferiore** membri dati del `RECT` valore. Questo blocco è simile a quella di [CRect::operator -](../../atl-mfc-shared/reference/crect-class.md#operator_-) che accetta un [dimensioni](https://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.

- **operatore-()** questa operazione restituisce l'inverso additivo di questo `CSize` valore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#103](../../atl-mfc-shared/codesnippet/cpp/csize-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC MDI](../../visual-cpp-samples.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CRect](../../atl-mfc-shared/reference/crect-class.md)<br/>
[Classe CPoint](../../atl-mfc-shared/reference/cpoint-class.md)

