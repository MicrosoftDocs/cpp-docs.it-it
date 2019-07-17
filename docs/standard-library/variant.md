---
title: '&lt;Variant&gt;'
ms.date: 04/04/2019
f1_keywords:
- <variant>
helpviewer_keywords:
- <variant>
ms.openlocfilehash: 7a812ccc3c8cb2a660c01ad2b17ea75b5d5c9542
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68268443"
---
# <a name="ltvariantgt"></a>&lt;Variant&gt;

Un oggetto variant contiene e gestisce un valore. Se la variante contiene un valore, tale tipo di valore deve essere uno dei tipi di argomento di modello specificati alla variante. Gli argomenti del modello vengono chiamati alternative.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<variante >

**Spazio dei nomi:** std

## <a name="members"></a>Members

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator==](../standard-library/forward-list-operators.md#op_eq_eq)|Verifica se l'oggetto variante sul lato sinistro dell'operatore è uguale all'oggetto variante sul lato destro.|
|[operator!=](../standard-library/forward-list-operators.md#op_neq)|Verifica se l'oggetto variante sul lato sinistro dell'operatore non è uguale all'oggetto variante sul lato destro.|
|[operator<](../standard-library/forward-list-operators.md#op_lt)|Verifica se l'oggetto variante sul lato sinistro dell'operatore è minore dell'oggetto variant sul lato destro.|
|[operator<=](../standard-library/forward-list-operators.md#op_lt_eq)|Verifica se la variante dell'oggetto sul lato sinistro dell'operatore è minore o uguale all'oggetto variante sul lato destro.|
|[operator>](../standard-library/forward-list-operators.md#op_gt)|Verifica se l'oggetto variante sul lato sinistro dell'operatore è maggiore dell'oggetto variant sul lato destro.|
|[operator>=](../standard-library/forward-list-operators.md#op_lt_eq)|Verifica se l'oggetto variante sul lato sinistro dell'operatore è maggiore o uguale all'oggetto variante sul lato destro.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[get](../standard-library/variant-functions.md#get)|Ottiene la variante di un oggetto.|
|[get_if](../standard-library/variant-functions.md#get_if)|Ottiene la variante di un oggetto se esiste.|
|[holds_alternative](../standard-library/variant-functions.md#holds_alternative)|Restituire **true** se esiste una variante.|
|[swap](../standard-library/variant-functions.md#swap)|Scambia un **variante**.|
|[visita](../standard-library/variant-functions.md#visit)|Passa al successivo **variante**.|

### <a name="classes"></a>Classi

|||
|-|-|
|[bad_variant_access](../standard-library/bad-variant-access-class.md)|Oggetti generati per gli accessi non valido di report per il valore di un oggetto variant.|
|[Variant](../standard-library/variant.md)|Oggetto da entrambi contenere un valore di uno dei relativi tipi alternativi, o nessun valore.|

### <a name="structs"></a>Struct

|||
|-|-|
|[hash](../standard-library/hash-structure.md)||
|[monostate](../standard-library/monostate-structure.md)|Un tipo alternativo per una variante per rendere il valore predefinito di tipo variant che può essere costruito.|
|[uses_allocator](../standard-library/uses-allocator-structure.md)||
|[variant_alternative](../standard-library/variant-alternative-structure.md)|Assiste gli oggetti varianti.|
|[variant_size](../standard-library/variant-size-structure.md)|Assiste gli oggetti varianti.|

### <a name="objects"></a>Oggetti

|||
|-|-|
|[variant_npos](../standard-library/variant-functions.md#variant_npos)||

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
