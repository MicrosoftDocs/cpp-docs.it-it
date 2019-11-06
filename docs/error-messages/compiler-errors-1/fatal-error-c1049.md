---
title: Errore irreversibile C1049
description: Descrive l'errore irreversibile del compilatore C1049, un argomento numerico non valido e spiega come risolverlo.
ms.date: 11/04/2019
f1_keywords:
- C1049
helpviewer_keywords:
- C1049
ms.openlocfilehash: f2669eec4bafb24f26c405d4fa74a96fe5337d13
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73633196"
---
# <a name="fatal-error-c1049"></a>Errore irreversibile C1049

> argomento numerico '*value*' non valido

CL. Il parser della riga di comando EXE ha rilevato un *valore* in cui era previsto un argomento numerico.

È possibile che si verifichi un errore C1049 quando il compilatore non riesce a trovare un argomento numerico per una di queste opzioni del compilatore:

[/constExpr: depth](/cpp/build/reference/constexpr-control-constexpr-evaluation)\
[/constExpr: backtrace](/cpp/build/reference/constexpr-control-constexpr-evaluation)\
[/constExpr: passaggi](/cpp/build/reference/constexpr-control-constexpr-evaluation)

Le opzioni del compilatore da riga di comando che prevedono un argomento numerico possono anche segnalare `Command line error D8004`, `Command line error D8021`, `Command line warning D9002`, `Command line warning D9014`o `Command line warning D9024`.

Per correggere l'errore, esaminare la riga di comando per gli argomenti smarriti o mancanti. Verificare che non sia presente uno spazio vuoto imprevisto tra opzioni e argomenti. La riga di comando finale può essere generata da macro, variabili di ambiente o altre operazioni del sistema di compilazione. Per questo motivo è importante esaminare la riga di comando effettiva passata al compilatore.

- Nei file di comando o nei makefile è possibile usare un comando **echo** per segnalare la riga di comando effettiva.

- In Visual Studio aprire la finestra di dialogo **pagine delle proprietà** del progetto. Nella pagina **proprietà di configurazione** > **CC++ /**  > **generale** modificare la proprietà non **visualizzare il banner di avvio** su **No**. Scegliere **OK** per salvare le modifiche. La finestra di **output** Mostra ora la riga di comando quando si compila, subito dopo la linea di copyright.

Per visualizzare i comandi effettivi usati, altri sistemi di compilazione possono avere file di log o opzioni dettagliate. Per informazioni, vedere la documentazione del sistema di compilazione.
