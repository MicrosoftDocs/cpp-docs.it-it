---
title: /LTCG (Generazione di codice in fase di collegamento)
description: L'opzione del linker MSVC/LTCG consente la generazione di codice in fase di collegamento per l'ottimizzazione dell'intero programma.
ms.date: 07/08/2020
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
ms.openlocfilehash: 6c0009e5236f33119ed411dc81ce6a4385f21a2a
ms.sourcegitcommit: f7fbdc39d73e1fb3793c396fccf7a1602af7248b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/02/2020
ms.locfileid: "91662268"
---
# <a name="ltcg-link-time-code-generation"></a>`/LTCG` (Generazione di codice in fase di collegamento)

Usare **`/LTCG`** per eseguire l'ottimizzazione dell'intero programma o per creare strumentazione di ottimizzazione PGO (PGO), eseguire il training e creare compilazioni ottimizzate dal profilo.

## <a name="syntax"></a>Sintassi

> **`/LTCG`**[**`:`**{**`INCREMENTAL`**|**`NOSTATUS`**|**`STATUS`**|**`OFF`**}]

Queste opzioni sono deprecate a partire da Visual Studio 2015:

> **`/LTCG:`**{**`PGINSTRUMENT`**|**`PGOPTIMIZE`**|**`PGUPDATE`**}

### <a name="arguments"></a>Argomenti

**`INCREMENTAL`**<br/>
Opzionale Specifica che il linker applica solo l'ottimizzazione dell'intero programma o la generazione del codice in fase di collegamento (LTCG) ai file interessati da una modifica, anziché l'intero progetto. Per impostazione predefinita, questo flag non è impostato quando **`/LTCG`** si specifica e l'intero progetto viene collegato usando l'ottimizzazione dell'intero programma.

**`NOSTATUS`** &#124; **`STATUS`**<br/>
(Facoltativo) Specifica se il linker visualizza un indicatore di stato che mostra la percentuale di completamento del collegamento. Per impostazione predefinita, queste informazioni sullo stato non vengono visualizzate.

**`OFF`**<br/>
(Facoltativo) Disabilita la generazione del codice in fase di collegamento. Questo comportamento è identico a quando **`/LTCG`** non è specificato nella riga di comando.

**`PGINSTRUMENT`**<br/>
(Facoltativo) Questa opzione è deprecata a partire da Visual Studio 2015. Usare invece **`/LTCG`** e [ `/GENPROFILE` `/FASTGENPROFILE` o](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) per generare una compilazione instrumentata per l'ottimizzazione PGO. I dati che sono raccolti dalle esecuzioni instrumentate sono utilizzati per creare un'immagine ottimizzata. Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md). La forma abbreviata di questa opzione è **`/LTCG:PGI`** .

**`PGOPTIMIZE`**<br/>
(Facoltativo) Questa opzione è deprecata a partire da Visual Studio 2015. Usare invece **`/LTCG`** e  [`/USEPROFILE`](useprofile.md) per compilare un'immagine ottimizzata. Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md). La forma abbreviata di questa opzione è **`/LTCG:PGO`** .

**`PGUPDATE`**<br/>
(Facoltativo) Questa opzione è deprecata a partire da Visual Studio 2015. Usare invece **`/LTCG`** e  **`/USEPROFILE`** per ricompilare un'immagine ottimizzata. Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md). La forma abbreviata di questa opzione è **`/LTCG:PGU`** .

## <a name="remarks"></a>Commenti

L' **`/LTCG`** opzione indica al linker di chiamare il compilatore ed eseguire l'ottimizzazione dell'intero programma. È anche possibile eseguire un'ottimizzazione PGO. Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md).

Con le eccezioni seguenti, non è possibile aggiungere opzioni del linker alla combinazione PGO di **`/LTCG`** e **`/USEPROFILE`** che non sono state specificate nella combinazione di inizializzazione PGO precedente delle **`/LTCG`** **`/GENPROFILE`** Opzioni e:

- [`/BASE`](base-base-address.md)

- [`/FIXED`](fixed-fixed-base-address.md)

- **`/LTCG`**

- [`/MAP`](map-generate-mapfile.md)

- [`/MAPINFO`](mapinfo-include-information-in-mapfile.md)

- [`/NOLOGO`](nologo-suppress-startup-banner-linker.md)

- [`/OUT`](out-output-file-name.md)

- [`/PGD`](pgd-specify-database-for-profile-guided-optimizations.md)

- [`/PDB`](pdb-use-program-database.md)

- [`/PDBSTRIPPED`](pdbstripped-strip-private-symbols.md)

- [`/STUB`](stub-ms-dos-stub-file-name.md)

- [`/VERBOSE`](verbose-print-progress-messages.md)

Le opzioni del linker specificate insieme alle **`/LTCG`** **`/GENPROFILE`** Opzioni e per inizializzare PGO non devono essere specificate quando si compila tramite **`/LTCG`** e **`/USEPROFILE`** , ma sono implicite.

Nella parte restante di questo articolo viene illustrata la generazione di codice in fase di collegamento eseguita da **`/LTCG`** .

**`/LTCG`** è implicito in [`/GL`](gl-whole-program-optimization.md) .

Il linker richiama la generazione di codice in fase di collegamento se viene passato un modulo compilato usando **`/GL`** o un modulo MSIL (vedere [ `.netmodule` file come input del linker](netmodule-files-as-linker-input.md)). Se non si specifica in modo esplicito **`/LTCG`** quando si passano **`/GL`** o moduli MSIL al linker, il linker rileva questa situazione e riavvia il collegamento usando **`/LTCG`** . Specificare in modo esplicito **`/LTCG`** quando si passano i **`/GL`** moduli e MSIL al linker per ottenere le prestazioni di compilazione più veloci possibile.

Per ottenere prestazioni ancora più veloci, usare **`/LTCG:INCREMENTAL`** . Questa opzione indica al linker di riottimizzare solo i file interessati dalla modifica di un file di origine, anziché l'intero progetto. Questa opzione consente di ridurre significativamente il tempo di collegamento richiesto. Questa opzione non è uguale a quella del [collegamento incrementale](incremental-link-incrementally.md).

**`/LTCG`** non è valido per l'uso con [`/INCREMENTAL`](incremental-link-incrementally.md) .

Quando **`/LTCG`** si utilizza per collegare i moduli compilati utilizzando [`/Og`](og-global-optimizations.md) , [`/O1`](o1-o2-minimize-size-maximize-speed.md) , [`/O2`](o1-o2-minimize-size-maximize-speed.md) o [`/Ox`](ox-full-optimization.md) , vengono eseguite le ottimizzazioni seguenti:

- Incorporamento tra moduli

- Allocazione del registro tra procedure (solo nei sistemi operativi a 64 bit)

- Convenzione di chiamata personalizzata (solo x86)

- Spostamento TLS limitato (solo x86)

- Doppio allineamento dello stack (solo x86)

- Risoluzione dell'ambiguità della memoria migliorata (informazioni migliori sull'interferenza per le variabili globali e i parametri di input)

> [!NOTE]
> Il linker determina le ottimizzazioni usate per compilare ogni funzione e le applica al momento del collegamento.

L'utilizzo **`/LTCG`** di e **`/O2`** determina l'ottimizzazione dell'allineamento doppio.

Se **`/LTCG`** **`/O1`** sono specificati e, il doppio allineamento non viene eseguito. Se la maggior parte delle funzioni di un'applicazione viene compilata per la velocità, con alcune funzioni compilate per la dimensione (ad esempio, usando il [`optimize`](../../preprocessor/optimize.md) pragma), il compilatore allinea a due volte le funzioni ottimizzate per la dimensione se chiamano funzioni che richiedono un doppio allineamento.

Se è in grado di identificare tutti i siti di chiamata di una funzione, il compilatore ignora i modificatori espliciti della convenzione di chiamata in una funzione e prova a ottimizzare la convenzione di chiamata della funzione mediante:

- il passaggio di parametri nei registri

- il riordino di parametri per l'allineamento

- la rimozione dei parametri inutilizzati

Se una funzione viene chiamata tramite un puntatore a funzione o se una funzione viene chiamata dall'esterno di un modulo compilato utilizzando **`/GL`** , il compilatore non tenta di ottimizzare la convenzione di chiamata della funzione.

> [!NOTE]
> Se si usa **`/LTCG`** e si ridefiniscono `mainCRTStartup` , l'applicazione può avere un comportamento imprevedibile che si riferisce al codice utente eseguito prima dell'inizializzazione degli oggetti globali. Esistono tre modi per risolvere questo problema: non ridefinire `mainCRTStartup` , non compilare il file che contiene `mainCRTStartup` usando **`/LTCG`** o inizializzare staticamente variabili e oggetti globali.

### <a name="ltcg-and-msil-modules"></a>`/LTCG` e moduli MSIL

Quando si specifica, i moduli compilati usando [`/GL`](gl-whole-program-optimization.md) e [`/clr`](clr-common-language-runtime-compilation.md) possono essere usati come input per il linker **`/LTCG`** .

- **`/LTCG`** può accettare file oggetto nativi e file oggetto misti nativi/gestiti (compilati con **`/clr`** ). Le **`/clr:pure`** **`/clr:safe`** Opzioni del compilatore e sono deprecate in visual studio 2015 e non supportate in visual studio 2017 e versioni successive.

- **`/LTCG:PGI`** non accetta moduli nativi compilati con **`/GL`** e **`/clr`**

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la **Configuration Properties**  >  pagina delle proprietà**generale** proprietà di configurazione.

1. Modificare la proprietà **Ottimizzazione intero programma** .

È inoltre possibile applicare **`/LTCG`** a compilazioni specifiche **Build**scegliendo  >  **ottimizzazione PGO** dalla barra dei menu oppure scegliendo una delle opzioni di ottimizzazione PGO dal menu di scelta rapida per il progetto.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LinkTimeCodeGeneration%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento al linker MSVC](linking.md)\
[Opzioni del linker MSVC](linker-options.md)
