---
title: '&lt;system_error&gt;'
ms.date: 03/15/2019
f1_keywords:
- <system_error>
- system_error
helpviewer_keywords:
- system_error header
ms.assetid: 5e046c6e-48d9-4740-8c8a-05f3727c1215
ms.openlocfilehash: 18df18379fbee8271ba5cf851b04210f1dfddf57
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88841883"
---
# <a name="ltsystem_errorgt"></a>&lt;system_error&gt;

Includere l'intestazione \<system_error> per definire la classe di eccezione `system_error` e i modelli correlati per l'elaborazione degli errori di sistema di basso livello.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<system_error>

**Spazio dei nomi:** std

## <a name="members"></a>Membri

### <a name="objects"></a>Oggetti

|Nome|Descrizione|
|-|-|
|[generic_category](../standard-library/system-error-functions.md#generic_category)|Rappresenta la categoria di errori generici.|
|[is_error_code_enum_v](../standard-library/system-error-functions.md#is_error_code_enum_v)||
|[is_error_condition_enum_v](../standard-library/system-error-functions.md#is_error_condition_enum_v)||
|[system_category](../standard-library/system-error-functions.md#system_category)|Rappresenta la categoria di errori causati da un overflow di basso livello del sistema.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|-|-|
|[make_error_code](../standard-library/system-error-functions.md#make_error_code)|Crea un oggetto `error_code`.|
|[make_error_condition](../standard-library/system-error-functions.md#make_error_condition)|Crea un oggetto `error_condition`.|

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[operatore = =](../standard-library/system-error-operators.md#op_eq_eq)|Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.|
|[operatore! =](../standard-library/system-error-operators.md#op_neq)|Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.|
|[operatore<](../standard-library/system-error-operators.md#op_lt)|Verifica se un oggetto è più piccolo dell'oggetto passato per il confronto.|
|[operatore<<](../standard-library/system-error-operators.md#op_ostream)||

### <a name="enums"></a>Enumerazioni

|Nome|Descrizione|
|-|-|
|[errc](../standard-library/system-error-enums.md#errc)|Fornisce nomi simbolici per tutte le macro di codice di errore definite da POSIX in `<errno.h>` .|

### <a name="classes-and-structs"></a>Classi e struct

|Nome|Descrizione|
|-|-|
|[error_category](../standard-library/error-category-class.md)|Rappresenta la base comune astratta per gli oggetti che descrive una categoria di codici di errore.|
|[error_code](../standard-library/error-code-class.md)|Rappresenta gli errori di sistema di basso livello che sono specifici dell'implementazione.|
|[error_condition](../standard-library/error-condition-class.md)|Rappresenta i codici di errore definiti dall'utente.|
|[hash](../standard-library/hash-structure.md#system_error)||
|[is_error_code_enum](../standard-library/is-error-code-enum-class.md)|Rappresenta un predicato di tipo che verifica l'enumerazione della classe [error_code](../standard-library/error-code-class.md).|
|[is_error_condition_enum](../standard-library/is-error-condition-enum-class.md)|Rappresenta un predicato di tipo che verifica l'enumerazione per la classe [error_condition](../standard-library/error-condition-class.md).|
|[system_error](../standard-library/system-error-class.md)|Rappresenta la classe di base per tutte le eccezioni generate per segnalare un overflow di basso livello del sistema.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
