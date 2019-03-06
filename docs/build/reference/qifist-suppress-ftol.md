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
ms.openlocfilehash: 0b0dba0fec21b3c0ab03555ae90497f212ab6315
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57422208"
---
# <a name="qifist-suppress-ftol"></a>/QIfist (Elimina _ftol)

Deprecato. Disattiva la chiamata della funzione helper `_ftol` quando è necessario eseguire una conversione da un tipo a virgola mobile a un tipo integrale.

## <a name="syntax"></a>Sintassi

```
/QIfist
```

## <a name="remarks"></a>Note

> [!NOTE]
>  **/QIfist** è disponibile solo nel compilatore per piattaforme x86, questa opzione del compilatore non è disponibile nei compilatori per x64 o ARM.

Oltre alla conversione dal tipo a virgola mobile a tipo integrale, il `_ftol` funzione assicura la modalità di arrotondamento dell'unità a virgola mobile (FPU) sia verso lo zero (troncamento), impostando i bit 10 e 11 della parola di controllo. In questo modo si garantisce che la conversione da un tipo a virgola mobile a un tipo integrale viene generato come descritto dallo standard C ANSI (non viene eliminata la parte frazionaria del numero). Quando si usa **/QIfist**, questa garanzia non è più valido. La modalità di arrotondamento sarà uno dei quattro come documentato in manuali di riferimento di Intel:

- Arrotonda verso (numero pari più vicino se equidistanti)

- Arrotonda verso l'infinito negativo

- Arrotonda verso l'infinito positivo

- Arrotondamento per difetto

È possibile usare la [_control87, controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md) funzione C Run-Time per modificare la modalità di arrotondamento dell'unità FPU. La modalità dell'unità FPU predefinita è "Round verso più vicino." Usando **/QIfist** può migliorare le prestazioni dell'applicazione, ma non è esente da rischi. È consigliabile verificare attentamente le parti del codice che sono sensibili alle modalità di arrotondamento, prima di fare affidamento sul codice compilato con **/QIfist** negli ambienti di produzione.

[/arch (x86)](../../build/reference/arch-x86.md) e **/QIfist** non può essere utilizzato nello stesso compilando.

> [!NOTE]
>  **/QIfist** è non attivo per impostazione predefinita perché l'arrotondamento di bit a virgola mobile mobile influiscono anche punto arrotondamento (che si verifica dopo ogni operazione di calcolo), in modo che quando si impostano i flag per l'arrotondamento di tipo C (verso zero), della virgola i calcoli potrebbero essere diversi. **/QIfist** non deve essere usato se codice dipende dalla fase il comportamento previsto di troncare la parte frazionaria del numero a virgola mobile. Se si è certi, non utilizzare **/QIfist**.

Il **/QIfist** opzione è deprecata a partire da Visual Studio 2005. Il compilatore è stati introdotti miglioramenti significativi in float a int velocità di conversione. Per un elenco di opzioni del compilatore deprecate, vedere **deprecate o rimosse le opzioni del compilatore** nelle [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
