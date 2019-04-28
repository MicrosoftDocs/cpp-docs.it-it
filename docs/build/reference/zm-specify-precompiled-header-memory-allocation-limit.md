---
title: /Zm (Specifica il limite di allocazione della memoria per l'intestazione precompilata)
ms.date: 03/08/2019
f1_keywords:
- /zm
helpviewer_keywords:
- PCH files, memory allocation limit
- Zm compiler option [C++]
- /Zm compiler option [C++]
- precompiled header files, memory allocation limit
- Specify Precompiled Header Memory Allocation Limit compiler option
- cl.exe compiler, memory allocation limit
- .pch files, memory allocation limit
- memory allocation, Memory Allocation Limit compiler option
- -Zm compiler option [C++]
ms.assetid: 94c77d5e-6672-46a7-92e0-3f69e277727d
ms.openlocfilehash: 09df8e1ee9a97289e29e1191e8c1585580435b79
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62315274"
---
# <a name="zm-specify-precompiled-header-memory-allocation-limit"></a>/Zm (Specifica il limite di allocazione della memoria per l'intestazione precompilata)

Determina la quantità di memoria allocata dal compilatore per costruire intestazioni precompilate.

## <a name="syntax"></a>Sintassi

```
/Zmfactor
```

## <a name="arguments"></a>Argomenti

*factor*<br/>
Fattore di scala che determina la quantità di memoria utilizzata dal compilatore per costruire intestazioni precompilate.

Il *factor* argomento è una percentuale della dimensione predefinita di un buffer di lavoro definito dal compilatore. Il valore predefinito *factor* è 100 (percento), ma è possibile specificare superiori o inferiori.

## <a name="remarks"></a>Note

Nelle versioni precedenti di Visual Studio 2015, il compilatore C++ utilizza diversi heap discreti e ognuna ha un limite finito. Attualmente, il compilatore in modo dinamico aumenta gli heap fino a un limite di dimensione totale dell'heap e consente l'intestazione precompilata dovranno includere più intervalli di indirizzi. Di conseguenza, il **/Zm** opzione del compilatore è solo raramente necessario.

Se il compilatore esaurisce lo spazio dell'heap e genera il [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) messaggio di errore quando si usa il **/Zm** opzione del compilatore, è possibile potrebbe essere stata riservata una quantità eccessiva di memoria. Provare a rimuovere il **/Zm** opzione.

Se il compilatore genera il [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) messaggio di errore, un oggetto associato [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) messaggio consente di specificare la *fattore* argomento da utilizzare quando si ricompila tramite i **/Zm** opzione del compilatore. Questo messaggio è significativo solo quando si usa un'intestazione precompilata `#pragma hdrstop`. In altri casi, è un errore spurio causato da problemi di un utilizzo elevato della memoria virtuale di Windows e le raccomandazioni per usare la **/Zm** opzione deve essere ignorato. In alternativa, provare a ridurre il numero di processi paralleli quando si usa la **/maxcpucount** opzione a MSBUILD. File EXE in combinazione con il **/MP** opzione a CL. FILE EXE. Per altre informazioni, vedere [problemi di intestazione precompilata (PCH) e consigli](https://devblogs.microsoft.com/cppblog/precompiled-header-pch-issues-and-recommendations/).

La tabella seguente illustra come la *factor* argomento influisce sul limite di allocazione della memoria se si presuppone che la dimensione del buffer di intestazioni precompilate predefinito è pari a 75 MB.

|Valore di *factor*|Limite di allocazione della memoria|
|-----------------------|-----------------------------|
|10|7.5 MB|
|100|75 MB|
|200|150 MB|
|1000|750 MB|
|2000|1500 MB|

## <a name="other-ways-to-set-the-memory-allocation-limit"></a>Altri modi per impostare il limite di allocazione della memoria

### <a name="to-set-the-zm-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore /Zm nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Nel riquadro di spostamento, selezionare **le proprietà di configurazione** > **C/C++** > **della riga di comando**.

1. Immettere il **/Zm** opzione del compilatore nella **opzioni aggiuntive** casella.

### <a name="to-set-the-zm-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore /Zm a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
