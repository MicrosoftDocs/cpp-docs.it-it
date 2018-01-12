---
title: -INCLUDE (Imponi riferimenti al simbolo) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /include
- VC.Project.VCLinkerTool.ForceSymbolReferences
dev_langs: C++
helpviewer_keywords:
- INCLUDE linker option
- force symbol references linker option
- symbol references linker force
- /INCLUDE linker option
- symbols, add to symbol table
- -INCLUDE linker option
ms.assetid: 4a039677-360a-480f-bd0b-448e239b449c
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8caf060d278e7ac2c92c38ad58e9c4c55eab632c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="include-force-symbol-references"></a>/INCLUDE (Forza riferimenti al simbolo)
```  
/INCLUDE:symbol  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 `symbol`  
 Specifica un simbolo da aggiungere alla tabella dei simboli.  
  
## <a name="remarks"></a>Note  
 L'opzione /INCLUDE indica al linker di aggiungere un simbolo specificato alla tabella dei simboli.  
  
 Per specificare più simboli, digitare una virgola (,), un punto e virgola (;) o uno spazio tra i nomi dei simboli. Nella riga di comando, specificare un'opzione /INCLUDE:`symbol` una volta per ogni simbolo.  
  
 Il linker risolve `symbol` aggiungendo l'oggetto che contiene la definizione del simbolo per il programma. Questa funzionalità è utile per includere un oggetto libreria che in caso contrario, non collegato al programma.  
  
 Specifica un simbolo con questa opzione sostituisce la rimozione del simbolo da [/OPT: ref](../../build/reference/opt-optimizations.md).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **Input** pagina delle proprietà.  
  
4.  Modificare il **Imponi riferimenti al simbolo** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ForceSymbolReferences%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)