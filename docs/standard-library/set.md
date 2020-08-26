---
title: '&lt;set&gt;'
ms.date: 11/04/2016
f1_keywords:
- <set>
helpviewer_keywords:
- set header
ms.assetid: 43cb1ab2-6383-48cf-8bdc-2b96d7203596
ms.openlocfilehash: 4ac5c0bbf94c4d17389efb424d2e12b84717c4a9
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88846225"
---
# <a name="ltsetgt"></a>&lt;set&gt;

Definisce i modelli di classe del contenitore set e multiset e i rispettivi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<set>

**Spazio dei nomi:** std

> [!NOTE]
> La \<set> libreria usa anche l' `#include <initializer_list>` istruzione.

## <a name="members"></a>Membri

### <a name="operators"></a>Operatori

|Versione set|Versione multiset|Descrizione|
|-|-|-|
|[operatore! = (set)](../standard-library/set-operators.md#op_neq)|[operatore! = (multiset)](../standard-library/set-operators.md#op_neq)|Verifica se l'oggetto set o multiset a sinistra dell'operatore non è uguale all'oggetto set o multiset a destra.|
|[operatore< (set)](../standard-library/set-operators.md#op_lt)|[operatore< (multiset)](../standard-library/set-operators.md#op_lt_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è minore dell'oggetto set o multiset a destra.|
|[operatore<= (set)](../standard-library/set-operators.md#op_lt_eq)|[operator\<= (multiset)](../standard-library/set-operators.md#op_lt_eq_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è minore o uguale all'oggetto set o multiset a destra.|
|[operatore = = (set)](../standard-library/set-operators.md#op_eq_eq)|[operatore = = (multiset)](../standard-library/set-operators.md#op_eq_eq_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è uguale all'oggetto set o multiset a destra.|
|[operatore> (set)](../standard-library/set-operators.md#op_gt)|[operatore> (multiset)](../standard-library/set-operators.md#op_gt_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è maggiore dell'oggetto set o multiset a destra.|
|[operatore>= (set)](../standard-library/set-operators.md#op_gt_eq)|[operatore>= (multiset)](../standard-library/set-operators.md#op_gt_eq_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è maggiore o uguale all'oggetto set o multiset a destra.|

### <a name="specialized-template-functions"></a>Funzioni di modello specializzate

|Versione set|Versione multiset|Descrizione|
|-|-|-|
|[scambio](../standard-library/set-functions.md#swap)|[swap (multiset)](../standard-library/set-functions.md#swap_multiset)|Scambia gli elementi di due set o multiset.|

### <a name="classes"></a>Classi

|Nome|Descrizione|
|-|-|
|[Classe set](../standard-library/set-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi in base ai quali i dati vengono automaticamente ordinati.|
|[multiset (classe)](../standard-library/multiset-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui i valori degli elementi contenuti devono essere univoci e vengono usati come valori delle chiavi in base ai quali i dati vengono automaticamente ordinati.|

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
