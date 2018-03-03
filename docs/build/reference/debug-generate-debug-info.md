---
title: -DEBUG (genera informazioni di Debug) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.GenerateDebugInformation
- /debug
dev_langs:
- C++
helpviewer_keywords:
- DEBUG linker option
- /DEBUG linker option
- -DEBUG linker option
- PDB files
- debugging [C++], debug information files
- generate debug info linker option
- pdb files, generating debug info
- .pdb files, generating debug info
- debugging [C++], linker option
- program databases [C++]
ms.assetid: 1af389ae-3f8b-4d76-a087-1cdf861e9103
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6f9f424a2e71a3094c9e633cbe5779ef5d75fbe9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="debug-generate-debug-info"></a>/DEBUG (Genera informazioni di debug)
```  
/DEBUG[:{FASTLINK|FULL|NONE}]  
```  
  
## <a name="remarks"></a>Note  

Il **/debug** opzione Crea informazioni di debug per il file eseguibile.    
  
Il linker inserisce le informazioni di debug in un file di programma (PDB) di database. Aggiorna il file PDB durante le compilazioni successive del programma.  
  
Un file eseguibile (file .exe o DLL) creato per il debug contiene il nome e percorso del file PDB corrispondente. Il debugger legge il nome incorporato e utilizza il file PDB quando si esegue il debug del programma. Il linker Usa il nome di base del programma e l'estensione PDB per assegnare un nome di database di programma e incorpora il percorso in cui è stato creato. Per eseguire l'override di questa impostazione predefinita, impostare [/PDB](../../build/reference/pdb-use-program-database.md) e specificare un nome di file diverso.  

Il **/debug: fastlink** opzione lascia le informazioni sui simboli privati nei prodotti singoli compilazione utilizzati per compilare l'eseguibile. Genera un file PDB limitato che indicizza nelle informazioni di debug nel file oggetto e librerie utilizzate per compilare l'eseguibile anziché eseguire una copia completa. Questa opzione è possibile collegare da due a quattro tempi di generazione del file PDB completa e viene consigliata quando si esegue il debug in locale e i prodotti di compilazione disponibili. Questo PDB limitato non può essere usato per il debug quando i prodotti di compilazione necessario non sono disponibili, ad esempio quando il file eseguibile viene distribuito in un altro computer. In un prompt dei comandi per sviluppatori, è possibile utilizzare lo strumento mspdbcmf.exe per generare un file PDB completo da questo PDB limitato. In Visual Studio, è possibile utilizzare le voci di menu progetto o di compilazione per la generazione di un file PDB completo per creare un file PDB completo per il progetto o soluzione.  
  
Il **/debug: full** opzione Sposta tutte le informazioni relative al simbolo privato da prodotti singoli compilazione (file oggetto e librerie) in un PDB singolo e può essere la parte più lunga del collegamento. Tuttavia, il file PDB completo consente di eseguire il debug dell'eseguibile quando altri prodotti di compilazione non sono disponibili, ad esempio quando viene distribuito il file eseguibile.  
  
Il **/debug: nessuna** opzione consente di generare un file PDB.  
  
Quando si specifica **/debug** senza ulteriori opzioni, impostazione predefinita il linker **/debug: full** per la riga di comando e le compilazioni makefile compilazioni per il rilascio nell'IDE di Visual Studio e di debug e di rilascio Compila in Visual Studio 2015 e versioni precedenti. A partire da Visual Studio 2017, il sistema di compilazione nell'IDE per impostazione predefinita **/debug: fastlink** quando si specifica il **/debug** opzione per le build di debug. Altre impostazioni predefinite sono rimasti invariate per mantenere la compatibilità con le versioni precedenti.  
  
Il compilatore [compatibile C7](../../build/reference/z7-zi-zi-debug-information-format.md) (/ Z7) opzione, il compilatore lasciare le informazioni di debug nel file obj. È inoltre possibile utilizzare il [Database di programma](../../build/reference/z7-zi-zi-debug-information-format.md) opzione del compilatore (/Zi) per archiviare le informazioni di debug in un file PDB per il file con estensione obj. Il linker Cerca file PDB dell'oggetto prima di tutto il percorso assoluto scritto nel file obj, e quindi nella directory che contiene il file con estensione obj. È possibile specificare il nome del file PDB o percorso in cui il linker di un oggetto.  
  
[/INCREMENTAL](../../build/reference/incremental-link-incrementally.md) è implicito quando si specifica.  
  
/DEBUG Modifica le impostazioni predefinite per il [/OPT](../../build/reference/opt-optimizations.md) opzione da REF a NOREF e da ICF a NOICF, pertanto se si desidera default originali, è necessario specificare in modo esplicito /OPT: ref o /OPT: ICF.  
  
Non è possibile creare un .exe o una DLL che contiene le informazioni di debug. Eseguire il debug informazioni viene sempre inserite in un file con estensione obj o con estensione pdb.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **debug** pagina delle proprietà.  
  
4.  Modificare il **genera informazioni di Debug** proprietà per abilitare la generazione di file PDB. In questo modo /debug: fastlink per impostazione predefinita in Visual Studio 2017.  
  
4.  Modificare il **genera File di Database di programma completo** proprietà per abilitare /debug: full per la generazione di file PDB completa per ogni compilazione incrementale.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
