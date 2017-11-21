---
title: Errore dell'analizzatore di espressioni CXX0017 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: CXX0017
dev_langs: C++
helpviewer_keywords:
- CAN0017
- CXX0017
ms.assetid: af74db02-a64d-49ca-8363-3e044a107580
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2b1e7901f46aacbcac73a7d2b6a3e5f033d1526c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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