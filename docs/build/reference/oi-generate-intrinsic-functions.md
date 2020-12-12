---
description: Altre informazioni su:/OI (genera funzioni intrinseche)
title: /Oi (Genera funzioni intrinseche)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.EnableIntrinsicFunctions
- /oi
- VC.Project.VCCLWCECompilerTool.EnableIntrinsicFunctions
helpviewer_keywords:
- Oi compiler option [C++]
- intrinsic functions, generate
- /Oi compiler option [C++]
- -Oi compiler option [C++]
- generate intrinsic functions compiler option [C++]
ms.assetid: fa4a3bf6-0ed8-481b-91c0-add7636132b4
ms.openlocfilehash: fc08ff495391092115197fe70e8c3673b77f32e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214279"
---
# <a name="oi-generate-intrinsic-functions"></a>/Oi (Genera funzioni intrinseche)

Sostituisce alcune chiamate di funzione con forme intrinseche o particolari della funzione che consentono un'esecuzione più veloce dell'applicazione.

## <a name="syntax"></a>Sintassi

```
/Oi[-]
```

## <a name="remarks"></a>Osservazioni

I programmi che usano funzioni intrinseche sono più veloci perché non hanno il sovraccarico delle chiamate di funzione, ma possono essere più grandi a causa del codice aggiuntivo creato.

Per ulteriori informazioni sulle funzioni con form intrinseci, vedere [intrinseco](../../preprocessor/intrinsic.md) .

**/OI** è solo una richiesta al compilatore di sostituire alcune chiamate di funzione con gli intrinseci. il compilatore può chiamare la funzione (e non sostituire la chiamata di funzione con un intrinseco) se ciò comporterà prestazioni migliori.

**Sezione specifico x86**

Le funzioni intrinseche a virgola mobile non eseguono controlli speciali sui valori di input, quindi funzionano in intervalli di input limitati e hanno diverse condizioni di gestione delle eccezioni e di limite rispetto alle routine di libreria con lo stesso nome. L'utilizzo dei form intrinseci reali implica la perdita della gestione delle eccezioni IEEE e la perdita delle `_matherr` `errno` funzionalità e. il secondo implica la perdita della conformità ANSI. Tuttavia, i moduli intrinseci possono velocizzare notevolmente i programmi a elevato utilizzo a virgola mobile e, per molti programmi, i problemi di conformità sono poco pratici.

È possibile usare l'opzione del compilatore [za](za-ze-disable-language-extensions.md) per eseguire l'override della generazione di opzioni a virgola mobile intrinseche true. In tal caso le funzioni vengono generate come routine della libreria che passano gli argomenti direttamente al chip a virgola mobile anziché inserirli nello stack del programma.

**Specifica END x86**

È anche possibile usare [intrinsic](../../preprocessor/intrinsic.md) per creare funzioni intrinseche o funzioni [(C/C++)](../../preprocessor/function-c-cpp.md) per forzare in modo esplicito una chiamata di funzione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **ottimizzazione** .

1. Modificare la proprietà **Abilita funzioni intrinseche** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableIntrinsicFunctions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni/o (Ottimizza codice)](o-options-optimize-code.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Intrinseci del compilatore](../../intrinsics/compiler-intrinsics.md)
