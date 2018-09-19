---
title: -Zo (Ottimizza il debug) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- -Zo
- /Zo
dev_langs:
- C++
helpviewer_keywords:
- Zo compiler option [C++]
- /Zo compiler option [C++]
- -Zo compiler option [C++]
ms.assetid: eea8d89a-7fe0-4fe1-86b2-7689bbebbd7f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1b40f7b4fff1d6df6f5fb818e090ce687f12a7b4
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412787"
---
# <a name="zo-enhance-optimized-debugging"></a>/Zo (Ottimizzare il debug)

Genera informazioni di debug avanzate per il codice ottimizzato nelle compilazioni non di debug.

## <a name="syntax"></a>Sintassi

```cpp
/Zo[-]
```

## <a name="remarks"></a>Note

Il **/Zo** opzione del compilatore genera le informazioni di debug avanzate per il codice ottimizzato. L'ottimizzazione può usare i registri per le variabili locali, riordinare il codice, vettorizzare i cicli e rendere inline le chiamate di funzione. Queste ottimizzazioni possono nascondere la relazione tra il codice sorgente e il codice oggetto compilato. Il **/Zo** commutatore indica al compilatore di generare informazioni di debug aggiuntive per le variabili locali e le funzioni rese inline. Usarla per visualizzare le variabili nel **Auto**, **variabili locali**, e **Watch** windows se si esegue il codice nel debugger di Visual Studio ottimizzato. Consente anche le analisi dello stack per mostrare le funzioni rese inline nel debugger WinDBG. Le build che sono disabilitate le ottimizzazioni di debug ([/Od](../../build/reference/od-disable-debug.md)) non è necessario le informazioni di debug aggiuntive generate quando si **/Zo** è specificato. Usare la **/Zo** switch per eseguire il debug delle configurazioni di rilascio con l'ottimizzazione attivata. Per altre informazioni sulle opzioni di ottimizzazione, vedere [Opzioni /O (Ottimizza codice)](../../build/reference/o-options-optimize-code.md). Il **/Zo** opzione è abilitata per impostazione predefinita in Visual Studio quando si specificano le informazioni di debug con **/Zi** oppure **/Z7**. Specificare **/Zo-** disabilitare in modo esplicito questa opzione del compilatore.

Il **/Zo** commutatore è disponibile a partire da Visual Studio 2013 Update 3 e sostituisce precedentemente non documentati **/d2Zi+** passare.

### <a name="to-set-the-zo-compiler-option-in-visual-studio"></a>Per impostare l'opzione /Zo del compilatore in Visual Studio

1. Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione**, **C/C++** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere `/Zo` e quindi scegliere **OK**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (ottimizza codice)](../../build/reference/o-options-optimize-code.md)<br/>
[/Z7, /Zi, /ZI (Formato informazioni di debug)](../../build/reference/z7-zi-zi-debug-information-format.md)<br/>
[Modifica e continuazione](/visualstudio/debugger/edit-and-continue)