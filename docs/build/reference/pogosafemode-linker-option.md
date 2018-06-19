---
title: / POGOSAFEMODE (PGO eseguito in modalità provvisoria thread) | Documenti Microsoft
ms.custom: ''
ms.date: 03/14/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
f1_keywords:
- POGOSAFEMODE
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 81392c67b47a0fa90c057ee4295667a054e34498
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32377333"
---
# <a name="pogosafemode-run-pgo-in-thread-safe-mode"></a>/ POGOSAFEMODE (PGO eseguito in modalità provvisoria thread)

**L'opzione /POGOSAFEMODE è deprecata a partire da Visual Studio 2015**. Usare la [/GENPROFILE: esatta](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) e **/GENPROFILE:NOEXACT** invece delle opzioni. Il **/POGOSAFEMODE** opzione del linker specifica che la compilazione instrumentata viene creata per utilizzare la modalità thread-safe per profilo dell'acquisizione di dati durante l'ottimizzazione guidata da profilo (PGO) set di training viene eseguito.

## <a name="syntax"></a>Sintassi

> **/POGOSAFEMODE**

## <a name="remarks"></a>Note

Ottimizzazione guidata da profilo (PGO) è disponibili due modalità possibili durante la fase di profilo: *modalità veloce* e *modalità provvisoria*. Una volta profilatura in modalità veloce, Usa un'istruzione di incremento per aumentare i contatori di dati. L'istruzione di incremento è più veloce ma non è thread-safe. Una volta profilatura in modalità provvisoria, utilizza l'istruzione di incremento interlocked per aumentare i contatori di dati. Questa istruzione ha la stessa funzionalità come l'istruzione di incremento ed è thread-safe, ma risulta più lento.

Il **/POGOSAFEMODE** opzione imposta la compilazione instrumentata per utilizzare la modalità provvisoria. Questa opzione può essere utilizzato quando deprecate [/LTCG: PGINSTRUMENT](ltcg-link-time-code-generation.md) viene specificato, durante la fase del linker strumentazione PGO.

Per impostazione predefinita, profilazione opera in modalità veloce. **/ POGOSAFEMODE** è obbligatorio solo se si desidera utilizzare la modalità provvisoria.

Per eseguire la profilazione in modalità provvisoria, è necessario utilizzare **/GENPROFILE: esatta** (impostazione consigliata), oppure utilizzare la variabile di ambiente [PogoSafeMode](environment-variables-for-profile-guided-optimizations.md) o l'opzione del linker **/POGOSAFEMODE**, a seconda del sistema. Se si sta eseguendo la profilatura di un x64 computer, è necessario utilizzare l'opzione del linker. Se si sta eseguendo la profilatura di x86 computer, è possibile utilizzare l'opzione del linker o definire la variabile di ambiente a qualsiasi valore prima di iniziare il processo di strumentazione PGO.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare il **proprietà di configurazione** > **Linker** > **ottimizzazione** pagina delle proprietà.

1. Nel **generazione codice in fase di collegamento** proprietà, scegliere **ottimizzazione PGO - strumento (/: PGINSTRUMENT)**.

1. Selezionare il **le proprietà di configurazione** > **Linker** > **riga di comando** pagina delle proprietà.

1. Immettere il **/POGOSAFEMODE** opzione nel **opzioni aggiuntive** casella. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[/ GENPROFILE e /FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md)<br/>
[/LTCG](ltcg-link-time-code-generation.md)<br/>
[Ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md)<br/>
[Variabili d'ambiente per le ottimizzazioni GPO](../../build/reference/environment-variables-for-profile-guided-optimizations.md)<br/>
