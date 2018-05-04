---
title: -link (passaggio di opzioni al Linker) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /link
dev_langs:
- C++
helpviewer_keywords:
- /link compiler option [C++]
- pass options to linker
- link compiler option [C++]
- linker [C++], passing options to
- -link compiler option [C++]
- cl.exe compiler [C++], passing options to linker
ms.assetid: 16902a94-c094-4328-841f-3ac94ca04848
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5b22e21022162a0f9f75e41e3e0bfdce348947e1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="link-pass-options-to-linker"></a>/link (passaggio delle opzioni al linker)
Passa a uno o più opzioni del linker al linker.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/link linkeroptions  
```  
  
## <a name="arguments"></a>Argomenti  
 `linkeroptions`  
 L'opzione del linker o le opzioni da passare al linker.  
  
## <a name="remarks"></a>Note  
 Il **/link** opzione e le relative opzioni del linker devono essere visualizzate dopo ogni nome file e opzioni CL. Uno spazio è necessario tra **/link** e `linkeroptions`. Per ulteriori informazioni, vedere [impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su una pagina delle proprietà del linker.  
  
4.  Modificare una o più proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Impossibile modificare l'opzione del compilatore a livello di codice.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)