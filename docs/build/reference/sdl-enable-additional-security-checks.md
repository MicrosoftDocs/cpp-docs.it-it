---
title: /sdl (Abilita ulteriori controlli di sicurezza)
ms.date: 11/26/2018
f1_keywords:
- VC.Project.VCCLCompilerTool.SDLCheck
ms.assetid: 3dcf86a0-3169-4240-9f29-e04a9f535826
ms.openlocfilehash: d5a85f9648ebcc4064146f22cf5da020e06b7ba3
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218975"
---
# <a name="sdl-enable-additional-security-checks"></a>/sdl (Abilita ulteriori controlli di sicurezza)

Aggiunge i controlli consigliati di Security Development Lifecycle (SDL). Questi controlli includono altri avvisi relativi alla sicurezza come errori e funzionalità aggiuntive per la generazione di codice sicuro.

## <a name="syntax"></a>Sintassi

> **`/sdl`**[**`-`**]

## <a name="remarks"></a>Osservazioni

**/SDL** Abilita un superset dei controlli di sicurezza di base forniti da [`/GS`](gs-buffer-security-check.md) ed esegue l'override di **`/GS-`** . Per impostazione predefinita, **`/sdl`** è disattivato. **`/sdl-`** Disabilita i controlli di sicurezza aggiuntivi.

## <a name="compile-time-checks"></a>Controlli in fase di compilazione

**`/sdl`** Abilita questi avvisi come errori:

|Avviso abilitato da /sdl|Opzione della riga di comando equivalente|Descrizione|
|------------------------------|-------------------------------------|-----------------|
|[C4146](../../error-messages/compiler-warnings/compiler-warning-level-2-c4146.md)|/we4146|Un operatore di sottrazione unario viene applicato a un tipo unsigned, restituendo un risultato unsigned.|
|[C4308](../../error-messages/compiler-warnings/compiler-warning-level-2-c4308.md)|/we4308|Una costante integrale negativa convertita in un tipo unsigned, restituendo un risultato forse privo di significato.|
|[C4532](../../error-messages/compiler-warnings/compiler-warning-level-1-c4532.md)|/we4532|L'uso `continue` di `break` `goto` parole chiave o in un `__finally` / `finally` blocco presenta un comportamento non definito durante la terminazione anomala.|
|[C4533](../../error-messages/compiler-warnings/compiler-warning-level-1-c4533.md)|/we4533|Il codice che inizializza una variabile non verrà eseguito.|
|[C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md)|/we4700|Utilizzo di una variabile locale non inizializzata.|
|[C4703](../../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md)|/we4703|Utilizzo di una variabile locale puntatore potenzialmente non inizializzata.|
|[C4789](../../error-messages/compiler-warnings/compiler-warning-level-1-c4789.md)|/we4789|Sovraccarico del buffer quando vengono utilizzate le funzioni specifiche di runtime del linguaggio C (CRT).|
|[C4995](../../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md)|/we4995|Utilizzo di una funzione contrassegnata con pragma [`deprecated`](../../preprocessor/deprecated-c-cpp.md) .|
|[C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md)|/we4996|Utilizzo di una funzione contrassegnata come [`deprecated`](../../cpp/deprecated-cpp.md) .|

## <a name="runtime-checks"></a>controlli di runtime

Quando **`/sdl`** è abilitato, il compilatore genera il codice per eseguire questi controlli in fase di esecuzione:

- Abilita la modalità Strict del **`/GS`** rilevamento del sovraccarico del buffer in fase di esecuzione, equivalente alla compilazione con `#pragma strict_gs_check(push, on)` .

- Esegue una pulizia del puntatore limitata. Nelle espressioni che non comportano dereferenziazioni e nei tipi che non dispongono di un distruttore definito dall'utente, i riferimenti al puntatore sono impostati su un indirizzo non valido dopo una chiamata a **`delete`** . Questo consente di prevenire il riutilizzo di riferimenti del puntatore non aggiornati.

- Esegue l'inizializzazione del puntatore al membro della classe. Inizializza automaticamente i membri della classe del tipo di puntatore **`nullptr`** su in un'istanza dell'oggetto (prima dell'esecuzione del costruttore). Ciò consente di evitare l'utilizzo di puntatori non inizializzati che il costruttore non inizializza in modo esplicito. L'inizializzazione del puntatore del membro generato dal compilatore viene chiamata purché:

  - L'oggetto non viene allocato usando un oggetto personalizzato (definito dall'utente)`operator new`

  - L'oggetto non è allocato come parte di una matrice (ad esempio `new A[x]` )

  - La classe non è gestita né importata

  - La classe dispone di un costruttore predefinito definito dall'utente.

  Per poter essere inizializzati dalla funzione di inizializzazione della classe generata dal compilatore, un membro deve essere un puntatore e non una proprietà o una costante.

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [avvisi,/SDL e miglioramento del rilevamento di variabili non inizializzate](https://cloudblogs.microsoft.com/microsoftsecure/2012/06/06/warnings-sdl-and-improving-uninitialized-variable-detection/).

#### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **C/C++** .

1. Nella pagina **generale** selezionare l'opzione dall'elenco a discesa **verifiche SDL** .

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
