---
title: numeric (STL/CLR)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- <cliext/numeric>
- cliext::accumulate
- cliext::adjacent_difference
- cliext::inner_product
- cliext::partial_sum
helpviewer_keywords:
- numeric functions [STL/CLR]
- <cliext/numeric> header [STL/CLR]
- <numeric> header [STL/CLR]
- accumulate function [STL/CLR]
- adjacent_difference function [STL/CLR]
- inner_product function [STL/CLR]
- partial_sum function [STL/CLR]
ms.assetid: 1dc4d9a3-e734-459c-9678-5d9be0ef4c79
ms.openlocfilehash: 1939a6dd9b6d8186eb278623f3b0a5a3d851f4d3
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80208481"
---
# <a name="numeric-stlclr"></a>numeric (STL/CLR)

Definisce le funzioni del modello di contenitore che eseguono gli algoritmi forniti per l'elaborazione numerica.

## <a name="syntax"></a>Sintassi

```
#include <cliext/numeric>
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<cliext/numeric >

**Spazio dei nomi:** cliext

## <a name="declarations"></a>Dichiarazioni

|Funzione|Descrizione|
|--------------|-----------------|
|[accumulate (STL/CLR)](#accumulate)|Calcola la somma di tutti gli elementi in un intervallo specificato, incluso il valore iniziale, elaborando le somme parziali successive oppure calcola il risultato dei risultati parziali successivi ottenuti analogamente tramite l'uso di un'operazione binaria specificata diversa da quella di somma.|
|[adjacent_difference (STL/CLR)](#adjacent_difference)|Calcola le differenze successive tra ogni elemento e il relativo predecessore in un intervallo di input e restituisce i risultati in un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione di differenza viene sostituita da un'altra operazione binaria specificata.|
|[inner_product (STL/CLR)](#inner_product)|Calcola la somma del prodotto tra gli elementi di due intervalli e aggiunge tale somma a un valore iniziale specificato oppure calcola il risultato di una procedura generalizzata in cui le operazioni binarie di somma e prodotto vengono sostituite da altre operazioni binarie specificate.|
|[partial_sum (STL/CLR)](#partial_sum)|Calcola una serie di somme in un intervallo di input dal primo elemento tramite il `i`l'elemento e archivia il risultato di ciascuna somma in `i`elemento di un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione SUM viene sostituita da un'altra operazione binaria specificata.|

## <a name="members"></a>Members

## <a name="accumulate-stlclr"></a><a name="accumulate"></a>accumulo (STL/CLR)

Calcola la somma di tutti gli elementi in un intervallo specificato, incluso il valore iniziale, elaborando le somme parziali successive oppure calcola il risultato dei risultati parziali successivi ottenuti analogamente tramite l'uso di un'operazione binaria specificata diversa da quella di somma.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _Ty> inline
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val);
template<class _InIt, class _Ty, class _Fn2> inline
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val, _Fn2 _Func);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione numerica della libreria standard `accumulate`. Per ulteriori informazioni, vedere [accumulo](../standard-library/numeric-functions.md#accumulate).

## <a name="adjacent_difference-stlclr"></a><a name="adjacent_difference"></a>adjacent_difference (STL/CLR)

Calcola le differenze successive tra ogni elemento e il relativo predecessore in un intervallo di input e restituisce i risultati in un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione di differenza viene sostituita da un'altra operazione binaria specificata.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _OutIt> inline
    _OutIt adjacent_difference(_InIt _First, _InIt _Last,
        _OutIt _Dest);
template<class _InIt, class _OutIt, class _Fn2> inline
    _OutIt adjacent_difference(_InIt _First, _InIt _Last,
        _OutIt _Dest, _Fn2 _Func);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione numerica della libreria standard `adjacent_difference`. Per ulteriori informazioni, vedere [adjacent_difference](../standard-library/numeric-functions.md#adjacent_difference).

## <a name="inner_product-stlclr"></a><a name="inner_product"></a>inner_product (STL/CLR)

Calcola la somma del prodotto tra gli elementi di due intervalli e aggiunge tale somma a un valore iniziale specificato oppure calcola il risultato di una procedura generalizzata in cui le operazioni binarie di somma e prodotto vengono sostituite da altre operazioni binarie specificate.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt1, class _InIt2, class _Ty> inline
    _Ty inner_product(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,
        _Ty _Val);
template<class _InIt1, class _InIt2, class _Ty, class _Fn21,
       class _Fn22> inline
    _Ty inner_product(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,
        _Ty _Val, _Fn21 _Func1, _Fn22 _Func2);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione numerica della libreria standard `inner_product`. Per ulteriori informazioni, vedere [inner_product](../standard-library/numeric-functions.md#inner_product).

## <a name="partial_sum-stlclr"></a><a name="partial_sum"></a>partial_sum (STL/CLR)

Calcola una serie di somme in un intervallo di input dal primo elemento tramite il `i`l'elemento e archivia il risultato di ciascuna somma in `i`elemento di un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione SUM viene sostituita da un'altra operazione binaria specificata.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _OutIt> inline
    _OutIt partial_sum(_InIt _First, _InIt _Last, _OutIt _Dest);
template<class _InIt, class _OutIt, class _Fn2> inline
    _OutIt partial_sum(_InIt _First, _InIt _Last,
        _OutIt _Dest, _Fn2 _Func);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione numerica della libreria standard `partial_sum`. Per ulteriori informazioni, vedere [partial_sum](../standard-library/numeric-functions.md#partial_sum).
