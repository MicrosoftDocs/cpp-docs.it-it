---
title: /Await (Abilita il supporto di coroutine)
ms.date: 08/15/2017
f1_keywords:
- /await
- -await
helpviewer_keywords:
- /await enable coroutine support [C++]
- -await enable coroutine support [C++]
- await enable coroutine support [C++]
ms.assetid: 302c8e69-09b6-4c58-bcdd-0a6a8713a8df
ms.openlocfilehash: c0c8c0183c356900ba8f95d39e427d56eb1ec96b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62295006"
---
# <a name="await-enable-coroutine-support"></a>/Await (Abilita il supporto di coroutine)

Usare la **/Await** opzione del compilatore per abilitare il supporto del compilatore per le coroutine.

## <a name="syntax"></a>Sintassi

> /await

## <a name="remarks"></a>Note

Il **/Await** l'opzione del compilatore Abilita il supporto del compilatore per C++ coroutine e le parole chiave **co_await**, **co_yield**, e **co_return**. Questa opzione è disattivata per impostazione predefinita. Per informazioni sul supporto di coroutine in Visual Studio, vedere la [blog del Team di Visual Studio](https://blogs.msdn.microsoft.com/vcblog/category/coroutine/). Per altre informazioni sulla proposta coroutine standard, vedere [N4628 Working Draft, Technical Specification per le estensioni di C++ per le coroutine](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/n4628.pdf).

Il **/Await** opzione è disponibile a partire da Visual Studio 2015.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire il progetto **pagine delle proprietà** nella finestra di dialogo.

1. Sotto **le proprietà di configurazione**, espandere il **C/C++** cartella e scegliere il **riga di comando** pagina delle proprietà.

1. Immettere il **/Await** opzione del compilatore nella **opzioni aggiuntive** casella. Scegli **OK** oppure **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
