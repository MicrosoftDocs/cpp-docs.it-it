---
title: -P (pre-elaborazione in un File) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.GeneratePreprocessedFile
- /p
- VC.Project.VCCLWCECompilerTool.GeneratePreprocessedFile
dev_langs: C++
helpviewer_keywords:
- /P compiler option [C++]
- -P compiler option [C++]
- P compiler option [C++]
- output files, preprocessor
- preprocessing output files
ms.assetid: 123ee54f-8219-4a6f-9876-4227023d83fc
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0f4de2f19820a846197806e0a24ddc213dd636c4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="p-preprocess-to-a-file"></a>/P (Pre-elabora in un file)
Pre-elabora i file di origine C e C++ e scrive l'output pre-elaborato in un file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/P  
```  
  
## <a name="remarks"></a>Note  
 Il file ha lo stesso nome di base del file di origine e di estensione i. Nel processo, vengono eseguite tutte le direttive del preprocessore, espansioni della macro vengono eseguite e i commenti vengono rimossi. Per mantenere i commenti nell'output pre-elaborato, utilizzare il [/C (mantenere i commenti durante la pre-elaborazione)](../../build/reference/c-preserve-comments-during-preprocessing.md) opzione insieme a **/p**.  
  
 **/P** aggiunge `#line` direttive all'output, all'inizio e alla fine di ogni file incluso e intorno alle righe rimosse dalle direttive del preprocessore per la compilazione condizionale. Queste direttive rinumerano le righe del file pre-elaborato. Di conseguenza, gli errori generati durante le fasi successive dell'elaborazione fanno riferimento ai numeri di riga del file di origine originale anziché alle righe del file pre-elaborato. Per eliminare la generazione di `#line` direttive, utilizzare [/EP (pre-elabora in stdout senza direttive #line)](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) nonché **/p**.  
  
 Il **/p** opzione disattiva la compilazione. Non produce un file obj, anche se si utilizza [/Fo (nome File oggetto)](../../build/reference/fo-object-file-name.md). È necessario inviare nuovamente il file pre-elaborato per la compilazione. **/P** inoltre si eliminano i file di output dal **/FA**, **/Fa**, e **/Fm** opzioni. Per ulteriori informazioni, vedere [/FA, /Fa (File di listato)](../../build/reference/fa-fa-listing-file.md) e [/Fm (nome file MAP)](../../build/reference/fm-name-mapfile.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **preprocessore** pagina delle proprietà.  
  
4.  Modificare il **genera File pre-elaborato** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.  
  
## <a name="example"></a>Esempio  
 La seguente riga di comando pre-elabora `ADD.C`, conserva i commenti, aggiunge `#line` direttive e scrive il risultato in un file, `ADD.I`:  
  
```  
CL /P /C ADD.C  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [/Fi (pre-elabora nome file di output)](../../build/reference/fi-preprocess-output-file-name.md)