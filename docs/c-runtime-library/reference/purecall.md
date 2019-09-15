---
title: _purecall
ms.date: 11/04/2016
api_name:
- _purecall
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
ms.openlocfilehash: 5d62ec30731ce26c4683afc88474d4bddb63a697
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70950161"
---
# <a name="_purecall"></a>_purecall

Gestore degli errori predefinito per le chiamate a funzioni virtuali pure. Il compilatore genera codice per chiamare questa funzione quando viene chiamata una funzione membro virtuale pura.

## <a name="syntax"></a>Sintassi

```C
extern "C" int __cdecl _purecall();
```

## <a name="remarks"></a>Note

La funzione **_purecall** è un dettaglio di implementazione specifico di Microsoft del compilatore C++ Microsoft. Questa funzione non è progettata per essere chiamata direttamente dal codice e non ha una dichiarazione di intestazione pubblica. È qui documentata perché si tratta di un'esportazione pubblica della libreria di runtime C.

Una chiamata a una funzione virtuale pura è un errore perché non ha un'implementazione. Il compilatore genera il codice per richiamare la funzione del gestore degli errori **_purecall** quando viene chiamata una funzione virtuale pura. Per impostazione predefinita, **_purecall** termina il programma. Prima di terminare, la funzione **_purecall** richiama una funzione **_purecall_handler** se ne è stata impostata una per il processo. È possibile installare una funzione del gestore errori personalizzata per le chiamate di funzioni virtuali pure, in modo da intercettarle per il debug o la creazione di report. Per usare un gestore errori personalizzato, creare una funzione con la firma **_purecall_handler** , quindi usare [_set_purecall_handler](get-purecall-handler-set-purecall-handler.md) per impostarla come gestore corrente.

## <a name="requirements"></a>Requisiti

La funzione **_purecall** non ha una dichiarazione di intestazione. Il typedef **_purecall_handler** è definito in \<stdlib. h >.

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[_get_purecall_handler, _set_purecall_handler](get-purecall-handler-set-purecall-handler.md)<br/>
