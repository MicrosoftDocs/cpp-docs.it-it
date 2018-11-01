---
title: /sdl (Abilita ulteriori controlli di sicurezza)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.SDLCheck
ms.assetid: 3dcf86a0-3169-4240-9f29-e04a9f535826
ms.openlocfilehash: 84e3b7b80727c359e711f182e2f06a7332989549
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50587460"
---
# <a name="sdl-enable-additional-security-checks"></a>/sdl (Abilita ulteriori controlli di sicurezza)

Aggiunge i controlli consigliati di Security Development Lifecycle (SDL). Questi controlli includono altri avvisi relativi alla sicurezza come errori e funzionalità aggiuntive per la generazione di codice sicuro.

## <a name="syntax"></a>Sintassi

```
/sdl[-]
```

## <a name="remarks"></a>Note

**/SDL** Abilita un superset dei controlli di sicurezza di base fornito da [/GS](../../build/reference/gs-buffer-security-check.md) ed esegue l'override **/GS-**. Per impostazione predefinita **/sdl** è disattivata. **/SDL-** disabilita i controlli di sicurezza aggiuntive.

## <a name="compile-time-checks"></a>Controlli in fase di compilazione

**/SDL** abilita questi avvisi come errori:

|Avviso abilitato da /sdl|Opzione della riga di comando equivalente|Descrizione|
|------------------------------|-------------------------------------|-----------------|
|[C4146](../../error-messages/compiler-warnings/compiler-warning-level-2-c4146.md)|/we4146|Un operatore di sottrazione unario viene applicato a un tipo unsigned, restituendo un risultato unsigned.|
|[C4308](../../error-messages/compiler-warnings/compiler-warning-level-2-c4308.md)|/we4308|Una costante integrale negativa convertita in un tipo unsigned, restituendo un risultato forse privo di significato.|
|[C4532](../../error-messages/compiler-warnings/compiler-warning-level-1-c4532.md)|/we4532|Sfrutta `continue`, `break` o `goto` parole chiave in un `__finally` / `finally` blocco produce un comportamento indefinito durante una terminazione anomala.|
|[C4533](../../error-messages/compiler-warnings/compiler-warning-level-1-c4533.md)|/we4533|Il codice che inizializza una variabile non verrà eseguito.|
|[C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md)|/we4700|Utilizzo di una variabile locale non inizializzata.|
|[C4703](../../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md)|/we4703|Utilizzo di una variabile locale puntatore potenzialmente non inizializzata.|
|[ERRORE C4789](../../error-messages/compiler-warnings/compiler-warning-level-1-c4789.md)|/we4789|Sovraccarico del buffer quando vengono utilizzate le funzioni specifiche di runtime del linguaggio C (CRT).|
|[C4995](../../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md)|/we4995|Utilizzo di una funzione contrassegnata con il pragma [deprecato](../../preprocessor/deprecated-c-cpp.md).|
|[AVVISO C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md)|/we4996|Utilizzo di una funzione contrassegnata come [deprecato](../../cpp/deprecated-cpp.md).|

## <a name="runtime-checks"></a>Controlli runtime

Quando **/sdl** è abilitato, il compilatore genera codice per eseguire questi controlli in fase di esecuzione:

- Attiva la modalità strict del **/GS** rivelamento del sovraccarico del buffer di run-time, equivalente alla compilazione con `#pragma strict_gs_check(push, on)`.

- Esegue una pulizia del puntatore limitata. In espressioni che non includono dereferenziazioni e nei tipi che non dispongono di un distruttore definito dall'utente, i riferimenti del puntatore vengono impostati su un indirizzo non valido in seguito ad una chiamata a `delete`. Questo consente di prevenire il riutilizzo di riferimenti del puntatore non aggiornati.

- Esegue l'inizializzazione dei membri della classe. Inizializza automaticamente tutti i membri della classe a zero in fase di creazione di oggetti, prima che venga eseguito il costruttore. Questo consente di evitare l'utilizzo di dati non inizializzati associati ai membri della classe che il costruttore non inizializza in modo esplicito.

## <a name="remarks"></a>Note

Per altre informazioni, vedere [avvisi, /sdl e miglioramento del rilevamento della variabile non inizializzato](https://cloudblogs.microsoft.com/microsoftsecure/2012/06/06/warnings-sdl-and-improving-uninitialized-variable-detection/).

#### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **C/C++** cartella.

1. Nel **generali** pagina, selezionare l'opzione dal **controlli SDL** elenco a discesa.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)