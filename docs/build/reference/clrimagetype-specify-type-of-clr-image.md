---
title: -CLRIMAGETYPE (specifica il tipo di immagine CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /CLRIMAGETYPE
- VC.Project.VCLinkerTool.CLRImageType
dev_langs:
- C++
helpviewer_keywords:
- /CLRIMAGETYPE linker option
- -CLRIMAGETYPE linker option
ms.assetid: 04c60ee6-9dd7-4391-bc03-6926ad0fa116
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 003286d9c1445dec40a6dc0f595eda42f39947aa
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="clrimagetype-specify-type-of-clr-image"></a>/CLRIMAGETYPE (Specifica il tipo di immagine CLR)
```  
/CLRIMAGETYPE:{IJW|PURE|SAFE|SAFE32BITPREFERRED}  
```  
  
## <a name="remarks"></a>Note  
 Il linker accetta gli oggetti nativi e anche gli oggetti MSIL compilati utilizzando [/clr](../../build/reference/clr-common-language-runtime-compilation.md). Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015. Quando si passano oggetti misti nella stessa compilazione, il livello di verificabilità del file di output risultante corrisponde, per impostazione predefinita, a quello più basso dei moduli di input. Ad esempio, se si passa un'immagine nativa e un'immagine a modalità mista (compilati usando **/clr**), l'immagine risulta sarà un'immagine a modalità mista.  
  
 Si può utilizzare /CLRIMAGETYPE per specificare un livello di verificabilità più basso, se necessario.  
  
 Per altre informazioni su come determinare il tipo di immagine CLR di un file, vedere [/CLRHEADER](../../build/reference/clrheader.md).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **avanzate** pagina delle proprietà.  
  
5.  Modificare il **tipo di immagine CLR** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRImageType%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)