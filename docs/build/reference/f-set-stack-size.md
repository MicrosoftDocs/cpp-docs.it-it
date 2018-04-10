---
title: -F (imposta la dimensione dello Stack) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- /f
dev_langs:
- C++
helpviewer_keywords:
- set stack size compiler option
- F compiler option [C++]
- -F compiler option [C++]
- /F compiler option [C++]
- stack, setting size
ms.assetid: 17320b6f-8305-445b-9ec2-75833f4b29e0
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5b464a4fb28eb83ef0570416d0cb18fd8f965e0a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="f-set-stack-size"></a>/F (Imposta la dimensione dello stack)
Imposta la dimensione dello stack di programma in byte.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/F number  
```  
  
## <a name="arguments"></a>Argomenti  
 `number`  
 La dimensione dello stack in byte.  
  
## <a name="remarks"></a>Note  
 Senza questa opzione la dimensione predefinita è pari a 1 MB. Il `number` argomento può essere in notazione decimale o in linguaggio C. L'argomento può variare da 1 per la dimensione massima dello stack accettata dal linker. Il linker arrotonda per eccesso il valore specificato per i più vicino 4 byte. Lo spazio tra **/F** e `number` è facoltativo.  
  
 Si potrebbe essere necessario aumentare la dimensione dello stack, se il programma riceve i messaggi di overflow dello stack.  
  
 È inoltre possibile impostare la dimensione dello stack:  
  
-   Utilizzo di **/STACK** l'opzione del linker. Per ulteriori informazioni, vedere [/STACK](../../build/reference/stack.md).  
  
-   Utilizzo di EDITBIN sul file .exe. Per ulteriori informazioni, vedere [riferimenti a EDITBIN](../../build/reference/editbin-reference.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)