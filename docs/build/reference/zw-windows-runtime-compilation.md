---
title: -ZW (compilazione di Runtime di Windows) | Microsoft Docs
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
ms.openlocfilehash: 97a97158dda886a09fb6ccb00898a8c518d8e250
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42602262"
---
# <a name="zw-windows-runtime-compilation"></a>/ZW (Compilazione di Windows Runtime)
Compila il codice per supportare estensioni del componente C++ di Visual C + + sorgente c++ /CX per la creazione di App Universal Windows Platform (UWP).  
  
 Quando si usa **/ZW** per compilare, specificare sempre **/EHsc** anche.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
/ZW /EHsc  
/ZW:nostdlib /EHsc  
```  
  
## <a name="arguments"></a>Argomenti  
 nostdlib  
 Indica che Platform.winmd, Windows.Foundation.winmd e altri file di metadati di Windows (.winmd) predefiniti non sono automaticamente inclusi nella compilazione. In alternativa, è necessario usare il [/FU (nome forzato #using File)](../../build/reference/fu-name-forced-hash-using-file.md) opzione del compilatore per specificare in modo esplicito i file di metadati Windows.  
  
## <a name="remarks"></a>Note  
 Quando si specifica la **/ZW** opzione, il compilatore supporta le seguenti funzionalità:  
  
-   Il file di metadati richiesti, gli spazi dei nomi, tipi di dati e funzioni richieste dall'applicazione per l'esecuzione nel Runtime di Windows.  
  
-   Automatic: il conteggio dei riferimenti degli oggetti Windows Runtime e automatico l'eliminazione di un oggetto quando il conteggio dei riferimenti va a zero.  
  
 Poiché il linker incrementale non supporta i metadati di Windows inclusi nei file obj usando il **/ZW** opzione, il [/Gm (Abilita ricompilazione minima)](../../build/reference/gm-enable-minimal-rebuild.md) opzione non è compatibile con **/ZW** .  
  
 Per altre informazioni, vedere [riferimenti al linguaggio Visual C++](../../cppcx/visual-c-language-reference-c-cx.md).  
  
## <a name="requirements"></a>Requisiti  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)