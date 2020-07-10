---
title: /Og (Ottimizzazioni globali)
description: Descrive l'opzione del compilatore MSVC deprecata/og, in precedenza utilizzata per abilitare le ottimizzazioni globali.
ms.date: 07/08/2020
f1_keywords:
- VC.Project.VCCLCompilerTool.GlobalOptimizations
- /og
helpviewer_keywords:
- -Og compiler option [C++]
- global optimizations compiler option [C++]
- automatic register allocation
- /Og compiler option [C++]
- loop structures, optimizing
- common subexpression elimination
- Og compiler option [C++]
ms.assetid: d10630cc-b9cf-4e97-bde3-8d7ee79e9435
ms.openlocfilehash: c1cab53ccb391bd7d6ca7660e2750f53aa7c72e4
ms.sourcegitcommit: 80c8a512b361bd84e38958beb1a1bf6db7434021
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/09/2020
ms.locfileid: "86180851"
---
# <a name="og-global-optimizations"></a>`/Og`(Ottimizzazioni globali)

Operazione deprecata. Fornisce le ottimizzazioni locali e globali, l'allocazione automatica della registrazione e l'ottimizzazione del ciclo. Si consiglia di utilizzare [ `/O1` (Riduci dimensione)](o1-o2-minimize-size-maximize-speed.md) o [ `/O2` (Ottimizza velocità)](o1-o2-minimize-size-maximize-speed.md) .

## <a name="syntax"></a>Sintassi

> **`/Og`**

## <a name="remarks"></a>Osservazioni

**`/Og`** è deprecato. Queste ottimizzazioni sono ora abilitate per impostazione predefinita quando sono abilitate le ottimizzazioni. Per altre informazioni sulle ottimizzazioni, vedere [ `/O1` , `/O2` (ridurre le dimensioni, ottimizzare la velocità)](o1-o2-minimize-size-maximize-speed.md)o [ `/Ox` (abilitare la maggior parte delle ottimizzazioni della velocità)](ox-full-optimization.md).

In sono disponibili le ottimizzazioni seguenti **`/Og`** :

- Eliminazione di sottoespressione comune globale e locale

   In questa ottimizzazione, il valore di una sottoespressione comune viene calcolato una sola volta. Nell'esempio seguente, se i valori di `b` e `c` non cambiano tra le tre espressioni, il compilatore può assegnare il calcolo di `b + c` a una variabile temporanea e usare tale variabile per `b + c` :

    ```C
    a = b + c;
    d = b + c;
    e = b + c;
    ```

   Per l'ottimizzazione della sottoespressione comune locale, il compilatore esamina brevi sezioni di codice per sottoespressioni comuni. Per l'ottimizzazione della sottoespressione comune globale, il compilatore esegue la ricerca di funzioni intere per sottoespressioni comuni.

- Allocazione automatica registro

   Questa ottimizzazione consente al compilatore di archiviare variabili e sottoespressioni utilizzate di frequente nei registri; la `register` parola chiave viene ignorata.

- Ottimizzazione del ciclo

   Questa ottimizzazione rimuove le sottoespressioni invarianti dal corpo di un ciclo. Un ciclo ottimale contiene solo espressioni i cui valori cambiano a ogni esecuzione del ciclo. Nell'esempio seguente l'espressione `x + y` non cambia nel corpo del ciclo:

    ```C
    i = -100;
    while( i < 0 ) {
        i += x + y;
    }
    ```

   Dopo l'ottimizzazione, `x + y` viene calcolato una volta anziché ogni volta che viene eseguito il ciclo:

    ```C
    i = -100;
    t = x + y;
    while( i < 0 ) {
        i += t;
    }
    ```

   L'ottimizzazione del ciclo è molto più efficace quando il compilatore non può presupporre nessun alias, impostato con [`__restrict`](../../cpp/extension-restrict.md) , [`noalias`](../../cpp/noalias.md) o [`restrict`](../../cpp/restrict.md) .

   > [!NOTE]
   > È possibile abilitare o disabilitare l'ottimizzazione globale in base a una funzione per funzione utilizzando il `optimize` pragma insieme all' `g` opzione.

Per informazioni correlate, vedere [ `/Oi` (genera funzioni intrinseche)](oi-generate-intrinsic-functions.md) e [ `/Ox ` (Abilita la maggior parte delle ottimizzazioni della velocità)](ox-full-optimization.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Immettere l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
