---
title: _purecall
ms.date: 4/2/2020
api_name:
- _purecall
- _o__purecall
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
- ntoskrnl.exe
- ucrtbase.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- purecall
- _purecall
helpviewer_keywords:
- _purecall function
- purecall function
ms.assetid: 56135d9b-3403-4e22-822d-e714523801cc
ms.openlocfilehash: f841bc70a4a5365bb9cc6086dd752bd2a1b583ed
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81338479"
---
# <a name="_purecall"></a>_purecall

Gestore degli errori predefinito per le chiamate a funzioni virtuali pure. Il compilatore genera codice per chiamare questa funzione quando viene chiamata una funzione membro virtuale pura.

## <a name="syntax"></a>Sintassi

```C
extern "C" int __cdecl _purecall();
```

## <a name="remarks"></a>Osservazioni

La funzione **_purecall** è un dettaglio di implementazione specifico di Microsoft del compilatore Microsoft C . Questa funzione non è progettata per essere chiamata direttamente dal codice e non ha una dichiarazione di intestazione pubblica. È qui documentata perché si tratta di un'esportazione pubblica della libreria di runtime C.

Una chiamata a una funzione virtuale pura è un errore perché non ha un'implementazione. Il compilatore genera codice per richiamare la funzione del gestore **degli errori _purecall** quando viene chiamata una funzione virtuale pura. Per impostazione predefinita, **_purecall** termina il programma. Prima di terminare, la funzione **_purecall** richiama una funzione **_purecall_handler** se ne è stata impostata una per il processo. È possibile installare una funzione del gestore errori personalizzata per le chiamate di funzioni virtuali pure, in modo da intercettarle per il debug o la creazione di report. Per usare il tuo gestore degli errori, crea una funzione con la **firma _purecall_handler,** quindi usa [_set_purecall_handler](get-purecall-handler-set-purecall-handler.md) per impostarla come gestore corrente.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

La funzione **_purecall** non dispone di una dichiarazione di intestazione. Il **typedef _purecall_handler** \<è definito nel> stdlib.h.

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[_get_purecall_handler, _set_purecall_handler](get-purecall-handler-set-purecall-handler.md)<br/>
