---
title: -GR (Attiva informazioni di Run-Time Type) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /gr
- VC.Project.VCCLWCECompilerTool.RuntimeTypeInfo
- VC.Project.VCCLCompilerTool.RuntimeTypeInfo
dev_langs:
- C++
helpviewer_keywords:
- -Gr compiler option [C++]
- Gr compiler option [C++]
- RTTI compiler option
- /Gr compiler option [C++]
- enable run-time type information compiler option [C++]
ms.assetid: d1f9f850-dcec-49fd-96ef-e72d01148906
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 79e91f11fa6397d2ba8279998726249182c541d4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374982"
---
# <a name="gr-enable-run-time-type-information"></a>/GR (Attiva informazioni sui tipi in fase di esecuzione)
Aggiunge codice per controllare i tipi di oggetto in fase di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/GR[-]  
```  
  
## <a name="remarks"></a>Note  
 Quando **/GR** è abilitato, il compilatore definisce il `_CPPRTTI` macro del preprocessore. Per impostazione predefinita, **/GR** si trova in. **/GR-** disabilita le informazioni sul tipo di runtime.  
  
 Utilizzare **/GR** se il compilatore non può risolvere staticamente un tipo di oggetto nel codice. In genere è necessario il **/GR** opzione quando il codice utilizza [operatore dynamic_cast](../../cpp/dynamic-cast-operator.md) o [typeid](../../cpp/typeid-operator.md). Tuttavia, **/GR** aumenta le dimensioni delle sezioni. rdata dell'immagine. Se il codice non usa **dynamic_cast** o **typeid**, **/GR-** può produrre un'immagine più piccola.  
  
 Per ulteriori informazioni sul controllo dei tipi in fase di esecuzione, vedere [Run-Time Type Information](../../cpp/run-time-type-information.md) nel *riferimenti al linguaggio C++*.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **Language** pagina delle proprietà.  
  
4.  Modificare il **Attiva informazioni sui tipi di Run-Time** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.RuntimeTypeInfo%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)