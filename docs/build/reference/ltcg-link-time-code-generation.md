---
title: /LTCG (Generazione di codice in fase di collegamento)
ms.date: 05/16/2019
f1_keywords:
- VC.Project.VCLinkerTool.LinkTimeCodeGeneration
- VC.Project.VCConfiguration.WholeProgramOptimization
- VC.Project.VCCLWCECompilerTool.WholeProgramOptimization
- /ltcg
- VC.Project.VCCLCompilerTool.WholeProgramOptimization
helpviewer_keywords:
- link-time code generation in C++ linker
- /LTCG linker option
- -LTCG linker option
- LTCG linker option
ms.assetid: 788c6f52-fdb8-40c2-90af-4026ea2cf2e2
ms.openlocfilehash: 1e33d62694fe782b1a1719fa3c5a36c6fb04670a
ms.sourcegitcommit: 8bb2bea1384b290b7570b01608a86c7488ae7a02
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2019
ms.locfileid: "67400621"
---
# <a name="ltcg-link-time-code-generation"></a>/LTCG (Generazione di codice in fase di collegamento)

Usare **/LTCG** per eseguire l'ottimizzazione dell'intero-programma o per creare la strumentazione per l'ottimizzazione PGO, eseguire il training e creare compilazioni con ottimizzazione PGO.

## <a name="syntax"></a>Sintassi

> **/LTCG**[ **:** {**INCREMENTAL**|**NOSTATUS**|**STATUS**|**OFF**}]

Queste opzioni sono deprecate a partire da Visual Studio 2015:

> **/LTCG:** {**PGINSTRUMENT**|**PGOPTIMIZE**|**PGUPDATE**}

### <a name="arguments"></a>Argomenti

**INCREMENTAL**<br/>
(Facoltativo) Specifica che il linker applica l'ottimizzazione dell'intero programma o la generazione codice in fase di collegamento (LTCG) solo al set di file interessato da una modifica e non all'intero progetto. Per impostazione predefinita, questo flag non è impostato quando è specificata l'opzione **/LTCG** e l'intero progetto viene collegato usando l'ottimizzazione dell'intero programma.

**NOSTATUS** &#124; **STATUS**<br/>
(Facoltativo) Specifica se il linker visualizza un indicatore di stato che mostra la percentuale di completamento del collegamento. Per impostazione predefinita, queste informazioni sullo stato non vengono visualizzate.

**OFF**<br/>
(Facoltativo) Disabilita la generazione del codice in fase di collegamento. Lo stesso comportamento si ottiene non specificando **/LTCG** sulla riga di comando.

**PGINSTRUMENT**<br/>
(Facoltativo) Questa opzione è deprecata a partire da Visual Studio 2015. Usare al suo posto **/LTCG** e [/GENPROFILE o /FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) per generare una compilazione instrumentata per l'ottimizzazione PGO. I dati che sono raccolti dalle esecuzioni instrumentate sono utilizzati per creare un'immagine ottimizzata. Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md). La forma breve di questa opzione è **/LTCG:PGI**.

**PGOPTIMIZE**<br/>
(Facoltativo) Questa opzione è deprecata a partire da Visual Studio 2015. Usare invece **/LTCG** e [/USEPROFILE](useprofile.md) per compilare un'immagine ottimizzata. Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md). La forma breve di questa opzione è **/LTCG:PGO**.

**PGUPDATE**<br/>
(Facoltativo) Questa opzione è deprecata a partire da Visual Studio 2015. Usare invece **/LTCG** e **/USEPROFILE** per ricompilare un'immagine ottimizzata. Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md). La forma breve di questa opzione è **/LTCG:PGU**.

## <a name="remarks"></a>Note

L'opzione **/LTCG** indica al linker che è necessario chiamare il compilatore ed eseguire l'ottimizzazione dell'intero programma. È anche possibile eseguire un'ottimizzazione PGO. Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md).

Con le eccezioni seguenti, non è possibile aggiungere alla combinazione PGO di **/LTCG** e **/USEPROFILE** opzioni del linker non specificate nella precedente combinazione di inizializzazione PGO delle opzioni **/LTCG** e **/GENPROFILE**:

- [/BASE](base-base-address.md)

- [/FIXED](fixed-fixed-base-address.md)

- **/LTCG**

- [/MAP](map-generate-mapfile.md)

- [/MAPINFO](mapinfo-include-information-in-mapfile.md)

- [/NOLOGO](nologo-suppress-startup-banner-linker.md)

- [/OUT](out-output-file-name.md)

- [/PGD](pgd-specify-database-for-profile-guided-optimizations.md)

- [/PDB](pdb-use-program-database.md)

- [/PDBSTRIPPED](pdbstripped-strip-private-symbols.md)

- [/STUB](stub-ms-dos-stub-file-name.md)

- [/VERBOSE](verbose-print-progress-messages.md)

Le opzioni del linker specificate insieme alle opzioni **/LTCG** e **/GENPROFILE** per inizializzare PGO non devono essere specificate durante una compilazione con **/LTCG** e **/USEPROFILE**, in quanto sono implicite.

Il resto dell'articolo descrive **/LTCG** in termini di generazione codice in fase di collegamento.

**/LTCG** è implicito con [/GL](gl-whole-program-optimization.md).

La generazione di codice in fase di collegamento viene richiamata quando viene passato al linker un modulo compilato usando **/GL** oppure un modulo MSIL (vedere [File con estensione netmodule come input del linker](netmodule-files-as-linker-input.md)). Se non si specifica esplicitamente **/LTCG** quando si passa **/GL** o i moduli MSIL al linker, quest'ultimo lo rileva e riavvia il collegamento usando **/LTCG**. Per ridurre al minimo i tempi di compilazione, specificare **/LTCG** in modo esplicito quando si passa **/GL** e i moduli MSIL al linker.

Per aumentare ulteriormente le prestazioni, usare **/LTCG:INCREMENTAL**. Questa opzione indica al linker di ottimizzare di nuovo solo il set di file interessato da una modifica del file di origine, invece dell'intero progetto. In questo modo, la fase di collegamento necessaria può essere notevolmente ridotta. Questa opzione non equivale al collegamento incrementale.

**/LTCG** non è valido per l'uso con [/INCREMENTAL](incremental-link-incrementally.md).

Quando **/LTCG** viene usato per collegare moduli compilati con [/Og](og-global-optimizations.md), [/O1](o1-o2-minimize-size-maximize-speed.md), [/O2](o1-o2-minimize-size-maximize-speed.md) o [/Ox](ox-full-optimization.md), vengono eseguite le ottimizzazioni seguenti:

- Incorporamento tra moduli

- Allocazione del registro tra procedure (solo nei sistemi operativi a 64 bit)

- Convenzione di chiamata personalizzata (solo x86)

- Spostamento TLS limitato (solo x86)

- Doppio allineamento dello stack (solo x86)

- Risoluzione dell'ambiguità della memoria migliorata (informazioni migliori sull'interferenza per le variabili globali e i parametri di input)

> [!NOTE]
> Il linker determina le ottimizzazioni usate per compilare ogni funzione e le applica al momento del collegamento.

L'uso di **/LTCG** e **/Ogt** causa un'ottimizzazione con doppio allineamento.

Se sono specificati **/LTCG** e **/Ogs**, il doppio allineamento non viene eseguito. Se la maggior parte delle funzioni presenti in un'applicazione viene compilata per ottimizzare la velocità, mentre solo alcune funzioni vengono compilate per ottimizzare le dimensioni (ad esempio usando il pragma [optimize](../../preprocessor/optimize.md)), il compilatore esegue il doppio allineamento delle funzioni ottimizzate per le dimensioni se chiamano funzioni che necessitano del doppio allineamento.

Se è in grado di identificare tutti i siti di chiamata di una funzione, il compilatore ignora i modificatori espliciti della convenzione di chiamata in una funzione e prova a ottimizzare la convenzione di chiamata della funzione mediante:

- il passaggio di parametri nei registri

- il riordino di parametri per l'allineamento

- la rimozione dei parametri inutilizzati

Se una funzione viene chiamata tramite un puntatore a funzione o viene chiamata dall'esterno di un modulo compilato con **/GL**, il compilatore non tenta di ottimizzarne la convenzione di chiamata della funzione.

> [!NOTE]
> Se si usa **/LTCG** e si ridefinisce `mainCRTStartup`, l'applicazione potrà comportarsi in modo imprevedibile rispetto al codice utente eseguito prima dell'inizializzazione di oggetti globali. Esistono tre modi per risolvere il problema: non ridefinire `mainCRTStartup`, non compilare il file che contiene `mainCRTStartup` usando **/LTCG** o inizializzare gli oggetti e le variabili globali in modo statico.

### <a name="ltcg-and-msil-modules"></a>Moduli /LTCG e MSIL

I moduli compilati con [/GL](gl-whole-program-optimization.md) e [/clr](clr-common-language-runtime-compilation.md) possono essere usati come input per il linker quando è specificato **/LTCG** .

- **/LTCG** può accettare file oggetto nativi e file oggetto sia nativi che gestiti (compilati tramite **/clr**). Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017 e versioni successive.

- **/LTCG:PGI** non accetta i moduli nativi compilati con **/GL** e **/clr**

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **Generale**.

1. Modificare la proprietà **Ottimizzazione intero programma** .

È anche possibile applicare **/LTCG** a compilazioni specifiche scegliendo **Compila** > **Ottimizzazione PGO** sulla barra dei menu oppure scegliendo una delle opzioni di ottimizzazione PGO dal menu di scelta rapida del progetto.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LinkTimeCodeGeneration%2A>.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
