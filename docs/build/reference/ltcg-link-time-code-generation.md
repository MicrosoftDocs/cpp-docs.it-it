---
title: /LTCG (Generazione di codice in fase di collegamento)
ms.date: 03/14/2018
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
ms.openlocfilehash: 40fb591952180735de3a2c226a3953a303c7d90f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62162357"
---
# <a name="ltcg-link-time-code-generation"></a>/LTCG (Generazione di codice in fase di collegamento)

Uso **/LTCG** per eseguire l'ottimizzazione dell'intero programma, o per creare una strumentazione di ottimizzazione PGO (PGO), seguire i corsi di formazione e creare GPO con ottimizzazione per la build.

## <a name="syntax"></a>Sintassi

> **/LTCG**[**:**{**INCREMENTAL**|**NOSTATUS**|**STATUS**|**OFF**}]<br/>

Queste opzioni sono deprecate a partire da Visual Studio 2015:

> **/LTCG:**{**PGINSTRUMENT**|**PGOPTIMIZE**|**PGUPDATE**}<br/>

### <a name="arguments"></a>Argomenti

**INCREMENTAL**<br/>
(Facoltativo) Specifica che il linker intero programma in fase di collegamento di ottimizzazione o di generazione del codice (LTCG) è applicabile solo al set di file interessati da una modifica, anziché l'intero progetto. Per impostazione predefinita, questo flag non è impostato quando **/LTCG** viene specificato, e l'intero progetto viene collegato tramite l'Ottimizzazione intero programma.

**NOSTATUS** &#124; **STATUS**<br/>
(Facoltativo) Specifica se il linker Visualizza un indicatore di stato che mostra la percentuale del collegamento è completata. Per impostazione predefinita, queste informazioni sullo stato non vengono visualizzate.

**OFF**<br/>
(Facoltativo) Disabilita la generazione di codice in fase di collegamento. Questo comportamento è analogo a quello **/LTCG** non viene specificato nella riga di comando.

**PGINSTRUMENT**<br/>
(Facoltativo) Questa opzione è deprecata a partire da Visual Studio 2015. Usare invece **/LTCG** e [/GENPROFILE o /fastgenprofile.](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) per generare una compilazione instrumentata per l'ottimizzazione PGO. I dati che sono raccolti dalle esecuzioni instrumentate sono utilizzati per creare un'immagine ottimizzata. Per altre informazioni, vedere [le ottimizzazioni PGO](../profile-guided-optimizations.md). La versione abbreviata di questa opzione viene **/LTCG: PGI**.

**PGOPTIMIZE**<br/>
(Facoltativo) Questa opzione è deprecata a partire da Visual Studio 2015. Usare invece **/LTCG** e [/USEPROFILE](useprofile.md) per compilare un'immagine ottimizzata. Per altre informazioni, vedere [le ottimizzazioni PGO](../profile-guided-optimizations.md). La versione abbreviata di questa opzione viene **/LTCG: PGO**.

**PGUPDATE**<br/>
(Facoltativo) Questa opzione è deprecata a partire da Visual Studio 2015. Usare invece **/LTCG** e **/USEPROFILE** per ricompilare un'immagine ottimizzata. Per altre informazioni, vedere [le ottimizzazioni PGO](../profile-guided-optimizations.md). La versione abbreviata di questa opzione viene **opzione /LTCG: pgu**.

## <a name="remarks"></a>Note

Il **/LTCG** opzione indica al linker di chiamare il compilatore ed eseguire l'ottimizzazione dell'intero programma. È anche possibile eseguire un'ottimizzazione guidata del profilo. Per altre informazioni, vedere [le ottimizzazioni PGO](../profile-guided-optimizations.md).

Con le seguenti eccezioni, non è possibile aggiungere le opzioni del linker a una combinazione PGO di **/LTCG** e **/USEPROFILE** che non sono state specificate nella combinazione di inizializzazione PGO precedente di  **/LTCG** e **/GENPROFILE** opzioni:

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

Le opzioni del linker specificate insieme con il **/LTCG** e **/GENPROFILE** le opzioni per inizializzare PGO non è necessario specificarlo quando si compila usando **/LTCG** e **/USEPROFILE**; perché sono implicite.

Il resto di questo articolo descrive **/LTCG** in termini di generazione del codice in fase di collegamento.

**/LTCG** è in cui è inclusa con [/GL](gl-whole-program-optimization.md).

Il linker richiama la generazione di codice in fase di collegamento, se viene passato a un modulo che è stato compilato utilizzando **/GL** o un modulo MSIL (vedere [i file con estensione netmodule come Input del Linker](netmodule-files-as-linker-input.md)). Se non si specifica in modo esplicito **/LTCG** quando si passano **/GL** o moduli MSIL al linker, il linker rileva tale situazione e riavvia il collegamento usando **/LTCG**. Specificare in modo esplicito **/LTCG** quando si passano **/GL** e moduli MSIL al linker per ridurre al minimo i tempi di compilazione.

Per ottenere prestazioni ancora più veloci, usare **/LTCG: INCREMENTALE**. Questa opzione indica al linker di ottimizzare di nuovo solo il set di file interessato da una modifica del file di origine e non l'intero progetto. In questo modo, il tempo di collegamento richiesto può essere notevolmente ridotto. Ciò non è la stessa opzione come collegamento incrementale.

**/LTCG** non è valido per l'uso con [/INCREMENTAL](incremental-link-incrementally.md).

Quando **/LTCG** utilizzata per collegare moduli compilati con [/Og](og-global-optimizations.md), [/O1](o1-o2-minimize-size-maximize-speed.md), [/O2](o1-o2-minimize-size-maximize-speed.md), o [/Ox](ox-full-optimization.md), vengono eseguite le ottimizzazioni seguenti:

- Incorporamento tra moduli

- Allocazione del registro tra procedure (solo nei sistemi operativi a 64 bit)

- Convenzione di chiamata personalizzata (solo x86)

- Spostamento TLS limitato (solo x86)

- Doppio allineamento dello stack (solo x86)

- Risoluzione dell'ambiguità della memoria migliorata (informazioni migliori sull'interferenza per le variabili globali e i parametri di input)

> [!NOTE]
> Il linker determina le ottimizzazioni usate per compilare ogni funzione e le applica al momento del collegamento.

Usando **/LTCG** e **/Ogt** causa un'ottimizzazione di doppio allineamento.

Se **/LTCG** e **/Ogs** vengono specificati, doppio allineamento non viene eseguito. Se la maggior parte delle funzioni in un'applicazione vengono compilata per la velocità, con alcune funzioni compilate per le dimensioni (ad esempio, tramite il [ottimizzare](../../preprocessor/optimize.md) (pragma)), il compilatore doppia Allinea le funzioni che sono ottimizzate per le dimensioni se esse chiamano funzioni che necessitano del doppio allineamento.

Se è in grado di identificare tutti i siti di chiamata di una funzione, il compilatore ignora i modificatori espliciti della convenzione di chiamata in una funzione e prova a ottimizzare la convenzione di chiamata della funzione mediante:

- il passaggio di parametri nei registri

- il riordino di parametri per l'allineamento

- la rimozione dei parametri inutilizzati

Se una funzione viene chiamata tramite un puntatore a funzione o se viene chiamata da una funzione all'esterno di modulo viene compilato usando **/GL**, il compilatore non tenta di ottimizzare la convenzione di chiamata della funzione.

> [!NOTE]
> Se si usa **/LTCG** e ridefinire `mainCRTStartup`, l'applicazione può esercitare un comportamento imprevedibile correlate al codice utente eseguito prima dell'inizializzazione di oggetti globali. Esistono tre modi per risolvere questo problema: non ridefinire `mainCRTStartup`, non compilare il file che contiene `mainCRTStartup` utilizzando **/LTCG**, o inizializzare gli oggetti e variabili globali staticamente.

### <a name="ltcg-and-msil-modules"></a>Moduli /LTCG e MSIL

I moduli compilati con [/GL](gl-whole-program-optimization.md) e [/clr](clr-common-language-runtime-compilation.md) possono essere usati come input per il linker quando è specificato **/LTCG** .

- **/LTCG** può accettare file oggetto nativi e i file dell'oggetto misto nativo/gestito (compilati usando **/clr**). Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

- **/LTCG: PGI** non accetta i moduli nativi compilati utilizzando **/GL** e **/clr**

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Visualizzare [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **generale** pagina delle proprietà.

1. Modificare la proprietà **Ottimizzazione intero programma** .

È inoltre possibile applicare **/LTCG** alle compilazioni specifiche scegliendo **compilare** > **ottimizzazione PGO** nella barra dei menu, oppure scegliendo una del profilo Opzioni di ottimizzazione guidate menu di scelta rapida per il progetto.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LinkTimeCodeGeneration%2A>.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
