---
title: /LTCG (generazione di codice in fase di collegamento) | Documenti Microsoft
ms.custom: ''
ms.date: 03/14/2018
ms.technology:
- cpp-tools
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.LinkTimeCodeGeneration
- VC.Project.VCConfiguration.WholeProgramOptimization
- VC.Project.VCCLWCECompilerTool.WholeProgramOptimization
- /ltcg
- VC.Project.VCCLCompilerTool.WholeProgramOptimization
dev_langs:
- C++
helpviewer_keywords:
- link-time code generation in C++ linker
- /LTCG linker option
- -LTCG linker option
- LTCG linker option
ms.assetid: 788c6f52-fdb8-40c2-90af-4026ea2cf2e2
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a8ac39babea0c36e9d5d120e1f5ca89e3f3dc014
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="ltcg-link-time-code-generation"></a>/LTCG (Generazione di codice in fase di collegamento)

Uso **/LTCG** per eseguire l'Ottimizzazione intero programma, o per creare una strumentazione di ottimizzazione guidata da profilo (PGO), eseguire training e creare PGO ottimizzato compilazioni.

## <a name="syntax"></a>Sintassi

> **/LTCG**[**:**{**INCREMENTAL**|**NOSTATUS**|**STATO** | **OFF**}]<br/>

Queste opzioni sono deprecate a partire da Visual Studio 2015:

> **/LTCG:**{**PGINSTRUMENT**|**PGOPTIMIZE**|**PGUPDATE**}<br/>

### <a name="arguments"></a>Argomenti

**INCREMENTALE** (facoltativo)<br/>
Specifica che il linker si applica solo intero programma in fase di collegamento o di ottimizzazione la generazione di codice (LTCG) al set di file interessati da una modifica, anziché l'intero progetto. Per impostazione predefinita, questo flag non viene impostato quando **/LTCG** viene specificato, e l'intero progetto viene collegato tramite Ottimizzazione intero programma.

**NOSTATUS** &#124; **stato** (facoltativo)<br/>
Specifica se il linker visualizza un indicatore di stato che mostra la percentuale di completamento del collegamento. Per impostazione predefinita, queste informazioni sullo stato non vengono visualizzate.

**OFF** (facoltativo)<br/>
Disabilita la generazione di codice in fase di collegamento. Questo comportamento è identico a quando **/LTCG** non è specificato nella riga di comando.

**PGINSTRUMENT** (facoltativo)<br/>
Questa opzione è deprecata a partire da Visual Studio 2015. In alternativa, usare **/LTCG** e [/GENPROFILE o /fastgenprofile.](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) per generare una compilazione instrumentata per l'ottimizzazione PGO. I dati che sono raccolti dalle esecuzioni instrumentate sono utilizzati per creare un'immagine ottimizzata. Per ulteriori informazioni, vedere [ottimizzazione PGO](profile-guided-optimizations.md). La versione abbreviata di questa opzione viene **/LTCG: PGI**.

**PGOPTIMIZE** (facoltativo)<br/>
Questa opzione è deprecata a partire da Visual Studio 2015. Utilizzare invece **/LTCG** e [/USEPROFILE](useprofile.md) per compilare un'immagine ottimizzata. Per ulteriori informazioni, vedere [ottimizzazione PGO](../../build/reference/profile-guided-optimizations.md). La versione abbreviata di questa opzione viene **/LTCG: PGO**.

**PGUPDATE** (facoltativo)<br/>
Questa opzione è deprecata a partire da Visual Studio 2015. In alternativa, usare **/LTCG** e **/USEPROFILE** per ricompilare un'immagine ottimizzata. Per ulteriori informazioni, vedere [ottimizzazione PGO](../../build/reference/profile-guided-optimizations.md). La versione abbreviata di questa opzione viene **opzione /LTCG: pgu**.

## <a name="remarks"></a>Note

Il **/LTCG** opzione indica al linker di chiamare il compilatore ed eseguire l'ottimizzazione dell'intero programma. È anche possibile eseguire un'ottimizzazione guidata del profilo. Per ulteriori informazioni, vedere [ottimizzazione PGO](../../build/reference/profile-guided-optimizations.md).

Con le seguenti eccezioni, non è possibile aggiungere le opzioni del linker per la combinazione PGO **/LTCG** e **/USEPROFILE** che non sono state specificate nella combinazione di inizializzazione PGO precedente di  **/LTCG** e **/GENPROFILE** opzioni:

- [/BASE](../../build/reference/base-base-address.md)

- [/FIXED](../../build/reference/fixed-fixed-base-address.md)

- **/LTCG**

- [/MAP](../../build/reference/map-generate-mapfile.md)

- [/MAPINFO](../../build/reference/mapinfo-include-information-in-mapfile.md)

- [/NOLOGO](../../build/reference/nologo-suppress-startup-banner-linker.md)

- [/OUT](../../build/reference/out-output-file-name.md)

- [/PGD](../../build/reference/pgd-specify-database-for-profile-guided-optimizations.md)

- [/PDB](../../build/reference/pdb-use-program-database.md)

- [/PDBSTRIPPED](../../build/reference/pdbstripped-strip-private-symbols.md)

- [/STUB](../../build/reference/stub-ms-dos-stub-file-name.md)

- [/VERBOSE](../../build/reference/verbose-print-progress-messages.md)

Le opzioni dei linker che vengono specificate insieme con il **/LTCG** e **/GENPROFILE** opzioni per inizializzare ottimizzazione PGO non sono necessario essere specificato quando si compila usando **/LTCG** e **/USEPROFILE**; perché sono implicite.

Nel resto di questo articolo viene spiegato **/LTCG** in termini di generazione del codice in fase di collegamento.

**/LTCG** implicita con [/GL](../../build/reference/gl-whole-program-optimization.md).

Il linker richiama la generazione di codice in fase di collegamento, se viene passato un modulo che è stato compilato utilizzando **/GL** o un modulo MSIL (vedere [file con estensione netmodule come Input del Linker](../../build/reference/netmodule-files-as-linker-input.md)). Se non si specifica esplicitamente **/LTCG** quando si passa **/GL** o moduli MSIL al linker, il linker rileva e riavvia il collegamento utilizzando **/LTCG**. Specificare in modo esplicito **/LTCG** quando si passa **/GL** e moduli MSIL al linker per la velocità di compilazione.

Per prestazioni ancora più veloci, utilizzare **/LTCG: INCREMENTALE**. Questa opzione indica al linker di ottimizzare di nuovo solo il set di file interessato da una modifica del file di origine e non l'intero progetto. In questo modo, il tempo di collegamento richiesto può essere notevolmente ridotto. Questa operazione è la stessa opzione come collegamento incrementale.

**/LTCG** non è valido per l'uso con [/INCREMENTAL](../../build/reference/incremental-link-incrementally.md).

Quando **/LTCG** viene utilizzato per collegare i moduli compilati utilizzando [/Og](../../build/reference/og-global-optimizations.md), [/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md), [/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md), o [/Ox](../../build/reference/ox-full-optimization.md), vengono eseguite le seguenti ottimizzazioni:

- Incorporamento tra moduli

- Allocazione del registro tra procedure (solo nei sistemi operativi a 64 bit)

- Convenzione di chiamata personalizzata (solo x86)

- Spostamento TLS limitato (solo x86)

- Doppio allineamento dello stack (solo x86)

- Risoluzione dell'ambiguità della memoria migliorata (informazioni migliori sull'interferenza per le variabili globali e i parametri di input)

> [!NOTE]
> Il linker determina le ottimizzazioni usate per compilare ogni funzione e le applica al momento del collegamento.

Utilizzando **/LTCG** e **/Ogt** causa un'ottimizzazione doppio allineamento.

Se **/LTCG** e **/Ogs** vengono specificati, doppio allineamento non viene eseguito. Se la maggior parte delle funzioni in un'applicazione vengono compilata per velocità, con alcune funzioni compilate per dimensioni (ad esempio, tramite il [ottimizzare](../../preprocessor/optimize.md) pragma), il compilatore double consente di allineare le funzioni che sono ottimizzate per la dimensione se esse chiamano funzioni che necessitano del doppio allineamento.

Se è in grado di identificare tutti i siti di chiamata di una funzione, il compilatore ignora i modificatori espliciti della convenzione di chiamata in una funzione e prova a ottimizzare la convenzione di chiamata della funzione mediante:

- il passaggio di parametri nei registri

- il riordino di parametri per l'allineamento

- la rimozione dei parametri inutilizzati

Se una funzione viene chiamata tramite un puntatore a funzione, o se viene chiamata da una funzione all'esterno di modulo viene compilato utilizzando **/GL**, il compilatore non tenta di ottimizzarne la convenzione di chiamata.

> [!NOTE]
> Se si utilizza **/LTCG** ridefinito `mainCRTStartup`, l'applicazione può esercitare un comportamento imprevedibile che si riferisce a codice utente eseguito prima dell'inizializzazione di oggetti globali. Esistono tre modi per risolvere questo problema: non ridefinire `mainCRTStartup`, non compilare il file che contiene `mainCRTStartup` utilizzando **/LTCG**, o inizializzare gli oggetti e le variabili globali staticamente.

### <a name="ltcg-and-msil-modules"></a>Moduli /LTCG e MSIL

I moduli compilati con [/GL](../../build/reference/gl-whole-program-optimization.md) e [/clr](../../build/reference/clr-common-language-runtime-compilation.md) possono essere usati come input per il linker quando è specificato **/LTCG** .

- **L'opzione /LTCG** misto nativo/gestito file oggetto e può accettare file oggetto nativo (compilati usando **/clr**). Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.

- **/LTCG: PGI** non accetta i moduli nativi compilati utilizzando **/GL** e **/clr**

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **proprietà di configurazione** > **generale** pagina delle proprietà.

1. Modificare la proprietà **Ottimizzazione intero programma** .

È inoltre possibile applicare **/LTCG** alle compilazioni specifiche scegliendo **compilare** > **ottimizzazione PGO** nella barra dei menu, oppure scegliendo una del profilo Opzioni di ottimizzazione guidate nel menu di scelta rapida per il progetto.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LinkTimeCodeGeneration%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)<br/>
