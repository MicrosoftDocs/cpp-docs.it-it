---
title: "/DEBUG (Genera informazioni di debug) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.GenerateDebugInformation"
  - "/debug"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pdb (file), generazione di informazioni di debug"
  - "/DEBUG (opzione del linker)"
  - "DEBUG (opzione del linker)"
  - "-DEBUG (opzione del linker)"
  - "debug [C++], file di informazioni di debug"
  - "debug [C++], opzione del linker"
  - "Genera informazioni di debug (opzione del linker)"
  - "PDB (file)"
  - "pdb (file), generazione di informazioni di debug"
  - "database di programma [C++]"
ms.assetid: 1af389ae-3f8b-4d76-a087-1cdf861e9103
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# /DEBUG (Genera informazioni di debug)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/DEBUG  
```  
  
## Note  
 L'opzione \/DEBUG crea informazioni di debug per il file con estensione exe o DLL.  
  
 Le informazioni di debug vengono inserite in un database di programma \(PDB\).  Il file PDB viene aggiornato durante le compilazioni successive del programma.  
  
 Un file exe o una DLL creata per il debug contiene il nome e il percorso del file PDB corrispondente.  Durante il debug del programma viene automaticamente letto il nome incorporato e utilizzato il file PDB indicato.  Nel linker viene utilizzato il nome di base del programma e l'estensione PDB per assegnare un nome al database di programma e viene incorporato il percorso in cui è stato creato.  Per eseguire l'override di questa impostazione predefinita, impostare [\/PDB](../../build/reference/pdb-use-program-database.md) e specificare un nome file differente.  
  
 L'opzione [Solo numeri di riga](../../build/reference/z7-zi-zi-debug-information-format.md) \(\/Zd\) o [Compatibile C7](../../build/reference/z7-zi-zi-debug-information-format.md) \(\/Z7\) fa sì che in fase di compilazione vengano lasciate le informazioni di debug nei file obj.  È inoltre possibile utilizzare l'opzione del compilatore [Database di programma](../../build/reference/z7-zi-zi-debug-information-format.md) \(\/Zi\) per archiviare le informazioni di debug in un file PDB per il file obj.  Il file PDB dell'oggetto viene cercato nel percorso assoluto scritto nel file obj, quindi nella directory contenente il file obj.  Non è possibile specificare al linker il nome file PDB di un oggetto o la posizione.  
  
 [\/INCREMENTAL](../../build/reference/incremental-link-incrementally.md) è implicito quando si specifica DEBUG.  
  
 \/DEBUG modifica i valori predefiniti per l'opzione [\/OPT](../../build/reference/opt-optimizations.md) da REF a NOREF e da ICF a NOICF. È quindi necessario specificare in modo esplicito \/OPT:REF o \/OPT:ICF.  
  
 Per ulteriori informazioni sui file PDB e DBG, consultare l'articolo della Knowledge Base Q121366, INFO: PDB and DBG Files \- What They Are and How They Work.  Gli articoli della Knowledge Base sono disponibili nella MSDN Library, o all'indirizzo [http:\/\/support.microsoft.com](http://support.microsoft.com/).  
  
 Non è possibile creare un file exe o dll contenente informazioni di debug,  che sono sempre inserite in un file pdb.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Debug**.  
  
4.  Modificare la proprietà **Genera informazioni di debug**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)