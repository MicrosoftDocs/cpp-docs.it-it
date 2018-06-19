---
title: -ZW (Windows Runtime Compilation) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.CompileAsWinRT
- /zw
dev_langs:
- C++
helpviewer_keywords:
- /ZW
- -ZW compiler option
- /ZW compiler option
- -ZW
- Windows Runtime compiler option
ms.assetid: 0fe362b0-9526-498b-96e0-00d7a965a248
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fce6c6825ed4ae715a2f4cde6b0e1ffa8b3b6733
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32380066"
---
# <a name="zw-windows-runtime-compilation"></a>/ZW (Compilazione di Windows Runtime)
Consente di compilare il codice sorgente per supportare [!INCLUDE[cppwrt](../../build/reference/includes/cppwrt_md.md)] ([!INCLUDE[cppwrt_short](../../build/reference/includes/cppwrt_short_md.md)]) per la creazione di App Universal Windows Platform (UWP).  
  
 Quando si utilizza **/ZW** per compilare, specificare sempre **/EHsc** anche.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
/ZW /EHsc  
/ZW:nostdlib /EHsc  
```  
  
## <a name="arguments"></a>Argomenti  
 nostdlib  
 Indica che Platform.winmd, Windows.Foundation.winmd e altri file di metadati di Windows (.winmd) predefiniti non sono automaticamente inclusi nella compilazione. In alternativa, è necessario utilizzare il [/FU (Name Forced #using File)](../../build/reference/fu-name-forced-hash-using-file.md) opzione del compilatore per specificare in modo esplicito i file di metadati Windows.  
  
## <a name="remarks"></a>Note  
 Quando si specifica il **/ZW** opzione, il compilatore supporta queste funzionalità:  
  
-   File di metadati necessari, spazi dei nomi, tipi di dati e funzioni che l'app deve per eseguire in Windows Runtime.  
  
-   Automatico, il conteggio dei riferimenti di oggetti di Windows Runtime e automatico eliminazione di un oggetto quando il conteggio dei riferimenti va a zero.  
  
 Poiché il collegamento incrementale non supporta i metadati di Windows inclusi nel file obj, utilizzare il **/ZW** opzione, il [/Gm (Abilita ricompilazione minima)](../../build/reference/gm-enable-minimal-rebuild.md) opzione non è compatibile con **/ZW** .  
  
 Per ulteriori informazioni, vedere [riferimenti al linguaggio Visual C++](../../cppcx/visual-c-language-reference-c-cx.md).  
  
## <a name="requirements"></a>Requisiti  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)