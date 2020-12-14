---
description: Altre informazioni su:/USEPROFILE (eseguire PGO in modalità thread-safe)
title: /USEPROFILE (USA i dati PGO con LTCG)
ms.date: 03/14/2018
f1_keywords:
- USEPROFILE
ms.openlocfilehash: c6c293b8467ea308dc2f7b4a4cd916cc5d9ac4c9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247046"
---
# <a name="useprofile-run-pgo-in-thread-safe-mode"></a>/USEPROFILE (esecuzione di PGO in modalità thread-safe)

Questa opzione del linker insieme a [/LTCG (generazione di codice in fase di collegamento](ltcg-link-time-code-generation.md) indica al linker di eseguire la compilazione usando i dati di training per l'ottimizzazione PGO (PGO).

## <a name="syntax"></a>Sintassi

> **/USEPROFILE**[**:**{**aggressive** | **PGD =**_filename_}]

### <a name="arguments"></a>Argomenti

**AGGRESSIVA**<br/>
Questo argomento facoltativo specifica che le ottimizzazioni di velocità aggressive devono essere usate durante la generazione di codice ottimizzato.

**PGD** = *nome file*<br/>
Specifica un nome del file di base per il file PGD. Per impostazione predefinita, il linker usa il nome del file eseguibile di base con estensione PGD.

## <a name="remarks"></a>Commenti

L'opzione del linker **/USEPROFILE** viene utilizzata insieme a **/LTCG** per generare o aggiornare una compilazione ottimizzata in base ai dati di training di PGO. È l'equivalente delle opzioni deprecate **/LTCG: PGUPDATE** e **/LTCG: PGOPTIMIZE** .

L'argomento facoltativo **aggressivo** Disabilita l'euristica relativa alle dimensioni per tentare di ottimizzare la velocità. Questo può comportare ottimizzazioni che aumentano notevolmente le dimensioni del file eseguibile e potrebbe non aumentare la velocità risultante. È consigliabile profilare e confrontare i risultati dell'utilizzo di e non utilizzando **aggressivo**. Questo argomento deve essere specificato in modo esplicito; non è abilitato per impostazione predefinita.

L'argomento **PGD** specifica un nome facoltativo per il file di training data. PGD da usare, come in [/GENPROFILE o/FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md). È l'equivalente dell'opzione **/PGD** deprecata. Per impostazione predefinita, o se non è specificato alcun *nome* file, viene usato un file con estensione PGD con lo stesso nome di base dell'eseguibile.

L'opzione del linker **/USEPROFILE** è una novità di Visual Studio 2015.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà di ottimizzazione del **linker** delle proprietà di configurazione  >   .

1. Nella proprietà **generazione codice in fase di collegamento** scegliere **USA generazione codice in fase di collegamento (/LTCG)**.

1. Selezionare la   >  pagina delle proprietà della riga di comando del **linker** proprietà di configurazione  >   .

1. Immettere l'opzione **/USEPROFILE** e gli argomenti facoltativi nella casella **Opzioni aggiuntive** . Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[/GENPROFILE e/FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md)<br/>
[/LTCG](ltcg-link-time-code-generation.md)<br/>
[Ottimizzazioni PGO](../profile-guided-optimizations.md)<br/>
[Variabili di ambiente per le ottimizzazioni Profile-Guided](../environment-variables-for-profile-guided-optimizations.md)<br/>
