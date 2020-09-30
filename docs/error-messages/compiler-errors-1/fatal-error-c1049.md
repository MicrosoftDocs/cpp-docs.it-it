---
title: Errore irreversibile C1049
description: Descrive l'errore irreversibile del compilatore C1049, un argomento numerico non valido e spiega come risolverlo.
ms.date: 11/04/2019
f1_keywords:
- C1049
helpviewer_keywords:
- C1049
ms.openlocfilehash: 9b3cbe5d081e32680e5408fc4a6ddcd932db77a2
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91503274"
---
# <a name="fatal-error-c1049"></a>Errore irreversibile C1049

> argomento numerico '*value*' non valido

Il CL.EXE parser della riga di comando ha trovato il *valore* in cui era previsto un argomento numerico.

È possibile che si verifichi un errore C1049 quando il compilatore non riesce a trovare un argomento numerico per una di queste opzioni del compilatore:

[/constExpr: profondità](../../build/reference/constexpr-control-constexpr-evaluation.md)\
[/constExpr: backtrace](../../build/reference/constexpr-control-constexpr-evaluation.md)\
[/constExpr: passaggi](../../build/reference/constexpr-control-constexpr-evaluation.md)

Le opzioni del compilatore da riga di comando che prevedono un argomento numerico possono anche indicare `Command line error D8004` ,, `Command line error D8021` `Command line warning D9002` , `Command line warning D9014` o `Command line warning D9024` .

Per correggere l'errore, esaminare la riga di comando per gli argomenti smarriti o mancanti. Verificare che non sia presente uno spazio vuoto imprevisto tra opzioni e argomenti. La riga di comando finale può essere generata da macro, variabili di ambiente o altre operazioni del sistema di compilazione. Per questo motivo è importante esaminare la riga di comando effettiva passata al compilatore.

- Nei file di comando o nei makefile è possibile usare un comando **echo** per segnalare la riga di comando effettiva.

- In Visual Studio aprire la finestra di dialogo **pagine delle proprietà** del progetto. Nella **Configuration Properties**  >  pagina generale di proprietà di configurazione**C/C++**  >  **General** modificare la proprietà non **visualizzare il banner di avvio** su **No**. Scegliere **OK** per salvare le modifiche. La finestra di **output** Mostra ora la riga di comando quando si compila, subito dopo la linea di copyright.

Per visualizzare i comandi effettivi usati, altri sistemi di compilazione possono avere file di log o opzioni dettagliate. Per informazioni, vedere la documentazione del sistema di compilazione.
