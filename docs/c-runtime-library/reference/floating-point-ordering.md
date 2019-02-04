---
title: isgreater, isgreaterequal, isless, islessequal, islessgreater, isunordered
ms.date: 01/31/2019
f1_keywords:
- isgreater
- math/isgreater
- isgreaterequal
- math/isgreaterequal
- isless
- math/isless
- islessequal
- math/islessequal
- islessgreater
- math/islessgreater
- isunordered
- math/isunordered
helpviewer_keywords:
- isgreater function
- isgreaterequal function
- isless function
- islessequal function
- islessgreater function
- isunordered function
ms.openlocfilehash: 748360cae1dd0ee43645dee369c60c835246ed03
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55703477"
---
# <a name="isgreater-isgreaterequal-isless-islessequal-islessgreater-isunordered"></a>isgreater, isgreaterequal, isless, islessequal, islessgreater, isunordered

Determina la relazione tra due valori a virgola mobile e gestione degli ordini.

## <a name="syntax"></a>Sintassi

```C
int isgreater(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */

int isgreaterequal(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */

int isless(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */

int islessequal(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */

int islessgreater(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */

int isunordered(
   /* floating-point */ x,
   /* floating-point */ y
); /* C-only macro */
```

```C++
template <class FloatingType1, class FloatingType2>
inline bool isgreater(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */

template <class FloatingType1, class FloatingType2>
inline bool isgreaterequal(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */

template <class FloatingType1, class FloatingType2>
inline bool isless(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */

template <class FloatingType1, class FloatingType2>
inline bool islessequal(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */

template <class FloatingType1, class FloatingType2>
inline bool islessgreater(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */

template <class FloatingType1, class FloatingType2>
inline bool isunordered(
   FloatingType1 x,
   FloatingType2 y
) throw(); /* C++-only template function */
```

### <a name="parameters"></a>Parametri

*x*, *y*<br/>
I valori a virgola mobile da confrontare.

## <a name="return-value"></a>Valore restituito

In tutti i confronti, valori infiniti dello stesso segno considerati uguali. Infinito negativo è minore rispetto a qualsiasi valore finito o infinito positivo. Infinito positivo è maggiore di qualsiasi valore finito o infinito negativo. Gli zeri sono uguali indipendentemente dal segno più. NaN non sono minore, uguale o maggiore di qualsiasi valore, tra cui un altro NaN.

Quando nessuna delle due argomento è NaN, le macro di gestione degli ordini **isgreater**, **isgreaterequal**, **isless**, e **islessequal** restituire un diverso da zero valore se la relazione di ordinamento specificata tra *x* e *y* risulta vera. Queste macro restituiscono 0 se uno o entrambi gli argomenti sono valori NaN o se la relazione di ordinamento è false. I moduli di funzioni si comportano allo stesso modo, ma restituiscono **true** oppure **false**.

Il **islessgreater** macro restituisce un valore diverso da zero se entrambi *x* e *y* non sono valori NaN, e *x* può essere minore o maggiore di *y*. Restituisce 0 se uno o entrambi gli argomenti sono valori NaN o se i valori sono uguali. Il modulo di funzione si comporta allo stesso modo, ma restituisce **true** oppure **false**.

Il **isunordered** macro restituisce un valore diverso da zero se *x*, *y*, o entrambi sono valori NaN. In caso contrario restituirà 0. Il modulo di funzione si comporta allo stesso modo, ma restituisce **true** oppure **false**.

## <a name="remarks"></a>Note

Queste operazioni di confronto vengono implementate come macro quando viene compilato come C sia come funzioni di modello inline durante la compilazione come C++.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|--------------|---------------------------|-------------------------------|
| **isgreater**, **isgreaterequal**, **isless**,<br/>**islessequal**, **islessgreater**, **isunordered** | \<math.h> | \<math.h> o \<cmath> |

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[isfinite, _finite, _finitef](finite-finitef.md)<br/>
[isinf](isinf.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
