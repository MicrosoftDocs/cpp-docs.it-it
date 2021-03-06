---
description: 'Altre informazioni su: &lt; Variant&gt;'
title: '&lt;variant&gt;'
ms.date: 04/04/2019
f1_keywords:
- <variant>
helpviewer_keywords:
- <variant>
ms.openlocfilehash: 994bd18a66dd78c8f6042afea10df69ff08a1487
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97312469"
---
# <a name="ltvariantgt"></a>&lt;variant&gt;

Un oggetto Variant include e gestisce un valore. Se la variante contiene un valore, il tipo di tale valore deve essere uno dei tipi di argomento di modello specificati per Variant. Questi argomenti di modello sono detti alternative.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<variant>

**Spazio dei nomi:** std

## <a name="members"></a>Membri

### <a name="operators"></a>Operatori

|Nome|Description|
|-|-|
|[operatore = =](../standard-library/forward-list-operators.md#op_eq_eq)|Verifica se l'oggetto variant sul lato sinistro dell'operatore è uguale all'oggetto variant a destra.|
|[operatore! =](../standard-library/forward-list-operators.md#op_neq)|Verifica se l'oggetto variant sul lato sinistro dell'operatore non è uguale all'oggetto variant a destra.|
|[operatore<](../standard-library/forward-list-operators.md#op_lt)|Verifica se l'oggetto variant sul lato sinistro dell'operatore è minore dell'oggetto variant a destra.|
|[operatore<=](../standard-library/forward-list-operators.md#op_lt_eq)|Verifica se l'oggetto variant a sinistra dell'operatore è minore o uguale all'oggetto variant sul lato destro.|
|[operatore>](../standard-library/forward-list-operators.md#op_gt)|Verifica se l'oggetto variant sul lato sinistro dell'operatore è maggiore dell'oggetto variant a destra.|
|[operatore>=](../standard-library/forward-list-operators.md#op_lt_eq)|Verifica se l'oggetto variant a sinistra dell'operatore è maggiore o uguale all'oggetto variant sul lato destro.|

### <a name="functions"></a>Funzioni

|Nome|Description|
|-|-|
|[get](../standard-library/variant-functions.md#get)|Ottiene la variante di un oggetto.|
|[get_if](../standard-library/variant-functions.md#get_if)|Ottiene la variante di un oggetto, se esistente.|
|[holds_alternative](../standard-library/variant-functions.md#holds_alternative)|Restituisce **`true`** se esiste una variante.|
|[scambio](../standard-library/variant-functions.md#swap)|Scambia una **variante**.|
|[visitare](../standard-library/variant-functions.md#visit)|Passa alla **variante** successiva.|

### <a name="classes"></a>Classi

|Nome|Description|
|-|-|
|[bad_variant_access](../standard-library/bad-variant-access-class.md)|Oggetti generati per segnalare accessi non validi al valore di un oggetto Variant.|
|[variant](../standard-library/variant.md)|Oggetto per il quale è possibile mantenere un valore di uno dei tipi alternativi o nessun valore.|

### <a name="structs"></a>Struct

|Nome|Description|
|-|-|
|[hash](../standard-library/hash-structure.md)||
|[monostato](../standard-library/monostate-structure.md)|Un tipo alternativo per una variante per rendere il tipo Variant predefinito costruibile.|
|[uses_allocator](../standard-library/uses-allocator-structure.md)||
|[variant_alternative](../standard-library/variant-alternative-structure.md)|Assiste gli oggetti Variant.|
|[variant_size](../standard-library/variant-size-structure.md)|Assiste gli oggetti Variant.|

### <a name="objects"></a>Oggetti

|Nome|Description|
|-|-|
|[variant_npos](../standard-library/variant-functions.md#variant_npos)||

## <a name="see-also"></a>Vedi anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
