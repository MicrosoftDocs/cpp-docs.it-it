---
description: Altre informazioni su:/Arch (x64)
title: /arch (x64)
ms.date: 10/01/2019
ms.assetid: ecda22bf-5bed-43f4-99fb-88aedd83d9d8
ms.openlocfilehash: 1e9670cdea49c06eda6575fe2cea872072a4e332
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97183074"
---
# <a name="arch-x64"></a>/arch (x64)

Specifica l'architettura per la generazione del codice su piattaforme x64. Vedere anche [/Arch (x86)](arch-x86.md) e [/Arch (ARM)](arch-arm.md).

## <a name="syntax"></a>Sintassi

```
/arch:[AVX|AVX2|AVX512]
```

## <a name="arguments"></a>Argomenti

**/Arch: AVX**<br/>
Abilita l'uso di istruzioni Intel Advanced Vector Extensions.

**/Arch: AVX2**<br/>
Abilita l'uso di istruzioni Intel Advanced Vector Extensions 2.

**/Arch: AVX512**<br/>
Abilita l'uso di istruzioni Intel Advanced Vector Extensions 512.

## <a name="remarks"></a>Commenti

L'opzione **/Arch** consente di usare alcune estensioni del set di istruzioni, in particolare per il calcolo vettoriale, disponibile nei processori di Intel e AMD. In generale, i processori introdotti più di recente possono supportare estensioni aggiuntive rispetto a quelle supportate dai processori precedenti, anche se è consigliabile consultare la documentazione per un particolare processore o un test per il supporto dell'estensione del set di istruzioni utilizzando [__cpuid](../../intrinsics/cpuid-cpuidex.md) prima di eseguire il codice utilizzando un'estensione del set di istruzioni.

**/Arch** influiscono solo sulla generazione del codice per le funzioni native. Quando si usa [/CLR](clr-common-language-runtime-compilation.md) per la compilazione, **/Arch** non ha effetto sulla generazione del codice per le funzioni gestite.

Le estensioni del processore hanno le caratteristiche seguenti:

- La modalità predefinita Usa istruzioni SSE2 per i calcoli scalari a virgola mobile e vettoriali. Queste istruzioni consentono il calcolo con vettori a 128 bit di valori interi a precisione singola, a precisione doppia e a 1, 2, 4 o 8 byte, nonché valori a virgola mobile scalari a precisione singola e precisione doppia.

- In **AVX** è stata introdotta una codifica di istruzioni alternativa per istruzioni scalari vettoriali e a virgola mobile che consente vettori di 128 bit o 256 bit e che estende a zero tutti i risultati in formato vettoriale completo. Per la compatibilità con le versioni precedenti, le istruzioni vettoriali di tipo SSE conservano tutti i bit oltre il bit 127. La maggior parte delle operazioni a virgola mobile è estesa a 256 bit.

- **AVX2** estende la maggior parte delle operazioni di tipo Integer a vettori a 256 bit e Abilita l'uso di istruzioni con Multiply-Add di fusione (FMA).

- In **AVX-512** è stato introdotto un altro formato di codifica delle istruzioni che consente vettori a 512 bit, oltre ad alcune altre funzionalità facoltative. Sono state aggiunte anche le istruzioni per altre operazioni.

Ogni opzione **/Arch** può anche consentire l'uso di altre istruzioni non vettoriali associate a tale opzione. Un esempio è l'uso di determinate istruzioni BMI quando si specifica **/Arch: AVX2** .

Il `__AVX__` simbolo del preprocessore viene definito quando viene specificata l'opzione del compilatore **/Arch: AVX**, **/Arch: AVX2** o **/Arch: AVX512** . Il `__AVX2__` simbolo del preprocessore viene definito quando viene specificata l'opzione del compilatore **/Arch: AVX2** o **/Arch: AVX512** . I `__AVX512F__` `__AVX512CD__` `__AVX512BW__` `__AVX512DQ__` `__AVX512VL__` simboli per il preprocessore,, e vengono definiti quando si specifica l'opzione del compilatore **/Arch: AVX512** . Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md). L'opzione **/Arch: AVX2** è stata introdotta in Visual Studio 2013 Update 2, versione 12.0.34567.1. Supporto limitato per **/Arch: AVX512** è stato aggiunto in visual studio 2017 ed espanso in visual studio 2019.

### <a name="to-set-the-archavx-archavx2-or-archavx512-compiler-option-in-visual-studio"></a>Per impostare l'opzione del compilatore/arch: AVX,/Arch: AVX2 o/Arch: AVX512 in Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **proprietà di configurazione**, **C/C++** .

1. Selezionare la pagina delle proprietà **generazione codice** .

1. Nella casella di riepilogo a discesa **Abilita set di istruzioni** avanzate scegliere **Advanced Vector Extensions (/Arch: AVX)**, **Advanced Vector Extensions 2 (/Arch: AVX2)** o **Advanced Vector Extensions 512 (/Arch: AVX512)**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.

## <a name="see-also"></a>Vedi anche

[/Arch (architettura minima della CPU)](arch-minimum-cpu-architecture.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
