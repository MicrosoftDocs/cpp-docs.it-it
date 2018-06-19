---
title: -INCLUDE (Imponi riferimenti al simbolo) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /include
- VC.Project.VCLinkerTool.ForceSymbolReferences
dev_langs:
- C++
helpviewer_keywords:
- INCLUDE linker option
- force symbol references linker option
- symbol references linker force
- /INCLUDE linker option
- symbols, add to symbol table
- -INCLUDE linker option
ms.assetid: 4a039677-360a-480f-bd0b-448e239b449c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cfe65344e41b98841c3a4e7bca72b762197510b8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32375649"
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