---
title: -Z7, - Zi, - ZI (formato informazioni di Debug) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.DebugInformationFormat
- /zi
- /z7
- VC.Project.VCCLWCECompilerTool.DebugInformationFormat
dev_langs: C++
helpviewer_keywords:
- C7 compatible compiler option [C++]
- -Zl compiler option [C++]
- Debug Information Format compiler option
- ZI compiler option
- -Zi compiler option [C++]
- /ZI compiler option [C++]
- Z7 compiler option [C++]
- debugging [C++], debug information files
- Zi compiler option [C++]
- none compiler option [C++]
- /Zi compiler option [C++]
- program database compiler option [C++]
- full symbolic debugging information
- /Z7 compiler option [C++]
- line numbers only compiler option [C++]
- cl.exe compiler, debugging options
- -Z7 compiler option [C++]
ms.assetid: ce9fa7e1-0c9b-47e3-98ea-26d1a16257c8
caps.latest.revision: "21"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0b80339192a7d335b0989ac8a67446c0f5716a76
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="z7-zi-zi-debug-information-format"></a>/Z7, /Zi, /ZI (Formato informazioni di debug)
Specifica il tipo delle informazioni di debug create per il programma e indica se tali informazioni vengono mantenute in file oggetto con estensione obj o in un database di programma (PDB).  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Z{7|i|I}  
```  
  
## <a name="remarks"></a>Note  
 Le opzioni sono descritte nella tabella riportata di seguito.  
  
 nessuno  
 Non produce informazioni di debug, pertanto la compilazione è più veloce.  
  
 **/Z7**  
 Genera un file con estensione obj contenente informazioni di debug complete sui simboli da utilizzare con il debugger. Le informazioni sul debug simbolico includono i nomi e i tipi di variabili, nonché le funzioni e i numeri di riga. Non viene generato alcun file pdb.  
  
 Per i distributori di librerie di terze parti l'assenza di un file pdb rappresenta un vantaggio. Tuttavia, i file obj per le intestazioni precompilate sono necessari durante la fase di collegamento e per il debug. Se sono presenti solo tipi di informazioni (e nessun codice) nei file oggetto pch, è inoltre necessario eseguire la compilazione con [/Yl (inserisce il riferimento PCH per la libreria di Debug)](../../build/reference/yl-inject-pch-reference-for-debug-library.md).  
  
 **/Zi**  
 Produce un database di programma (PDB) contenente le informazioni sul tipo e le informazioni sul debug simbolico da utilizzare con il debugger. Le informazioni sul debug simbolico includono i nomi e i tipi di variabili, nonché le funzioni e i numeri di riga.  
  
 **/Zi** non influisce sulle ottimizzazioni. Tuttavia, **/Zi** implica **/debug**; vedere [/DEBUG (genera informazioni di Debug)](../../build/reference/debug-generate-debug-info.md) per ulteriori informazioni.  
  
 Le informazioni sui tipi vengono inserite nel file pdb, anziché nel file obj.  
  
 È possibile utilizzare [/Gm (Abilita ricompilazione minima)](../../build/reference/gm-enable-minimal-rebuild.md) con **/Zi**, mentre **/Gm** non è disponibile durante la compilazione con **/Z7**.  
  
 Durante la compilazione con **/Zi** e **/clr**, <xref:System.Diagnostics.DebuggableAttribute> attributo non verrà inserito nei metadati dell'assembly; è necessario specificare nel codice sorgente, se si desidera. Questo attributo potrà avere effetto sulle prestazioni di runtime dell'applicazione. Per ulteriori informazioni su come l'attributo Debuggable sulle prestazioni e come è possibile modificare l'impatto sulle prestazioni, vedere [semplificazione del Debug di un'immagine](/dotnet/framework/debug-trace-profile/making-an-image-easier-to-debug).  
  
 **/ZI**  
 Produce un database di programma, come descritto in precedenza, in un formato che supporta la funzionalità Modifica e continuazione. Se si desidera utilizzare il debug di Modifica e continuazione, è necessario utilizzare questa opzione. Poiché la maggior parte delle ottimizzazioni non sono compatibili con modifica e continuazione, l'utilizzo **/ZI** disabilita qualsiasi `#pragma optimize` istruzioni nel codice.  
  
 **/Zi** causa [/Gy (Attiva collegamento a livello di funzione)](../../build/reference/gy-enable-function-level-linking.md) e [/FC (completo percorso del File di codice sorgente nella diagnostica)](../../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md) da utilizzare nella compilazione.  
  
 **/Zi** non è compatibile con [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
> [!NOTE]
>  **/Zi** è disponibile solo nei compilatori per processori x86 e x64; l'opzione del compilatore non è disponibile nei compilatori destinati a processori ARM.  
  
 Il compilatore assegna il database di programma *progetto*con estensione pdb. Se si compila un file senza un progetto, il compilatore crea un database denominato VC*x*0.pdb., in cui *x* è la versione principale di [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] in uso. Il compilatore incorpora il nome del file PDB in ogni file obj creato utilizzando questa opzione, puntando il debugger alla posizione delle informazioni sui simboli e sul numero di riga. L'utilizzo di questa opzione fa sì che i file obj siano più piccoli, in quanto le informazioni di debug vengono archiviate nel file pdb anziché nei file obj.  
  
 Se si crea una libreria da oggetti compilati utilizzando questa opzione, il file pdb associato deve essere disponibile quando la libreria viene collegata a un programma. In questo modo, se si distribuisce la libreria, è necessario distribuire il file PDB.  
  
 Per creare una libreria che contiene le informazioni di debug senza utilizzare file PDB, è necessario selezionare compatibile C del compilatore 7.0 (**/Z7**) opzione. Se si utilizzano le opzioni delle intestazioni precompilate, le informazioni di debug sia per l'intestazione precompilata che per il resto del codice sorgente verranno inserite nel file PDB. Il **/Yd** opzione viene ignorata quando viene specificata l'opzione di Database di programma.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **generale** pagina delle proprietà.  
  
4.  Modificare il **formato informazioni di Debug** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)