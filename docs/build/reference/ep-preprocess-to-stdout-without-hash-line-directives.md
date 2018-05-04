---
title: '-EP (pre-elabora in stdout senza direttive #line) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /ep
- VC.Project.VCCLCompilerTool.GeneratePreprocessedFileNoLines
dev_langs:
- C++
helpviewer_keywords:
- copy preprocessor output to stdout
- preprocessor output, copy to stdout
- -EP compiler option [C++]
- EP compiler option [C++]
- /EP compiler option [C++]
ms.assetid: 6ec411ae-e33d-4ef5-956e-0054635eabea
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 38047fecbbd1bbaa87db3766b046efa8b446d93a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ep-preprocess-to-stdout-without-line-directives"></a>/EP (Pre-elabora in stdout senza direttive #line)
Pre-elabora i file di origine C e C++ e copia i file pre-elaborati per il dispositivo di output standard.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/EP  
```  
  
## <a name="remarks"></a>Note  
 Nel processo, vengono eseguite tutte le direttive del preprocessore, espansioni della macro vengono eseguite e i commenti vengono rimossi. Per mantenere i commenti nell'output pre-elaborato, utilizzare il [/C (mantenere i commenti durante la pre-elaborazione)](../../build/reference/c-preserve-comments-during-preprocessing.md) con **/EP**.  
  
 Il **/EP** opzione disattiva la compilazione. È necessario inviare nuovamente il file pre-elaborato per la compilazione. **/EP** elimina anche i file di output dal **/FA**, **/Fa**, e **/Fm** opzioni. Per ulteriori informazioni, vedere [/FA, /Fa (File di listato)](../../build/reference/fa-fa-listing-file.md) e [/Fm (nome file MAP)](../../build/reference/fm-name-mapfile.md).  
  
 Gli errori generati durante le fasi successive dell'elaborazione di fare riferimento ai numeri di riga del file pre-elaborato anziché il file di origine. Se si desidera fare riferimento al file di origine originale i numeri di riga, utilizzare [/E (pre-elabora in stdout)](../../build/reference/e-preprocess-to-stdout.md) invece. Il **/E** opzione aggiunge `#line` direttive all'output per questo scopo.  
  
 Per inviare l'output pre-elaborato, con `#line` direttive, in un file, utilizzano il [/P (pre-elabora in un File)](../../build/reference/p-preprocess-to-a-file.md) opzione.  
  
 Per inviare l'output pre-elaborato a stdout con `#line` direttive, utilizzare **/p** e **/EP** insieme.  
  
 Non è possibile utilizzare le intestazioni precompilate con il **/EP** opzione.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **preprocessore** pagina delle proprietà.  
  
4.  Modificare il **genera File pre-elaborato** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.  
  
## <a name="example"></a>Esempio  
 La seguente riga di comando pre-elabora file `ADD.C`, conserva i commenti e viene visualizzato il risultato del dispositivo di output standard:  
  
```  
CL /EP /C ADD.C  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)