---
title: -GR (Attiva informazioni di Run-Time Type) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
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
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 993465bd1666e624777e52cb1c3d3a54545589dd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="gr-enable-run-time-type-information"></a>/GR (Attiva informazioni sui tipi in fase di esecuzione)
Aggiunge codice per controllare i tipi di oggetto in fase di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/GR[-]  
```  
  
## <a name="remarks"></a>Note  
 Quando **/GR** è abilitato, il compilatore definisce il `_CPPRTTI` macro del preprocessore. Per impostazione predefinita, **/GR** si trova in. **/GR-** disabilita le informazioni sul tipo in fase di esecuzione.  
  
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