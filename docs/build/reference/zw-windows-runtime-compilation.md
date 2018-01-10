---
title: -ZW (Windows Runtime Compilation) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.CompileAsWinRT
- /zw
dev_langs: C++
helpviewer_keywords:
- /ZW
- -ZW compiler option
- /ZW compiler option
- -ZW
- Windows Runtime compiler option
ms.assetid: 0fe362b0-9526-498b-96e0-00d7a965a248
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 75f46c2eaaa42f473e02bc553dd06b86cd5bbc98
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zw-windows-runtime-compilation"></a>/ZW (Compilazione di Windows Runtime)
Compila il codice sorgente per il supporto di [!INCLUDE[cppwrt](../../build/reference/includes/cppwrt_md.md)] ([!INCLUDE[cppwrt_short](../../build/reference/includes/cppwrt_short_md.md)]) per la creazione di app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  
  
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