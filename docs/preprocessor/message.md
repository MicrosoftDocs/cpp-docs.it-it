---
title: messaggio
ms.date: 11/04/2016
f1_keywords:
- message_CPP
- vc-pragma.message
helpviewer_keywords:
- message pragma
- pragmas, message
ms.assetid: 67414f25-ed47-4079-a5dc-21d9d1a39754
ms.openlocfilehash: e9383238fd308ec59a9767f56af1c07fc3cfcf07
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62371739"
---
# <a name="message"></a>messaggio
Invia un valore letterale stringa all'output standard senza terminare la compilazione.

## <a name="syntax"></a>Sintassi

```
#pragma message( messagestring )
```

## <a name="remarks"></a>Note

Un tipico utilizzo dei **messaggio** pragma consiste nel visualizzare i messaggi informativi in fase di compilazione.

Il *messagestring* parametro può essere una macro che si espande in un valore letterale stringa e consente di concatenare tale macro con i valori letterali stringa in qualsiasi combinazione.

Se si utilizza una macro predefinita nel **messaggio** pragma, tale macro deve restituire una stringa, altrimenti sarà necessario convertire l'output della macro a una stringa.

Il frammento di codice seguente usa il **messaggio** pragma per visualizzare i messaggi durante la compilazione:

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

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)