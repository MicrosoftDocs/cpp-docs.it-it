---
title: longjmp | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- longjmp
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
- longjmp
dev_langs:
- C++
helpviewer_keywords:
- restoring stack environment and execution locale
- longjmp function
ms.assetid: 0e13670a-5130-45c1-ad69-6862505b7a2f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f6c26cae9a3fe83012387c93e31c4005d5614d97
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32401721"
---
# <a name="longjmp"></a>longjmp

Ripristina l'ambiente dello stack e le impostazioni locali di esecuzione.

## <a name="syntax"></a>Sintassi

```C
void longjmp(
   jmp_buf env,
   int value
);
```

### <a name="parameters"></a>Parametri

*env* variabile in quale ambiente è archiviato.

*valore* valore da restituire al **setjmp** chiamare.

## <a name="remarks"></a>Note

Il **longjmp** funzione Ripristina stack ambiente e l'esecuzione delle impostazioni locali salvate in precedenza in *env* dal **setjmp**. **setjmp** e **longjmp** offrono un metodo per eseguire un non locali **goto**; vengono generalmente utilizzati per passare il controllo dell'esecuzione al codice di gestione degli errori o di ripristino in una routine chiamata in precedenza senza tramite le chiamate normali e le convenzioni restituite.

Una chiamata a **setjmp** fa sì che l'ambiente dello stack corrente deve essere salvato in *env*. Una chiamata successiva a **longjmp** Ripristina l'ambiente salvato e restituisce il controllo al punto immediatamente successivo corrispondente **setjmp** chiamare. Riprende l'esecuzione come se *valore* appena è stato restituito dal **setjmp** chiamare. I valori di tutte le variabili (ad eccezione del fatto variabili registro) accessibili al controllo di ricezione di routine contengono i valori che avevano al momento **longjmp** è stato chiamato. I valori delle variabili di registro sono imprevedibili. Il valore restituito da **setjmp** deve essere diverso da zero. Se si passa 0 come *value*, il valore restituito effettivo viene sostituito con 1.

Chiamare **longjmp** prima della funzione che ha chiamato **setjmp** restituisce; in caso contrario i risultati sono imprevedibili.

Osservare le restrizioni seguenti quando si utilizza **longjmp**:

- Non partire dal presupposto che i valori delle variabili di registro rimangano invariati. I valori delle variabili di registro nella routine chiamante **setjmp** potrebbero non essere ripristinati i valori appropriati dopo **longjmp** viene eseguita.

- Non usare **longjmp** per trasferire il controllo all'esterno di una routine di gestione delle interruzioni a meno che l'interrupt è causato da un'eccezione a virgola mobile. In questo caso, può restituire un programma da un gestore di interrupt tramite **longjmp** se il pacchetto matematica a virgola mobile vengono reinizializzate innanzitutto chiamando **fpreset**.

     **Nota** prestare attenzione quando si utilizza **setjmp** e **longjmp** nei programmi C++. Dato che queste funzioni non supportano la semantica degli oggetti C++, è preferibile usare il meccanismo di gestione delle eccezioni C++.

Per altre informazioni, vedere [Uso di setjmp e longjmp](../../cpp/using-setjmp-longjmp.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**longjmp**|\<setjmp.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_fpreset](fpreset.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[setjmp](setjmp.md)<br/>
