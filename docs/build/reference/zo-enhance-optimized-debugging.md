---
description: Altre informazioni su:/zo (Ottimizza il debug)
title: /Zo (Ottimizzare il debug)
ms.date: 11/04/2016
f1_keywords:
- -Zo
- /Zo
helpviewer_keywords:
- Zo compiler option [C++]
- /Zo compiler option [C++]
- -Zo compiler option [C++]
ms.assetid: eea8d89a-7fe0-4fe1-86b2-7689bbebbd7f
ms.openlocfilehash: b2d5fb37205a6cf58492d7e6bc9080867ebacf54
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224348"
---
# <a name="zo-enhance-optimized-debugging"></a>/Zo (Ottimizzare il debug)

Genera informazioni di debug avanzate per il codice ottimizzato nelle compilazioni non di debug.

## <a name="syntax"></a>Sintassi

```cpp
/Zo[-]
```

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore **/zo** genera informazioni di debug avanzate per il codice ottimizzato. L'ottimizzazione può usare i registri per le variabili locali, riordinare il codice, vettorizzare i cicli e rendere inline le chiamate di funzione. Queste ottimizzazioni possono nascondere la relazione tra il codice sorgente e il codice oggetto compilato. L'opzione **/zo** indica al compilatore di generare informazioni di debug aggiuntive per le variabili locali e le funzioni inline. Usarlo per visualizzare le variabili nelle finestre **auto**, variabili **locali** ed **espressioni di controllo** quando si esegue il codice ottimizzato nel debugger di Visual Studio. Consente anche le analisi dello stack per mostrare le funzioni rese inline nel debugger WinDBG. Per le compilazioni di debug con ottimizzazioni disabilitate ([/od](od-disable-debug.md)) non sono necessarie le informazioni di debug aggiuntive generate quando si specifica **/zo** . Usare l'opzione **/zo** per eseguire il debug delle configurazioni di rilascio con l'ottimizzazione attivata. Per ulteriori informazioni sulle opzioni di ottimizzazione, vedere [Opzioni/o (Ottimizza codice)](o-options-optimize-code.md). L'opzione **/zo** è abilitata per impostazione predefinita in Visual Studio quando si specificano le informazioni di debug con **/Zi** o **/Z7**. Specificare **/zo-** per disabilitare in modo esplicito questa opzione del compilatore.

L'opzione **/zo** è disponibile a partire da Visual Studio 2013 Update 3 e sostituisce l'opzione **/d2Zi +** non documentata in precedenza.

### <a name="to-set-the-zo-compiler-option-in-visual-studio"></a>Per impostare l'opzione /Zo del compilatore in Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **proprietà di configurazione**, **C/C++** .

1. Selezionare la pagina delle proprietà **riga di comando** .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere `/Zo` , quindi scegliere **OK**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni/o (Ottimizza codice)](o-options-optimize-code.md)<br/>
[/Z7,/Zi,/ZI (formato informazioni di debug)](z7-zi-zi-debug-information-format.md)<br/>
[Modifica e continuazione](/visualstudio/debugger/edit-and-continue)
