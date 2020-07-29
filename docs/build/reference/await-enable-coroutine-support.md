---
title: /await (Abilita il supporto di coroutine)
ms.date: 08/15/2017
f1_keywords:
- /await
- -await
helpviewer_keywords:
- /await enable coroutine support [C++]
- -await enable coroutine support [C++]
- await enable coroutine support [C++]
ms.assetid: 302c8e69-09b6-4c58-bcdd-0a6a8713a8df
ms.openlocfilehash: 526216ba2ae259b53bcf77691ebd09a6152b83f0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223928"
---
# <a name="await-enable-coroutine-support"></a>/await (Abilita il supporto di coroutine)

Usare l'opzione del compilatore **/await** per abilitare il supporto del compilatore per le coroutine.

## <a name="syntax"></a>Sintassi

> /await

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore **/await** Abilita il supporto del compilatore per le coroutine C++ e le parole chiave, **`co_await`** **`co_yield`** e **`co_return`** . Questa opzione è disattivata per impostazione predefinita. Per informazioni sul supporto per le coroutine in Visual Studio, vedere il [Blog del team di Visual Studio](https://devblogs.microsoft.com/cppblog/category/coroutine/). Per ulteriori informazioni sulla proposta di coroutine standard, vedere la [bozza di lavoro N4628, specifica tecnica per le estensioni C++ per le coroutine](https://wg21.link/n4628).

L'opzione **/await** è disponibile a partire da Visual Studio 2015.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** del progetto.

1. In **proprietà di configurazione**espandere la cartella **C/C++** e scegliere la pagina delle proprietà **riga di comando** .

1. Immettere l'opzione del compilatore **/await** nella casella **Opzioni aggiuntive** . Scegliere **OK** o **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
