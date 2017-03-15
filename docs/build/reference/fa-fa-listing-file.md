---
title: "/FA, /Fa (File di listato) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.AssemblerListingLocation"
  - "VC.Project.VCCLCompilerTool.ConfigureASMListing"
  - "VC.Project.VCCLWCECompilerTool.AssemblerOutput"
  - "VC.Project.VCCLCompilerTool.AssemblerListingLocation"
  - "/fa"
  - "VC.Project.VCCLCompilerTool.AssemblerOutput"
  - "VC.Project.VCCLCompilerTool.UseUnicodeForAssemblerListing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FA (opzione del compilatore) [C++]"
  - "elenco solo assembly"
  - "FA (opzione del compilatore) [C++]"
  - "-FA (opzione del compilatore) [C++]"
  - "tipo file del listato"
ms.assetid: c7507d0e-c69d-44f9-b8e2-d2c398697402
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# /FA, /Fa (File di listato)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea un file di listato contenente il codice assembly.  
  
## Sintassi  
  
```  
/FA[c|s|u]  
/Fapathname  
```  
  
## Note  
 Gli argomenti controllano la generazione del codice sorgente e del codice macchina e l'estensione del file di listato.  
  
 Nella tabella riportata di seguito vengono descritti i diversi valori disponibili per **\/FA**.  È possibile specificare più valori di **\/FA**,  ad esempio, **\/FAsu**.  
  
|Opzione|Contenuto del listato ed estensione file|  
|-------------|----------------------------------------------|  
|**\/FA**|Codice assembly, ASM|  
|**\/FAc**|Codice macchina e assembly, COD|  
|**\/FAs**|Codice sorgente e assembly, ASM<br /><br /> Se si specifica **\/FAcs**, l'estensione di file sarà cod.|  
|**\/FAu**|Determina la creazione del file di output in formato UTF\-8, con un marcatore dell'ordine dei byte.  Per impostazione predefinita, per il file viene utilizzata la codifica ANSI. È tuttavia necessario utilizzare **\/FAu** se si desidera che il file di listato venga visualizzato correttamente in tutti i sistemi oppure se si utilizzano i file del codice sorgente Unicode come input per il compilatore.<br /><br /> Se si specifica **\/FAsu** e se un file del codice sorgente utilizza una codifica Unicode diversa da UTF\-8, è possibile che le righe di codice del file asm non vengano visualizzate correttamente.|  
  
 Per impostazione predefinita, al file di listato viene assegnato lo stesso nome di base del file di origine.  È possibile modificare il nome del file di listato e la directory in cui è stato creato utilizzando l'opzione **\/Fa**.  
  
|Utilizzo di \/Fa|Risultato|  
|----------------------|---------------|  
|**\/Fa**|Viene creato un *source\_file*.asm per ogni file del codice sorgente nella compilazione.|  
|**\/Fa** *filename*|*filename*.asm viene inserito nella directory corrente.  Valido solo durante la compilazione di un singolo file del codice sorgente.|  
|**\/Fa** *filename.extension*|*filename.extension* viene inserito nella directory corrente.  Valido solo durante la compilazione di un singolo file del codice sorgente.|  
|**\/Fa** *directory*\\|Viene creato un *source\_file*.asm da inserire nella directory *directory* specificata per ogni file del codice sorgente nella compilazione.  Notare la barra rovesciata finale obbligatoria.  Sono consentiti solo i percorsi sul disco corrente.|  
|**\/Fa** *directory*\\*filename*|*filename*.asm viene inserito nella `directory` specificata.  Valido solo durante la compilazione di un singolo file del codice sorgente.|  
|**\/Fa** *directory*\\*filename.extension*|*filename.extension* viene inserito nella `directory` specificata.  Valido solo durante la compilazione di un singolo file del codice sorgente.|  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **File di output**.  
  
4.  Modificare la proprietà **Posizione elenco ASM** \(**\/Fa**\) o **Output Assembler** \(**\/FA**\). La proprietà **\/FAu** deve essere specificata nella casella **Opzioni aggiuntive** della pagina delle proprietà **Riga di comando**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerListingLocation%2A> o <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerOutput%2A>.  Per specificare **\/FAu**, vedere la proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Esempio  
 La riga di comando che segue produce un listato combinato di codice sorgente e codice macchina denominato HELLO.cod:  
  
```  
CL /FAcs HELLO.CPP  
```  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)