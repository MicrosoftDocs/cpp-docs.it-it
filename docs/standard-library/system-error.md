---
title: '&lt;system_error&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- <system_error>
- system_error
dev_langs:
- C++
helpviewer_keywords:
- system_error header
ms.assetid: 5e046c6e-48d9-4740-8c8a-05f3727c1215
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 955a1c4f4b02c2ee5d1efc837585adf97be81ac1
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ltsystemerrorgt"></a>&lt;system_error&gt;

Includere l'intestazione \<system_error > per definire la classe di eccezione `system_error` e relativi modelli per l'elaborazione di errori di sistema di basso livello.

## <a name="syntax"></a>Sintassi

```cpp
#include <system_error>
```

### <a name="objects"></a>Oggetti

|||
|-|-|
|[generic_category](../standard-library/system-error-functions.md#generic_category)|Rappresenta la categoria di errori generici.|
|[system_category](../standard-library/system-error-functions.md#system_category)|Rappresenta la categoria di errori causati da un overflow di basso livello del sistema.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[generic_errno](../standard-library/system-error-typedefs.md#generic_errno)|Tipo che rappresenta l'enumerazione che fornisce i nomi simbolici per tutte le macro di codice di errore definite da Posix in `<errno.h>`.|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[make_error_code](../standard-library/system-error-functions.md#make_error_code)|Crea un oggetto `error_code`.|
|[make_error_condition](../standard-library/system-error-functions.md#make_error_condition)|Crea un oggetto `error_condition`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator==](../standard-library/system-error-operators.md#op_eq_eq)|Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.|
|[operator!=](../standard-library/system-error-operators.md#op_neq)|Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.|
|[operator<](../standard-library/system-error-operators.md#op_lt)|Verifica se un oggetto è più piccolo dell'oggetto passato per il confronto.|

### <a name="enumerations"></a>Enumerazioni

|||
|-|-|
|[errc](../standard-library/system-error-enums.md#errc)|Fornisce i nomi simbolici per tutte le macro di codice di errore definite da POSIX in `<errno.h>`.|

### <a name="classes-and-structs"></a>Classi e struct

|||
|-|-|
|[error_category](../standard-library/error-category-class.md)|Rappresenta la base comune astratta per gli oggetti che descrive una categoria di codici di errore.|
|[error_code](../standard-library/error-code-class.md)|Rappresenta gli errori di sistema di basso livello che sono specifici dell'implementazione.|
|[error_condition](../standard-library/error-condition-class.md)|Rappresenta i codici di errore definiti dall'utente.|
|[is_error_code_enum](../standard-library/is-error-code-enum-class.md)|Rappresenta un predicato di tipo che verifica l'enumerazione della classe [error_code](../standard-library/error-code-class.md).|
|[is_error_condition_enum](../standard-library/is-error-condition-enum-class.md)|Rappresenta un predicato di tipo che verifica l'enumerazione per la classe [error_condition](../standard-library/error-condition-class.md).|
|[system_error](../standard-library/system-error-class.md)|Rappresenta la classe di base per tutte le eccezioni generate per segnalare un overflow di basso livello del sistema.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<system_error>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
