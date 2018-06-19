---
title: -ALLOWBIND (impedisce l'associazione di DLL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.PreventDLLBinding
- /allowbind
dev_langs:
- C++
helpviewer_keywords:
- /ALLOWBIND linker option
- binding DLLs
- preventing DLL binding
- ALLOWBIND linker option
- -ALLOWBIND linker option
- DLLs [C++], preventing binding
ms.assetid: 30e37e24-12e4-407e-988a-39d357403598
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 31968e27c46cb5ea220a4cfe19c36820c4cf8444
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369640"
---
# <a name="allowbind-prevent-dll-binding"></a>/ALLOWBIND (prevenzione dell'associazione di DLL)
```  
/ALLOWBIND[:NO]  
```  
  
## <a name="remarks"></a>Note  
 /ALLOWBIND:NO imposta nell'intestazione della DLL un bit per indicare a Bind.exe che l'immagine non può essere associata. Una DLL può non essere associata se include una firma digitale, perché l'associazione rende la firma non valida.  
  
 È possibile modificare una DLL esistente per la funzionalità /ALLOWBIND con il [/ALLOWBIND](../../build/reference/allowbind.md) opzione dell'utilità EDITBIN.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere **le proprietà di configurazione**, **Linker**e selezionare **riga di comando**.  
  
3.  Immettere `/ALLOWBIND:NO` in **opzioni aggiuntive**.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [BindImage (funzione)](http://msdn.microsoft.com/library/windows/desktop/ms679278.aspx)   
 [BindImageEx (funzione)](http://msdn.microsoft.com/library/windows/desktop/ms679279.aspx)