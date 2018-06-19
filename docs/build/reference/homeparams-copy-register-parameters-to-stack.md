---
title: -/homeparams (copia i parametri del registro nello stack) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /homeparams
dev_langs:
- C++
helpviewer_keywords:
- /homeparams compiler option [C++]
- -homeparams compiler option [C++]
ms.assetid: 51067de4-24f7-436b-b8d9-bc867a7d53aa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3ffc9b37ebdcbb380186c7840f5ebd956708a2dc
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374398"
---
# <a name="homeparams-copy-register-parameters-to-stack"></a>/homeparams (Copia i parametri del registro nello stack)
Forza la scrittura di parametri passati nei registri nei rispettivi percorsi nello stack quando vengono immesse funzioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/homeparams  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione del compilatore è solo per i compilatori [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] (compilazione nativa e incrociata).  
  
 Quando i parametri vengono passati un [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] compilazione, le convenzioni di chiamata richiedono che per i parametri, anche per i parametri passati nei registri. Per ulteriori informazioni, vedere [passaggio dei parametri](../../build/parameter-passing.md). Tuttavia, per impostazione predefinita in una build di rilascio, i parametri del registro verranno non scrivere lo stack, nello spazio già fornito per i parametri. Questo rende difficile eseguire il debug di una build di rilascio ottimizzata del programma.  
  
 Per una build di rilascio, usare **/homeparams** per garantire che è possibile eseguire il debug dell'applicazione. **/homeparams** comporta delle prestazioni, perché è necessario un ciclo per caricare i parametri del registro nello stack.  
  
 In una build di debug, lo stack è sempre popolato con i parametri passati nei registri.  
  
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