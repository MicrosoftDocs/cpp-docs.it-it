---
title: /constexpr (Controlla la valutazione di constexpr)
ms.date: 08/15/2017
f1_keywords:
- /constexpr
- -constexpr
helpviewer_keywords:
- /constexpr control constexpr evaluation [C++]
- -constexpr control constexpr evaluation [C++]
- constexpr control constexpr evaluation [C++]
ms.assetid: 76d56784-f5ad-401d-841d-09d1059e8b8c
ms.openlocfilehash: 4d3f33a64dcebfc40778f81354cb5067a5239ace
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825591"
---
# <a name="constexpr-control-constexpr-evaluation"></a>/constexpr (Controlla la valutazione di constexpr)

Usare le opzioni del compilatore **/constExpr** per controllare i parametri per la valutazione di **constExpr** in fase di compilazione.

## <a name="syntax"></a>Sintassi

> **/constExpr: Depth**<em>N</em>\
> **/constExpr: backtrace**<em>N</em>\
> **/constExpr: passaggi**<em>N</em>

## <a name="arguments"></a>Argomenti

**profondità**<em>n</em> consente di limitare la profondità della chiamata della funzione **constExpr** ricorsiva a *n* livelli. Il valore predefinito è 512.

**backtrace**<em>n</em> Mostra fino a *n* valutazioni **constExpr** nella diagnostica. Il valore predefinito è 10.

i **passaggi**<em>n</em> terminano la valutazione di **constExpr** dopo *N* passaggi. Il valore predefinito è 100.000.

## <a name="remarks"></a>Osservazioni

Le opzioni del compilatore **/constExpr** controllano la valutazione in fase di compilazione delle espressioni **constExpr** . I passaggi di valutazione, i livelli di ricorsione e la profondità del backtrace sono controllati per evitare che il compilatore spenda troppo tempo nella valutazione di **constExpr** . Per ulteriori informazioni sull'elemento di linguaggio **constExpr** , vedere [constExpr (C++)](../../cpp/constexpr-cpp.md).

Le opzioni **/constExpr** sono disponibili a partire da Visual Studio 2015.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** del progetto.

2. In **proprietà di configurazione**espandere la cartella **C/C++** e scegliere la pagina delle proprietà **riga di comando** .

3. Immettere le opzioni del compilatore **/constExpr** nella casella **Opzioni aggiuntive** . Scegliere **OK** o **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
