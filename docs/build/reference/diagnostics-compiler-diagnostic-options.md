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
ms.openlocfilehash: d9b485f749f4d4d9fce4e07d9bcd6d6de564fb58
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50531796"
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

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
