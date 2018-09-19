---
title: Errore dell'analizzatore di espressioni CXX0017 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0017
dev_langs:
- C++
helpviewer_keywords:
- CAN0017
- CXX0017
ms.assetid: af74db02-a64d-49ca-8363-3e044a107580
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 431071137fb3f5b1b276327ee7d21f323ac24c5b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46136244"
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