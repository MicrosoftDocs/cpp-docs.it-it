---
title: -arch (ARM) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
ms.assetid: 4f1406ff-f174-487c-a126-8ab06cf447c1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2a411d0c7d07fb7392baaaa4fb8a8377fcb36598
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369864"
---
# <a name="arch-arm"></a>/arch (ARM)
Specifica l'architettura per la generazione di codice in ARM. Vedere anche [/arch (x86)](../../build/reference/arch-x86.md) e [/arch (x64)](../../build/reference/arch-x64.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
/arch:[ARMv7VE|VFPv4]  
```  
  
## <a name="arguments"></a>Argomenti  
 **arch:armv7ve**  
 Abilita l'utilizzo di istruzioni delle estensioni di virtualizzazione di ARMv7VE.  
  
 **/ arch:vfpv4**  
 Consente l'utilizzo di istruzioni ARM VFPv4. Se questa opzione non è specificata, VFPv3 è l'impostazione predefinita.  
  
## <a name="remarks"></a>Note  
 Il `_M_ARM_FP` macro (solo per ARM) indica che, se presente, **/arch** è stata utilizzata l'opzione del compilatore. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).  
  
 Quando si utilizza [/clr](../../build/reference/clr-common-language-runtime-compilation.md) da compilare, **/arch** non ha alcun effetto sulla generazione di codice per le funzioni gestite. **/arch** solo influisce sul codice generazione per le funzioni native.  
  
### <a name="to-set-the-archarmv7ve-or-archvfpv4-compiler-option-in-visual-studio"></a>Impostare l'opzione del compilatore /arch:ARMv7VE o /arch:VFPv4 in Visual Studio  
  
1.  Aprire il **pagine delle proprietà** la finestra di dialogo per il progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Nel **opzioni aggiuntive** aggiungere `/arch:ARMv7VE` o `/arch:VFPv4`.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [/arch (architettura minima della CPU)](../../build/reference/arch-minimum-cpu-architecture.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)