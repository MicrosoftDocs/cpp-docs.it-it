---
title: -Gy (Attiva collegamento a livello di funzione) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.EnableFunctionLevelLinking
- /gy
- VC.Project.VCCLWCECompilerTool.EnableFunctionLevelLinking
dev_langs:
- C++
helpviewer_keywords:
- enable function-level linking compiler option [C++]
- COMDAT function
- Gy compiler option [C++]
- -Gy compiler option [C++]
- /Gy compiler option [C++]
- packaged functions
ms.assetid: 0d3cf14c-ed7d-4ad3-b4b6-104e56f61046
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 09faa1a1d2b6743b7fce31af32ba4fe1572b592e
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45705003"
---
# <a name="gy-enable-function-level-linking"></a>/Gy (Attiva collegamento a livello di funzione)

Consente al compilatore di assemblare le singole funzioni sotto forma di funzioni incluse nel pacchetto (COMDAT).

## <a name="syntax"></a>Sintassi

```
/Gy[-]
```

## <a name="remarks"></a>Note

Il linker richiede che le funzioni essere fornite separatamente come COMDAT per escludere o ordinare le singole funzioni in un file DLL o .exe.

È possibile usare l'opzione del linker [/OPT (ottimizzazioni)](../../build/reference/opt-optimizations.md) per escludere le funzioni di package dal file .exe.

È possibile usare l'opzione del linker [/ORDER (inserire le funzioni in ordine)](../../build/reference/order-put-functions-in-order.md) includere funzioni incluse nel pacchetto in un ordine specifico nel file .exe.

Funzioni inline sono sempre inclusi se le relative istanze vengono create come chiamate (che si verifica, ad esempio, se l'incorporamento è disattivato o richiedere un indirizzo della funzione). Inoltre, le funzioni membro C++ definite nella dichiarazione di classe vengono automaticamente inserite; altre funzioni non sono e se si seleziona questa opzione è necessario per la compilazione come funzioni incluse nel pacchetto.

> [!NOTE]
>  Il [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md) opzione, utilizzata per la modifica e continuazione, imposta automaticamente il **/Gy** opzione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **generazione di codice** pagina delle proprietà.

1. Modificare il **Attiva collegamento a livello di funzione** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFunctionLevelLinking%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)