---
description: 'Altre informazioni su: pragma del messaggio'
title: Pragma message
ms.date: 08/29/2019
f1_keywords:
- message_CPP
- vc-pragma.message
helpviewer_keywords:
- message pragma
- pragmas, message
ms.assetid: 67414f25-ed47-4079-a5dc-21d9d1a39754
ms.openlocfilehash: 82b8efa7e232c24402b7fb1cce0fd1e38ff8be29
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333378"
---
# <a name="message-pragma"></a>Pragma message

Invia un valore letterale stringa all'output standard senza terminare la compilazione.

## <a name="syntax"></a>Sintassi

> **messaggio di #pragma (** *stringa di messaggio* **)**

## <a name="remarks"></a>Commenti

Un utilizzo tipico del pragma del **messaggio** consiste nel visualizzare i messaggi informativi in fase di compilazione.

Il parametro della *stringa di messaggio* può essere una macro che si espande in un valore letterale stringa ed è possibile concatenare tali macro con valori letterali stringa in qualsiasi combinazione.

Se si usa una macro predefinita nel pragma del **messaggio** , la macro deve restituire una stringa. In caso contrario, sarà necessario convertire l'output della macro in una stringa.

Nel frammento di codice seguente viene utilizzato il pragma **Message** per visualizzare i messaggi durante la compilazione:

```cpp
// pragma_directives_message1.cpp
// compile with: /LD
#if _M_IX86 >= 500
#pragma message("_M_IX86 >= 500")
#endif

#pragma message("")

#pragma message( "Compiling " __FILE__ )
#pragma message( "Last modified on " __TIMESTAMP__ )

#pragma message("")

// with line number
#define STRING2(x) #x
#define STRING(x) STRING2(x)

#pragma message (__FILE__ "[" STRING(__LINE__) "]: test")

#pragma message("")
```

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
