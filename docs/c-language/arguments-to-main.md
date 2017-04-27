---
title: Argomenti passati a main | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 39824fef-05ad-461d-ae82-49447dda8060
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 338aa70c280b7638369443b66714c82b7a149d51
ms.lasthandoff: 04/01/2017

---
# <a name="arguments-to-main"></a>Argomenti passati a main
**ANSI 2.1.2.2.1** La semantica degli argomenti passati a main  
  
 In Microsoft C la funzione chiamata all'avvio del programma è denominata **main**. Non esiste alcun prototipo dichiarato per **main** e può essere definita con zero, due o tre parametri:  
  
```  
int main( void )  
int main( int argc, char *argv[] )  
int main( int argc, char *argv[], char *envp[] )  
```  
  
 La terza riga precedente, in cui **main** accetta tre parametri, è un'estensione Microsoft allo standard ANSI C. Il terzo parametro, **envp**, è una matrice di puntatori alle variabili di ambiente. La matrice **envp** viene interrotta da un puntatore Null. Per altre informazioni su **main** e **envp**, vedere [Funzione main ed esecuzione di programmi](../c-language/main-function-and-program-execution.md).  
  
 La variabile **argc** non contiene mai un valore negativo.  
  
 La matrice di stringhe termina con **argv[argc]** che contiene un puntatore Null.  
  
 Tutti gli elementi della matrice **argv** sono puntatori alle stringhe.  
  
 Un programma richiamato senza argomenti della riga di comando riceverà un valore di uno per **argc**, quando il nome del file eseguibile viene posizionato in **argv[0]**. (In MS-DOS versione precedente alla 3.0, il nome del file eseguibile non è disponibile. La lettera "C" è inserita in **argv[0]**). Le stringhe puntate da **argv[1]** ad **argv[argc - 1]** rappresentano i parametri del programma.  
  
 I parametri **argc** e **argv** sono modificabili e mantengono i valori archiviati per ultimi tra l'avvio del programma e la chiusura del programma.  
  
## <a name="see-also"></a>Vedere anche  
 [Ambiente](../c-language/environment.md)
