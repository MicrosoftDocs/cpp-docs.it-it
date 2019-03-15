---
title: / POGOSAFEMODE (PGO eseguito in modalità provvisoria thread)
ms.date: 03/14/2018
f1_keywords:
- POGOSAFEMODE
ms.openlocfilehash: bbb328bf67d7823305a43f1d61252747cf5ea29e
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57821287"
---
# <a name="pogosafemode-run-pgo-in-thread-safe-mode"></a>/ POGOSAFEMODE (PGO eseguito in modalità provvisoria thread)

**L'opzione /POGOSAFEMODE è deprecata a partire da Visual Studio 2015**. Usare la [/GENPROFILE: esatto](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) e **/GENPROFILE:NOEXACT** invece delle opzioni. Il **/POGOSAFEMODE** l'opzione del linker specifica che la compilazione instrumentata viene creata per utilizzare la modalità thread-safe per profilo dell'acquisizione di dati durante l'ottimizzazione PGO (PGO) le esecuzioni di training.

## <a name="syntax"></a>Sintassi

> **/POGOSAFEMODE**

## <a name="remarks"></a>Note

Ottimizzazione PGO (PGO) dispone di due possibili modalità durante la fase di analisi: *modalità veloce* e *modalità provvisoria*. Una volta profilatura in modalità veloce, Usa un'istruzione di incremento per aumentare i contatori di dati. L'istruzione di incremento è più veloce ma non è thread-safe. Una volta profilatura in modalità provvisoria, utilizza l'istruzione di incremento con interlock per aumentare i contatori di dati. Questa istruzione ha la stessa funzionalità come l'istruzione di incremento ed è thread-safe, ma è più lenta.

Il **/POGOSAFEMODE** opzione imposta la compilazione instrumentata per utilizzare la modalità provvisoria. Questa opzione può solo essere usata quando deprecate [/LTCG: PGINSTRUMENT](ltcg-link-time-code-generation.md) viene specificato, durante la fase del linker strumentazione PGO.

Per impostazione predefinita, profilazione PGO viene eseguita in modalità veloce. **/ POGOSAFEMODE** è necessaria solo se si desidera utilizzare la modalità provvisoria.

Per eseguire la profilazione PGO in modalità provvisoria, è necessario utilizzare **/GENPROFILE: esatto** (scelta consigliata), oppure usare la variabile di ambiente [PogoSafeMode](../environment-variables-for-profile-guided-optimizations.md) o l'opzione del linker **/POGOSAFEMODE**, a seconda del sistema. Se si sta eseguendo la profilatura su un x64 computer, è necessario usare l'opzione del linker. Se si sta eseguendo la profilatura su un x86 computer, è possibile usare l'opzione del linker o definire la variabile di ambiente su un valore qualsiasi prima di iniziare il processo di strumentazione PGO.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **ottimizzazione** pagina delle proprietà.

1. Nel **Link Time Code Generation** proprietà, scegliere **ottimizzazione PGO - strumento (/: PGINSTRUMENT)**.

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Immettere il **/POGOSAFEMODE** opzione nel **opzioni aggiuntive** casella. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[/ GENPROFILE e /FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md)<br/>
[/LTCG](ltcg-link-time-code-generation.md)<br/>
[Ottimizzazioni PGO](../profile-guided-optimizations.md)<br/>
[Variabili d'ambiente per le ottimizzazioni GPO](../environment-variables-for-profile-guided-optimizations.md)<br/>
