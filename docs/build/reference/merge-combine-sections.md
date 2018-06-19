---
title: -MERGE (Combina sezioni) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /merge
- VC.Project.VCLinkerTool.MergeSections
dev_langs:
- C++
helpviewer_keywords:
- sections, combining
- /MERGE linker option
- sections, naming
- sections
- -MERGE linker option
- MERGE linker option
ms.assetid: 10fb20c2-0b3f-4c8d-98a8-f69aedf03d52
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ece36de793b17b8cc064ec3837ea481a1ce870a9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32373475"
---
# <a name="merge-combine-sections"></a>/MERGE (Combina sezioni)
```  
/MERGE:from=to  
```  
  
## <a name="remarks"></a>Note  
 L'opzione /MERGE consente di combinare la prima sezione (*da*) con la seconda sezione (*a*), assegnando alla sezione risultante *a*. Ad esempio `/merge:.rdata=.text`.  
  
 Se la seconda sezione non esiste, verrà automaticamente rinominata la sezione *da* come *a*.  
  
 L'opzione /MERGE è utile per la creazione di VxD ed eseguendo l'override di nomi di sezione generato dal compilatore.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **avanzate** pagina delle proprietà.  
  
4.  Modificare il **Merge sezioni** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MergeSections%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)