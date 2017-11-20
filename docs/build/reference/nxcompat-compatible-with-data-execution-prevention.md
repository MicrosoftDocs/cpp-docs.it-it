---
title: -NXCOMPAT (compatibile con protezione esecuzione programmi) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /NXCOMPAT
dev_langs: C++
helpviewer_keywords:
- /NXCOMPAT linker option
- -NXCOMPAT linker option
- NXCOMPAT linker option
ms.assetid: 5858e7ff-24d3-4ac3-9046-af2c9e220d9b
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d97b1b84ef6894e4ec161dbcecef47f6b676af23
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="nxcompat-compatible-with-data-execution-prevention"></a>/NXCOMPAT (compatibile con Protezione esecuzione programmi)
Indica che un file eseguibile è stato testato per essere compatibile con la funzionalità Protezione esecuzione programmi di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/NXCOMPAT[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, **/NXCOMPAT** si trova in.  
  
 **/NXCOMPAT: No** può essere utilizzato per specificare in modo esplicito un eseguibile non è compatibile con protezione esecuzione programmi.  
  
 Per ulteriori informazioni sulla protezione esecuzione programmi, vedere i seguenti articoli:  
  
-   [Una descrizione dettagliata della funzionalità (Protezione esecuzione programmi)](http://go.microsoft.com/fwlink/?LinkID=157771) nel sito Web del supporto tecnico Microsoft Help  
  
-   [Protezione esecuzione programmi](http://go.microsoft.com/fwlink/?LinkID=157770) nel sito Web MSDN  
  
-   [Protezione esecuzione programmi (con Windows Embedded)](http://go.microsoft.com/fwlink/?LinkID=157768) nel sito Web MSDN  
  
### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione nella **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)