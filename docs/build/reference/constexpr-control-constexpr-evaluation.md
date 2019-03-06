---
title: /constexpr (controlla la valutazione di constexpr)
ms.date: 08/15/2017
f1_keywords:
- /constexpr
- -constexpr
helpviewer_keywords:
- /constexpr control constexpr evaluation [C++]
- -constexpr control constexpr evaluation [C++]
- constexpr control constexpr evaluation [C++]
ms.assetid: 76d56784-f5ad-401d-841d-09d1059e8b8c
ms.openlocfilehash: 49a9566ec0725b63330af3a41afb871c3be3cc27
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57414651"
---
# <a name="constexpr-control-constexpr-evaluation"></a>/constexpr (controlla la valutazione di constexpr)

Usare la **/constexpr** le opzioni del compilatore per i parametri di controllo per **constexpr** valutazione in fase di compilazione.

## <a name="syntax"></a>Sintassi

> **/constexpr: Depth**<em>N</em>
>  **/constexpr: BackTrace**<em>N</em>
>  **/constexpr: Steps** <em>N</em>

## <a name="arguments"></a>Argomenti

**profondità**<em>N</em> limitare la profondità della ricorsiva **constexpr** alla chiamata di funzione *N* livelli. Il valore predefinito è 512.

**BackTrace**<em>N</em> fino a mostrare *N* **constexpr** valutazioni in diagnostica. Il valore predefinito è 10.

**Questa procedura**<em>N</em> Terminate **constexpr** valutazione dopo *N* passaggi. Il valore predefinito è 100.000.

## <a name="remarks"></a>Note

Il **/constexpr** valutazione in fase di compilazione di controllare le opzioni del compilatore **constexpr** espressioni. Passaggi per la valutazione, i livelli di ricorsione e profondità backtrace vengono controllati per impedire al compilatore di dedicare troppo tempo alla **constexpr** valutazione. Per altre informazioni sul **constexpr** elemento del linguaggio, vedere [constexpr (C++)](../../cpp/constexpr-cpp.md).

Il **/constexpr** opzioni sono disponibili a partire da Visual Studio 2015.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire il progetto **pagine delle proprietà** nella finestra di dialogo.

2. Sotto **le proprietà di configurazione**, espandere il **C/C++** cartella e scegliere il **riga di comando** pagina delle proprietà.

3. Immettere qualsiasi **/constexpr** le opzioni del compilatore nel **opzioni aggiuntive** casella. Scegli **OK** oppure **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
