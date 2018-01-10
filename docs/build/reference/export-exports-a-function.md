---
title: -EXPORT (Esporta una funzione) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.ExportFunctions
- /export
dev_langs: C++
helpviewer_keywords:
- /EXPORT linker option
- EXPORT linker option
- -EXPORT linker option
ms.assetid: 0920fb44-a472-4091-a8e6-73051f494ca0
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2183a67679fc216396d03ac31a5a11db8d011454
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="export-exports-a-function"></a>/EXPORT (Esporta una funzione)
```  
/EXPORT:entryname[,@ordinal[,NONAME]][,DATA]  
```  
  
## <a name="remarks"></a>Note  
 Con questa opzione, è possibile esportare una funzione da un programma in modo che altri programmi possono chiamare la funzione. È inoltre possibile esportare i dati. Le esportazioni sono in genere definite in una DLL.  
  
 Il *entryname* è il nome dell'elemento di dati o funzione deve essere utilizzato dal programma chiamante. `ordinal`Specifica un indice nella tabella di esportazione nell'intervallo da 1 a 65.535. Se non si specifica `ordinal`, collegamento viene assegnato uno. Il **NONAME** (parola chiave) consente di esportare la funzione solo come un numero ordinale, senza un *entryname*.  
  
 Il **dati** (parola chiave) specifica che l'elemento esportato è un elemento di dati. L'elemento di dati del programma client deve essere dichiarato utilizzando **extern declspec**.  
  
 Sono disponibili tre metodi per l'esportazione di una definizione, elencata in ordine di utilizzo consigliato:  
  
1.  [dllexport](../../cpp/dllexport-dllimport.md) nel codice sorgente  
  
2.  Un [esportazioni](../../build/reference/exports.md) istruzione in un file. def  
  
3.  Una specifica dell'opzione /EXPORT in un comando LINK  
  
 Tutti e tre i metodi possono essere utilizzati nello stesso programma. Quando LINK compila un programma che contiene esportazioni, crea anche una libreria di importazione, a meno che non viene utilizzato un file. exp nella compilazione.  
  
 COLLEGAMENTO utilizza forme decorate di identificatori. Quando viene creato il file con estensione obj, il compilatore decora un identificatore. Se *entryname* specificato per il linker nella relativa non decorato modulo (così come appare nel codice sorgente), un tentativo di corrispondere al nome. Se è possibile trovare una corrispondenza univoca, collegamento genera un messaggio di errore. Utilizzare il [DUMPBIN](../../build/reference/dumpbin-reference.md) strumento per ottenere il [nomi decorati](../../build/reference/decorated-names.md) sotto forma di identificatore quando è necessario specificarlo al linker.  
  
> [!NOTE]
>  Non si specifica il formato decorato di C identificatori dichiarati `__cdecl` o `__stdcall`.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione nel **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)