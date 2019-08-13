---
title: '&lt;optional&gt;'
ms.date: 08/06/2019
f1_keywords:
- <optional>
helpviewer_keywords:
- <optional>
ms.openlocfilehash: f3b4896a3cb4774e46b36480dd9769fa131fc287
ms.sourcegitcommit: 16c0392fc8d96e814c3a40b0c5346d7389aeb525
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/12/2019
ms.locfileid: "68957182"
---
# <a name="ltoptionalgt"></a>&lt;optional&gt;

Definisce la classe di modello contenitore `optional` e diversi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> facoltativo

**Spazio dei nomi:** std

## <a name="members"></a>Members

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator==](../standard-library/optional-operators.md#op_eq_eq)|Verifica se un oggetto è uguale a un altro oggetto.|
|[operator!=](../standard-library/optional-operators.md#op_neq)|Verifica se un oggetto non è uguale a un altro oggetto.|
|[operator<](../standard-library/optional-operators.md#op_lt)|Verifica se l'oggetto a sinistra è minore dell'oggetto a destra.|
|[operator<=](../standard-library/optional-operators.md#op_lt_eq)|Verifica se l'oggetto a sinistra è minore o uguale all'oggetto a destra.|
|[operator>](../standard-library/optional-operators.md#op_gt)|Verifica se l'oggetto a sinistra è maggiore dell'oggetto a destra.|
|[operator>=](../standard-library/optional-operators.md#op_lt_eq)|Verifica se l'oggetto a sinistra è maggiore o uguale all'oggetto a destra.|

> [!NOTE]
> Oltre ai confronti relazionali, \<gli operatori facoltativi > supportano anche il confronto `T`con **nullopt** e.

### <a name="functions"></a>Funzioni

|||
|-|-|
|[make_optional](../standard-library/optional-functions.md#make_optional)|Rende facoltativo un oggetto.|
|[swap](../standard-library/optional-functions.md#swap)|Scambia i valori contenuti di due `optional` oggetti.|

### <a name="classes-and-structs"></a>Classi e struct

|||
|-|-|
|hash|Restituisce un hash dell'oggetto contenuto.|
|[classe facoltativa](../standard-library/optional-class.md)|Descrive un oggetto che può o non può mantenere un valore.|
|[struct nullopt_t](../standard-library/nullopt-t-structure.md)|Descrive un oggetto che non contiene un valore.|
|[Classe bad_optional_access](../standard-library/bad-optional-access-class.md)|Descrive un oggetto generato come eccezione per segnalare un tentativo di accesso a un valore non presente.|

### <a name="objects"></a>Oggetti

|||
|-|-|
|[nullopt](../standard-library/optional-functions.md#nullopt)|Istanza di `nullopt_t` per i confronti.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
