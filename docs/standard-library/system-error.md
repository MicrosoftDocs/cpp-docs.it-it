---
title: '&lt;system_error&gt;'
ms.date: 03/15/2019
f1_keywords:
- <system_error>
- system_error
helpviewer_keywords:
- system_error header
ms.assetid: 5e046c6e-48d9-4740-8c8a-05f3727c1215
ms.openlocfilehash: e6eef7152e45e8177c451fc25592fab85c58ccb5
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68449754"
---
# <a name="ltsystemerrorgt"></a>&lt;system_error&gt;

Includere l'intestazione \<system_error > per definire la classe `system_error` di eccezione e i modelli correlati per l'elaborazione degli errori di sistema di basso livello.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<system_error>

**Spazio dei nomi:** std

## <a name="members"></a>Members

### <a name="objects"></a>Oggetti

|||
|-|-|
|[generic_category](../standard-library/system-error-functions.md#generic_category)|Rappresenta la categoria di errori generici.|
|[is_error_code_enum_v](../standard-library/system-error-functions.md#is_error_code_enum_v)||
|[is_error_condition_enum_v](../standard-library/system-error-functions.md#is_error_condition_enum_v)||
|[system_category](../standard-library/system-error-functions.md#system_category)|Rappresenta la categoria di errori causati da un overflow di basso livello del sistema.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[make_error_code](../standard-library/system-error-functions.md#make_error_code)|Crea un oggetto `error_code`.|
|[make_error_condition](../standard-library/system-error-functions.md#make_error_condition)|Crea un oggetto `error_condition`.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator==](../standard-library/system-error-operators.md#op_eq_eq)|Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.|
|[operator!=](../standard-library/system-error-operators.md#op_neq)|Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.|
|[operator<](../standard-library/system-error-operators.md#op_lt)|Verifica se un oggetto è più piccolo dell'oggetto passato per il confronto.|
|[operator<<](../standard-library/system-error-operators.md#op_ostream)||

### <a name="enums"></a>Enumerazioni

|||
|-|-|
|[errc](../standard-library/system-error-enums.md#errc)|Fornisce i nomi simbolici per tutte le macro di codice di errore definite da POSIX in `<errno.h>`.|

### <a name="classes-and-structs"></a>Classi e struct

|||
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
