---
description: 'Altre informazioni su: __fastfail'
title: __fastfail
ms.date: 09/02/2019
ms.assetid: 9cd32639-e395-4c75-9f3a-ac3ba7f49921
ms.openlocfilehash: c7521f10dee7602fae3de5b2ac6fcc0245214bec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336997"
---
# <a name="__fastfail"></a>__fastfail

**Specifico di Microsoft**

Termina immediatamente il processo chiamante con un sovraccarico minimo.

## <a name="syntax"></a>Sintassi

```C
void __fastfail(unsigned int code);
```

### <a name="parameters"></a>Parametri

*codice*\
in `FAST_FAIL_<description>` Costante simbolica di Winnt. h o WDM. h che indica il motivo della terminazione del processo.

## <a name="return-value"></a>Valore restituito

La funzione intrinseca `__fastfail` non restituisce alcun risultato.

## <a name="remarks"></a>Commenti

La funzione `__fastfail` intrinseca fornisce un meccanismo per una richiesta di *errore veloce* , un modo per un processo potenzialmente danneggiato che richiede la terminazione immediata del processo. Gli errori critici che possono aver danneggiato lo stato del programma e lo stack senza ripristino non possono essere gestiti tramite la normale funzionalità di gestione delle eccezioni. Usare `__fastfail` per terminare il processo con un sovraccarico minimo.

Internamente, `__fastfail` viene implementato tramite diversi meccanismi specifici per l'architettura:

|Architettura|Istruzione|Posizione dell'argomento code|
|------------------|-----------------|-------------------------------|
|x86|int 0x29|`ecx`|
|x64|int 0x29|`rcx`|
|ARM|Opcode 0xDEFB|`r0`|
|ARM64|Opcode 0xF003|`x0`|

Una richiesta di errore immediato è autonoma e in genere richiede l'esecuzione di solo due istruzioni. Dopo l'esecuzione di una richiesta di errore veloce, il kernel esegue l'azione appropriata. Quando viene generato un evento di errore immediato, nel codice in modalità utente non ci sono dipendenze di memoria oltre al puntatore all'istruzione stesso. In questo modo viene ottimizzata l'affidabilità, anche in caso di danneggiamento della memoria grave.

L' `code` argomento, una delle `FAST_FAIL_<description>` costanti simboliche da Winnt. h o WDM. h, descrive il tipo di condizione di errore. Viene incorporato nei report degli errori in modo specifico dell'ambiente.

Le richieste con errori rapidi in modalità utente vengono visualizzate come seconda eccezione non continuabile con il codice di eccezione 0xC0000409 e con almeno un parametro di eccezione. Il primo parametro dell'eccezione è il valore `code`. Questo codice di eccezione indica all'Segnalazione errori Windows (WER) e all'infrastruttura di debug che il processo è danneggiato e che è necessario intraprendere le azioni minime in-process in risposta all'errore. Le richieste di errore immediato in modalità kernel vengono implementate usando un codice di controllo errori dedicato, `KERNEL_SECURITY_CHECK_FAILURE` (0x139). In entrambi i casi, non vengono richiamati i gestori delle eccezioni perché è previsto che lo stato del programma sia danneggiato. Se è presente un debugger, viene data la possibilità di esaminare lo stato del programma prima della terminazione.

Il supporto del meccanismo nativo di errore immediato è iniziato in Windows 8. I sistemi operativi Windows che non supportano l'istruzione Fast fail in modo nativo considereranno in genere una richiesta di errore immediato come violazione di accesso o come `UNEXPECTED_KERNEL_MODE_TRAP` controllo errori. In questi casi, il programma viene comunque terminato, ma non necessariamente con la stessa rapidità.

`__fastfail` è disponibile solo come funzione intrinseca.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__fastfail`|x86, x64, ARM, ARM64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
