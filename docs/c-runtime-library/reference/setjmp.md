---
title: setjmp | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- setjmp
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
- setjmp
dev_langs:
- C++
helpviewer_keywords:
- programs [C++], saving states
- current state
- setjmp function
ms.assetid: 684a8b27-e8eb-455b-b4a8-733ca1cbd7d2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2cc4673485577f5a12024d31e94063c82a8c7b8c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="setjmp"></a>setjmp

Salva lo stato corrente del programma.

## <a name="syntax"></a>Sintassi

```C
int setjmp(
   jmp_buf env
);
```

### <a name="parameters"></a>Parametri

*env*<br/>
Variabile in cui è archiviato l'ambiente.

## <a name="return-value"></a>Valore restituito

Restituisce 0 dopo aver salvato l'ambiente dello stack. Se **setjmp** restituisce come risultato di una **longjmp** chiama, viene restituito il **valore** argomento del **longjmp**, o se il **valore**  dell'argomento **longjmp** è 0, **setjmp** restituisce 1. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

Il **setjmp** funzione Salva un ambiente dello stack che successivamente è possibile ripristinare, utilizzando **longjmp**. Se utilizzati insieme, **setjmp** e **longjmp** offrono un metodo per eseguire un non-local **goto**. In genere vengono utilizzate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni normali di chiamata o restituzione.

Una chiamata a **setjmp** consente di salvare l'ambiente dello stack corrente in *env*. Una chiamata successiva a **longjmp** Ripristina l'ambiente salvato e restituisce il controllo al punto immediatamente successivo alla corrispondente **setjmp** chiamare. Tutte le variabili (eccetto le variabili di registro) accessibili al controllo di ricezione di routine contengono i valori che avevano al momento **longjmp** è stato chiamato.

Non è possibile utilizzare **setjmp** per passare dal codice nativo al codice gestito.

**Nota** **setjmp** e **longjmp** non supportano la semantica degli oggetti C++. In programmi C++, utilizzare il meccanismo di gestione delle eccezioni C++.

Per altre informazioni, vedere [Uso di setjmp e longjmp](../../cpp/using-setjmp-longjmp.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**setjmp**|\<setjmp.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_fpreset](fpreset.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[longjmp](longjmp.md)<br/>
[_setjmp3](../../c-runtime-library/setjmp3.md)<br/>
