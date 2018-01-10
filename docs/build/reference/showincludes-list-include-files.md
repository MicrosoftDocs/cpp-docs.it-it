---
title: -showIncludes (elenco di file di inclusione) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLWCECompilerTool.ShowIncludes
- VC.Project.VCCLCompilerTool.ShowIncludes
- /showincludes
dev_langs: C++
helpviewer_keywords:
- include files
- /showIncludes compiler option [C++]
- include files, displaying in compilation
- -showIncludes compiler option [C++]
- showIncludes compiler option [C++]
ms.assetid: 0b74b052-f594-45a6-a7c7-09e1a319547d
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cb88ff6d8a314ebd5cb0390f2c920f5b1d04e3e9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="showincludes-list-include-files"></a>/showIncludes (Elenca i file di inclusione)
Fa sì che il compilatore di generare un elenco dei file di inclusione. Annidati includono i file vengono anche visualizzati (i file inclusi dal file che vengono inclusi).  
  
## <a name="syntax"></a>Sintassi  
  
```  
/showIncludes  
```  
  
## <a name="remarks"></a>Note  
 Quando viene rilevato un file di inclusione durante la compilazione, viene prodotto un messaggio, ad esempio:  
  
```  
Note: including file: d:\MyDir\include\stdio.h  
```  
  
 Annidati includono i file sono indicati da un rientro, uno spazio per ogni livello di annidamento, ad esempio:  
  
```  
Note: including file: d:\temp\1.h  
Note: including file:  d:\temp\2.h  
```  
  
 In questo caso, `2.h` stato incluso dall'interno `1.h`, pertanto il rientro.  
  
 Il **/showIncludes** l'opzione genera per `stderr`, non `stdout`.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **avanzate** pagina delle proprietà.  
  
4.  Modificare il **Mostra inclusioni** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ShowIncludes%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)