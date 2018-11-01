---
title: _purecall
ms.date: 11/04/2016
apiname:
- _purecall
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
- ntoskrnl.exe
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- purecall
- _purecall
helpviewer_keywords:
- _purecall function
- purecall function
ms.assetid: 56135d9b-3403-4e22-822d-e714523801cc
ms.openlocfilehash: a7a6db42dc4b8d9b2962a66c7866aae9db55eb3b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50541185"
---
# <a name="purecall"></a>_purecall

Gestore degli errori predefinito per le chiamate a funzioni virtuali pure. Il compilatore genera codice per chiamare questa funzione quando viene chiamata una funzione membro virtuale pura.

## <a name="syntax"></a>Sintassi

```C
extern "C" int __cdecl _purecall();
```

## <a name="remarks"></a>Note

Il **purecall** funzione è un dettaglio di implementazione specifica di Microsoft del compilatore Microsoft Visual C++. Questa funzione non è progettata per essere chiamata direttamente dal codice e non ha una dichiarazione di intestazione pubblica. È qui documentata perché si tratta di un'esportazione pubblica della libreria di runtime C.

Una chiamata a una funzione virtuale pura è un errore perché non ha un'implementazione. Il compilatore genera codice per richiamare il **purecall** funzione del gestore errori quando viene chiamata una funzione virtuale pura. Per impostazione predefinita **purecall** termina il programma. Prima della chiusura, il **purecall** funzione richiama un **_purecall_handler** funzionare se ne è stata impostata per il processo. È possibile installare una funzione del gestore errori personalizzata per le chiamate di funzioni virtuali pure, in modo da intercettarle per il debug o la creazione di report. Per usare gestore errori personalizzato, creare una funzione che ha il **_purecall_handler** firma, quindi usare [set_purecall_handler](get-purecall-handler-set-purecall-handler.md) per renderlo il gestore corrente.

## <a name="requirements"></a>Requisiti

Il **purecall** funzione non dispone di una dichiarazione di intestazione. Il **_purecall_handler** typedef è definito in \<STDLIB. h >.

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[_get_purecall_handler, _set_purecall_handler](get-purecall-handler-set-purecall-handler.md)<br/>
