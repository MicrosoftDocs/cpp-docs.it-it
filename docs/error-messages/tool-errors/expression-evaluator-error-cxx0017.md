---
title: Errore dell‘analizzatore di espressioni CXX0017
ms.date: 11/04/2016
f1_keywords:
- CXX0017
helpviewer_keywords:
- CAN0017
- CXX0017
ms.assetid: af74db02-a64d-49ca-8363-3e044a107580
ms.openlocfilehash: bbf16ae9a503a8525edb42d6bf1fc4336c3f5267
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50602531"
---
# <a name="expression-evaluator-error-cxx0017"></a>Errore dell‘analizzatore di espressioni CXX0017

simbolo non trovato

Non è stato trovato un simbolo specificato in un'espressione.

Una delle possibili cause di questo errore non case corrisponde al nome del simbolo. Poiché C e C++ sono linguaggi tra maiuscole e minuscole, un nome di simbolo deve essere specificato esattamente del caso in cui è definito nell'origine.

Questo errore può verificarsi durante il tentativo di cast di tipo una variabile per poter guardare la variabile durante il debug. Il `typedef` dichiara un nuovo nome per un tipo, ma non definisce un nuovo tipo. Il cast di tipo tentata nel debugger richiede il nome di un tipo definito.

Questo errore è identico all'errore CAN0017.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Assicurarsi che il simbolo è già dichiarato in corrispondenza del punto del programma in cui è in uso.

1. Per impostare le variabili nel debugger, utilizzare un nome di tipo effettivo anziché un `typedef`-nome definito.