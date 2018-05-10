---
title: Argomenti passati a main | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 39824fef-05ad-461d-ae82-49447dda8060
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 544b5eaba49fff0a5f2b3111c2a5f7fe42c9b2ee
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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