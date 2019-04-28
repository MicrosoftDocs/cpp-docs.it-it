---
title: /cgthreads (thread di generazione di codice)
ms.date: 11/04/2016
f1_keywords:
- /cgthreads
helpviewer_keywords:
- /cgthreads compiler option (C++)
- -cgthreads compiler option (C++)
- cgthreads compiler option (C++)
- cgthreads
ms.assetid: 64bc768c-6caa-4baf-9dea-7cfa1ffb01c2
ms.openlocfilehash: df353eb255c731478863ed6088cafa1cc38053fb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62294694"
---
# <a name="cgthreads-code-generation-threads"></a>/cgthreads (thread di generazione di codice)

Imposta il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice.

## <a name="syntax"></a>Sintassi

```
/cgthreads[1-8]
```

## <a name="arguments"></a>Argomenti

*number*<br/>
Numero massimo di thread per l'uso da parte di cl.exe, nell'intervallo compreso tra 1 e 8.

## <a name="remarks"></a>Note

Il **/cgthreads** opzione specifica il numero massimo di thread cl.exe utilizza in parallelo per l'ottimizzazione e codice le fasi di generazione della compilazione. Si noti che non possono esistere alcun spazio tra **/cgthreads** e il `number` argomento. Per impostazione predefinita, cl.exe utilizza quattro thread, come se **/cgthreads4** sono state specificate. Se sono disponibili più core del processore, un valore `number` maggiore può accelerare i tempi di compilazione. Questa opzione è particolarmente utile quando viene combinato con [/GL (Ottimizzazione intero programma)](gl-whole-program-optimization.md).

È possibile specificare più livelli di parallelismo per una compilazione. Il commutatore msbuild.exe **/maxcpucount** specifica il numero di processi di MSBuild che può essere eseguito in parallelo. Il [/MP (compilazione con più processi)](mp-build-with-multiple-processes.md) flag del compilatore specifica il numero di processi cl.exe che compilano simultaneamente i file di origine. Il **/cgthreads** opzione specifica il numero di thread usati da ogni processo cl.exe. Dato che il processore può eseguire solo tanti thread simultanei quanti sono i core del processore, non è utile specificare valori maggiori per tutte queste opzioni simultaneamente e potrebbe risultare controproducente. Per altre informazioni su come compilare progetti in parallelo, vedere [compilazione di più progetti in parallelo](/visualstudio/msbuild/building-multiple-projects-in-parallel-with-msbuild).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione**, **C/C++** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/cgthreads**`N`, dove `N` è un valore compreso tra 1 e 8 e quindi selezionare **OK**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
