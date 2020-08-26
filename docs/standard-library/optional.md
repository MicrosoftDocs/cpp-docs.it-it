---
title: '&lt;facoltativo&gt;'
ms.date: 08/06/2019
f1_keywords:
- <optional>
helpviewer_keywords:
- <optional>
ms.openlocfilehash: 31a3d9aad539e45bb835331a4ef63690d0e16f49
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88842676"
---
# <a name="ltoptionalgt"></a>&lt;facoltativo&gt;

Definisce il modello di classe del contenitore `optional` e diversi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<optional>

**Spazio dei nomi:** std

## <a name="members"></a>Membri

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[operatore = =](../standard-library/optional-operators.md#op_eq_eq)|Verifica se un oggetto è uguale a un altro oggetto.|
|[operatore! =](../standard-library/optional-operators.md#op_neq)|Verifica se un oggetto non è uguale a un altro oggetto.|
|[operatore<](../standard-library/optional-operators.md#op_lt)|Verifica se l'oggetto a sinistra è minore dell'oggetto a destra.|
|[operatore<=](../standard-library/optional-operators.md#op_lt_eq)|Verifica se l'oggetto a sinistra è minore o uguale all'oggetto a destra.|
|[operatore>](../standard-library/optional-operators.md#op_gt)|Verifica se l'oggetto a sinistra è maggiore dell'oggetto a destra.|
|[operatore>=](../standard-library/optional-operators.md#op_lt_eq)|Verifica se l'oggetto a sinistra è maggiore o uguale all'oggetto a destra.|

> [!NOTE]
> Oltre ai confronti relazionali, \<optional> gli operatori supportano anche il confronto con **nullopt** e `T` .

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|-|-|
|[make_optional](../standard-library/optional-functions.md#make_optional)|Rende facoltativo un oggetto.|
|[scambio](../standard-library/optional-functions.md#swap)|Scambia i valori contenuti di due `optional` oggetti.|

### <a name="classes-and-structs"></a>Classi e struct

|Nome|Descrizione|
|-|-|
|hash|Restituisce un hash dell'oggetto contenuto.|
|[Classe optional](../standard-library/optional-class.md)|Descrive un oggetto che può o non può mantenere un valore.|
|[struct nullopt_t](../standard-library/nullopt-t-structure.md)|Descrive un oggetto che non contiene un valore.|
|[Classe bad_optional_access](../standard-library/bad-optional-access-class.md)|Descrive un oggetto generato come eccezione per segnalare un tentativo di accesso a un valore non presente.|

### <a name="objects"></a>Oggetti

|Nome|Descrizione|
|-|-|
|[nullopt](../standard-library/optional-functions.md#nullopt)|Istanza di `nullopt_t` per i confronti.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
