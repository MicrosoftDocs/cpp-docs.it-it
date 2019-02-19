---
title: Prototipi di funzioni
ms.date: 11/04/2016
helpviewer_keywords:
- function prototypes
- function return types, function prototypes
- data types [C], function return types
- functions [C], return types
- prototypes [C++], function
ms.assetid: d152f8e6-971e-432c-93ca-5a91400653c2
ms.openlocfilehash: 2c75db3e1550927af57054a2cc1561d9df1567a4
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56148804"
---
# <a name="function-prototypes"></a>Prototipi di funzioni

Una dichiarazione di funzione precede la definizione di funzione e specifica il nome, il tipo restituito, la classe di archiviazione e altri attributi di una funzione. Per essere un prototipo, la dichiarazione della funzione deve inoltre stabilire i tipi e gli identificatori per gli argomenti della funzione.

## <a name="syntax"></a>Sintassi

*declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers* *attribute-seq*<sub>opt</sub> *init-declarator-list*<sub>opt</sub> **;**

/\* *attribute-seq*<sub>opt</sub> è specifico di Microsoft \*/

*declaration-specifiers*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*storage-class-specifier* *declaration-specifiers*<sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *declaration-specifiers*<sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *declaration-specifiers*<sub>opt</sub>

*init-declarator-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*init-declarator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*init-declarator-list*  **,**  *init-declarator*

*init-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declarator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declarator* **=** *initializer*

*declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pointer*<sub>opt</sub> *direct-declarator*

*direct-declarator*: /\* Dichiaratore di funzione \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direct-declarator*  **(**  *parameter-type-list*  **)**  /\* Dichiaratore nuovo stile \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direct-declarator*  **(**  *identifier-list*<sub>opt</sub> **)** /\* Dichiaratore stile obsoleto \*/

Il prototipo ha lo stesso form della definizione di funzione, ma viene terminato da un punto e virgola immediatamente dopo la parentesi di chiusura e pertanto non ha corpo. In entrambi i casi, il tipo restituito deve corrispondere al tipo restituito specificato nella definizione di funzione.

I prototipi di funzione hanno gli utilizzi importanti elencati di seguito:

- Stabiliscono il tipo restituito per funzioni che restituiscono tipi diversi da **int**. Sebbene le funzioni che restituiscono valori **int** non richiedano prototipi, i prototipi sono consigliati.

- Senza prototipi completi, le conversioni standard vengono effettuate, ma non viene eseguito alcun tentativo di controllare il tipo o il numero di argomenti con il numero di parametri.

- I prototipi sono utilizzati per inizializzare i puntatori a funzioni prima che quelle funzioni vengano definite.

- L'elenco di parametri viene utilizzato per controllare la corrispondenza degli argomenti nella chiamata di funzione con i parametri nella definizione di funzione.

Il tipo convertito di ogni parametro determina l'interpretazione degli argomenti che la chiamata di funzione inserisce nello stack. Un tipo non corrispondente tra un argomento e un parametro può determinare che gli argomenti nello stack siano interpretati erroneamente. Se ad esempio in un computer a 16 bit un puntatore a 16 bit viene passato come argomento, quindi dichiarato come parametro **long**, i primi 32 bit dello stack sono interpretati come parametro **long**. Questo errore crea problemi non solo con il parametro **long**, ma anche con tutti i parametri che lo seguono. È possibile rilevare errori di questo tipo dichiarando prototipi di funzione completi per tutte le funzioni.

Un prototipo stabilisce gli attributi di una funzione in modo da poter controllare le chiamate alla funzione che precede la relativa definizione (o che si verifica in altri file di origine) per l'eventuale presenza di tipi restituiti e tipi di argomento non corrispondenti. Se ad esempio se si specifica l'identificatore di classe di archiviazione **static** in un prototipo, è necessario specificare anche la classe di archiviazione **static** nella definizione di funzione.

Le dichiarazioni di parametro complete (`int a`) possono essere combinate con dichiaratori astratti (`int`) nella stessa dichiarazione. Ad esempio, la seguente dichiarazione è valida:

```C
int add( int a, int );
```

Il prototipo può includere sia il tipo che un identificatore per ogni espressione passata come argomento. Tuttavia, tali identificatori hanno un ambito di validità solo fino alla fine della dichiarazione. Il prototipo può inoltre riflettere il fatto che il numero di argomenti sia variabile o che nessun argomento sia passato. Senza tale elenco, le mancate corrispondenze non possono essere rivelate né il compilatore può generare messaggi diagnostici relativi. Per altre informazioni sul controllo del tipo, vedere [Argomenti](../c-language/arguments.md).

L'ambito del prototipo nel compilatore C di Microsoft è adesso compatibile con ANSI durante la compilazione con l'opzione del compilatore **/Za**. Ciò significa che se si dichiara un tag **struct** o **union** all'interno di un prototipo, il tag viene inserito in quell'ambito anziché in ambito globale. Ad esempio durante la compilazione con **/Za** per compatibilità con ANSI, non è mai possibile chiamare questa funzione senza causare un errore di mancata corrispondenza tra i tipi:

```C
void func1( struct S * );
```

Per correggere il codice, definire o dichiarare **struct** o **union** in ambito globale prima del prototipo di funzione:

```C
struct S;
void func1( struct S * );
```

In **/Ze**, il tag viene ancora inserito in ambito globale.

## <a name="see-also"></a>Vedere anche

[Funzioni](../c-language/functions-c.md)
