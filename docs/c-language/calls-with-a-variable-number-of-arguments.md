---
title: Chiamate con un numero variabile di argomenti | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- arguments [C++], function
- arguments [C++], variable number of
- VARARGS.H
- ellipses (...), variable number of arguments
- STDARGS.H
- function calls, arguments
- '... ellipsis'
- function calls, variable number of arguments
ms.assetid: 8808fb26-4822-42f5-aba3-ac64b54e151b
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 10f2eb4597808f726d55c3ece76b99c394d691c3
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="calls-with-a-variable-number-of-arguments"></a>Chiamate con un numero variabile di argomenti
Un elenco di parametri parziale può essere terminato dalla notazione con i puntini di sospensione, una virgola seguita da tre punti (**, ...**), per indicare che potrebbero esserci altri argomenti passati alla funzione, ma su tali argomenti non viene specificata nessun'altra informazione. Su tali argomenti non viene eseguito il controllo dei tipi. Almeno un parametro deve precedere la notazione con i puntini di sospensione e tale notazione deve essere l'ultimo token nell'elenco di parametri. Senza la notazione con i puntini di sospensione, il comportamento di una funzione non è definito se riceve i parametri oltre a quelli dichiarati nell'elenco di parametri.  
  
 Per chiamare una funzione con un numero variabile di argomenti, specificare un numero qualsiasi di argomenti nella chiamata di funzione. Un esempio è rappresentato dalla funzione `printf` dalla libreria di runtime del linguaggio C. La chiamata di funzione deve includere un argomento per ogni nome del tipo dichiarato nell'elenco di parametri o nell'elenco dei tipi di argomento.  
  
 Tutti gli argomenti specificati nella chiamata di funzione vengono inseriti nello stack a meno che non venga specificata la convenzione di chiamata `__fastcall`. Il numero di parametri dichiarati per la funzione determina il numero di argomenti estratti dallo stack e assegnati ai parametri. L'utente deve recuperare tutti gli argomenti aggiuntivi dallo stack e determinare il numero di argomenti presenti. Il file STDARG.H contiene macro stile ANSI per accedere agli argomenti delle funzioni che accettano un numero variabile di argomenti. Inoltre, le macro stile XENIX in VARARGS.H sono ancora supportate.  
  
 Questa dichiarazione di esempio si riferisce a una funzione che chiama un numero variabile di argomenti:  
  
```  
int average( int first, ...);  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamate di funzione](../c-language/function-calls.md)
