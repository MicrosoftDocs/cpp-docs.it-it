---
title: '&lt;optional&gt;'
ms.date: 11/04/2016
f1_keywords:
- <optional>
helpviewer_keywords:
- <optional>
ms.assetid: 8b4ab09e-1475-434a-b4e0-fdbc07a08b5b
ms.openlocfilehash: 83a0ad52735f92d731dafb32ad1be5a8278776b4
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68447178"
---
# <a name="ltoptionalgt"></a>&lt;optional&gt;

Definisce la classe modello del contenitore facoltativa e diversi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> facoltativo

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
> Oltre ai confronti relazionali, \<gli operatori facoltativi > supportano anche il confronto `T`con **nullopt** e.

### <a name="functions"></a>Funzioni

|||
|-|-|
|[make_optional](../standard-library/optional-functions.md#make_optional)|Rende facoltativo un oggetto.|
|[swap](../standard-library/optional-functions.md#swap)||

### <a name="classes-and-structs"></a>Classi e struct

|||
|-|-|
|[hash]()||
|[Classe facoltativa](../standard-library/optional-class.md)|Descrive un oggetto che può o non può mantenere un valore.|
|[Struct nullopt_t](../standard-library/nullopt-t-structure.md)|Descrive un oggetto che non contiene un valore.|
|[Classe bad_optional_access](../standard-library/bad-optional-access-class.md)|Descrive un oggetto generato come eccezione per segnalare un tentativo di accesso a un valore non presente.|

### <a name="objects"></a>Oggetti

|||
|-|-|
|[nullopt](../standard-library/optional-functions.md#nullopt)||

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
