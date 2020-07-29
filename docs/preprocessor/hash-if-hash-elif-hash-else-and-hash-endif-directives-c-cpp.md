---
title: '#Direttive if, #elif, #else e #endif (C/C++)'
ms.date: 08/29/2019
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
ms.openlocfilehash: acbc54a80573bbbf29ad5cf67e7e5fd9351eeaa3
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231598"
---
# <a name="if-elif-else-and-endif-directives-cc"></a>direttive #if, #elif, #else e #endif (C/C++)

La direttiva **#if** , con le direttive **#elif**, **#else**e **#endif** , controlla la compilazione di parti di un file di origine. Se l'espressione scritta (dopo la **#if**) ha un valore diverso da zero, il gruppo di righe immediatamente dopo la direttiva **#if** viene mantenuto nell'unità di conversione.

## <a name="grammar"></a>Grammatica

*condizionale* : \
&nbsp;&nbsp;&nbsp;&nbsp;*if-part elif-* Parts<sub>opt</sub> *else-part*<sub>opt</sub> *endif-line*

*if-part* : \
&nbsp;&nbsp;&nbsp;&nbsp;*testo della riga if*

*if-line* : \
&nbsp;&nbsp;&nbsp;&nbsp;**#if** *espressione costante* #if\
&nbsp;&nbsp;&nbsp;&nbsp;**#ifdef** *identificatore* #ifdef\
&nbsp;&nbsp;&nbsp;&nbsp;**#ifndef** *identificatore* #ifndef

*parti Elif* : \
&nbsp;&nbsp;&nbsp;&nbsp;*testo della riga Elif*\
&nbsp;&nbsp;&nbsp;&nbsp;*Elif-parti Elif-testo riga*

*Elif-riga* : \
&nbsp;&nbsp;&nbsp;&nbsp;**#elif***espressione costante* #elif  

*else-parte* : \
&nbsp;&nbsp;&nbsp;&nbsp;*testo della riga else*

*else-riga* : \
&nbsp;&nbsp;&nbsp;&nbsp;**#else**

*endif-riga* : \
&nbsp;&nbsp;&nbsp;&nbsp;**#endif**

## <a name="remarks"></a>Osservazioni

Ogni direttiva **#if** in un file di origine deve corrispondere a una direttiva di chiusura **#endif** . È possibile visualizzare un numero qualsiasi di direttive **#elif** tra le direttive **#if** e **#endif** , ma è consentita al massimo una direttiva **#else** . La direttiva **#else** , se presente, deve essere l'ultima direttiva prima di **#endif**.

Le direttive **#if**, **#elif**, **#else**e **#endif** possono annidarsi nelle parti di *testo* di altre direttive **#if** . Ogni direttiva **#else**, **#elif**o **#endif** annidata appartiene alla direttiva **#if** precedente più vicina.

Tutte le direttive di compilazione condizionale, ad esempio **#if** e **#ifdef**, devono corrispondere a una direttiva di **#endif** di chiusura prima della fine del file. In caso contrario, viene generato un messaggio di errore. Quando le direttive di compilazione condizionale sono contenute in file di inclusione, devono soddisfare le stesse condizioni: non devono esistere direttive di compilazione condizionale non corrispondenti alla fine del file di inclusione.

La sostituzione della macro viene eseguita nella parte della riga che segue un comando **#elif** , quindi è possibile usare una chiamata di macro nell' *espressione Constant*.

Il preprocessore seleziona una delle occorrenze di *testo* specificate per un'ulteriore elaborazione. Un blocco specificato nel *testo* può essere qualsiasi sequenza di testo. Può occupare più righe. In *genere il testo è* un testo di programma che ha un significato per il compilatore o il preprocessore.

Il preprocessore elabora il *testo* selezionato e lo passa al compilatore. Se il *testo* contiene direttive per il preprocessore, il preprocessore esegue tali direttive. Solo i blocchi di testo selezionati dal preprocessore vengono compilati.

Il preprocessore seleziona un singolo elemento di *testo* valutando l'espressione costante che segue ogni **#if** o **#elif** direttiva finché non trova un'espressione costante true (diverso da zero). Seleziona tutto il testo (incluse altre direttive per il preprocessore che iniziano con **#** ) fino al **#elif**, **#else**o **#endif**associato.

Se tutte le occorrenze di *Constant-Expression* sono false o se non viene visualizzata alcuna direttiva di **#elif** , il preprocessore seleziona il blocco di testo dopo la clausola **#else** . Quando non è presente alcuna clausola **#else** e tutte le istanze di *constant-expression* nel blocco **#if** sono false, non viene selezionato alcun blocco di testo.

*Constant-Expression* è un'espressione costante integer con queste restrizioni aggiuntive:

- Le espressioni devono avere un tipo integrale e possono includere solo costanti Integer, costanti carattere e l'operatore **definito** .

- L'espressione non può utilizzare **`sizeof`** o un operatore di cast di tipo.

- L'ambiente di destinazione potrebbe non essere in grado di rappresentare tutti gli intervalli di interi.

- La traduzione rappresenta il tipo **`int`** allo stesso modo del tipo **`long`** e **`unsigned int`** allo stesso modo di **`unsigned long`** .

- Il convertitore può traslare le costanti carattere in un set di valori di codice diverso dal set per l'ambiente di destinazione. Per determinare le proprietà dell'ambiente di destinazione, usare un'app compilata per quell'ambiente per verificare i valori dei *limiti. Macro H* .

- L'espressione non deve eseguire query sull'ambiente e deve rimanere isolata dai dettagli di implementazione nel computer di destinazione.

## <a name="preprocessor-operators"></a>Operatori del preprocessore

### <a name="defined"></a>defined

L'operatore del preprocessore **definito** può essere utilizzato in espressioni costanti speciali, come illustrato nella sintassi seguente:

> **definito (** *identificatore* **)**\
> **defined** *identificatore* definito

Questa espressione costante è considerata true (diverso da zero) se l' *identificatore* è attualmente definito. In caso contrario, la condizione è false (0). Un identificatore definito come testo vuoto viene considerato definito. L'operatore **definito** può essere utilizzato in un **#if** e in una direttiva **#elif** , ma non in nessun altro.

Nell'esempio seguente, le direttive **#if** e **#endif** controllano la compilazione di una delle tre chiamate di funzione:

```C
#if defined(CREDIT)
    credit();
#elif defined(DEBIT)
    debit();
#else
    printerror();
#endif
```

La chiamata di funzione a `credit` viene compilata se è definito l'identificatore `CREDIT`. Se è definito l'identificatore `DEBIT`, viene compilata la chiamata di funzione a `debit`. Se non viene definito alcun identificatore, viene compilata la chiamata a `printerror`. `CREDIT`E `credit` sono identificatori distinti in C e C++ perché i relativi case sono diversi.

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

Il primo blocco **#if** Mostra due set di direttive **#if**, **#else**e **#endif** annidate. Il primo set delle direttive viene elaborato solo se `DLEVEL > 5` è true. In caso contrario, vengono elaborate le istruzioni dopo **#else** .

Le direttive **#elif** e **#else** nel secondo esempio vengono usate per effettuare una delle quattro scelte, in base al valore di `DLEVEL` . La costante `STACK` è impostata su 0, 100 o 200, a seconda della definizione di `DLEVEL`. Se `DLEVEL` è maggiore di 5, allora l'istruzione

```C
#elif DLEVEL > 5
display(debugptr);
```

viene compilato e `STACK` non è definito.

Generalmente la compilazione condizionale viene utilizzata per evitare più inclusioni dello stesso file di intestazione. In C++, in cui le classi sono spesso definite in file di intestazione, è possibile utilizzare costrutti come questo per impedire più definizioni:

```cpp
/*  EXAMPLE.H - Example header file  */
#if !defined( EXAMPLE_H )
#define EXAMPLE_H

class Example
{
    //...
};

#endif // !defined( EXAMPLE_H )
```

Il codice precedente verifica se la costante simbolica `EXAMPLE_H` è definita. In tal caso, il file è già stato incluso e non è necessario rielaborarlo. In caso contrario, la costante `EXAMPLE_H` viene definita per contrassegnare EXAMPLE.H come già elaborato.

### <a name="__has_include"></a>__has_include

**Visual Studio 2017 versione 15,3 e successive**: determina se un'intestazione di libreria è disponibile per l'inclusione:

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
