---
title: /Gy (Attiva collegamento a livello di funzione)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.EnableFunctionLevelLinking
- /gy
- VC.Project.VCCLWCECompilerTool.EnableFunctionLevelLinking
helpviewer_keywords:
- enable function-level linking compiler option [C++]
- COMDAT function
- Gy compiler option [C++]
- -Gy compiler option [C++]
- /Gy compiler option [C++]
- packaged functions
ms.assetid: 0d3cf14c-ed7d-4ad3-b4b6-104e56f61046
ms.openlocfilehash: 9643b8b4b4b26b3f7a8a59ed0085601b1a53094d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62270724"
---
# <a name="gy-enable-function-level-linking"></a>/Gy (Attiva collegamento a livello di funzione)

Consente al compilatore di assemblare le singole funzioni sotto forma di funzioni incluse nel pacchetto (COMDAT).

## <a name="syntax"></a>Sintassi

```
/Gy[-]
```

## <a name="remarks"></a>Note

Il linker richiede che le funzioni essere fornite separatamente come COMDAT per escludere o ordinare le singole funzioni in un file DLL o .exe.

È possibile usare l'opzione del linker [/OPT (ottimizzazioni)](opt-optimizations.md) per escludere le funzioni di package dal file .exe.

È possibile usare l'opzione del linker [/ORDER (inserire le funzioni in ordine)](order-put-functions-in-order.md) includere funzioni incluse nel pacchetto in un ordine specifico nel file .exe.

Funzioni inline sono sempre inclusi se le relative istanze vengono create come chiamate (che si verifica, ad esempio, se l'incorporamento è disattivato o richiedere un indirizzo della funzione). Inoltre, le funzioni membro C++ definite nella dichiarazione di classe vengono automaticamente inserite; altre funzioni non sono e se si seleziona questa opzione è necessario per la compilazione come funzioni incluse nel pacchetto.

> [!NOTE]
>  Il [/ZI](z7-zi-zi-debug-information-format.md) opzione, utilizzata per la modifica e continuazione, imposta automaticamente il **/Gy** opzione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **generazione di codice** pagina delle proprietà.

1. Modificare il **Attiva collegamento a livello di funzione** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFunctionLevelLinking%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
