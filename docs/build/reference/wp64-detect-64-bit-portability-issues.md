---
title: /Wp64 (Rileva errori di portabilità a 64 bit)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLWCECompilerTool.Detect64BitPortabilityProblems
- VC.Project.VCCLCompilerTool.Detect64BitPortabilityProblems
- /wp64
helpviewer_keywords:
- 64-bit compiler [C++], detecting portability problems
- /Wp64 compiler option [C++]
- -Wp64 compiler option [C++]
- Wp64 compiler option [C++]
ms.assetid: 331ae5aa-e627-4d03-8f63-dd2c2d76dadd
ms.openlocfilehash: e5c30ac9096094948a83195f5b3990794c421685
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335880"
---
# <a name="wp64-detect-64-bit-portability-issues"></a>/Wp64 (Rileva errori di portabilità a 64 bit)

Questa opzione del compilatore è obsoleta. Nelle versioni di Visual Studio precedenti a Visual Studio 2013, rileva i problemi di portabilità a 64 bit nei tipi contrassegnati anche con la parola chiave [__w64](../../cpp/w64.md) .

## <a name="syntax"></a>Sintassi

```
/Wp64
```

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, nelle versioni di Visual Studio precedenti a Visual Studio 2013, l'opzione del compilatore **/Wp64** è disattivata nel compilatore MSVC che compila codice x86 a 32 bit e nel compilatore MSVC che compila codice x64 a 64 bit.

> [!IMPORTANT]
> L'opzione del compilatore [/Wp64](wp64-detect-64-bit-portability-issues.md) e la parola chiave [__w64](../../cpp/w64.md) sono deprecate in Visual Studio 2010 e Visual Studio 2012 e non sono supportare a partire da Visual Studio 2013. Se si converte un progetto che usa questa opzione, non verrà eseguita la migrazione dell'opzione durante la conversione. Per usare questa opzione in Visual Studio 2010 o Visual Studio 2012, è necessario digitare l'opzione del compilatore in **Altre opzioni** nella sezione **Riga di comando** delle proprietà del progetto. Se si usa l'opzione del compilatore **/Wp64** nella riga di comando, il compilatore visualizza l'avviso della riga di comando D9002. Anziché utilizzare questa opzione e parola chiave per rilevare problemi di portabilità a 64 bit, utilizzare un compilatore MSVC destinato a una piattaforma a 64 bit e specificare l'opzione [/W4.](compiler-option-warning-level.md) Per ulteriori informazioni, vedere Configurare i progetti in C, per le [destinazioni x64 a 64 bit.](../configuring-programs-for-64-bit-visual-cpp.md)

Le variabili dei tipi seguenti vengono testate su un sistema operativo a 32 bit come se fossero usate in un sistema operativo a 64 bit:

- INT

- long

- indicatore di misura

Se si compila regolarmente l'applicazione utilizzando un compilatore che compila codice x64 a 64 bit, è sufficiente disabilitare **/Wp64** nelle compilazioni a 32 bit perché il compilatore a 64 bit rileverà tutti i problemi. Per ulteriori informazioni su come utilizzare l'indirizzo operativo Windows a 64 bit, vedere Configurare i [progetti in c'è per le destinazioni x64 a 64 bit.](../configuring-programs-for-64-bit-visual-cpp.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.

   Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Modificare la casella **Opzioni aggiuntive** per includere **/Wp64**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Detect64BitPortabilityProblems%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[Configurare progetti C++ per destinazioni x64 a 64 bit](../configuring-programs-for-64-bit-visual-cpp.md)
