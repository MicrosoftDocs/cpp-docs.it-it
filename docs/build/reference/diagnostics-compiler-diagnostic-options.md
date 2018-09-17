---
title: -diagnostics (opzioni del compilatore diagnostica) | Microsoft Docs
ms.custom: ''
ms.date: 11/11/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /diagnostics
- VC.Project.VCCLCompilerTool.DiagnosticsFormat
dev_langs:
- C++
helpviewer_keywords:
- /diagnostics compiler diagnostic options [C++]
- -diagnostics compiler diagnostic options [C++]
- diagnostics compiler diagnostic options [C++]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 97b5e3ef2e5c14ae93d4fcc3b016f4dbc955edbd
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45709163"
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

2. Sotto **le proprietà di configurazione**, espandere il **C/C++** cartella e scegliere il **generali** pagina delle proprietà.

3. Usare il controllo elenco a discesa nel **formato diagnostica** campo per selezionare una diagnostica visualizzare l'opzione. Scegli **OK** oppure **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)