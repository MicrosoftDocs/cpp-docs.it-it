---
title: Espressioni in forma suffissa | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], postfix
- postfix expressions
- expressions [C++], postfix
ms.assetid: 7ac62a57-06df-422f-b012-a75b37d7cb9b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a116e4f1c937a1656f337396a8b10206e0776c0e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="postfix-expressions"></a>Espressioni in forma suffissa
Le espressioni di suffisso sono costituite da espressioni primarie o da espressioni in cui gli operatori di suffisso seguono un'espressione primaria. Nella tabella riportata di seguito vengono elencati gli operatori di suffisso.  
  
### <a name="postfix-operators"></a>Operatori di suffisso  
  
|Nome dell'operatore|Notazione dell'operatore|  
|-------------------|-----------------------|  
|[Operatore di indice](../cpp/subscript-operator.md)|**[ ]**|  
|[Operatore di chiamata di funzione](../cpp/function-call-operator-parens.md)|**( )**|  
|[Operatore di conversione esplicita di tipi](../cpp/explicit-type-conversion-operator-parens.md)|*nome di tipo* **)**|  
|[Operatore di accesso al membro](../cpp/member-access-operators-dot-and.md)|**.** O **->**|  
|[Operatore di incremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|`++`|  
|[Operatore di decremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|**--**|  
  
 Nella sintassi seguente vengono descritte le possibili espressioni di suffisso:  
  
```  
  
      primary-expression   
postfix-expression[expression]postfix-expression(expression-list)simple-type-name(expression-list)postfix-expression.namepostfix-expression->namepostfix-expression++postfix-expression--cast-keyword < typename > (expression )typeid ( typename )  
```  
  
 Il *postfix-expression* sopra riportato può essere un'espressione primaria o un'altra espressione di suffisso.  Vedere **espressioni primarie**.  Le espressioni di suffisso vengono raggruppate da sinistra a destra, consentendone il concatenamento nel modo seguente:  
  
```  
func(1)->GetValue()++  
```  
  
 Nell'espressione sopra riportata, func è un'espressione primaria, func (1) è un'espressione di suffisso di funzione, (1) ->GetData è un'espressione di suffisso che specifica un membro della classe, func (1) ->GetData () è un'altra espressione di suffisso di funzione e l'intera espressione è un'espressione di suffisso che incrementa il valore restituito di GetData.  Il significato dell'intera espressione è "chiamare func passando 1 come argomento e ottenere un puntatore a una classe come valore restituito.  Chiamare GetValue() su tale classe, quindi incrementare il valore restituito.  
  
 Le espressioni sopra elencate sono espressioni di assegnazione, pertanto il loro risultato deve essere un r-value.  
  
 Il formato dell'espressione di suffisso  
  
```  
simple-type-name ( expression-list )  
```  
  
 indica la chiamata del costruttore.  Se il nome di tipo semplice è un tipo fondamentale, l'elenco di espressioni deve essere costituito da un'unica espressione, la quale indica un cast del valore dell'espressione al tipo fondamentale.  Questo tipo di espressione cast riproduce un costruttore.  Poiché questo formato consente la costruzione dei tipi fondamentali e delle classi usando la stessa sintassi, è particolarmente utile quando si definiscono le classi modello.  
  
 Il *cast-keyword* è uno dei `dynamic_cast`, `static_cast` o `reinterpret_cast`.  Altre informazioni, vedere **dynamic_cast**, **static_cast** e **reinterpret_cast**.  
  
 L'operatore `typeid` viene considerato un'espressione di suffisso.  Vedere **operatore typeid**.  
  
## <a name="formal-and-actual-arguments"></a>Argomenti formali ed effettivi  
 I programmi chiamanti passano informazioni alle funzioni chiamate attraverso gli "argomenti effettivi." Le funzioni chiamate accedono a tali informazioni usando i corrispondenti "argomenti formali."  
  
 Quando viene chiamata una funzione, vengono eseguite le seguenti attività:  
  
-   Tutti gli argomenti effettivi forniti dal chiamante vengono valutati. Non esiste un ordine implicito di valutazione degli argomenti, ma ognuno di essi viene valutato, e i relativi effetti collaterali vengono completati, prima di essere inseriti nella funzione.  
  
-   Ogni argomento formale viene inizializzato con il corrispondente argomento effettivo presente nell'elenco di espressioni. Un argomento formale è un argomento che viene dichiarato nell'intestazione di funzione e usato nel corpo della funzione. Le conversioni vengono eseguite in maniera analoga alle inizializzazioni; nel convertire un argomento effettivo nel tipo corretto, vengono eseguite sia le conversioni standard che quelle definite dall'utente. Il seguente codice illustra a livello concettuale l'inizializzazione che viene eseguita:  
  
    ```  
    void Func( int i ); // Function prototype  
    ...  
    Func( 7 );          // Execute function call  
    ```  
  
     Le inizializzazioni concettuali precedenti alla chiamata sono:  
  
    ```  
    int Temp_i = 7;  
    Func( Temp_i );  
    ```  
  
     Si noti che l'inizializzazione viene eseguita come se si usasse la sintassi del segno di uguale, anziché la sintassi di parentesi. Prima di passare il valore alla funzione, viene effettuata una copia di `i`. (Per ulteriori informazioni, vedere [inizializzatori](../cpp/initializers.md) e [conversioni](../cpp/user-defined-type-conversions-cpp.md)).  
  
     Pertanto, se il prototipo di funzione (dichiarazione) chiama un argomento di tipo **lungo**, e se il programma chiamante fornisce un argomento di tipo effettivo `int`, l'argomento effettivo viene promosso mediante una conversione di tipo standard al tipo **lungo** (vedere [conversioni Standard](../cpp/standard-conversions.md)).  
  
     Fornire un argomento effettivo per il quale non esistono conversioni standard o definite dall'utente al tipo dell'argomento formale costituisce un errore.  
  
     Nel caso degli argomenti effettivi di tipo classe, l'argomento formale viene inizializzato chiamando il costruttore della classe. (Vedere [costruttori](../cpp/constructors-cpp.md) per altre informazioni su queste funzioni membro di classe speciale.)  
  
-   Viene eseguita la chiamata di funzione.  
  
 Il seguente frammento di programma illustra una chiamata di funzione:  
  
```  
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
  
 Quando `func` viene chiamato da main, il parametro formale `param1` viene inizializzato con il valore di `i` (`i` viene convertito nel tipo **lungo** in modo che corrisponda al tipo corretto usando uno standard conversione) e il parametro formale `param2` viene inizializzato con il valore di `j` (`j` viene convertito nel tipo **doppie** mediante una conversione standard).  
  
## <a name="treatment-of-argument-types"></a>Trattamento dei tipi di argomento  
 Gli argomenti formali dichiarati come tipi const non possono essere modificati nel corpo di una funzione. Le funzioni possono modificare qualsiasi argomento che non è di tipo **const**. Tuttavia, la modifica è locale rispetto alla funzione e non influisce sul valore dell'argomento effettivo a meno che l'argomento effettivo sia un riferimento a un oggetto non è di tipo **const**.  
  
 Nelle funzioni seguenti vengono illustrati alcuni di questi concetti:  
  
```  
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
  
## <a name="ellipses-and-default-arguments"></a>Puntini di sospensione e argomenti predefiniti  
 Le funzioni possono essere dichiarate per accettare un numero di argomenti minore rispetto a quello specificato nella definizione di funzione, mediante uno dei due metodi: puntini di sospensione (`...`) o argomenti predefiniti.  
  
 I puntini di sospensione indicano che gli argomenti potrebbero essere obbligatori, ma che il numero e i tipi non sono specificati nella dichiarazione. Si tratta in genere di una procedura di programmazione C++ di basso livello perché vanifica uno dei vantaggi di C++, l'indipendenza dai tipi. Alle funzioni dichiarate con i puntini di sospensione vengono applicate conversioni diverse rispetto a quelle applicate alle funzioni per le quali i tipi di argomenti formali ed effettivi sono noti:  
  
-   Se l'argomento effettivo è di tipo **float**, viene promosso al tipo **doppie** prima della chiamata di funzione.  
  
-   Qualsiasi signed o unsigned `char`, **breve**, tipo enumerato o campo di bit viene convertito in un signed o unsigned `int` utilizzando la promozione a intero.  
  
-   Qualsiasi argomento di tipo classe viene passato in base al valore come struttura di dati; la copia viene creata tramite la copia binaria anziché richiamando il costruttore di copia della classe (se presente).  
  
 I punti di sospensione, se usati, devono essere dichiarati per ultimi nell'elenco degli argomenti. Per ulteriori informazioni sul passaggio di un numero variabile di argomenti, vedere la discussione di [va_arg, va_start e va_list](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md) nel *riferimenti alla libreria di Run-Time*.  
  
 Per informazioni sugli argomenti predefiniti della programmazione CLR, vedere [elenchi di argomenti variabili (...) (C + C++ /CLI) ](../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md).  
  
 Gli argomenti predefiniti consentono di specificare il valore che deve assumere un argomento se non viene fornito nella chiamata di funzione. Nel frammento di codice seguente viene illustrato come usare gli argomenti predefiniti. Per ulteriori informazioni sulle restrizioni su come specificare gli argomenti predefiniti, vedere [argomenti predefiniti](../cpp/default-arguments.md).  
  
```  
// expre_Ellipses_and_Default_Arguments.cpp  
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
  
 Nel programma precedente viene dichiarata una funzione, `print`, che accetta due argomenti. Tuttavia, il secondo argomento, `terminator`, ha un valore predefinito, `"\n"`. In **principale**, le prime due chiamate a `print` consentono il secondo argomento predefinito di fornire una nuova riga per terminare la stringa stampata. La terza chiamata specifica un valore esplicito per il secondo argomento. L'output del programma è  
  
```  
hello,  
world!  
good morning, sunshine.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di espressioni](../cpp/types-of-expressions.md)