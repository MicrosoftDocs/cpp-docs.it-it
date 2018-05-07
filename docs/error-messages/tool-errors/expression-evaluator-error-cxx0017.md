---
title: Errore dell'analizzatore di espressioni CXX0017 | Documenti Microsoft
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
ms.openlocfilehash: f7540dc701ffa6e0acb3d2661e1196e5f4552d2c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="expression-evaluator-error-cxx0017"></a>Errore dell‘analizzatore di espressioni CXX0017
simbolo non trovato  
  
 Un simbolo specificato in un'espressione non è stato trovato.  
  
 Una delle possibili cause di questo errore è una mancata corrispondenza tra il nome del simbolo case. Poiché C e C++ sono linguaggi tra maiuscole e minuscole, un nome di simbolo deve essere specificato esattamente del caso in cui è definito nell'origine.  
  
 Questo errore può verificarsi durante il tentativo di una variabile il cast di tipo per controllare la variabile durante il debug. Il `typedef` dichiara un nuovo nome per un tipo, ma viene definito un nuovo tipo. Il cast di tipo tentato durante il debug richiede il nome di un tipo definito.  
  
 Questo errore è identico all'errore CAN0017.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Verificare che il simbolo è già stato dichiarato nel punto del programma in cui è in uso.  
  
2.  Per eseguire il cast delle variabili nel debugger, utilizzare un nome di tipo effettivo anziché `typedef`-nome definito.