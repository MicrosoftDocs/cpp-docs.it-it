---
title: _set_new_handler | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _set_new_handler
apilocation:
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
apitype: DLLExport
f1_keywords:
- _set_new_handler
- set_new_handler
dev_langs:
- C++
helpviewer_keywords:
- _set_new_handler function
- set_new_handler function
- error handling
- transferring control to error handler
ms.assetid: 1d1781b6-5cf8-486a-b430-f365e0bb023f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 30cd0c2a991ec046b0b1f55100c58641833cb992
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="setnewhandler"></a>_set_new_handler

Trasferisce il controllo al meccanismo di gestione degli errori se il **nuovo** operatore non riesce ad allocare memoria.

## <a name="syntax"></a>Sintassi

```cpp
_PNH _set_new_handler( _PNH pNewHandler );
```

### <a name="parameters"></a>Parametri

*pNewHandler*<br/>
Puntatore alla funzione di gestione della memoria fornita dall'applicazione. Un argomento 0 causa la rimozione del nuovo gestore.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'eccezione precedente registrati dalla funzione di gestione **set_new_handler**, in modo che la funzione precedente può essere ripristinata in un secondo momento. Se nessuna funzione precedente è stata impostata, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; Questo valore può essere **NULL**.

## <a name="remarks"></a>Note

C++ **set_new_handler** funzione specifica una funzione di gestione delle eccezioni che ottiene il controllo se il **nuova** operatore non riesce ad allocare memoria. Se **nuove** ha esito negativo, il sistema di runtime chiama automaticamente la funzione di gestione delle eccezioni che è stata passata come argomento al **set_new_handler**. **Pnh**, definite in New. h, è un puntatore a una funzione che restituisce il tipo **int** e accetta un argomento di tipo **size_t**. Uso **size_t** per specificare la quantità di spazio da allocare.

Non è previsto alcun gestore predefinito.

**set_new_handler** è essenzialmente una combinazione di garbage collection. Il sistema di runtime ritenta l'allocazione ogni volta che la funzione restituisce un valore diverso da zero e non riesce se la funzione restituisce 0.

Un'occorrenza del **set_new_handler** funzione in un programma registra la funzione di gestione delle eccezioni specificata nell'elenco di argomenti con il sistema di runtime:

```cpp
// set_new_handler1.cpp
#include <new.h>

int handle_program_memory_depletion( size_t )
{
   // Your code
}

int main( void )
{
   _set_new_handler( handle_program_memory_depletion );
   int *pi = new int[BIG_NUMBER];
}
```

È possibile salvare l'indirizzo della funzione ultima passato per il **set_new_handler** funzione e ripristinarlo in un secondo momento:

```cpp
   _PNH old_handler = _set_new_handler( my_handler );
   // Code that requires my_handler
   // . . .
   _set_new_handler( old_handler )
   // Code that requires old_handler
   // . . .
```

La funzione C++ [_set_new_mode](set-new-mode.md) imposta la nuova modalità del gestore per [malloc](malloc.md). Indica la nuova modalità di gestione se, in caso di errore, **malloc** consiste nel chiamare la routine del gestore di nuovo l'impostazione **set_new_handler**. Per impostazione predefinita **malloc** non chiama la nuova routine del gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **malloc** non riesce ad allocare memoria, **malloc** chiama la routine del gestore nuovo nello stesso modo in cui il **nuova** (operatore) Quando non riesce per lo stesso motivo. Per eseguire l'override del comportamento predefinito, chiamare:

```cpp
_set_new_mode(1);
```

all'inizio del programma o collegare con Newmode.obj.

Se un utente definito `operator new` viene fornito, le nuove funzioni del gestore non vengono chiamate automaticamente in caso di errore.

Per altre informazioni, vedere [new](../../cpp/new-operator-cpp.md) e [delete](../../cpp/delete-operator-cpp.md) in *Riferimenti al linguaggio C++*.

Un singolo **set_new_handler** gestore per tutti i collegata in modo dinamico alle DLL o eseguibili; anche se si chiama **set_new_handler** al gestore può essere sostituito da un'altra o che si sta sostituendo un gestore impostato da un altro file DLL o eseguibile.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_new_handler**|\<new.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

In questo esempio, quando l'allocazione ha esito negativo, il controllo viene trasferito a MyNewHandler. L'argomento passato a MyNewHandler è il numero di byte richiesto. Il valore restituito da MyNewHandler è un flag che indica se deve essere ritentata l'allocazione. Un valore diverso da zero indica che deve essere ritentata allocazione e il valore zero indica che l'allocazione non è riuscita.

```cpp
// crt_set_new_handler.cpp
// compile with: /c
#include <stdio.h>
#include <new.h>
#define BIG_NUMBER 0x1fffffff

int coalesced = 0;

int CoalesceHeap()
{
   coalesced = 1;  // Flag RecurseAlloc to stop
   // do some work to free memory
   return 0;
}
// Define a function to be called if new fails to allocate memory.
int MyNewHandler( size_t size )
{
   printf("Allocation failed. Coalescing heap.\n");

   // Call a function to recover some heap space.
   return CoalesceHeap();
}

int RecurseAlloc() {
   int *pi = new int[BIG_NUMBER];
   if (!coalesced)
      RecurseAlloc();
   return 0;
}

int main()
{
   // Set the failure handler for new to be MyNewHandler.
   _set_new_handler( MyNewHandler );
   RecurseAlloc();
}
```

```Output
Allocation failed. Coalescing heap.

This application has requested the Runtime to terminate it in an unusual way.
Please contact the application's support team for more information.
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[free](free.md)<br/>
[realloc](realloc.md)<br/>
