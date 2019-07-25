---
title: '&lt;numeric&gt;'
ms.date: 11/04/2016
f1_keywords:
- <numeric>
helpviewer_keywords:
- <numeric> header
ms.assetid: 6d6ccb94-48cc-479b-b4a9-bd9c78d4896a
ms.openlocfilehash: 5862ddd812308c7bf81a5029249caf7e9b4a1168
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68453545"
---
# <a name="ltnumericgt"></a>&lt;numeric&gt;

Definisce le funzioni di modello del contenitore che eseguono algoritmi per l'elaborazione numerica.

## <a name="requirements"></a>Requisiti

**Intestazione**: \<numeric >

**Spazio dei nomi:** std

## <a name="remarks"></a>Note

Gli algoritmi numerici sono simili agli algoritmi della libreria standard C++ in [\<algorithm>](algorithm.md) e possono operare su diverse strutture di dati. Tali strutture di dati includono le classi contenitore della libreria standard, ad esempio [vector](../standard-library/vector-class.md) e [list](../standard-library/list-class.md), le strutture di dati definite a livello di programma e le matrici di elementi che soddisfano i requisiti di un algoritmo specifico. Gli algoritmi raggiungono tale livello di generalità accedendo a e attraversando gli elementi di un contenitore indirettamente tramite gli iteratori. Gli algoritmi consentono di elaborare gli intervalli dell'iteratore che vengono in genere specificati dalle relative posizioni iniziali o finali. Gli intervalli a cui si fa riferimento devono essere validi, ovvero tutti i puntatori negli intervalli devono essere dereferenziabili e, all'interno delle sequenze di ogni intervallo, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Gli algoritmi consentono di estendere le azioni supportate dalle operazioni e dalle funzioni membro di ciascun contenitore della libreria standard C++ e consentono l'interazione con diversi tipi di oggetti contenitore contemporaneamente.

## <a name="members"></a>Members

### <a name="functions"></a>Funzioni

|||
|-|-|
|[accumulate](../standard-library/numeric-functions.md#accumulate)|Calcola la somma di tutti gli elementi di un intervallo specificato, incluso un valore iniziale, calcolando le somme parziali successive oppure calcola il risultato dei risultati parziali successivi ottenuti utilizzando un'operazione binaria specificata anziché l'operazione di somma.|
|[adjacent_difference](../standard-library/numeric-functions.md#adjacent_difference)|Calcola le differenze successive tra ogni elemento e il relativo predecessore in un intervallo di input e restituisce i risultati in un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione di differenza viene sostituita da un'altra operazione binaria specificata.|
|[exclusive_scan](../standard-library/numeric-functions.md#exclusive_scan)||
|[MCD](../standard-library/numeric-functions.md#gcd)||
|[inclusive_scan](../standard-library/numeric-functions.md#inclusive_scan)||
|[inner_product](../standard-library/numeric-functions.md#inner_product)|Calcola la somma del prodotto tra gli elementi di due intervalli e aggiunge tale somma a un valore iniziale specificato oppure calcola il risultato di una procedura generalizzata in cui le operazioni di somma e prodotto vengono sostituite da altre operazioni binarie specificate.|
|[iota](../standard-library/numeric-functions.md#iota)|Archivia un valore iniziale a partire dal primo elemento e inserendo gli incrementi successivi del valore (`value++`) in ciascun elemento dell'intervallo `[first, last)`.|
|[LCM](../standard-library/numeric-functions.md#lcm)||
|[partial_sum](../standard-library/numeric-functions.md#partial_sum)|Calcola una serie di somme in un intervallo di input dal primo elemento fino all'elemento *i*th e archivia il risultato di ciascuna somma nell'elemento *i*th di un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione di somma viene sostituita da un'altra operazione binaria specificata.|
|[ridurre](../standard-library/numeric-functions.md#reduce)||
|[transform_exclusive_scan](../standard-library/numeric-functions.md#transform_exclusive_scan)||
|[transform_inclusive_scan](../standard-library/numeric-functions.md#transform_inclusive_scan)||
|[transform_reduce](../standard-library/numeric-functions.md#transform_reduce)||

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
