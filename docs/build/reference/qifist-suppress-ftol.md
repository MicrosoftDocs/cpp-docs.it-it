---
description: Altre informazioni su:/QIfist (non visualizzare _ftol)
title: /QIfist (Elimina _ftol)
ms.date: 11/04/2016
f1_keywords:
- /qifist
helpviewer_keywords:
- QIfist compiler option [C++]
- -QIfist compiler option [C++]
- /QIfist compiler option [C++]
ms.assetid: 1afd32a5-f658-4b66-85f4-e0ce4cb955bd
ms.openlocfilehash: 79e9242d66b532f558307d05b222b2fd8cfd43ab
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225648"
---
# <a name="qifist-suppress-_ftol"></a>/QIfist (Elimina _ftol)

Deprecato. Disattiva la chiamata della funzione helper `_ftol` quando è necessario eseguire una conversione da un tipo a virgola mobile a un tipo integrale.

## <a name="syntax"></a>Sintassi

```
/QIfist
```

## <a name="remarks"></a>Osservazioni

> [!NOTE]
> **/QIfist** è disponibile solo nel compilatore destinato a x86. Questa opzione del compilatore non è disponibile nei compilatori destinati a x64 orARM.

Oltre a eseguire la conversione da un tipo a virgola mobile a un tipo integrale, la `_ftol` funzione garantisce che la modalità di arrotondamento dell'unità a virgola mobile (FPU) sia verso zero (troncamento), impostando bits 10 e 11 della parola di controllo. Ciò garantisce che la conversione da un tipo a virgola mobile a un tipo integrale avvenga come descritto dallo standard ANSI C (la parte frazionaria del numero viene scartata). Quando si usa **/QIfist**, questa garanzia non è più applicabile. La modalità di arrotondamento sarà uno dei quattro come documentato nei manuali di riferimento di Intel:

- Arrotonda verso il più vicino (numero pari se equidistante)

- Arrotonda verso l'infinito negativo

- Arrotonda verso l'infinito positivo

- Arrotonda verso zero

È possibile utilizzare la funzione [_control87, _controlfp \_ _control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md) C Run-Time per modificare il comportamento di arrotondamento della FPU. La modalità di arrotondamento predefinita della FPU è "arrotonda verso più vicino". L'uso di **/QIfist** può migliorare le prestazioni dell'applicazione, ma non senza rischi. È consigliabile testare accuratamente le parti del codice sensibili alle modalità di arrotondamento prima di basarsi sul codice compilato con **/QIfist** negli ambienti di produzione.

[/Arch (x86)](arch-x86.md) e **/QIfist** non possono essere usati nello stesso modulo.

> [!NOTE]
> **/QIfist** non è attivo per impostazione predefinita perché i bit di arrotondamento influiscono anche su un arrotondamento a virgola mobile a virgola mobile (che si verifica dopo ogni calcolo), pertanto quando si impostano i flag per l'arrotondamento di tipo C (verso zero), i calcoli a virgola mobile potrebbero essere diversi. **/QIfist** non deve essere usato se il codice dipende dal comportamento previsto del troncamento della parte frazionaria del numero a virgola mobile. In caso di dubbi, non usare **/QIfist**.

L'opzione **/QIfist** è deprecata a partire da Visual Studio 2005. Il compilatore ha migliorato significativamente la velocità di conversione da float a int. Per un elenco delle opzioni del compilatore deprecate, vedere Opzioni del compilatore **deprecate e rimosse** nelle [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni/q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
