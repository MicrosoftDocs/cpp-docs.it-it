---
title: '#Se, #elif, #else e #endif direttive (C/C++)'
ms.date: 11/04/2016
f1_keywords:
- '#else'
- '#endif'
- '#if'
- '#elif'
- defined
- __has_include
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
ms.openlocfilehash: 90fbab45c6408c30198c2a52a42545718002cc11
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59028091"
---
# <a name="if-elif-else-and-endif-directives-cc"></a>Direttive #if, #elif, #else e #endif (C/C++)

Il **#if** direttiva, con la **#elif**, **#else**, e **#endif** direttive, controlla la compilazione di parti di un file di origine. Se l'espressione scritta (dopo il **#if**) ha un valore diverso da zero, il gruppo di linee subito dopo la **#if** direttiva viene mantenuta nell'unità di conversione.

## <a name="grammar"></a>Grammatica

*condizionale* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Se parti elif-part*<sub>opt</sub> *parte else*<sub>opt</sub> *endif-line*

*if-part* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*testo a riga singola if*

*if-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#if**  *constant-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#ifdef**  *identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#ifndef**  *identifier*

*elif parti* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*testo a riga singola elif*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*testo a riga singola elif elif parti*

*elif-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#elif**  *constant-expression*

*parte else* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*testo riga else*

*Else-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#else**

*endif-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#endif**

Ciascuna **#if** direttiva in un file di origine deve essere corrisposte da una chiusura **#endif** direttiva. Un numero qualsiasi di **#elif** direttive possono apparire tra le **#if** e **#endif** direttive, ma al massimo uno **#else** direttiva è consentita. Il **#else** direttiva, se presente, deve essere l'ultima direttiva prima **#endif**.

Il **#if**, **#elif**, **#else**, e **#endif** direttive possono essere annidate in parti di testo da altro **#if**direttive. Ogni annidati **#else**, **#elif**, o **#endif** direttiva a cui appartiene il precedente più vicina **#if** direttiva.

Tutte le direttive di compilazione condizionale, ad esempio **#if** e **#ifdef**, deve essere associata a chiusura **#endif** direttive prima della fine del file; in caso contrario, un errore messaggio viene generato. Quando le direttive di compilazione condizionale sono contenute in file di inclusione, devono soddisfare le stesse condizioni: Non deve essere presente alcun direttive di compilazione condizionale senza corrispondenza alla fine del file di inclusione.

Sostituzione della macro viene eseguita all'interno della parte della riga di comando che segue un' **#elif** comando, in modo che una chiamata della macro può essere usata nel *espressione costante*.

Il preprocessore seleziona una delle occorrenze specificate di *testo* per un'ulteriore elaborazione. Un blocco specificato in *testo* può essere qualsiasi sequenza di testo. Può occupare più righe. In genere *testo* è testo di programma utile al compilatore o al preprocessore.

Il preprocessore elabora selezionato *testo* e lo passa al compilatore. Se *testo* contiene le direttive del preprocessore, le eseguirà tali direttive. Solo i blocchi di testo selezionati dal preprocessore vengono compilati.

Il preprocessore seleziona un singolo *testo* elemento valutando l'espressione costante che segue ogni **#if** oppure **#elif** direttiva finché non trova una costante true (diverso da zero) espressione. Seleziona tutto il testo (incluse altre direttive del preprocessore che iniziano con **#**) fino a esso associata **#elif**, **#else**, o **#endif** .

Se tutte le occorrenze di *espressione costante* sono false, o se nessun **#elif** direttive viene visualizzata, il preprocessore seleziona il blocco testo dopo la **#else** clausola. Se il **#else** clausola viene omessa e tutte le istanze di *espressione costante* nel **#if** blocco sono false, non viene selezionato alcun blocco testo.

Il *espressione costante* è un'espressione costante integer con queste ulteriori restrizioni:

- Le espressioni devono avere un tipo integrale e possono includere solo le costanti integer, costanti carattere e il **definiti** operatore.

- L'espressione non può utilizzare `sizeof` o un operatore di cast di tipo.

- È possibile che l'ambiente di destinazione non sia in grado di rappresentare tutti gli intervalli di Integer.

- La traslazione rappresenta il tipo **int** uguale al tipo **long**, e **unsigned int** identico **long senza segno**.

- Il convertitore può traslare le costanti carattere in un set di valori di codice diverso dal set per l'ambiente di destinazione. Per determinare le proprietà dell'ambiente di destinazione, verificare i valori delle macro da LIMITS.H in un'applicazione sviluppata per l'ambiente di destinazione.

- L'espressione non deve eseguire alcuna analisi di ambiente e deve rimanere isolata dai dettagli di implementazione nel computer di destinazione.

## <a name="defined"></a>definizione

L'operatore del preprocessore **definiti** può essere usato nelle espressioni costanti speciali, come illustrato dalla sintassi seguente:

defined( `identifier` )

definizione `identifier`

Questa espressione costante è considerata true (diverso da zero) se il *identificatore* è attualmente definito; in caso contrario, la condizione è false (0). Un identificatore definito come testo vuoto viene considerato definito. Il **definite** direttiva può essere utilizzata un **#if** e un **#elif** direttiva, ma non altrove.

Nell'esempio seguente, il **#if** e **#endif** direttive controllano la compilazione di uno dei tre chiamate di funzione:

```C
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

```C
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

Il primo **#if** vengono mostrate due set di nidificata **#if**, **#else**, e **#endif** direttive. Il primo set delle direttive viene elaborato solo se `DLEVEL > 5` è true. In caso contrario, le istruzioni successive **#else** vengono elaborati.

Il **#elif** e **#else** direttive nel secondo esempio vengono utilizzate per eseguire una delle quattro possibilità in base al valore di `DLEVEL`. La costante `STACK` è impostata su 0, 100 o 200, a seconda della definizione di `DLEVEL`. Se `DLEVEL` è maggiore di 5, allora l'istruzione

```C
#elif DLEVEL > 5
display(debugptr);
```

verrà compilata e `STACK` non è definito.

Generalmente la compilazione condizionale viene utilizzata per evitare più inclusioni dello stesso file di intestazione. In C++, in cui le classi sono spesso definite in file di intestazione, è possibile utilizzare costrutti come quelli riportati di seguito per impedire più definizioni:

```cpp
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

**Visual Studio 2017 versione 15.3 e successive**:  Determina se un'intestazione della libreria è disponibile per l'inclusione:

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