---
title: -await (Abilita il supporto di coroutine) | Microsoft Docs
ms.custom: ''
ms.date: 08/15/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /await
- -await
dev_langs:
- C++
helpviewer_keywords:
- /await enable coroutine support [C++]
- -await enable coroutine support [C++]
- await enable coroutine support [C++]
ms.assetid: 302c8e69-09b6-4c58-bcdd-0a6a8713a8df
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 09cab9f0c7d94c3c51eb63008ec6b7cfb1292f89
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48860576"
---
# <a name="await-enable-coroutine-support"></a>/Await (Abilita il supporto di coroutine)

Usare la **/Await** opzione del compilatore per abilitare il supporto del compilatore per le coroutine.

## <a name="syntax"></a>Sintassi

> / await

## <a name="remarks"></a>Note

Il **/Await** l'opzione del compilatore Abilita il supporto del compilatore di coroutine C++ e le parole chiave **co_await**, **co_yield**, e **co_return**. Questa opzione è disattivata per impostazione predefinita. Per informazioni sul supporto di coroutine in Visual Studio, vedere la [blog del Team di Visual Studio](https://blogs.msdn.microsoft.com/vcblog/category/coroutine/). Per altre informazioni sulla proposta coroutine standard, vedere [N4628 Working Draft, Technical Specification per le estensioni di C++ per le coroutine](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/n4628.pdf).

Il **/Await** opzione è disponibile a partire da Visual Studio 2015.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire il progetto **pagine delle proprietà** nella finestra di dialogo.

1. Sotto **le proprietà di configurazione**, espandere il **C/C++** cartella e scegliere il **riga di comando** pagina delle proprietà.

1. Immettere il **/Await** opzione del compilatore nella **opzioni aggiuntive** casella. Scegli **OK** oppure **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
