---
description: Altre informazioni su:/POGOSAFEMODE (eseguire PGO in modalità thread-safe)
title: /POGOSAFEMODE (esecuzione di PGO in modalità thread-safe)
ms.date: 03/14/2018
f1_keywords:
- POGOSAFEMODE
ms.openlocfilehash: dfe8d46a3008a1d41156d077e5b87e50ac345e18
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225921"
---
# <a name="pogosafemode-run-pgo-in-thread-safe-mode"></a>/POGOSAFEMODE (esecuzione di PGO in modalità thread-safe)

**L'opzione/POGOSAFEMODE è deprecata a partire da Visual Studio 2015**. Usare invece le opzioni [/GENPROFILE: exact](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) e **/GENPROFILE: noexact** . L'opzione del linker **/POGOSAFEMODE** specifica che la compilazione instrumentata viene creata per usare la modalità thread-safe per l'acquisizione dei dati di profilo durante le esecuzioni di training PGO (Profile-Guided Optimization).

## <a name="syntax"></a>Sintassi

> **/POGOSAFEMODE**

## <a name="remarks"></a>Commenti

L'ottimizzazione PGO (PGO) dispone di due modalità possibili durante la fase di profilatura: *modalità veloce* e *modalità provvisoria*. Quando la profilatura è in modalità rapida, usa un'istruzione Increment per aumentare i contatori dei dati. L'istruzione Increment è più veloce ma non è thread-safe. Quando la profilatura è in modalità provvisoria, usa l'istruzione di incremento Interlocked per aumentare i contatori dei dati. Questa istruzione ha la stessa funzionalità dell'istruzione di incremento ed è thread-safe, ma è più lenta.

L'opzione **/POGOSAFEMODE** imposta la compilazione instrumentata per l'uso della modalità provvisoria. Questa opzione può essere usata solo quando si specifica il parametro [/LTCG: PGINSTRUMENT](ltcg-link-time-code-generation.md) deprecato durante la fase di collegamento di strumentazione PGO.

Per impostazione predefinita, la profilatura di PGO funziona in modalità veloce. **/POGOSAFEMODE** è necessario solo se si desidera utilizzare la modalità provvisoria.

Per eseguire la profilatura di PGO in modalità provvisoria, è necessario usare **/GENPROFILE: exact** (scelta consigliata) o usare la variabile di ambiente [PogoSafeMode](../environment-variables-for-profile-guided-optimizations.md) o l'opzione del linker **/POGOSAFEMODE**, a seconda del sistema. Se si sta eseguendo la profilatura in un computer x64, è necessario usare l'opzione del linker. Se si sta eseguendo la profilatura in un computer x86, è possibile usare l'opzione del linker o definire la variabile di ambiente su qualsiasi valore prima di avviare il processo di strumentazione PGO.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà di ottimizzazione del **linker** delle proprietà di configurazione  >   .

1. Nella proprietà **generazione codice in fase di collegamento** scegliere **ottimizzazione PGO-strumento (/LTCG: PGINSTRUMENT)**.

1. Selezionare la   >  pagina delle proprietà della riga di comando del **linker** proprietà di configurazione  >   .

1. Immettere l'opzione **/POGOSAFEMODE** nella casella **Opzioni aggiuntive** . Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[/GENPROFILE e/FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md)<br/>
[/LTCG](ltcg-link-time-code-generation.md)<br/>
[Ottimizzazioni PGO](../profile-guided-optimizations.md)<br/>
[Variabili di ambiente per le ottimizzazioni Profile-Guided](../environment-variables-for-profile-guided-optimizations.md)<br/>
