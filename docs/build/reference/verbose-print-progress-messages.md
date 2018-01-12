---
title: -VERBOSE (Stampa messaggi sullo stato) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /verbose
- VC.Project.VCLinkerTool.ShowProgress
dev_langs: C++
helpviewer_keywords:
- -VERBOSE linker option
- linking [C++], session progress information
- Print Progress Messages linker option
- linker [C++], output dependency information
- /VERBOSE linker option
- dependencies [C++], dependency information in linker output
- VERBOSE linker option
ms.assetid: 9c347d98-4c37-4724-a39e-0983934693ab
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 76ead441a8dc7ec65a6966371b83d42c47c897c9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="verbose-print-progress-messages"></a>/VERBOSE (stampa di messaggi sullo stato)
```  
/VERBOSE[:{ICF|INCR|LIB|REF|SAFESEH|UNUSEDLIBS}]  
```  
  
## <a name="remarks"></a>Note  
 Il linker invia le informazioni sullo stato di avanzamento della sessione di collegamento per il **Output** finestra. Nella riga di comando, le informazioni vengono inviate all'output standard e possono essere reindirizzate a un file.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|/VERBOSE|Visualizza i dettagli sul processo di collegamento.|  
|/VERBOSE: ICF|Visualizzare le informazioni sull'attività del linker risultante dall'utilizzo di [/OPT: ICF](../../build/reference/opt-optimizations.md).|  
|/VERBOSE: /INCR|Visualizza informazioni sul processo di collegamento incrementale.|  
|/VERBOSE: LIB|Visualizza messaggi di stato che indicano solo le librerie in cui viene eseguita la ricerca.<br /><br /> Le informazioni visualizzate includono il processo di ricerca di libreria ed elenca ogni nome di oggetto e di libreria (con il percorso completo), il simbolo risolto dal catalogo e un elenco di oggetti che fanno riferimento al simbolo.|  
|/VERBOSE: REF|Visualizza le informazioni sull'attività del linker risultante dall'utilizzo di [/OPT: ref](../../build/reference/opt-optimizations.md).|  
|/VERBOSE: SAFESEH|Visualizza informazioni sui moduli che non sono compatibili con sicura delle eccezioni quando [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md) non è specificato.|  
|/VERBOSE:UNUSEDLIBS|Visualizza informazioni su tutti i file di libreria che non sono stati utilizzati quando l'immagine è stata creata.|  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **Linker** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Aggiungere l'opzione di **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ShowProgress%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)