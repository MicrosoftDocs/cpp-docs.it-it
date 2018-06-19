---
title: /USEPROFILE (dati di utilizzo PGO con LTCG) | Documenti Microsoft
ms.custom: ''
ms.date: 03/14/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
f1_keywords:
- USEPROFILE
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 156a571eaa3db31b8c5345f1550346503651665d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32377993"
---
# <a name="useprofile-run-pgo-in-thread-safe-mode"></a>/USEPROFILE (PGO eseguito in modalità provvisoria thread)

Questa opzione del linker insieme [/LTCG (generazione codice in fase di collegamento](ltcg-link-time-code-generation.md) indica al linker per compilare con dati di training Ottimizzazione guidata da profilo (PGO).

## <a name="syntax"></a>Sintassi

> **/USEPROFILE**[**:**{**AGGRESSIVE**|**PGD =**_filename_}]

### <a name="arguments"></a>Argomenti

**AGGRESSIVA**<br/>
Questo argomento facoltativo specifica che le ottimizzazioni aggressiva velocità devono essere utilizzate durante la generazione del codice ottimizzato.

**PGD**=*filename*<br/>
Specifica un nome del file di base per il file PGD. Per impostazione predefinita, il linker Usa il nome base file eseguibile con estensione pgd.

## <a name="remarks"></a>Note

Il **/USEPROFILE** viene utilizzata in combinazione con l'opzione del linker **/LTCG** per generare o aggiornare una build ottimizzata basata sui dati di training PGO. È l'equivalente di deprecate **/LTCG: PGUPDATE** e **/LTCG: PGOPTIMIZE** opzioni.

Il parametro facoltativo **AGGRESSIVE** argomento Disabilita correlati alla dimensione euristica per tentare di ottimizzare la velocità. Questo può comportare ottimizzazioni che sostanzialmente aumentare le dimensioni dell'eseguibile e non possono aumentare la velocità risulta. È consigliabile analizzare e confrontare i risultati dell'utilizzo e non si utilizza **AGGRESSIVE**. Questo argomento deve essere specificato in modo esplicito; non è abilitato per impostazione predefinita.

Il **PGD** argomento specifica un nome facoltativo per il file pgd dati di training da usare, come in [/GENPROFILE o /fastgenprofile](genprofile-fastgenprofile-generate-profiling-instrumented-build.md). È l'equivalente di deprecate **/PGD** passare. Per impostazione predefinita, o se nessun *filename* viene specificato, un file PDG con lo stesso nome di basa come viene utilizzato il file eseguibile.

Il **/USEPROFILE** opzione del linker è stata introdotta in Visual Studio 2015.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare il **proprietà di configurazione** > **Linker** > **ottimizzazione** pagina delle proprietà.

1. Nel **generazione codice in fase di collegamento** proprietà, scegliere **generazione codice in fase di collegamento utilizzare (/ LTCG)**.

1. Selezionare il **le proprietà di configurazione** > **Linker** > **riga di comando** pagina delle proprietà.

1. Immettere il **/USEPROFILE** opzione e gli argomenti facoltativi nel **opzioni aggiuntive** casella. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[/ GENPROFILE e /FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md)<br/>
[/LTCG](ltcg-link-time-code-generation.md)<br/>
[Ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md)<br/>
[Variabili d'ambiente per le ottimizzazioni GPO](../../build/reference/environment-variables-for-profile-guided-optimizations.md)<br/>
