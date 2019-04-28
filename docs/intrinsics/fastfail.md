---
title: __fastfail
ms.date: 11/04/2016
ms.assetid: 9cd32639-e395-4c75-9f3a-ac3ba7f49921
ms.openlocfilehash: a9f75cbf3c572401ef26fb16ced221eb24d35534
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62263880"
---
# <a name="fastfail"></a>__fastfail

**Sezione specifica Microsoft**

Termina immediatamente il processo chiamante con un sovraccarico minimo.

## <a name="syntax"></a>Sintassi

```
void __fastfail(unsigned int code);
```

#### <a name="parameters"></a>Parametri

*codice*<br/>
[in] Oggetto `FAST_FAIL_<description>` costante simbolica da Winnt. h o WDM. h che indica il motivo della chiusura del processo.

## <a name="return-value"></a>Valore restituito

La funzione intrinseca `__fastfail` non restituisce alcun risultato.

## <a name="remarks"></a>Note

Il `__fastfail` intrinseco fornisce un meccanismo per un *fail fast* richiesta, ovvero un modo per un processo potenzialmente danneggiato per la terminazione immediata richiesta. Gli errori critici che possono aver danneggiato lo stato del programma e lo stack senza ripristino non possono essere gestiti tramite la normale funzionalità di gestione delle eccezioni. Usare `__fastfail` per terminare il processo con un sovraccarico minimo.

Internamente, `__fastfail` viene implementato tramite diversi meccanismi specifici per l'architettura:

|Architettura|Istruzione|Posizione dell'argomento code|
|------------------|-----------------|-------------------------------|
|x86|int 0x29|ecx|
|X64|int 0x29|rcx|
|ARM|Opcode 0xDEFB|r0|
|ARM64|OpCode 0xF003|x0|

Una richiesta di errore immediato è autonoma e in genere richiede l'esecuzione di solo due istruzioni. Dopo l'esecuzione di una richiesta di errore immediato, il kernel eseguirà l'azione appropriata. Quando viene generato un evento di errore immediato, nel codice in modalità utente non ci sono dipendenze di memoria oltre al puntatore all'istruzione stesso. Ciò ottimizza l'affidabilità, anche nel caso di un grave danneggiamento della memoria.

L'argomento `code`, ovvero una delle costanti simboliche `FAST_FAIL_<description>` in winnt.h o wdm.h, descrive il tipo di condizione di errore e viene incorporato nei report di errore in un modo specifico per l'ambiente.

Le richieste di errore immediato in modalità utente vengono visualizzate come eccezione second-chance critica con codice 0xC0000409 e con almeno un parametro dell'eccezione. Il primo parametro dell'eccezione è il valore `code`. Questo codice di eccezione indica al servizio Segnalazione errori Windows e all'infrastruttura di debug che il processo è danneggiato e che è necessario intraprendere il numero minimo di azioni in-process in risposta all'errore. Le richieste di errore immediato in modalità kernel vengono implementate usando un codice di controllo errori dedicato, `KERNEL_SECURITY_CHECK_FAILURE` (0x139). In entrambi i casi, non vengono richiamati i gestori delle eccezioni perché è previsto che lo stato del programma sia danneggiato. Se è presente un debugger, viene esaminato lo stato del programma prima della terminazione.

Il supporto del meccanismo nativo di errore immediato è iniziato in Windows 8. I sistemi operativi Windows che non supportano in modo nativo l'istruzione di errore immediato, in genere tratteranno la richiesta di errore immediato come una violazione di accesso o come un controllo errori `UNEXPECTED_KERNEL_MODE_TRAP`. In questi casi, il programma viene comunque terminato, ma non necessariamente con la stessa rapidità.

`__fastfail` è disponibile solo come funzione intrinseca.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__fastfail`|x86, x64, ARM, ARM64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
