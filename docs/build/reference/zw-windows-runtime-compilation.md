---
description: Altre informazioni su:/ZW (compilazione Windows Runtime)
title: /ZW (Compilazione di Windows Runtime)
ms.date: 04/08/2019
f1_keywords:
- VC.Project.VCCLCompilerTool.CompileAsWinRT
- /zw
helpviewer_keywords:
- /ZW
- -ZW compiler option
- /ZW compiler option
- -ZW
- Windows Runtime compiler option
ms.assetid: 0fe362b0-9526-498b-96e0-00d7a965a248
ms.openlocfilehash: b2c39cdfb3f1d22d12c8d07b1e844c550a7a0e3a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273917"
---
# <a name="zw-windows-runtime-compilation"></a>/ZW (Compilazione di Windows Runtime)

Compila il codice sorgente per supportare le estensioni del componente c++ di Microsoft c++/CX per la creazione di app piattaforma UWP (Universal Windows Platform) (UWP).

Quando si usa **/ZW** per la compilazione, specificare sempre anche **/EHsc** .

## <a name="syntax"></a>Sintassi

```cpp
/ZW /EHsc
/ZW:nostdlib /EHsc
```

## <a name="arguments"></a>Argomenti

**nostdlib**<br/>
Indica che Platform.winmd, Windows.Foundation.winmd e altri file di metadati di Windows (.winmd) predefiniti non sono automaticamente inclusi nella compilazione. È invece necessario usare l'opzione del compilatore [/fu (Name forced #using file)](fu-name-forced-hash-using-file.md) per specificare in modo esplicito i file di metadati di Windows.

## <a name="remarks"></a>Commenti

Quando si specifica l'opzione **/ZW** , il compilatore supporta le funzionalità seguenti:

- I file di metadati, gli spazi dei nomi, i tipi di dati e le funzioni richiesti dall'app per l'esecuzione nell'Windows Runtime.

- Conteggio automatico dei riferimenti di oggetti Windows Runtime ed eliminazione automatica di un oggetto quando il conteggio dei riferimenti va a zero.

Poiché il linker incrementale non supporta i metadati di Windows inclusi nei file con estensione obj utilizzando l'opzione **/ZW** , l'opzione deprecated [/GM (Abilita ricompilazione minima)](gm-enable-minimal-rebuild.md) non è compatibile con **/ZW**.

Per ulteriori informazioni, vedere [riferimenti al linguaggio Visual C++](../../cppcx/visual-c-language-reference-c-cx.md).

## <a name="requirements"></a>Requisiti

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
