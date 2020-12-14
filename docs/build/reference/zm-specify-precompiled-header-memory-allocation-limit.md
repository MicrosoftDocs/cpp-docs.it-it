---
description: Altre informazioni su:/ZM (specifica il limite di allocazione della memoria per l'intestazione precompilata)
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
ms.openlocfilehash: 624d8926961d9ca3d32ef204b70683c14dc3197f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224387"
---
# <a name="zm-specify-precompiled-header-memory-allocation-limit"></a>/Zm (Specifica il limite di allocazione della memoria per l'intestazione precompilata)

Determina la quantità di memoria allocata dal compilatore per costruire intestazioni precompilate.

## <a name="syntax"></a>Sintassi

```
/Zmfactor
```

## <a name="arguments"></a>Argomenti

*Factor*<br/>
Fattore di scala che determina la quantità di memoria utilizzata dal compilatore per costruire intestazioni precompilate.

L'argomento *Factor* è una percentuale delle dimensioni predefinite di un buffer di lavoro definito dal compilatore. Il valore predefinito di *Factor* è 100 (percentuale), ma è possibile specificare importi maggiori o minori.

## <a name="remarks"></a>Commenti

Nelle versioni precedenti a Visual Studio 2015, il compilatore C++ usava diversi heap discreti e ognuno aveva un limite finito. Attualmente, il compilatore aumenta dinamicamente gli heap in base alle esigenze fino a un limite di dimensioni totali dell'heap e consente all'intestazione precompilata di includere più intervalli di indirizzi. Di conseguenza, l'opzione del compilatore **/ZM** è raramente necessaria.

Se il compilatore esaurisce lo spazio dell'heap e genera il messaggio di errore [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) quando si usa l'opzione del compilatore **/ZM** , è possibile che sia stata riservata una quantità eccessiva di memoria. Provare a rimuovere l'opzione **/ZM** .

Se il compilatore genera il messaggio di errore [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) , un messaggio [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) associato specifica l'argomento *Factor* da usare quando si ricompila con l'opzione del compilatore **/ZM** . Questo messaggio è significativo solo quando si usa un'intestazione precompilata `#pragma hdrstop` . In altri casi, si tratta di un errore non corretto causato da problemi di utilizzo elevato della memoria virtuale di Windows e la raccomandazione di utilizzare l'opzione **/ZM** deve essere ignorata. In alternativa, provare a ridurre il numero di processi paralleli quando si usa l'opzione **/maxcpucount** per MSBUILD.EXE in combinazione con l'opzione **/MP** per CL.EXE. Per ulteriori informazioni, vedere [problemi e consigli relativi all'intestazione precompilata (PCH)](https://devblogs.microsoft.com/cppblog/precompiled-header-pch-issues-and-recommendations/).

Nella tabella seguente viene illustrato il modo in cui l'argomento *Factor* influiscono sul limite di allocazione della memoria se si presuppone che le dimensioni del buffer di intestazione precompilato predefinito siano pari a 75 MB.

|Valore di *Factor*|Limite di allocazione della memoria|
|-----------------------|-----------------------------|
|10|7,5 MB|
|100|75 MB|
|200|150 MB|
|1000|750 MB|
|2000|1500 MB|

## <a name="other-ways-to-set-the-memory-allocation-limit"></a>Altri modi per impostare il limite di allocazione della memoria

### <a name="to-set-the-zm-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore /Zm nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Nel riquadro di spostamento selezionare **proprietà di configurazione**  >  riga di comando **C/C++**  >  .

1. Immettere l'opzione del compilatore **/ZM** nella casella **Opzioni aggiuntive** .

### <a name="to-set-the-zm-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore /Zm a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
