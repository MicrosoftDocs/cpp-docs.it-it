---
description: Altre informazioni su:/Arch (ARM)
title: /arch (ARM)
ms.date: 11/04/2016
ms.assetid: 4f1406ff-f174-487c-a126-8ab06cf447c1
ms.openlocfilehash: 885b624eb6a470d24d691641d0be63515ee76a49
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179564"
---
# <a name="arch-arm"></a>/arch (ARM)

Specifica l'architettura per la generazione di codice in ARM. Vedere anche [/Arch (x86)](arch-x86.md) e [/Arch (x64)](arch-x64.md).

## <a name="syntax"></a>Sintassi

```
/arch:[ARMv7VE|VFPv4]
```

## <a name="arguments"></a>Argomenti

**/Arch: ARMv7VE**<br/>
Abilita l'utilizzo di istruzioni delle estensioni di virtualizzazione di ARMv7VE.

**/Arch: VFPv4**<br/>
Consente l'utilizzo di istruzioni ARM VFPv4. Se questa opzione non è specificata, VFPv3 è l'impostazione predefinita.

## <a name="remarks"></a>Commenti

La `_M_ARM_FP` macro (solo per ARM) indica quale opzione del compilatore **/Arch** è stata usata. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).

Quando si usa [/CLR](clr-common-language-runtime-compilation.md) per la compilazione, **/Arch** non ha effetto sulla generazione del codice per le funzioni gestite. **/Arch** influiscono solo sulla generazione del codice per le funzioni native.

### <a name="to-set-the-archarmv7ve-or-archvfpv4-compiler-option-in-visual-studio"></a>Impostare l'opzione del compilatore /arch:ARMv7VE o /arch:VFPv4 in Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **C/C++** .

1. Selezionare la pagina delle proprietà **riga di comando** .

1. Nella casella **Opzioni aggiuntive** aggiungere `/arch:ARMv7VE` o `/arch:VFPv4` .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.

## <a name="see-also"></a>Vedi anche

[/Arch (architettura minima della CPU)](arch-minimum-cpu-architecture.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
