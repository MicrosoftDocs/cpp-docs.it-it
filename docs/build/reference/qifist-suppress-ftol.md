---
title: /QIfist (Elimina _ftol)
ms.date: 11/04/2016
f1_keywords:
- /qifist
helpviewer_keywords:
- QIfist compiler option [C++]
- -QIfist compiler option [C++]
- /QIfist compiler option [C++]
ms.assetid: 1afd32a5-f658-4b66-85f4-e0ce4cb955bd
ms.openlocfilehash: 5d6e12a1003ea125b0da4bfef580d8096e97553a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336107"
---
# <a name="qifist-suppress-_ftol"></a>/QIfist (Elimina _ftol)

Operazione deprecata. Disattiva la chiamata della funzione helper `_ftol` quando è necessario eseguire una conversione da un tipo a virgola mobile a un tipo integrale.

## <a name="syntax"></a>Sintassi

```
/QIfist
```

## <a name="remarks"></a>Osservazioni

> [!NOTE]
> **/QIfist** è disponibile solo nel compilatore destinato a x86; questa opzione del compilatore non è disponibile nei compilatori destinati a x64 oARM.

Oltre a convertire da un tipo a virgola `_ftol` mobile a un tipo integrale, la funzione garantisce che la modalità di arrotondamento dell'unità a virgola mobile (FPU) sia verso zero (truncate), impostando i bit 10 e 11 della parola di controllo. Ciò garantisce che la conversione da un tipo a virgola mobile a un tipo integrale si verifica come descritto dallo standard ANSI C (la parte frazionaria del numero viene eliminata). Quando si utilizza **/QIfist**, questa garanzia non è più valida. La modalità di arrotondamento sarà una delle quattro, come documentato nei manuali di riferimento Intel:

- Arrotondare verso il nearest (numero pari se equidistante)

- Arrotonda verso l'infinito negativo

- Arrotondare verso l'infinito positivo

- Arrotondare verso lo zero

È possibile utilizzare la [funzione _control87, \__controlfp _control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md) runtime C per modificare il comportamento di arrotondamento dell'fPU. La modalità di arrotondamento predefinita dell'fPU è "Arrotonda verso più vicina". L'utilizzo di **/QIfist** può migliorare le prestazioni dell'applicazione, ma non senza rischi. È necessario testare accuratamente le parti del codice che sono sensibili alle modalità di arrotondamento prima di basarsi sul codice compilato con **/QIfist** negli ambienti di produzione.

[/arch (x86)](arch-x86.md) e **/QIfist** non possono essere utilizzati sullo stesso compilatore.

> [!NOTE]
> **/QIfist** non è attiva per impostazione predefinita perché i bit di arrotondamento influiscono anche sull'arrotondamento a virgola mobile (che si verifica dopo ogni calcolo), pertanto quando si impostano i flag per l'arrotondamento di tipo C (verso lo zero), i calcoli a virgola mobile potrebbero essere diversi. **/QIfist** non deve essere utilizzato se il codice dipende dal comportamento previsto di troncare la parte frazionaria del numero a virgola mobile. In caso di dubbi, non utilizzare **/QIfist**.

L'opzione **/QIfist** è deprecata a partire da Visual Studio 2005. Il compilatore ha apportato miglioramenti significativi nella velocità di conversione da float a int. Per un elenco delle opzioni del compilatore deprecate, vedere **Deprecated and Removed Compiler Options** in Compiler Options Listed by [Category](compiler-options-listed-by-category.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
