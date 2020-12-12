---
description: 'Altre informazioni su: identificatori di Storage-Class per dichiarazioni di External-Level'
title: Identificatori di classi di archiviazione per dichiarazioni di livello esterno
ms.date: 11/04/2016
helpviewer_keywords:
- external definitions
- linkage [C++], external
- external linkage, variable declarations
- declaring variables, external variables
- declarations [C++], external
- declarations [C++], specifiers
- external declarations
- static variables, external declarations
- variables, visibility
- external linkage, storage-class specifiers
- referencing declarations
- visibility, variables
- static storage class specifiers
ms.assetid: b76b623a-80ec-4d5d-859b-6cef422657ee
ms.openlocfilehash: a048ebcf6eea87c77cba23ed50ab117d014c95e9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97296849"
---
# <a name="storage-class-specifiers-for-external-level-declarations"></a>Identificatori di classi di archiviazione per dichiarazioni di livello esterno

Le variabili esterne sono variabili nell'ambito file. Sono definite all'esterno di qualsiasi funzione e sono potenzialmente disponibili in molte funzioni. Le funzioni possono essere definite solo a livello esterno e, pertanto, non possono essere annidate. Per impostazione predefinita, tutti i riferimenti a variabili esterne e funzioni con lo stesso nome sono riferimenti allo stesso oggetto, il che significa che hanno un *collegamento esterno*. **`static`** Per eseguire l'override di questo comportamento, è possibile usare la parola chiave.

Le dichiarazioni di variabili a livello esterno sono definizioni di variabili (*dichiarazioni di definizione*) o riferimenti a variabili definite altrove (dichiarazioni di *riferimento*).

Una dichiarazione di variabile esterna che inizializza anche la variabile (in modo implicito o esplicito) è una dichiarazione di definizione di variabile. Una definizione a livello esterno può assumere varie forme:

- Una variabile dichiarata con l' **`static`** identificatore della classe di archiviazione. È possibile inizializzare in modo esplicito la **`static`** variabile con un'espressione costante, come descritto in [inizializzazione](../c-language/initialization.md). Se si omette l'inizializzatore, la variabile viene inizializzata a 0 per impostazione predefinita. Ad esempio, le due istruzioni sono entrambe considerate definizioni della variabile `k`.

    ```C
    static int k = 16;
    static int k;
    ```

- Una variabile che in modo esplicito viene inizializzata a livello esterno. Ad esempio, `int j = 3;` è una definizione della variabile `j`.

Nelle dichiarazioni di variabili a livello esterno (ovvero all'esterno di tutte le funzioni), è possibile usare l' **`static`** **`extern`** identificatore della classe di archiviazione o oppure omettere completamente l'identificatore della classe di archiviazione. Non è possibile usare **`auto`** i **`register`** *`storage-class-specifier`* terminali e a livello esterno.

Una volta che una variabile è definita a livello esterno, è visibile in tutto il resto dell'unità di conversione. La variabile non è visibile prima della dichiarazione nello stesso file di origine. Inoltre, non è visibile in altri file di origine del programma, a meno che una dichiarazione di riferimento non lo renda visibile, come descritto di seguito.

Le regole relative a **`static`** includono:

- Le variabili dichiarate al di fuori di tutti i blocchi senza la **`static`** parola chiave mantengono sempre i propri valori nel programma Per limitare l'accesso a un'unità di conversione particolare, è necessario usare la **`static`** parola chiave. In questo modo si ottiene il *collegamento interno*. Per renderli globali a un intero programma, omettere la classe di archiviazione esplicita o utilizzare la parola chiave **`extern`** (vedere le regole nell'elenco successivo). In questo modo si ottiene un *collegamento esterno*. I collegamenti interni ed esterni vengono illustrati anche in [Collegamento](../c-language/linkage.md).

- È possibile definire una variabile a livello esterno una sola volta all'interno di un programma. È possibile definire un'altra variabile con lo stesso nome e l' **`static`** identificatore della classe di archiviazione in un'unità di conversione diversa. Poiché ogni **`static`** definizione è visibile solo all'interno della propria unità di conversione, non si verifica alcun conflitto. Offre un modo utile per nascondere i nomi degli identificatori che devono essere condivisi tra le funzioni di una singola unità di conversione, ma non sono visibili ad altre unità di conversione.

- L' **`static`** identificatore di classi di archiviazione può essere applicato anche alle funzioni. Se si dichiara una funzione **`static`** , il nome è invisibile all'esterno del file in cui è dichiarato.

Le regole per l'utilizzo di **`extern`** sono:

- L' **`extern`** identificatore della classe di archiviazione dichiara un riferimento a una variabile definita altrove. È possibile utilizzare una **`extern`** dichiarazione per rendere visibile una definizione in un altro file di origine oppure per rendere visibile una variabile prima della definizione nello stesso file di origine. Una volta dichiarato un riferimento alla variabile a livello esterno, la variabile è visibile in tutto il resto dell'unità di conversione in cui si verifica il riferimento dichiarato.

- Affinché un **`extern`** riferimento sia valido, la variabile a cui si riferisce deve essere definita una sola volta e una sola volta a livello esterno. Questa definizione (senza la **`extern`** classe di archiviazione) può trovarsi in qualsiasi unità di conversione che costituisce il programma.

## <a name="example"></a>Esempio

Nell'esempio riportato di seguito vengono illustrate le dichiarazioni esterne:

```C
/******************************************************************
                      SOURCE FILE ONE
*******************************************************************/
#include <stdio.h>

extern int i;                // Reference to i, defined below
void next( void );           // Function prototype

int main()
{
    i++;
    printf_s( "%d\n", i );   // i equals 4
    next();
}

int i = 3;                  // Definition of i

void next( void )
{
    i++;
    printf_s( "%d\n", i );  // i equals 5
    other();
}

/******************************************************************
                      SOURCE FILE TWO
*******************************************************************/
#include <stdio.h>

extern int i;              // Reference to i in
                           // first source file
void other( void )
{
    i++;
    printf_s( "%d\n", i ); // i equals 6
}
```

Nei due file di origine in questo esempio sono contenute in totale tre dichiarazioni esterne `i`. Una sola dichiarazione è una "dichiarazione di definizione". La dichiarazione,

```C
int i = 3;
```

definisce la variabile globale `i` e la inizializza con valore iniziale 3. La dichiarazione "di riferimento" `i` all'inizio del primo file di origine che utilizza **`extern`** rende visibile la variabile globale prima della relativa dichiarazione di definizione nel file. La dichiarazione di riferimento `i` nel secondo file di origine rende visibile anche la variabile nel file di origine. Se un'istanza di definizione per una variabile non è disponibile nell'unità di conversione, il compilatore presuppone la presenza

```C
extern int x;
```

di una dichiarazione di riferimento e che un riferimento di definizione

```C
int x = 0;
```

viene visualizzato in un'altra unità di conversione del programma.

Tutte e tre le funzioni, `main`, `next` e `other`, eseguono la stessa attività: aumentano `i` e lo visualizzano. Vengono visualizzati i valori 4, 5 e 6.

Se la variabile `i` non fosse stata inizializzata, sarebbe stata impostata automaticamente su 0. In questo caso, sarebbero stati visualizzati i valori 1, 2 e 3. Per informazioni sull'inizializzazione delle variabili, vedere [Inizializzazione](../c-language/initialization.md).

## <a name="see-also"></a>Vedi anche

[Classi di archiviazione C](../c-language/c-storage-classes.md)
