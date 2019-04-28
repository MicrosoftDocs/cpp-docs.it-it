---
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
ms.openlocfilehash: 6b7d043e00204fa191530f03bbed069d71a25fc5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62293823"
---
# <a name="diagnostics-compiler-diagnostic-options"></a>/Diagnostics (opzioni di diagnostica del compilatore)

Usare la **/diagnostics** opzione del compilatore per specificare la visualizzazione delle informazioni di percorso di errore e avviso.

## <a name="syntax"></a>Sintassi

```
/diagnostics:{caret|classic|column}
```

## <a name="remarks"></a>Note

Questa opzione è supportata in Visual Studio 2017 e versioni successive.

Il **/diagnostics** opzione del compilatore determina la visualizzazione dell'errore e le informazioni sull'avviso.

Il **/diagnostics:classic** opzione è l'impostazione predefinita, che indica solo il numero di riga in cui è stato trovato il problema.

Il **/diagnostics:column** opzione include anche la colonna in cui è stato trovato il problema. Ciò consente di identificare il costrutto di linguaggio specifico o un carattere che causa il problema.

Il **/diagnostics:caret** opzione include la colonna in cui il problema è stato trovato e inserisce un accento circonflesso (^) sotto la posizione della riga di codice in cui è stato rilevato il problema.

Si noti che in alcuni casi, il compilatore non rileva un problema in cui si è verificato. Ad esempio, un punto e virgola mancante non può essere rilevato fino a quando non sono stati rilevati i simboli di altre e imprevisti. La colonna viene restituita e il punto di inserimento viene posizionato in cui il compilatore ha rilevato che qualcosa è sbagliato, che non è sempre in cui è necessario apportare la correzione.

Il **/diagnostics** opzione è disponibile a partire da Visual Studio 2017.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire il progetto **pagine delle proprietà** nella finestra di dialogo.

1. Sotto **le proprietà di configurazione**, espandere il **C/C++** cartella e scegliere il **generali** pagina delle proprietà.

1. Usare il controllo elenco a discesa nel **formato diagnostica** campo per selezionare una diagnostica visualizzare l'opzione. Scegli **OK** oppure **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
