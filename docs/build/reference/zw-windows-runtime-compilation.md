---
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
ms.openlocfilehash: 0808f66c4d4c4e99b3038ea18a1f71f4ebaca89a
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65446172"
---
# <a name="zw-windows-runtime-compilation"></a>/ZW (Compilazione di Windows Runtime)

Compila il codice per il supporto Microsoft sorgente C++ estensioni del componente C++/CX per la creazione di App Universal Windows Platform (UWP).

Quando si usa **/ZW** per compilare, specificare sempre **/EHsc** anche.

## <a name="syntax"></a>Sintassi

```cpp
/ZW /EHsc
/ZW:nostdlib /EHsc
```

## <a name="arguments"></a>Argomenti

**nostdlib**<br/>
Indica che Platform.winmd, Windows.Foundation.winmd e altri file di metadati di Windows (.winmd) predefiniti non sono automaticamente inclusi nella compilazione. In alternativa, è necessario usare il [/FU (nome forzato #using File)](fu-name-forced-hash-using-file.md) opzione del compilatore per specificare in modo esplicito i file di metadati Windows.

## <a name="remarks"></a>Note

Quando si specifica la **/ZW** opzione, il compilatore supporta le seguenti funzionalità:

- Il file di metadati richiesti, gli spazi dei nomi, tipi di dati e funzioni richieste dall'applicazione per l'esecuzione nel Runtime di Windows.

- Automatic: il conteggio dei riferimenti degli oggetti Windows Runtime e automatico l'eliminazione di un oggetto quando il conteggio dei riferimenti va a zero.

Poiché il linker incrementale non supporta i metadati di Windows inclusi nei file obj usando il **/ZW** opzione deprecate [/Gm (Abilita ricompilazione minima)](gm-enable-minimal-rebuild.md) opzione non è compatibile con **/ZW**.

Per altre informazioni, vedere [riferimenti al linguaggio Visual C++](../../cppcx/visual-c-language-reference-c-cx.md).

## <a name="requirements"></a>Requisiti

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
