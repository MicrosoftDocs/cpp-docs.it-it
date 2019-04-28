---
title: /arch (ARM)
ms.date: 11/04/2016
ms.assetid: 4f1406ff-f174-487c-a126-8ab06cf447c1
ms.openlocfilehash: b732a74d5fe223fdaf3b161d4ae92093ab5df407
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62295203"
---
# <a name="arch-arm"></a>/arch (ARM)

Specifica l'architettura per la generazione di codice in ARM. Vedere anche [/arch (x86)](arch-x86.md) e [/arch (x64)](arch-x64.md).

## <a name="syntax"></a>Sintassi

```
/arch:[ARMv7VE|VFPv4]
```

## <a name="arguments"></a>Argomenti

**/arch:ARMv7VE**<br/>
Abilita l'utilizzo di istruzioni delle estensioni di virtualizzazione di ARMv7VE.

**/arch:VFPv4**<br/>
Consente l'utilizzo di istruzioni ARM VFPv4. Se questa opzione non è specificata, VFPv3 è l'impostazione predefinita.

## <a name="remarks"></a>Note

Il `_M_ARM_FP` macro (per ARM) indica che, se presente, **/arch** è stata usata l'opzione del compilatore. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).

Quando si usa [/clr](clr-common-language-runtime-compilation.md) per compilare, **/arch** non ha alcun effetto sulla generazione di codice per le funzioni gestite. **/arch** solo interessa generare il codice per le funzioni native.

### <a name="to-set-the-archarmv7ve-or-archvfpv4-compiler-option-in-visual-studio"></a>Impostare l'opzione del compilatore /arch:ARMv7VE o /arch:VFPv4 in Visual Studio

1. Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **C/C++** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Nel **opzioni aggiuntive** , aggiungere `/arch:ARMv7VE` o `/arch:VFPv4`.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.

## <a name="see-also"></a>Vedere anche

[/arch (architettura minima della CPU)](arch-minimum-cpu-architecture.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
