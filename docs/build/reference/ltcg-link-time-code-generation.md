---
title: -LTCG (generazione di codice in fase di collegamento) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.LinkTimeCodeGeneration
- VC.Project.VCConfiguration.WholeProgramOptimization
- VC.Project.VCCLWCECompilerTool.WholeProgramOptimization
- /ltcg
- VC.Project.VCCLCompilerTool.WholeProgramOptimization
dev_langs: C++
helpviewer_keywords:
- link-time code generation in C++ linker
- /LTCG linker option
- -LTCG linker option
- LTCG linker option
ms.assetid: 788c6f52-fdb8-40c2-90af-4026ea2cf2e2
caps.latest.revision: "22"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a8f1abc58f0c36f37307e1d8053e4dd8a4cac06a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltcg-link-time-code-generation"></a>/LTCG (Generazione di codice in fase di collegamento)
```  
/LTCG[:INCREMENTAL|:NOSTATUS|:STATUS|:OFF|:PGINSTRUMENT|:PGOPTIMIZE|:PGUPDATE]  
```  
  
## <a name="remarks"></a>Note  
 :INCREMENTAL (facoltativo)  
 Specifica che il linker si applica solo intero programma in fase di collegamento o di ottimizzazione la generazione di codice (LTCG) al set di file interessati da una modifica, anziché l'intero progetto. Per impostazione predefinita, questo flag non è impostato quando è specificato /LTCG e l'intero progetto viene collegato tramite l'ottimizzazione dell'intero programma.  
  
 : NOSTATUS &#124; : Stato (facoltativo)  
 Specifica se il linker visualizza un indicatore di stato che mostra la percentuale di completamento del collegamento. Per impostazione predefinita, queste informazioni sullo stato non vengono visualizzate.  
  
 :OFF (facoltativo)  
 Disabilita la generazione di codice in fase di collegamento. Questo comportamento è identico Quando /LTCG non viene specificato nella riga di comando.  
  
 :PGINSTRUMENT (facoltativo)  
 Questa opzione è deprecata. Utilizzare invece **/LTCG** e **/GENPROFILE** o **/FASTGENPROFILE** per generare una compilazione instrumentata per l'ottimizzazione PGO.  
  
 I dati che sono raccolti dalle esecuzioni instrumentate sono utilizzati per creare un'immagine ottimizzata. Per ulteriori informazioni, vedere [ottimizzazione PGO](../../build/reference/profile-guided-optimizations.md). La versione abbreviata di questa opzione è /LTCG: PGI.  
  
 :PGOPTIMIZE (facoltativo)  
 Questa opzione è deprecata. Utilizzare invece **/LTCG** e **/USEPROFILE** per compilare un'immagine ottimizzata. Per ulteriori informazioni, vedere [ottimizzazione PGO](../../build/reference/profile-guided-optimizations.md). La versione abbreviata di questa opzione è /LTCG: PGO.  
  
 :PGUPDATE (facoltativo)  
 Questa opzione è deprecata. Utilizzare invece **/LTCG** e **/USEPROFILE** per compilare un'immagine ottimizzata. Per ulteriori informazioni, vedere [ottimizzazione PGO](../../build/reference/profile-guided-optimizations.md). La versione abbreviata di questa opzione è /LTCG: PGU.  
  
 L'opzione /LTCG indica al linker che è necessario chiamare il compilatore ed eseguire l'ottimizzazione dell'intero programma. È anche possibile eseguire un'ottimizzazione guidata del profilo. Per ulteriori informazioni, vedere [ottimizzazione PGO](../../build/reference/profile-guided-optimizations.md).  
  
 Con le eccezioni seguenti non è possibile aggiungere le opzioni del linker a una combinazione PGO di /LTCG e /USEPROFILE non specificati nella combinazione di inizializzazione PGO precedente delle opzioni /LTCG e /GENPROFILE:  
  
-   [/BASE](../../build/reference/base-base-address.md)  
  
-   [/FIXED](../../build/reference/fixed-fixed-base-address.md)  
  
-   /LTCG  
  
-   [/MAP](../../build/reference/map-generate-mapfile.md)  
  
-   [/MAPINFO](../../build/reference/mapinfo-include-information-in-mapfile.md)  
  
-   [/NOLOGO](../../build/reference/nologo-suppress-startup-banner-linker.md)  
  
-   [/OUT](../../build/reference/out-output-file-name.md)  
  
-   [/PGD](../../build/reference/pgd-specify-database-for-profile-guided-optimizations.md)  
  
-   [/PDB](../../build/reference/pdb-use-program-database.md)  
  
-   [/PDBSTRIPPED](../../build/reference/pdbstripped-strip-private-symbols.md)  
  
-   [/STUB](../../build/reference/stub-ms-dos-stub-file-name.md)  
  
-   [/VERBOSE](../../build/reference/verbose-print-progress-messages.md)  
  
 Le opzioni del linker specificate insieme alle opzioni /LTCG e /GENPROFILE per inizializzare PGO non devono essere specificate durante una compilazione con /LTCG e /USEPROFILE perché sono implicite.  
  
 Il resto dell'argomento descrive /LTCG in termini di generazione codice in fase di collegamento.  
  
 /LTCG è implicita con [/GL](../../build/reference/gl-whole-program-optimization.md).  
  
 Il linker richiama la generazione di codice in fase di collegamento, se viene passato un modulo che è stato compilato utilizzando **/GL** o un modulo MSIL (vedere [file con estensione netmodule come Input del Linker](../../build/reference/netmodule-files-as-linker-input.md)). Se non si specifica esplicitamente **/LTCG** quando si passa **/GL** o moduli MSIL al linker, il linker rileva e riavvia il collegamento utilizzando **/LTCG**. Specificare in modo esplicito **/LTCG** quando si passa **/GL** e moduli MSIL al linker per la velocità di compilazione.  
  
 Per prestazioni ancora più veloci, utilizzare **/LTCG: INCREMENTALE**. Questa opzione indica al linker di ottimizzare di nuovo solo il set di file interessato da una modifica del file di origine e non l'intero progetto. In questo modo, il tempo di collegamento richiesto può essere notevolmente ridotto. Questa operazione è la stessa opzione come collegamento incrementale.  
  
 **/LTCG** non è valido per l'uso con [/INCREMENTAL](../../build/reference/incremental-link-incrementally.md).  
  
 Quando **/LTCG** viene utilizzato per collegare i moduli compilati utilizzando [/Og](../../build/reference/og-global-optimizations.md), [/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md), [/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md), o [/Ox](../../build/reference/ox-full-optimization.md), vengono eseguite le seguenti ottimizzazioni:  
  
-   Incorporamento tra moduli  
  
-   Allocazione del registro tra procedure (solo nei sistemi operativi a 64 bit)  
  
-   Convenzione di chiamata personalizzata (solo x86)  
  
-   Spostamento TLS limitato (solo x86)  
  
-   Doppio allineamento dello stack (solo x86)  
  
-   Risoluzione dell'ambiguità della memoria migliorata (informazioni migliori sull'interferenza per le variabili globali e i parametri di input)  
  
> [!NOTE]
>  Il linker determina le ottimizzazioni usate per compilare ogni funzione e le applica al momento del collegamento.  
  
 Utilizzando **/LTCG** e **/Ogt** causa un'ottimizzazione doppio allineamento.  
  
 Se **/LTCG** e **/Ogs** vengono specificati, doppio allineamento non viene eseguito. Se la maggior parte delle funzioni in un'applicazione vengono compilata per velocità, con alcune funzioni compilate per dimensioni (ad esempio, tramite il [ottimizzare](../../preprocessor/optimize.md) pragma), il compilatore double consente di allineare le funzioni che sono ottimizzate per la dimensione se esse chiamano funzioni che necessitano del doppio allineamento.  
  
 Se è in grado di identificare tutti i siti di chiamata di una funzione, il compilatore ignora i modificatori espliciti della convenzione di chiamata in una funzione e prova a ottimizzare la convenzione di chiamata della funzione mediante:  
  
-   il passaggio di parametri nei registri  
  
-   il riordino di parametri per l'allineamento  
  
-   la rimozione dei parametri inutilizzati  
  
 Se una funzione viene chiamata tramite un puntatore a funzione, o se viene chiamata da una funzione all'esterno di modulo viene compilato utilizzando **/GL**, il compilatore non tenta di ottimizzarne la convenzione di chiamata.  
  
> [!NOTE]
>  Se si utilizza **/LTCG** e ridefinire mainCRTStartup, l'applicazione può avere un comportamento imprevedibile che si riferisce al codice utente eseguito prima dell'inizializzazione di oggetti globali.  Esistono tre modi per risolvere il problema: non ridefinire mainCRTStartup, non compilare il file che contiene mainCRTStartup usando **/LTCG**, o inizializzare le variabili globali e gli oggetti in modo statico.  
  
## <a name="ltcg-and-msil-modules"></a>Moduli /LTCG e MSIL  
 I moduli compilati con [/GL](../../build/reference/gl-whole-program-optimization.md) e [/clr](../../build/reference/clr-common-language-runtime-compilation.md) possono essere usati come input per il linker quando è specificato **/LTCG** .  
  
-   **/LTCG** può accettare file oggetto nativi, misti nativo/gestito (compilati usando **/clr**) file oggetto puri (compilati usando **/clr: pure**), e (i file oggetto sicuri compilato con **/CLR: safe**). Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
-   **L'opzione /LTCG** può accettare. netmodule sicuri che possono essere creati utilizzando **/CLR: safe /LN** in Visual C++ e **/target: module** in qualsiasi compilatore di Visual Studio .NET. I file con estensione netmodule creati usando **/clr** o **/clr:pure** non sono accettati da **/LTCG**.  
  
-   /LTCG:PGI non accetta i moduli nativi compilati utilizzando **/GL** e **/clr**oppure i moduli puri (creati mediante **/clr:pure**)  
  
#### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Proprietà di configurazione** .  
  
3.  Selezionare la pagina delle proprietà **Generale** .  
  
4.  Modificare la proprietà **Ottimizzazione intero programma** .  
  
 È inoltre possibile applicare **/LTCG** alle compilazioni specifiche scegliendo **Compila**, **Ottimizzazione PGO** sulla barra dei menu, oppure scegliendo una delle opzioni di ottimizzazione PGO dal menu di scelta rapida per il progetto.  
  
#### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LinkTimeCodeGeneration%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)