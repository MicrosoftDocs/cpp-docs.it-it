---
title: Errore dell‘analizzatore di espressioni CXX0017
ms.date: 11/04/2016
f1_keywords:
- CXX0017
helpviewer_keywords:
- CAN0017
- CXX0017
ms.assetid: af74db02-a64d-49ca-8363-3e044a107580
ms.openlocfilehash: 64ebce0161d67c298d55095f6bc409820120c34a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80196014"
---
# <a name="expression-evaluator-error-cxx0017"></a>Errore dell‘analizzatore di espressioni CXX0017

simbolo non trovato

Impossibile trovare un simbolo specificato in un'espressione.

Una delle possibili cause di questo errore è la mancata corrispondenza tra maiuscole e minuscole nel nome del simbolo. Dato che C C++ e sono linguaggi con distinzione tra maiuscole e minuscole, è necessario specificare un nome di simbolo nel caso esatto in cui è definito nell'origine.

Questo errore può verificarsi quando si tenta di typecast una variabile per controllare la variabile durante il debug. Il `typedef` dichiara un nuovo nome per un tipo, ma non definisce un nuovo tipo. Il tentativo di typecast nel debugger richiede il nome di un tipo definito.

Questo errore è identico a CAN0017.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Verificare che il simbolo sia già dichiarato nel punto del programma in cui viene usato.

1. Usare un nome di tipo effettivo per eseguire il cast delle variabili nel debugger, anziché un nome definito dall'`typedef`.
