---
description: Altre informazioni sulla direttiva message pragma in Microsoft C/C++
title: Messaggio pragma
ms.date: 01/22/2021
f1_keywords:
- message_CPP
- vc-pragma.message
helpviewer_keywords:
- message pragma
- pragma, message
no-loc:
- pragma
ms.openlocfilehash: 6f5e39896e0ba644f9d40665e80cbf7de9026223
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713493"
---
# <a name="message-no-locpragma"></a>`message` pragma

Invia un valore letterale stringa all'output standard senza terminare la compilazione.

## <a name="syntax"></a>Sintassi

> **`#pragma message(`***stringa di messaggio***`)`**

## <a name="remarks"></a>Osservazioni

Un utilizzo tipico di **`message`** pragma consiste nel visualizzare i messaggi informativi in fase di compilazione.

Il parametro della *stringa di messaggio* può essere una macro che si espande in un valore letterale stringa ed è possibile concatenare tali macro con valori letterali stringa in qualsiasi combinazione.

Se si usa una macro predefinita in **`message`** pragma , la macro deve restituire una stringa. In caso contrario, sarà necessario convertire l'output della macro in una stringa.

Il frammento di codice seguente usa **`message`** pragma per visualizzare i messaggi durante la compilazione:

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

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
