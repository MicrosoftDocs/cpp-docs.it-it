---
title: set_unexpected (CRT)
ms.date: 11/04/2016
apiname:
- set_unexpected
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
apitype: DLLExport
f1_keywords:
- set_unexpected
helpviewer_keywords:
- set_unexpected function
- unexpected function
- exception handling, termination
ms.assetid: ebcef032-4771-48e5-88aa-2a1ab8750aa6
ms.openlocfilehash: 6c38421e447ca7b3f263148f51f0ade5c59e2804
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62356396"
---
# <a name="setunexpected-crt"></a>set_unexpected (CRT)

Installa la funzione di terminazione personalizzata che verrà chiamata da **unexpected**.

## <a name="syntax"></a>Sintassi

```cpp
unexpected_function set_unexpected( unexpected_function unexpFunction );
```

### <a name="parameters"></a>Parametri

*unexpFunction*<br/>
Puntatore a una funzione personalizzata per sostituire il **imprevisto** (funzione).

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione di terminazione precedente registrato da **_set_unexpected** in modo che la funzione precedente possa essere ripristinata in un secondo momento. Se è stata impostata alcuna funzione precedente, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; Questo valore può essere **NULL**.

## <a name="remarks"></a>Note

Il **set_unexpected** funzione installazioni *unexpFunction* come nome della funzione chiamata dalla **imprevisto**. **imprevisto** non viene utilizzato nell'implementazione di gestione delle eccezioni C++ corrente. Il **unexpected_function** tipo è definito in EH. H come puntatore a una funzione unexpected definita dall'utente *unexpFunction* che restituisce **void**. Personalizzata *unexpFunction* funzione non deve restituire al chiamante.

```cpp
typedef void ( *unexpected_function )( );
```

Per impostazione predefinita **imprevisto** chiamate **terminare**. È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione personalizzata e chiamando **set_unexpected** con il nome della funzione come relativo argomento. **imprevista** chiama l'ultima funzione fornita come argomento al **set_unexpected**.

A differenza della funzione di terminazione personalizzata installata da una chiamata a **set_terminate**, può essere generata un'eccezione dall'interno *unexpFunction*.

In un ambiente multithreading, le funzioni unexpected vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione unexpected. Quindi, ogni thread è responsabile della propria gestione degli eventi imprevisti.

Nell'implementazione corrente di Microsoft di gestione delle eccezioni C++ **imprevisto** chiamate **terminare** per impostazione predefinita e non viene mai chiamato dalla libreria di runtime di gestione delle eccezioni. Non offre alcun vantaggio particolare alla chiamata **imprevisto** invece **terminare**.

È presente una sola **set_unexpected** gestore per tutto in modo dinamico le DLL o exe collegati; anche se si chiama **set_unexpected** il gestore può essere sostituito da un altro o che si stia sostituendo un gestore impostato da un altro file DLL o EXE.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**set_unexpected**|\<eh.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)<br/>
[abort](abort.md)<br/>
[_get_unexpected](get-unexpected.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[terminate](terminate-crt.md)<br/>
[Imprevisto](unexpected-crt.md)<br/>
