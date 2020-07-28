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
ms.openlocfilehash: 907b26f4e1824d7ef5c7c1a36b4e4d8ccb74c978
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220717"
---
# <a name="isgreater-isgreaterequal-isless-islessequal-islessgreater-isunordered"></a>isgreater, isgreaterequal, isless, islessequal, islessgreater, isunordered

Determina la relazione di ordinamento tra due valori a virgola mobile.

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
Valori a virgola mobile da confrontare.

## <a name="return-value"></a>Valore restituito

In tutti i confronti, gli infiniti dello stesso segno vengono considerati uguali. L'infinito negativo è minore di qualsiasi valore finito o infinito positivo. L'infinito positivo è maggiore di qualsiasi valore finito o infinito negativo. Gli zeri sono uguali indipendentemente dal segno. NaNs non è minore, uguale o maggiore di qualsiasi valore, incluso un altro valore NaN.

Quando nessuno dei due argomenti è un valore NaN, **le macro di ordinamento,** **isgreaterequal**, **a meno**e **islessequal** , restituiscono un valore diverso da zero se la relazione di ordinamento specificata tra *x* e *y* include true. Queste macro restituiscono 0 se uno o entrambi gli argomenti sono NaNs o se la relazione di ordinamento è false. I form della funzione si comportano allo stesso modo, ma restituiscono **`true`** o **`false`** .

La macro **islessgreater** restituisce un valore diverso da zero se *x* e *y* non sono Nans e *x* è minore di o maggiore di *y*. Restituisce 0 se uno o entrambi gli argomenti sono NaNs o se i valori sono uguali. Il form della funzione si comporta allo stesso modo, ma restituisce **`true`** o **`false`** .

La macro **isunordered** restituisce un valore diverso da zero se *x*, *y*o entrambi sono Nans. In caso contrario, viene restituito 0. Il form della funzione si comporta allo stesso modo, ma restituisce **`true`** o **`false`** .

## <a name="remarks"></a>Osservazioni

Queste operazioni di confronto vengono implementate come macro quando vengono compilate come C e come funzioni del modello inline quando vengono compilate come C++.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|--------------|---------------------------|-------------------------------|
| **isgreater** **isgreaterequal**, **topless**,<br/>**islessequal**, **islessgreater**, **isunordered** | \<math.h> | \<math.h> o \<cmath> |

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[isfinite, _finite, _finitef](finite-finitef.md)<br/>
[isinf](isinf.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
