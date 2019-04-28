---
title: /arch (x64)
ms.date: 11/04/2016
ms.assetid: ecda22bf-5bed-43f4-99fb-88aedd83d9d8
ms.openlocfilehash: c515307ee3a49ef746eea939e90d7aecbd661b95
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62295285"
---
# <a name="arch-x64"></a>/arch (x64)

Specifica l'architettura per la generazione del codice su piattaforme x64. Vedere anche [/arch (x86)](arch-x86.md) e [/arch (ARM)](arch-arm.md).

## <a name="syntax"></a>Sintassi

```
/arch:[AVX|AVX2]
```

## <a name="arguments"></a>Argomenti

**/arch:AVX**<br/>
Abilita l'uso di istruzioni Intel Advanced Vector Extensions.

**/arch:AVX2**<br/>
Abilita l'uso di istruzioni Intel Advanced Vector Extensions 2.

## <a name="remarks"></a>Note

**/arch** solo interessa generare il codice per le funzioni native. Quando si usa [/clr](clr-common-language-runtime-compilation.md) per compilare, **/arch** non ha alcun effetto sulla generazione di codice per le funzioni gestite.

Il `__AVX__` simbolo del preprocessore è definito quando il **/arch: AVX** è specificata l'opzione del compilatore. Il `__AVX2__` simbolo del preprocessore è definito quando il **/arch:avx2** è specificata l'opzione del compilatore. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md). Il **/arch:avx2** opzione è stata introdotta in Visual Studio 2013 Update 2, versione 12.0.34567.1.

### <a name="to-set-the-archavx-or-archavx2-compiler-option-in-visual-studio"></a>Per impostare l'opzione del compilatore /arch:AVX o /arch:AVX2 in Visual Studio

1. Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione**, **C/C++** cartella.

1. Selezionare il **generazione di codice** pagina delle proprietà.

1. Nel **Abilita Set di istruzioni avanzate** elenco a discesa, scegliere **estensioni Advanced Vector Extension (/ /arch: AVX)** oppure **Advanced Vector Extension 2 (/ arch:avx2)**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.

## <a name="see-also"></a>Vedere anche

[/arch (architettura minima della CPU)](arch-minimum-cpu-architecture.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
