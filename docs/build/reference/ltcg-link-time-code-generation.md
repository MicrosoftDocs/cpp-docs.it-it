---
title: "/LTCG (Generazione di codice in fase di collegamento) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.LinkTimeCodeGeneration"
  - "VC.Project.VCConfiguration.WholeProgramOptimization"
  - "VC.Project.VCCLWCECompilerTool.WholeProgramOptimization"
  - "/ltcg"
  - "VC.Project.VCCLCompilerTool.WholeProgramOptimization"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/LTCG (opzione del linker)"
  - "generazione di codice in fase di linking in C++"
  - "LTCG (opzione del linker)"
  - "-LTCG (opzione del linker)"
ms.assetid: 788c6f52-fdb8-40c2-90af-4026ea2cf2e2
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# /LTCG (Generazione di codice in fase di collegamento)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/LTCG[:INCREMENTAL|:NOSTATUS|:STATUS|:OFF|:PGINSTRUMENT|:PGOPTIMIZE|:PGUPDATE]  
```  
  
## Note  
 :INCREMENTAL \(facoltativo\)  
 Specifica che il linker applica l'ottimizzazione dell'intero programma o la generazione codice in fase di collegamento \(LTCG\) solo al set di file interessato da una modifica e non all'intero progetto. Per impostazione predefinita, questo flag non è impostato quando è specificato \/LTCG e l'intero progetto viene collegato usando l'ottimizzazione dell'intero programma.  
  
 :NOSTATUS &#124; :STATUS \(facoltativo\)  
 Specifica se il linker visualizza un indicatore di stato che mostra la percentuale di completamento del collegamento. Per impostazione predefinita, queste informazioni sullo stato non vengono visualizzate.  
  
 :OFF \(facoltativo\)  
 Disabilita la generazione codice in fase di collegamento. Si tratta dello stesso comportamento applicato quando \/LTCG non viene specificato nella riga di comando.  
  
 :PGINSTRUMENT \(facoltativo\)  
 Questa opzione è deprecata. In alternativa, usare **\/LTCG** e **\/GENPROFILE** o **\/FASTGENPROFILE** per generare una compilazione instrumentata per l'ottimizzazione guidata del profilo.  
  
 I dati raccolti dalle esecuzioni instrumentate vengono usati per creare un'immagine ottimizzata. Per altre informazioni, vedere [Ottimizzazioni guidate da profilo \(PGO\)](../../build/reference/profile-guided-optimizations.md). La forma abbreviata di questa opzione è \/LTCG:PGI.  
  
 :PGOPTIMIZE \(facoltativo\)  
 Questa opzione è deprecata. In alternativa, usare **\/LTCG** e **\/USEPROFILE** per compilare un'immagine ottimizzata. Per altre informazioni, vedere [Ottimizzazioni guidate da profilo \(PGO\)](../../build/reference/profile-guided-optimizations.md). La forma abbreviata di questa opzione è \/LTCG:PGO.  
  
 :PGUPDATE \(facoltativo\)  
 Questa opzione è deprecata. In alternativa, usare **\/LTCG** e **\/USEPROFILE** per compilare un'immagine ottimizzata. Per altre informazioni, vedere [Ottimizzazioni guidate da profilo \(PGO\)](../../build/reference/profile-guided-optimizations.md). La forma abbreviata di questa opzione è \/LTCG:PGU.  
  
 L'opzione \/LTCG indica al linker che è necessario chiamare il compilatore ed eseguire l'ottimizzazione dell'intero programma. È anche possibile eseguire un'ottimizzazione guidata del profilo. Per altre informazioni, vedere [Ottimizzazioni guidate da profilo \(PGO\)](../../build/reference/profile-guided-optimizations.md).  
  
 Con le eccezioni seguenti non è possibile aggiungere le opzioni del linker a una combinazione PGO di \/LTCG e \/USEPROFILE non specificati nella combinazione di inizializzazione PGO precedente delle opzioni \/LTCG e \/GENPROFILE:  
  
-   [\/BASE](../../build/reference/base-base-address.md)  
  
-   [\/FIXED](../../build/reference/fixed-fixed-base-address.md)  
  
-   \/LTCG  
  
-   [\/MAP](../../build/reference/map-generate-mapfile.md)  
  
-   [\/MAPINFO](../../build/reference/mapinfo-include-information-in-mapfile.md)  
  
-   [\/NOLOGO](../../build/reference/nologo-suppress-startup-banner-linker.md)  
  
-   [\/OUT](../../build/reference/out-output-file-name.md)  
  
-   [\/PGD](../../build/reference/pgd-specify-database-for-profile-guided-optimizations.md)  
  
-   [\/PDB](../../build/reference/pdb-use-program-database.md)  
  
-   [\/PDBSTRIPPED](../../build/reference/pdbstripped-strip-private-symbols.md)  
  
-   [\/STUB](../../build/reference/stub-ms-dos-stub-file-name.md)  
  
-   [\/VERBOSE](../../build/reference/verbose-print-progress-messages.md)  
  
 Le opzioni del linker specificate insieme alle opzioni \/LTCG e \/GENPROFILE per inizializzare PGO non devono essere specificate durante una compilazione con \/LTCG e \/USEPROFILE perché sono implicite.  
  
 Il resto dell'argomento descrive \/LTCG in termini di generazione codice in fase di collegamento.  
  
 \/LTCG è implicito con [\/GL](../../build/reference/gl-whole-program-optimization.md).  
  
 Il linker richiama la generazione codice in fase di collegamento se viene passato un modulo compilato usando **\/GL** o un modulo MSIL \(vedere [.File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md)\). Se non si specifica esplicitamente **\/LTCG** quando si passano i moduli **\/GL** o MSIL al linker, quest'ultimo lo rileva e riavvia il collegamento usando **\/LTCG**. Specificare esplicitamente **\/LTCG** quando si passano i moduli **\/GL** e MSIL al linker per ottimizzare le prestazioni e la velocità di compilazione.  
  
 Per aumentare ulteriormente la velocità delle prestazioni, usare **\/LTCG:INCREMENTAL**. Questa opzione indica al linker di ottimizzare di nuovo solo il set di file interessato da una modifica del file di origine e non l'intero progetto. In questo modo, il tempo di collegamento richiesto può essere notevolmente ridotto. Non corrisponde all'opzione di collegamento incrementale.  
  
 **\/LTCG** non è valido per l'uso con [\/INCREMENTAL](../../build/reference/incremental-link-incrementally.md).  
  
Quando **\/LTCG** viene usato per collegare i moduli compilati con [\/Og](../../build/reference/og-global-optimizations.md), [\/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md), [\/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md) o [\/Ox](../../build/reference/ox-full-optimization.md), vengono eseguite le ottimizzazioni seguenti:  
  
-   Incorporamento tra moduli  
  
-   Allocazione del registro tra procedure \(solo nei sistemi operativi a 64 bit\)  
  
-   Convenzione di chiamata personalizzata \(solo x86\)  
  
-   Spostamento TLS limitato \(solo x86\)  
  
-   Doppio allineamento dello stack \(solo x86\)  
  
-   Risoluzione dell'ambiguità della memoria migliorata \(informazioni migliori sull'interferenza per le variabili globali e i parametri di input\)  
  
> [!NOTE]
> Il linker determina le ottimizzazioni usate per compilare ogni funzione e le applica al momento del collegamento.  
  
L'uso di **\/LTCG** e **\/Ogt** causa un'ottimizzazione con doppio allineamento.  
  
Se sono specificati **\/LTCG** e **\/Ogs**, il doppio allineamento non viene eseguito. Se la maggior parte delle funzioni in un'applicazione sono compilate per la velocità e solo poche per le dimensioni \(ad esempio, con il pragma [optimize](../../preprocessor/optimize.md)\), il compilatore esegue il doppio allineamento delle funzioni ottimizzate per le dimensioni se chiamano funzioni che richiedono il doppio allineamento.  
  
Se è in grado di identificare tutti i siti di chiamata di una funzione, il compilatore ignora i modificatori espliciti della convenzione di chiamata in una funzione e prova a ottimizzare la convenzione di chiamata della funzione mediante:  
  
-   il passaggio di parametri nei registri  
  
-   il riordino di parametri per l'allineamento  
  
-   la rimozione dei parametri inutilizzati  
  
Se una funzione viene chiamata tramite un puntatore a funzione o dall'esterno di un modulo compilato con **\/GL**, il compilatore non prova a ottimizzare la convenzione di chiamata della funzione.  
  
> [!NOTE]
> Se si usa **\/LTCG** e si ridefinisce mainCRTStartup, l'applicazione può avere un comportamento imprevisto correlato al codice utente eseguito prima dell'inizializzazione degli oggetti globali.  Esistono diversi modi per risolvere il problema: non ridefinire mainCRTStartup, non compilare il file che contiene mainCRTStartup usando **\/LTCG** o inizializzare gli oggetti e le variabili globali in modo statico.  
  
## Moduli \/LTCG e MSIL  
I moduli compilati con [\/GL](../../build/reference/gl-whole-program-optimization.md) e [\/clr](../../build/reference/clr-common-language-runtime-compilation.md) possono essere usati come input per il linker quando è specificato **\/LTCG**.  
  
-   **\/LTCG** può accettare file oggetto nativi, file oggetto di tipo misto nativo\/gestito \(compilati con **\/clr**\), file oggetto puri \(compilati con **\/clr:pure**\) e file oggetto sicuri \(compilati con **\/clr:safe**\)  
  
-   **\/LTCG** può accettare .netmodule sicuri che possono essere creati con **\/clr:safe \/LN** in Visual C\+\+ e **\/target:module** in qualsiasi altro compilatore di Visual Studio. I file con estensione netmodule creati usando**\/clr** o **\/clr:pure** non sono accettati da **\/LTCG**.  
  
-   \/LTCG:PGI non accetta i moduli nativi compilati utilizzando **\/GL** e **\/clr** oppure i moduli puri \(creati mediante **\/clr:pure**\)  
  
#### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Proprietà di configurazione**.  
  
3.  Selezionare la pagina delle proprietà **Generale**.  
  
4.  Modificare la proprietà **Ottimizzazione intero programma**.  
  
È inoltre possibile applicare **\/LTCG** alle compilazioni specifiche scegliendo **Compila**, **Ottimizzazione PGO** sulla barra dei menu, oppure scegliendo una delle opzioni di ottimizzazione PGO dal menu di scelta rapida per il progetto.  
  
#### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LinkTimeCodeGeneration%2A>.  
  
## Vedere anche  
[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)  
[Opzioni del linker](../../build/reference/linker-options.md)