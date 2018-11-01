---
title: /Za, /Ze (Disabilita estensioni linguaggio)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLWCECompilerTool.DisableLanguageExtensions
- /za
- /ze
- VC.Project.VCCLCompilerTool.DisableLanguageExtensions
helpviewer_keywords:
- -Za compiler option [C++]
- Za compiler option [C++]
- language extensions, disabling in compiler
- -Ze compiler option [C++]
- language extensions
- enable language extensions
- /Za compiler option [C++]
- /Ze compiler option [C++]
- Disable Language Extensions compiler option
- Ze compiler option [C++]
ms.assetid: 65e49258-7161-4289-a176-7c5c0656b1a2
ms.openlocfilehash: a3d25f71739f9948f2c0237efbaeaf8fa89f2114
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50549721"
---
# <a name="za-ze-disable-language-extensions"></a>/Za, /Ze (Disabilita estensioni linguaggio)

Il **/Za** opzione del compilatore genera un errore per i costrutti di linguaggio che non sono compatibili con ANSI C89 o ISO c++11. Il **/Ze** opzione del compilatore, che è attivata per impostazione predefinita, abilita le estensioni Microsoft.

## <a name="syntax"></a>Sintassi

```
/Za
/Ze
```

## <a name="remarks"></a>Note

> [!NOTE]
>  Il **/Ze** opzione è deprecata poiché il comportamento è attivato per impostazione predefinita. È consigliabile usare la [/Zc (conformità)](../../build/reference/zc-conformance.md) opzioni del compilatore per controllare le funzionalità di estensione del linguaggio specifico. Per un elenco di opzioni del compilatore deprecate, vedere la **deprecate o rimosse le opzioni del compilatore** sezione [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).

Il compilatore Visual C++ offre una serie di funzionalità oltre a quelli specificati in standard ANSI C89, ISO C99 e ISO C++. Queste funzionalità sono noti collettivamente come estensioni Microsoft a C e C++. Queste estensioni sono disponibili per impostazione predefinita e non è disponibile quando il **/Za** opzione specificata. Per altre informazioni sulle estensioni specifiche, vedere [Extensions Microsoft a C e C++](../../build/reference/microsoft-extensions-to-c-and-cpp.md).

È consigliabile disabilitare le estensioni del linguaggio, specificando il **/Za** opzione se si prevede di portare il proprio programma in altri ambienti. Quando **/Za** è specificato, il compilatore considera Microsoft estesi parole chiave come identificatori semplici, disabilita le altre estensioni di Microsoft e viene definito automaticamente il `__STDC__` la macro predefinita per i programmi C.

Altre opzioni del compilatore abbinate **/Za** può influire sul modo in cui il compilatore garantisce conformità agli standard.

Per informazioni su modi specificare le impostazioni del comportamento specifico conformi agli standard, vedere la [/Zc](../../build/reference/zc-conformance.md) opzione del compilatore.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Nel riquadro di spostamento, scegliere **le proprietà di configurazione**, **C/C++**, **Language**.

1. Modificare il **Disabilita estensioni linguaggio** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableLanguageExtensions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[/Zc (conformità)](../../build/reference/zc-conformance.md)
