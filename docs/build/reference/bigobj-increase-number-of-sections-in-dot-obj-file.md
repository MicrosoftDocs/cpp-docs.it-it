---
title: -bigobj (aumento del numero di sezioni in. File obj) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /bigobj
dev_langs:
- C++
helpviewer_keywords:
- -bigobj compiler option [C++]
- /bigobj compiler option [C++]
- bigobj compiler option [C++]
ms.assetid: ba94d602-4015-4a8d-86ec-49241ab74c12
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: df8bc379462bf5937f463b464ea2972472c49808
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369955"
---
# <a name="bigobj-increase-number-of-sections-in-obj-file"></a>/bigobj (Aumenta il numero di sezioni nel file obj)
**/bigobj** aumenta il numero di sezioni che può contenere un file oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/bigobj  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, un file oggetto può contenere fino a 65.536 (2 ^ 16) sezioni indirizzabili. Questa situazione si verifica indipendentemente dalla piattaforma di destinazione specificata. **/bigobj** aumenta la capacità fino a 4.294.967.296 (2 ^ 32).  
  
 La maggior parte dei moduli non genereranno mai un file con estensione obj che contiene più di 65.536 sezioni. Tuttavia, codice generato dal computer o il codice che consente un uso massiccio di librerie dei modelli potrebbe richiedere i file obj che possono contenere più sezioni. **/bigobj** è abilitata per impostazione predefinita nei progetti di piattaforma UWP (Universal Windows), poiché il codice XAML generati dal computer include un numero elevato di intestazioni. Se si disabilita questa opzione in un progetto di app UWP in genere che si verifichi l'errore C1128 del compilatore.  
  
 I linker forniti prima di Visual C++ 2005 non è in grado di leggere i file con estensione obj generati con **/bigobj**.  
  
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