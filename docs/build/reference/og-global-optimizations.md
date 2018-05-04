---
title: -Og (ottimizzazioni globali) | Documenti Microsoft
ms.custom: ''
ms.date: 09/22/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.GlobalOptimizations
- /og
dev_langs:
- C++
helpviewer_keywords:
- -Og compiler option [C++]
- global optimizations compiler option [C++]
- automatic register allocation
- /Og compiler option [C++]
- loop structures, optimizing
- common subexpression elimination
- Og compiler option [C++]
ms.assetid: d10630cc-b9cf-4e97-bde3-8d7ee79e9435
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 03ef87f31e478bfbc8691b7e678186dd1a0621e5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="og-global-optimizations"></a>/Og (Ottimizzazioni globali)

Deprecato. Fornisce le ottimizzazioni globali e locali, allocazione del registro automatica e ottimizzazione dei cicli. Si consiglia di usare uno [/O1 (Riduci dimensione)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) o [/O2 (Ottimizza velocità)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) invece.

## <a name="syntax"></a>Sintassi

> /Og

## <a name="remarks"></a>Note

**/Og** è deprecata. Queste ottimizzazioni in genere sono ora abilitate per impostazione predefinita. Per ulteriori informazioni sui tipi di ottimizzazione, vedere [/O1, /O2 (Riduci dimensione, Ottimizza velocità)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) o [/Ox (abilitare più velocità ottimizzazioni)](../../build/reference/ox-full-optimization.md).

Le ottimizzazioni seguenti sono disponibili in **/Og**:

- Eliminazione di sottoespressioni comuni globali e locali

     In questa ottimizzazione, il valore di una sottoespressione comune viene calcolato una volta. Nell'esempio seguente, se i valori di `b` e `c` non cambiano tra le tre espressioni, il compilatore può assegnare il calcolo di `b + c` a una variabile temporanea e sostituire la variabile per `b + c`:

    ```C
    a = b + c;
    d = b + c;
    e = b + c;
    ```

     Per l'ottimizzazione delle sottoespressioni comuni locale, il compilatore esamina brevi sezioni di codice di sottoespressioni comuni. Per l'ottimizzazione delle sottoespressioni comuni globali, il compilatore cerca intere funzioni delle sottoespressioni comuni.

- Allocazione del registro automatica

     Questa ottimizzazione consente al compilatore di variabili di archiviazione utilizzati di frequente e sottoespressioni nei registri. il `register` (parola chiave) viene ignorato.

- Ottimizzazione di ciclo

     Questa ottimizzazione rimuove le sottoespressioni invariant dal corpo di un ciclo. Un ciclo ottimale contiene solo le espressioni i cui valori cambiano in ogni esecuzione del ciclo. Nell'esempio seguente, l'espressione `x + y` non cambia nel corpo del ciclo:

    ```C
    i = -100;
    while( i < 0 ) {
        i += x + y;
    }
    ```

     Dopo l'ottimizzazione, `x + y` viene calcolata una sola volta anziché ogni volta che viene eseguito il ciclo:

    ```C
    i = -100;
    t = x + y;
    while( i < 0 ) {
        i += t;
    }
    ```

     Ottimizzazione di ciclo è molto più efficace quando il compilatore non può presuppone alcun alias, che è impostato con [Restrict](../../cpp/extension-restrict.md), [noalias](../../cpp/noalias.md), o [limitare](../../cpp/restrict.md).

    > [!NOTE]
    > È possibile abilitare o disabilitare l'ottimizzazione globale in una funzione per funzione usando il `optimize` pragma insieme con il `g` opzione.

 Per informazioni correlate, vedere [/Oi (genera funzioni intrinseche)](../../build/reference/oi-generate-intrinsic-functions.md) e [/Ox (abilitare più velocità ottimizzazioni)](../../build/reference/ox-full-optimization.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Immettere l'opzione del compilatore nel **opzioni aggiuntive** casella.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (ottimizza codice)](../../build/reference/o-options-optimize-code.md)

[Opzioni del compilatore](../../build/reference/compiler-options.md)

[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)