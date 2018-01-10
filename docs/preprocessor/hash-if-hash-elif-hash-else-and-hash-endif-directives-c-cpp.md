---
title: '#<a name="if-elif-else-and-endif-directives-cc--microsoft-docs"></a>Se, #elif, #else e # #endif (C/C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- '#else'
- '#endif'
- '#if'
- '#elif'
- defined
- __has_include
dev_langs: C++
helpviewer_keywords:
- '#elif directive'
- conditional compilation, directives
- endif directive (#endif)
- preprocessor, directives
- '#else directive'
- '#endif directive'
- if directive (#if)
- else directive (#else)
- '#if directive'
- elif directive (#elif)
- defined directive
ms.assetid: c77a175f-6ca8-47d4-8df9-7bac5943d01b
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8acd8444295175e6aa9fe329e7851456fcd5f7c4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="if-elif-else-and-endif-directives-cc"></a>Direttive #if, #elif, #else e #endif (C/C++)
La direttiva `#if`, con le direttive `#elif`, `#else` e `#endif`, controlla la compilazione di parti di un file di origine. Se l'espressione scritta (dopo `#if`) presenta un valore diverso da zero, il gruppo di righe immediatamente successivo alla direttiva `#if` viene mantenuto nell'unità di conversione.  
  
## <a name="grammar"></a>Grammatica  
 *condizionale* :  
 *Se parte elif-parti*opt*parte else*opt*endif riga*  
  
 *Se parte* :  
 *testo della riga di if*  
  
 *Se-line* :  
 **#if***espressione costante*   
  
 **#ifdef***identificatore*   
  
 **#ifndef***identificatore*   
  
 *elif parti* :  
 *testo della riga di elif*  
  
 *testo della riga di elif elif parti*  
  
 *elif riga* :  
 **#elif***espressione costante*   
  
 *parte else* :  
 *testo riga else*  
  
 *riga else* :  
 `#else`  
  
 *endif riga* :  
 `#endif`  
  
 Ogni direttiva `#if` in un file di origine deve corrispondere a una direttiva `#endif` di chiusura. Tra le direttive `#elif` e `#if` può essere presente un numero qualsiasi di direttive `#endif`, ma è consentita al massimo una direttiva `#else`. La direttiva `#else`, se disponibile, deve essere l'ultima direttiva prima di `#endif`.  
  
 Le direttive `#if`, `#elif`, `#else` e `#endif` possono essere annidate in parti di testo di altre direttive `#if`. Ciascuna direttiva `#else`, `#elif` o `#endif` annidata appartiene alla direttiva `#if` precedente più vicina.  
  
 Tutte le direttive di compilazione condizionale, ad esempio `#if` e **#ifdef**, deve essere associato a chiusura `#endif` direttive prima della fine del file; in caso contrario, viene generato un messaggio di errore. Quando le direttive di compilazione condizionale sono contenute in file di inclusione, devono soddisfare le stesse condizioni: non devono esistere direttive di compilazione condizionale non corrispondenti alla fine del file di inclusione.  
  
 Sostituzione della macro viene eseguita all'interno della parte della riga di comando che segue un `#elif` comando, è possibile usare una chiamata di macro nel *espressione costante*.  
  
 Il preprocessore seleziona una delle occorrenze determinate *testo* per un'ulteriore elaborazione. Un blocco specificato in *testo* può essere qualsiasi sequenza di testo. Può occupare più righe. In genere *testo* è il testo di programma che ha un significato al compilatore o il preprocessore.  
  
 Il preprocessore elabora selezionato *testo* e lo passa al compilatore. Se *testo* contiene direttive del preprocessore, i preprocessore esegue tali direttive. Solo i blocchi di testo selezionati dal preprocessore vengono compilati.  
  
 Il preprocessore seleziona un singolo *testo* elemento valutando l'espressione costante che segue ogni `#if` o `#elif` direttiva finché trova l'espressione costante true (diverso da zero). Seleziona tutto il testo (incluse altre direttive del preprocessore che iniziano con  **#** ) fino a essa associati `#elif`, `#else`, o `#endif`.  
  
 Se tutte le occorrenze di *espressione costante* sono false, o se nessun `#elif` direttive, il preprocessore seleziona il blocco di testo dopo il `#else` clausola. Se il `#else` clausola viene omessa e tutte le istanze di *espressione costante* nel `#if` blocco sono false, non viene selezionato alcun blocco di testo.  
  
 Il *espressione costante* è un'espressione costante integer con queste ulteriori restrizioni:  
  
-   Le espressioni devono avere un tipo integrale e possono includere solo le costanti integer, costanti carattere e **definito** operatore.  
  
-   L'espressione non può utilizzare `sizeof` o un operatore di cast di tipo.  
  
-   È possibile che l'ambiente di destinazione non sia in grado di rappresentare tutti gli intervalli di Integer.  
  
-   La traslazione rappresenta il tipo `int` identico al tipo **lungo**, e `unsigned int` identico `unsigned long`.  
  
-   Il convertitore può traslare le costanti carattere in un set di valori di codice diverso dal set per l'ambiente di destinazione. Per determinare le proprietà dell'ambiente di destinazione, verificare i valori delle macro da LIMITS.H in un'applicazione sviluppata per l'ambiente di destinazione.  
  
-   L'espressione non deve eseguire alcuna analisi di ambiente e deve rimanere isolata dai dettagli di implementazione nel computer di destinazione.  

## <a name="defined"></a>definizione  
 L'operatore del preprocessore **definito** può essere utilizzato nelle espressioni costanti speciali, come indicato dalla sintassi seguente:  
  
 defined( `identifier` )  
  
 defined `identifier`  
  
 Questa espressione costante è considerata true (diverso da zero) se il *identificatore* è attualmente definito; in caso contrario, la condizione è false (0). Un identificatore definito come testo vuoto viene considerato definito. Il **definito** direttiva può essere utilizzata un `#if` e `#elif` direttiva, ma non altrove.  
  
 Nell'esempio seguente, le direttive `#if` e `#endif` controllano la compilazione di una delle tre chiamate di funzioni:  
  
```  
#if defined(CREDIT)  
    credit();  
#elif defined(DEBIT)  
    debit();  
#else  
    printerror();  
#endif  
```  
  
 La chiamata di funzione a `credit` viene compilata se è definito l'identificatore `CREDIT`. Se è definito l'identificatore `DEBIT`, viene compilata la chiamata di funzione a `debit`. Se non viene definito alcun identificatore, viene compilata la chiamata a `printerror`. Si noti che `CREDIT` e `credit` sono identificatori distinti nei linguaggi C e C++ poiché i casi sono diversi.  
  
 Per le istruzioni di compilazione condizionali nell'esempio seguente si presuppone una costante simbolica precedentemente definita, denominata `DLEVEL`.  
  
```  
#if DLEVEL > 5  
    #define SIGNAL  1  
    #if STACKUSE == 1  
        #define STACK   200  
    #else  
        #define STACK   100  
    #endif  
#else  
    #define SIGNAL  0  
    #if STACKUSE == 1  
        #define STACK   100  
    #else  
        #define STACK   50  
    #endif  
#endif  
#if DLEVEL == 0  
    #define STACK 0  
#elif DLEVEL == 1  
    #define STACK 100  
#elif DLEVEL > 5  
    display( debugptr );  
#else  
    #define STACK 200  
#endif  
```  
  
 Il primo blocco `#if` mostra due set di direttive `#if`, `#else` e `#endif` annidate. Il primo set delle direttive viene elaborato solo se `DLEVEL > 5` è true. In caso contrario, le istruzioni dopo #**else** vengono elaborati.  
  
 Le direttive `#elif` e `#else` nel secondo esempio sono utilizzate per scegliere una delle quattro possibilità in base al valore di `DLEVEL`. La costante `STACK` è impostata su 0, 100 o 200, a seconda della definizione di `DLEVEL`. Se `DLEVEL` è maggiore di 5, allora l'istruzione  
  
```  
#elif DLEVEL > 5  
display(debugptr);  
```  
  
 verrà compilata e `STACK` non è definito.  
  
 Generalmente la compilazione condizionale viene utilizzata per evitare più inclusioni dello stesso file di intestazione. In C++, in cui le classi sono spesso definite in file di intestazione, è possibile utilizzare costrutti come quelli riportati di seguito per impedire più definizioni:  
  
```  
/*  EXAMPLE.H - Example header file  */  
#if !defined( EXAMPLE_H )  
#define EXAMPLE_H  
  
class Example  
{  
...  
};  
  
#endif // !defined( EXAMPLE_H )  
```  
  
 Il codice precedente verifica se la costante simbolica `EXAMPLE_H` è definita. In questo caso, il file è già stato incluso e non deve essere rielaborato. In caso contrario, la costante `EXAMPLE_H` viene definita per contrassegnare EXAMPLE.H come già elaborato.  

## <a name="hasinclude"></a>__has_include
**Visual Studio 2017 15.3 e versioni successive**: determina se un'intestazione di libreria è disponibile per l'inclusione:  

```cpp
#ifdef __has_include
#  if __has_include(<filesystem>)
#    include <filesystem>
#    define have_filesystem 1
#  elif __has_include(<experimental/filesystem>)
#    include <experimental/filesystem>
#    define have_filesystem 1
#    define experimental_filesystem
#  else
#    define have_filesystem 0
#  endif
#endif
```
  
## <a name="see-also"></a>Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)