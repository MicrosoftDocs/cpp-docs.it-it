---
title: '&lt;optional&gt;'
ms.date: 11/04/2016
f1_keywords:
- <optional>
helpviewer_keywords:
- <optional>
ms.assetid: 8b4ab09e-1475-434a-b4e0-fdbc07a08b5b
ms.openlocfilehash: c73ad2ad94a5de29bc2c457fdf6ca8b9c783615c
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68268483"
---
# <a name="ltoptionalgt"></a>&lt;optional&gt;

Definisce la classe modello contenitore facoltativa e diversi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<facoltativo >

**Spazio dei nomi:** std

## <a name="members"></a>Members

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator==](../standard-library/optional-operators.md#op_eq_eq)|Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è uguale all'oggetto `optional` sul lato destro.|
|[operator!=](../standard-library/optional-operators.md#op_neq)|Verifica se l'oggetto `optional` sul lato sinistro dell'operatore non è uguale all'oggetto `optional` sul lato destro.|
|[operator<](../standard-library/optional-operators.md#op_lt)|Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è minore dell'oggetto `optional` sul lato destro.|
|[operator<=](../standard-library/optional-operators.md#op_lt_eq)|Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è minore o uguale all'oggetto `optional` sul lato destro.|
|[operator>](../standard-library/optional-operators.md#op_gt)|Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è maggiore dell'oggetto `optional` sul lato destro.|
|[operator>=](../standard-library/optional-operators.md#op_lt_eq)|Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è maggiore o uguale all'oggetto `optional` sul lato destro.|

> [!NOTE]
> Oltre a relazionale confronta quest \<facoltativa > operatori anche supportano il confronto con **nullopt** e `T`.

### <a name="functions"></a>Funzioni

|||
|-|-|
|[make_optional](../standard-library/optional-functions.md#make_optional)|Rende un oggetto facoltativo.|
|[swap](../standard-library/optional-functions.md#swap)||

### <a name="classes-and-structs"></a>Classi e struct

|||
|-|-|
|[hash]()||
|[Classe facoltativa](../standard-library/optional-class.md)|Descrive un oggetto che può o non può contenere un valore.|
|[nullopt_t Struct](../standard-library/nullopt-t-structure.md)|Descrive un oggetto non contenente un valore.|
|[Classe bad_optional_access](../standard-library/bad-optional-access-class.md)|Descrive un oggetto generato come eccezione per segnalare un tentativo di accedere a un valore non esiste.|

### <a name="objects"></a>Oggetti

|||
|-|-|
|[nullopt](../standard-library/optional-functions.md#nullopt)||

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
