---
title: /cgthreads (Thread di generazione di codice)
ms.date: 07/31/2020
f1_keywords:
- /cgthreads
helpviewer_keywords:
- /cgthreads compiler option (C++)
- -cgthreads compiler option (C++)
- cgthreads compiler option (C++)
- cgthreads
ms.assetid: 64bc768c-6caa-4baf-9dea-7cfa1ffb01c2
ms.openlocfilehash: 319a42ab68f02df6019ff283f1039ef3d561c4a0
ms.sourcegitcommit: f2a135d69a2a8ef1777da60c53d58fe06980c997
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/03/2020
ms.locfileid: "87520875"
---
# <a name="cgthreads-code-generation-threads"></a>`/cgthreads`(Thread di generazione del codice)

Imposta il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice.

## <a name="syntax"></a>Sintassi

> **`/cgthreads1`**\
> **`/cgthreads2`**\
> **`/cgthreads3`**\
> **`/cgthreads4`**\
> **`/cgthreads5`**\
> **`/cgthreads6`**\
> **`/cgthreads7`**\
> **`/cgthreads8`**

## <a name="arguments"></a>Argomenti

**`cgthreadsN`**\
Numero massimo di thread da usare per cl.exe, dove *N* è un numero compreso nell'intervallo da 1 a 8.

## <a name="remarks"></a>Commenti

L' **`cgthreads`** opzione specifica il numero massimo di thread cl.exe utilizza in parallelo per le fasi di ottimizzazione e generazione di codice della compilazione. Si noti che non può essere presente alcuno spazio tra **`cgthreads`** e l'argomento *Number* . Per impostazione predefinita, cl.exe utilizza quattro thread, come se **`/cgthreads4`** fosse specificato. Se sono disponibili più core del processore, un valore di *numero* maggiore può migliorare i tempi di compilazione. Questa opzione è particolarmente utile in combinazione con l' [ `/GL` ottimizzazione dell'intero programma](gl-whole-program-optimization.md).

È possibile specificare più livelli di parallelismo per una compilazione. L'opzione msbuild.exe **`/maxcpucount`** specifica il numero di processi MSBuild che possono essere eseguiti in parallelo. Il flag del compilatore [ `/MP` (compilazione con più processi)](mp-build-with-multiple-processes.md) specifica il numero di processi di cl.exe che compilano simultaneamente i file di origine. L' **`cgthreads`** opzione specifica il numero di thread usati da ogni processo di cl.exe. Il processore può solo eseguire tutti i thread contemporaneamente al numero di core del processore. Non è utile specificare valori più grandi per tutte queste opzioni nello stesso momento e può essere controproducente. Per ulteriori informazioni su come compilare progetti in parallelo, vedere [compilazione di più progetti in parallelo](/visualstudio/msbuild/building-multiple-projects-in-parallel-with-msbuild).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **`cgthreadsN`** , dove *`N`* è un valore compreso tra 1 e 8, quindi selezionare **OK**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
