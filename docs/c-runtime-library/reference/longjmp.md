---
title: longjmp | Microsoft Docs
ms.custom: ''
ms.date: 08/14/2018
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
ms.openlocfilehash: 196f95ae134458f2eaf00ab037c3a560d1317515
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46109693"
---
# <a name="longjmp"></a>longjmp

Ripristina stack ambiente e l'esecuzione impostazioni locali configurate un `setjmp` chiamare.

## <a name="syntax"></a>Sintassi

```C
void longjmp(
   jmp_buf env,
   int value
);
```

### <a name="parameters"></a>Parametri

*env*<br/>
Variabile in cui è archiviato l'ambiente.

*valore*<br/>
Valore da restituire alla chiamata di `setjmp`.

## <a name="remarks"></a>Note

Il **longjmp** funzione consente di ripristinare una lingua di ambiente e l'esecuzione dello stack salvata in precedenza *env* da `setjmp`. `setjmp` e **longjmp** offrono un modo per eseguire un'operazione **goto**; vengono utilizzati per passare il controllo dell'esecuzione al codice di gestione degli errori o di ripristino in una routine chiamata in precedenza senza utilizzare la normale chiamata e convenzioni di restituzione.

Una chiamata a `setjmp` fa sì che l'ambiente dello stack corrente deve essere salvato in *env*. Una chiamata successiva al **longjmp** Ripristina l'ambiente salvato e restituisce il controllo al punto immediatamente successivo corrispondente `setjmp` chiamare. L'esecuzione riprende come se la chiamata `setjmp` avesse appena restituito *value*. I valori di tutte le variabili (eccetto le variabili di registro) accessibili al controllo di ricezione di routine contengono i valori che avevano al momento **longjmp** è stato chiamato. I valori delle variabili di registro sono imprevedibili. Il valore restituito da `setjmp` deve essere diverso da zero. Se si passa 0 come *value*, il valore restituito effettivo viene sostituito con 1.

**Sezione specifica Microsoft**

Nel codice C++ di Microsoft su Windows, **longjmp** utilizza la stessa semantica di rimozione dello stack come codice di gestione delle eccezioni. È possibile usare esattamente negli stessi scenari che possono essere generate le eccezioni C++. Tuttavia, questo uso non è portabile e viene fornito con alcuni avvertimenti importanti relativi.

Chiamare solo **longjmp** prima che la funzione che ha chiamato `setjmp` restituisce; in caso contrario i risultati sono imprevedibili.

Osservare le restrizioni seguenti quando si usa **longjmp**:

- Non partire dal presupposto che i valori delle variabili di registro rimangano invariati. I valori delle variabili di registro nella routine che chiama `setjmp` potrebbero non essere ripristinati sui valori appropriati dopo **longjmp** viene eseguita.

- Non utilizzare **longjmp** per trasferire il controllo all'esterno di una routine di gestione degli interrupt, a meno che l'interrupt è causato da un'eccezione a virgola mobile. In questo caso, può restituire un programma da un gestore di interrupt tramite **longjmp** se reinizializza prima di tutto il pacchetto matematica a virgola mobile chiamando [fpreset](fpreset.md).

- Non utilizzare **longjmp** per trasferire il controllo da una routine di callback richiamata direttamente o indirettamente da codice di Windows.

- Se il codice viene compilato usando **/EHs** oppure **/EHsc** e la funzione che contiene la **longjmp** chiamata è **noexcept** oggetti quindi locali in tale funzione non può essere eliminata durante la rimozione dello stack.

**Fine sezione specifica Microsoft**

> [!NOTE]
> Nel codice C++ portabile, è possibile presupporre `setjmp` e `longjmp` supportano la semantica degli oggetti C++. In particolare, un `setjmp` / `longjmp` chiamata coppia produce un comportamento indefinito se sostituendo il `setjmp` e `longjmp` da **catch** e **throw** invocherebbe eventuali distruttori non semplici per gli oggetti automatici. Nei programmi C++, è consigliabile che usare il meccanismo di gestione delle eccezioni C++.

Per altre informazioni, vedere [Uso di setjmp e longjmp](../../cpp/using-setjmp-longjmp.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**longjmp**|\<setjmp.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_fpreset](fpreset.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[setjmp](setjmp.md)
