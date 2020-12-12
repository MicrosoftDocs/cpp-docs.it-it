---
description: Altre informazioni su:/Diagnostics (opzioni di diagnostica del compilatore)
title: /Diagnostics (opzioni di diagnostica del compilatore)
ms.date: 11/11/2016
f1_keywords:
- /diagnostics
- VC.Project.VCCLCompilerTool.DiagnosticsFormat
helpviewer_keywords:
- /diagnostics compiler diagnostic options [C++]
- -diagnostics compiler diagnostic options [C++]
- diagnostics compiler diagnostic options [C++]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
ms.openlocfilehash: 2c34edc0374e59720eb05e97379702833efaa703
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201417"
---
# <a name="diagnostics-compiler-diagnostic-options"></a>/Diagnostics (opzioni di diagnostica del compilatore)

Usare l'opzione del compilatore **/Diagnostics** per specificare la visualizzazione delle informazioni sul percorso di errore e di avviso.

## <a name="syntax"></a>Sintassi

```
/diagnostics:{caret|classic|column}
```

## <a name="remarks"></a>Osservazioni

Questa opzione è supportata in Visual Studio 2017 e versioni successive.

L'opzione del compilatore **/Diagnostics** controlla la visualizzazione delle informazioni sugli errori e sugli avvisi.

L'opzione **/Diagnostics: Classic** è l'impostazione predefinita, che indica solo il numero di riga in cui è stato rilevato il problema.

L'opzione **/Diagnostics: column** include anche la colonna in cui è stato rilevato il problema. Ciò consente di identificare il costrutto o il carattere di linguaggio specifico che causa il problema.

L'opzione **/Diagnostics: Caret** include la colonna in cui è stato rilevato il problema e inserisce un accento circonflesso (^) nella posizione nella riga di codice in cui è stato rilevato il problema.

Si noti che in alcuni casi il compilatore non rileva un problema in cui si è verificato. Un punto e virgola mancante, ad esempio, non può essere rilevato fino a quando non vengono rilevati altri simboli imprevisti. La colonna viene segnalata e il punto di inserimento viene inserito nel punto in cui il compilatore ha rilevato un errore, che non è sempre necessario per apportare la correzione.

L'opzione **/Diagnostics** è disponibile a partire da Visual Studio 2017.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** del progetto.

1. In **proprietà di configurazione** espandere la cartella **C/C++** e scegliere la pagina delle proprietà **generale** .

1. Usare il controllo elenco a discesa nel campo **formato di diagnostica** per selezionare un'opzione di visualizzazione di diagnostica. Scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
