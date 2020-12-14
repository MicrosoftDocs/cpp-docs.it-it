---
description: 'Altre informazioni su: espressioni Suffisshe'
title: Espressioni in forma suffissa
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C++], postfix
- postfix expressions
- expressions [C++], postfix
ms.assetid: 7ac62a57-06df-422f-b012-a75b37d7cb9b
ms.openlocfilehash: c6c38fee6b2b44ab9ff390eed8d178bf40653df2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258525"
---
# <a name="postfix-expressions"></a>Espressioni in forma suffissa

Le espressioni di suffisso sono costituite da espressioni primarie o da espressioni in cui gli operatori di suffisso seguono un'espressione primaria. Nella tabella riportata di seguito vengono elencati gli operatori di suffisso.

### <a name="postfix-operators"></a>Operatori di suffisso

|Nome operatore|Notazione dell'operatore|
|-------------------|-----------------------|
|[Operatore di indice](../cpp/subscript-operator.md)|**[ ]**|
|[Operatore di chiamata di funzione](../cpp/function-call-operator-parens.md)|**( )**|
|[Operatore di conversione di tipi esplicita](../cpp/explicit-type-conversion-operator-parens.md)|*nome-tipo* **()**|
|[Operatore di accesso ai membri](../cpp/member-access-operators-dot-and.md)|**.** o **->**|
|[Operatore di incremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|**++**|
|[Operatore di decremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|**--**|

Nella sintassi seguente vengono descritte le possibili espressioni di suffisso:

```
primary-expression
postfix-expression[expression]postfix-expression(expression-list)simple-type-name(expression-list)postfix-expression.namepostfix-expression->namepostfix-expression++postfix-expression--cast-keyword < typename > (expression )typeid ( typename )
```

Il *suffisso-espressione* precedente può essere un' [espressione primaria](primary-expressions.md) o un'altra espressione suffissa. Le espressioni di suffisso vengono raggruppate da sinistra a destra, consentendone il concatenamento nel modo seguente:

```cpp
func(1)->GetValue()++
```

Nell'espressione precedente, è un' `func` espressione primaria, `func(1)` è un'espressione di suffisso di funzione, `func(1)->GetValue` è un'espressione suffissa che specifica un membro della classe, `func(1)->GetValue()` è un'altra espressione di suffisso di funzione e l'intera espressione è un'espressione suffissa che incrementa il valore restituito di GetValue.  Il significato dell'intera espressione è "chiamare func passando 1 come argomento e ottenere un puntatore a una classe come valore restituito.  Chiamare quindi `GetValue()` su tale classe, quindi incrementare il valore restituito.

Le espressioni sopra elencate sono espressioni di assegnazione, pertanto il loro risultato deve essere un r-value.

Il formato dell'espressione di suffisso

```cpp
simple-type-name ( expression-list )
```

indica la chiamata del costruttore.  Se il nome di tipo semplice è un tipo fondamentale, l'elenco di espressioni deve essere costituito da un'unica espressione, la quale indica un cast del valore dell'espressione al tipo fondamentale.  Questo tipo di espressione cast riproduce un costruttore.  Poiché questo formato consente la costruzione dei tipi fondamentali e delle classi utilizzando la stessa sintassi, è particolarmente utile quando si definiscono le classi modello.

La *parola chiave cast* è uno dei **`dynamic_cast`** , **`static_cast`** o **`reinterpret_cast`** .  Ulteriori informazioni sono disponibili in [`dynamic_cast`](dynamic-cast-operator.md) , [`static_cast`](static-cast-operator.md) e [`reinterpet_cast`](reinterpret-cast-operator.md) .

L' **`typeid`** operatore è considerato un'espressione suffissa.  Vedere **operatore typeid**.

## <a name="formal-and-actual-arguments"></a>Argomenti formali ed effettivi

I programmi chiamanti passano informazioni alle funzioni chiamate attraverso gli "argomenti effettivi." Le funzioni chiamate accedono a tali informazioni utilizzando i corrispondenti "argomenti formali."

Quando viene chiamata una funzione, vengono eseguite le seguenti attività:

- Tutti gli argomenti effettivi forniti dal chiamante vengono valutati. Non esiste un ordine implicito di valutazione degli argomenti, ma ognuno di essi viene valutato, e i relativi effetti collaterali vengono completati, prima di essere inseriti nella funzione.

- Ogni argomento formale viene inizializzato con il corrispondente argomento effettivo presente nell'elenco di espressioni. Un argomento formale è un argomento dichiarato nell'intestazione della funzione e utilizzato nel corpo di una funzione. Le conversioni vengono eseguite come se venisse eseguita l'inizializzazione: le conversioni standard e definite dall'utente vengono eseguite nella conversione di un argomento effettivo nel tipo corretto. Il seguente codice illustra a livello concettuale l'inizializzazione che viene eseguita:

    ```cpp
    void Func( int i ); // Function prototype
    ...
    Func( 7 );          // Execute function call
    ```

   Le inizializzazioni concettuali precedenti alla chiamata sono:

    ```cpp
    int Temp_i = 7;
    Func( Temp_i );
    ```

   Si noti che l'inizializzazione viene eseguita come se si utilizzasse la sintassi del segno di uguale, anziché la sintassi di parentesi. Prima di passare il valore alla funzione, viene effettuata una copia di `i`. Per ulteriori informazioni, vedere [inizializzatori](../cpp/initializers.md) e [conversioni](../cpp/user-defined-type-conversions-cpp.md).

   Pertanto, se il prototipo di funzione (dichiarazione) chiama per un argomento di tipo **`long`** e se il programma chiamante fornisce un argomento effettivo di tipo **`int`** , l'argomento effettivo viene promosso utilizzando una conversione di tipo standard nel tipo **`long`** (vedere [conversioni standard](../cpp/standard-conversions.md)).

   Fornire un argomento effettivo per il quale non esistono conversioni standard o definite dall'utente al tipo dell'argomento formale costituisce un errore.

   Nel caso degli argomenti effettivi di tipo classe, l'argomento formale viene inizializzato chiamando il costruttore della classe. Per ulteriori informazioni su queste speciali funzioni membro di classe, vedere [costruttori](../cpp/constructors-cpp.md) .

- Viene eseguita la chiamata di funzione.

Il seguente frammento di programma illustra una chiamata di funzione:

```cpp
// expre_Formal_and_Actual_Arguments.cpp
void func( long param1, double param2 );

int main()
{
    long i = 1;
    double j = 2;

    // Call func with actual arguments i and j.
    func( i, j );
}

// Define func with formal parameters param1 and param2.
void func( long param1, double param2 )
{
}
```

Quando `func` viene chiamato da Main, il parametro formale `param1` viene inizializzato con il valore `i` ( `i` viene convertito nel tipo **`long`** in modo che corrisponda al tipo corretto utilizzando una conversione standard) e il parametro formale `param2` viene inizializzato con il valore `j` ( `j` viene convertito nel tipo **`double`** utilizzando una conversione standard).

## <a name="treatment-of-argument-types"></a>Trattamento dei tipi di argomento

Gli argomenti formali dichiarati come **`const`** tipi non possono essere modificati all'interno del corpo di una funzione. Le funzioni possono modificare qualsiasi argomento che non è di tipo **`const`** . Tuttavia, la modifica è locale rispetto alla funzione e non influisce sul valore dell'argomento effettivo a meno che l'argomento effettivo non sia un riferimento a un oggetto non di tipo **`const`** .

Nelle funzioni seguenti vengono illustrati alcuni di questi concetti:

```cpp
// expre_Treatment_of_Argument_Types.cpp
int func1( const int i, int j, char *c ) {
   i = 7;   // C3892 i is const.
   j = i;   // value of j is lost at return
   *c = 'a' + j;   // changes value of c in calling function
   return i;
}

double& func2( double& d, const char *c ) {
   d = 14.387;   // changes value of d in calling function.
   *c = 'a';   // C3892 c is a pointer to a const object.
    return d;
}
```

## <a name="ellipsis-and-default-arguments"></a>Puntini di sospensione e argomenti predefiniti

Le funzioni possono essere dichiarate per accettare un numero di argomenti minore rispetto a quello specificato nella definizione di funzione, mediante uno dei due metodi: puntini di sospensione (`...`) o argomenti predefiniti.

I puntini di sospensione indicano che gli argomenti potrebbero essere obbligatori, ma che il numero e i tipi non sono specificati nella dichiarazione. Si tratta in genere di una procedura di programmazione C++ di basso livello perché vanifica uno dei vantaggi di C++, l'indipendenza dai tipi. Alle funzioni dichiarate con i puntini di sospensione vengono applicate conversioni diverse rispetto a quelle per le quali sono noti i tipi di argomenti formali ed effettivi:

- Se l'argomento effettivo è di tipo **`float`** , viene promosso al tipo **`double`** prima della chiamata di funzione.

- Qualsiasi **`signed char`** **`unsigned char`** tipo o, **`signed short`** o **`unsigned short`** , tipo enumerato o campo di bit viene convertito in un oggetto **`signed int`** o **`unsigned int`** usando la promozione integrale.

- Qualsiasi argomento di tipo classe viene passato in base al valore come struttura di dati; la copia viene creata tramite la copia binaria anziché richiamando il costruttore di copia della classe (se presente).

I puntini di sospensione, se utilizzati, devono essere dichiarati per ultimi nell'elenco di argomenti. Per ulteriori informazioni sul passaggio di un numero variabile di argomenti, vedere la descrizione di [va_arg, va_start e va_list](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md) in *riferimenti alla libreria di runtime*.

Per informazioni sugli argomenti predefiniti nella programmazione CLR, vedere [elenchi di argomenti variabili (...) (C++/CLI)](../extensions/variable-argument-lists-dot-dot-dot-cpp-cli.md).

Gli argomenti predefiniti consentono di specificare il valore che deve assumere un argomento se non viene fornito nella chiamata di funzione. Nel frammento di codice seguente viene illustrato come usare gli argomenti predefiniti. Per ulteriori informazioni sulle restrizioni relative alla specifica degli argomenti predefiniti, vedere [argomenti predefiniti](../cpp/default-arguments.md).

```cpp
// expre_Ellipsis_and_Default_Arguments.cpp
// compile with: /EHsc
#include <iostream>

// Declare the function print that prints a string,
// then a terminator.
void print( const char *string,
            const char *terminator = "\n" );

int main()
{
    print( "hello," );
    print( "world!" );

    print( "good morning", ", " );
    print( "sunshine." );
}

using namespace std;
// Define print.
void print( const char *string, const char *terminator )
{
    if( string != NULL )
        cout << string;

    if( terminator != NULL )
        cout << terminator;
}
```

Nel programma precedente viene dichiarata una funzione, `print`, che accetta due argomenti. Tuttavia, il secondo argomento, *terminatore*, ha un valore predefinito, `"\n"` . In `main` , le prime due chiamate a `print` consentono al secondo argomento predefinito di fornire una nuova riga per terminare la stringa stampata. La terza chiamata specifica un valore esplicito per il secondo argomento. L'output del programma è

```Output
hello,
world!
good morning, sunshine.
```

## <a name="see-also"></a>Vedi anche

[Tipi di espressioni](../cpp/types-of-expressions.md)
