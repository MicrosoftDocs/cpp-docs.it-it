---
title: -arch (x64) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
ms.assetid: ecda22bf-5bed-43f4-99fb-88aedd83d9d8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 848d229d6cf8df7d08494d0c300e082c6dc7d0a9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32371671"
---
# <a name="arch-x64"></a>/arch (x64)
Specifica l'architettura per la generazione del codice su piattaforme x64. Vedere anche [/arch (x86)](../../build/reference/arch-x86.md) e [/arch (ARM)](../../build/reference/arch-arm.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
/arch:[AVX|AVX2]  
```  
  
## <a name="arguments"></a>Argomenti  
 **/arch: AVX**  
 Abilita l'uso di istruzioni Intel Advanced Vector Extensions.  
  
 **/ arch:avx2**  
 Abilita l'uso di istruzioni Intel Advanced Vector Extensions 2.  
  
## <a name="remarks"></a>Note  
 **/arch** solo influisce sul codice generazione per le funzioni native. Quando si utilizza [/clr](../../build/reference/clr-common-language-runtime-compilation.md) da compilare, **/arch** non ha alcun effetto sulla generazione di codice per le funzioni gestite.  
  
 Il `__AVX__` è definito il simbolo del preprocessore quando il **/arch: AVX** è specificata l'opzione del compilatore. Il `__AVX2__` è definito il simbolo del preprocessore quando il **/arch: avx2** è specificata l'opzione del compilatore. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md). Il **/arch: avx2** opzione è stata introdotta in Visual Studio 2013 Update 2, versione 12.0.34567.1.  
  
### <a name="to-set-the-archavx-or-archavx2-compiler-option-in-visual-studio"></a>Per impostare l'opzione del compilatore /arch:AVX o /arch:AVX2 in Visual Studio  
  
1.  Aprire il **pagine delle proprietà** la finestra di dialogo per il progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **le proprietà di configurazione**, **C/C++** cartella.  
  
3.  Selezionare il **la generazione di codice** pagina delle proprietà.  
  
4.  Nel **Abilita Set di istruzioni avanzate** elenco a discesa scegliere **estensioni Advanced Vector Extension (/ /arch: AVX)** o **Advanced Vector Extensions 2 (o /arch: AVX2)**.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [/arch (architettura minima della CPU)](../../build/reference/arch-minimum-cpu-architecture.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)