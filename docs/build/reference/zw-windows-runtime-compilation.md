---
title: /ZW (Compilazione di Windows Runtime)
ms.date: 11/04/2016
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
ms.openlocfilehash: 944d66de3c029d9731a225281b4e592c477806e9
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417983"
---
# <a name="zw-windows-runtime-compilation"></a>/ZW (Compilazione di Windows Runtime)

Compila il codice per supportare estensioni del componente C++ di Visual C + + sorgente c++ /CX per la creazione di App Universal Windows Platform (UWP).

Quando si usa **/ZW** per compilare, specificare sempre **/EHsc** anche.

## <a name="syntax"></a>Sintassi

```cpp
/ZW /EHsc
/ZW:nostdlib /EHsc
```

## <a name="arguments"></a>Argomenti

**nostdlib**<br/>
Indica che Platform.winmd, Windows.Foundation.winmd e altri file di metadati di Windows (.winmd) predefiniti non sono automaticamente inclusi nella compilazione. In alternativa, è necessario usare il [/FU (nome forzato #using File)](../../build/reference/fu-name-forced-hash-using-file.md) opzione del compilatore per specificare in modo esplicito i file di metadati Windows.

## <a name="remarks"></a>Note

Quando si specifica la **/ZW** opzione, il compilatore supporta le seguenti funzionalità:

- Il file di metadati richiesti, gli spazi dei nomi, tipi di dati e funzioni richieste dall'applicazione per l'esecuzione nel Runtime di Windows.

- Automatic: il conteggio dei riferimenti degli oggetti Windows Runtime e automatico l'eliminazione di un oggetto quando il conteggio dei riferimenti va a zero.

Poiché il linker incrementale non supporta i metadati di Windows inclusi nei file obj usando il **/ZW** opzione, il [/Gm (Abilita ricompilazione minima)](../../build/reference/gm-enable-minimal-rebuild.md) opzione non è compatibile con **/ZW** .

Per altre informazioni, vedere [riferimenti al linguaggio Visual C++](../../cppcx/visual-c-language-reference-c-cx.md).

## <a name="requirements"></a>Requisiti

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
