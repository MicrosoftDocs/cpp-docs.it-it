---
description: 'Altre informazioni su: Terminate (CRT)'
title: terminate (CRT)
ms.date: 4/2/2020
api_name:
- terminate
- _o_terminate
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-runtime-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- terminate
helpviewer_keywords:
- terminate function
- exception handling, termination
ms.assetid: 90e67402-08e9-4b2a-962c-66a8afd3ccb4
ms.openlocfilehash: 8370c1f1aff54b5286ad4472b053275e3468a8d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326168"
---
# <a name="terminate-crt"></a>terminate (CRT)

Chiama [Abort](abort.md) o una funzione specificata utilizzando **set_terminate**.

## <a name="syntax"></a>Sintassi

```C
void terminate( void );
```

## <a name="remarks"></a>Osservazioni

La funzione **Terminate** viene utilizzata con la gestione delle eccezioni C++ e viene chiamata nei casi seguenti:

- Non è possibile trovare un gestore catch corrispondente per un'eccezione C++ generata.

- Viene generata un'eccezione da una funzione distruttore durante la rimozione dello stack.

- Lo stack risulta danneggiato dopo la generazione di un'eccezione.

**terminare** le chiamate [Abort](abort.md) per impostazione predefinita. È possibile modificare questa impostazione predefinita scrivendo una funzione di terminazione personalizzata e chiamando **set_terminate** con il nome della funzione come argomento. **Terminate** chiama l'ultima funzione specificata come argomento per **set_terminate**. Per altre informazioni, vedere [Eccezioni C++ non gestite](../../cpp/unhandled-cpp-exceptions.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**terminare**|\<eh.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```cpp
// crt_terminate.cpp
// compile with: /EHsc
#include <eh.h>
#include <process.h>
#include <iostream>
using namespace std;

void term_func();

int main()
{
    int i = 10, j = 0, result;
    set_terminate( term_func );
    try
    {
        if( j == 0 )
            throw "Divide by zero!";
        else
            result = i/j;
    }
    catch( int )
    {
        cout << "Caught some integer exception.\n";
    }
    cout << "This should never print.\n";
}

void term_func()
{
    cout << "term_func() was called by terminate().\n";

    // ... cleanup tasks performed here

    // If this function does not exit, abort is called.

    exit(-1);
}
```

```Output
term_func() was called by terminate().
```

## <a name="see-also"></a>Vedere anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)<br/>
[interruzione](abort.md)<br/>
[_set_se_translator](set-se-translator.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[inaspettato](unexpected-crt.md)<br/>
