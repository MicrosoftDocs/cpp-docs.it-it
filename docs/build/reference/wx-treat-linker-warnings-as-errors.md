---
title: -WX (considera gli avvisi del Linker come errori) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /WX
dev_langs:
- C++
helpviewer_keywords:
- /WX linker option
- -WX linker option
- WX linker option
ms.assetid: e4ba97c7-93f7-43ae-a4bb-d866790926c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 686b17a3db00175340e3490241c6c2e9f9325225
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32377287"
---
# <a name="wx-treat-linker-warnings-as-errors"></a>/WX (Considera gli avvisi del linker come errori)
```  
/WX[:NO]  
```  
  
## <a name="remarks"></a>Note  
 /WX fa in modo nessun file di output deve essere generato se il linker genera un avviso.  
  
 È simile a **/WX** per il compilatore (vedere [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /, abbiamo /wo, /WV., /WX (livello avviso)](../../build/reference/compiler-option-warning-level.md) per altre informazioni). Tuttavia, specificando **/WX** per la compilazione non implica che **/WX** anche verrà attivata per la fase di collegamento, è necessario specificare esplicitamente **/WX** per ogni strumento.  
  
 Per impostazione predefinita, **/WX** non è attiva. Per considerare gli avvisi del linker come errori, specificare **/WX**. **/WX:No** equivale a non specificare **/WX**.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione nel **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)