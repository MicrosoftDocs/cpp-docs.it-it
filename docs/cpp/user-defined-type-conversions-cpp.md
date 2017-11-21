---
title: Conversioni di tipi (C++) definito dall'utente | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: explicit_cpp
dev_langs: C++
helpviewer_keywords:
- constructors [C++], and constants
- conversion functions [C++]
- explicit keyword [C++]
- type conversion
- constructors [C++], drawbacks
- conversion constructors
- type conversion [C++], explicit conversion
- coercion [C++]
- conversions [C++], explicit
- objects [C++], converting
- conversion functions [C++], rules for declaring
- declaring functions [C++], conversion functions
- functions [C++], conversion
- converting objects
- constructors [C++], conversion
- conversions [C++], by constructors
- data type conversion [C++], explicit
ms.assetid: d40e4310-a190-4e95-a34c-22c5c20aa0b9
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 155afe7c785b111a49a19545e47d175a9b22f7d1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="user-defined-type-conversions-c"></a>Conversioni di tipi definite dall'utente (C++)
Oggetto *conversione* produce un nuovo valore di un tipo da un valore di un tipo diverso. *Conversioni standard* sono incorporate nel linguaggio C++ e supporto relativi tipi incorporati ed è possibile creare *conversioni definite dall'utente* per eseguire conversioni a, da oppure tra tipi definiti dall'utente.  
  
 Le conversioni standard avvengono tra tipi incorporati, tra puntatori o riferimenti ai tipi correlati per ereditarietà, a e da puntatori void e al puntatore null. Per ulteriori informazioni, vedere [conversioni Standard](../cpp/standard-conversions.md). Le conversioni definite dall'utente avvengono tra tipi definiti dall'utente oppure tra tipi definiti dall'utente e tipi incorporati. È possibile implementare come [costruttori di conversione](#ConvCTOR) o come [funzioni di conversione](#ConvFunc).  
  
 Le conversioni possono essere esplicite (quando il programmatore chiama un solo tipo da convertire in un altro tipo, come in un cast o in un'inizializzazione diretta) oppure esplicite (quando il linguaggio o il programma chiama un tipo diverso da quello fornito dal programmatore).  
  
 Si tenta di eseguire conversioni implicite nei seguenti casi:  
  
-   Il tipo di argomento fornito a una funzione non è uguale a quello del parametro corrispondente.  
  
-   Il tipo di valore restituito da una funzione non è uguale al tipo restituito dalla funzione.  
  
-   Il tipo di espressione di inizializzazione non è uguale a quello dell'oggetto inizializzato.  
  
-   Un'espressione che controlla un'istruzione condizionale, un costrutto di loop o un'opzione non ha lo stesso tipo di risultato necessario per controllarla.  
  
-   Il tipo di operando fornito a un operatore non è uguale a quello del parametro di operando corrispondente. Per gli operatori incorporati, entrambi gli operandi devono essere dello stesso tipo e vengono convertiti in un tipo comune che rappresenta entrambi. Per ulteriori informazioni, vedere [conversioni Standard](standard-conversions.md). Per gli operatori definiti dall'utente, il tipo di ogni operando deve essere lo stesso del parametro di operando corrispondente.  
  
 Quando una conversione standard non può completare una conversione implicita, il compilatore può usare una conversione definita dall'utente, seguita facoltativamente da una conversione standard aggiuntiva che la completa.  
  
 Quando in un sito di conversione sono disponibili due o più conversioni definite dall'utente che eseguono la stessa conversione, la conversione viene detta ambigua. Tali ambiguità sono un errore perché il compilatore non può determinare quale tra le conversioni disponibili è opportuno scegliere. Non è tuttavia un errore definire semplicemente più modalità di esecuzione della stessa conversione, perché il set di conversioni disponibili può differire in posizioni diverse del codice sorgente, ad esempio a seconda di quali file di intestazione sono inclusi in un file di origine. Finché sarà disponibile una sola conversione nel sito di conversione non vi sarà alcuna ambiguità. Le conversioni ambigue possono presentarsi in vari modi, di cui i più comuni sono i seguenti:  
  
-   Ereditarietà multipla. La conversione viene definita in più classi di base. 
  
-   Chiamata di funzione ambigua. La conversione viene definita come costruttore di conversione del tipo di destinazione e come funzione di conversione del tipo di origine. Per ulteriori informazioni, vedere [funzioni di conversione](#ConvFunc).  
  
 Di solito è possibile risolvere un'ambiguità qualificando il nome del tipo implicato in maniera più completa oppure eseguendo un cast esplicito per chiarire le proprie intenzioni.  
  
 Sia i costruttori di conversione sia le funzioni di conversione seguono le regole di controllo dell'accesso ai membri, ma l'accessibilità delle conversioni viene presa in considerazione solo se e quando è possibile determinare una conversione non ambigua. Ciò significa che una conversione può essere ambigua anche se il livello di accesso di una conversione concorrente ne impedirebbe l'uso. Per ulteriori informazioni sull'accessibilità del membro, vedere [sul controllo dell'accesso](../cpp/member-access-control-cpp.md).  
  
## <a name="the-explicit-keyword-and-problems-with-implicit-conversion"></a>La parola chiave explicit e i problemi insiti nella conversione implicita  
 Per impostazione predefinita, quando si crea una conversione definita dall'utente, il compilatore può usarla per eseguire conversioni implicite. Questo comportamento non è sempre auspicabile, perché alcune volte le semplici regole che guidano il compilatore a eseguire conversioni implicite possono condurre all'accettazione di codice indesiderato.  
  
 Un esempio ben noto di conversione implicita che può causare problemi è la conversione in `bool`. Può essere opportuno creare un tipo di classe da poter usare in un contesto booleano per molti motivi, ad esempio per controllare un'istruzione o un loop di `if`, ma quando il compilatore esegue una conversione definita dall'utente in un tipo incorporato, potrà applicare un'ulteriore conversione standard in seguito. Lo scopo di questa ulteriore conversione è quello di consentire operazioni come la promozione da `short` a `int`, ma consente di eseguire anche conversioni meno ovvie, ad esempio, da `bool` a `int`, consentendo l'uso del tipo di classe in contesti di numeri interi mai considerati prima. Questo particolare problema è noto come il *problema Safe Bool*. e può essere risolto con la parola chiave `explicit`.  
  
 La parola chiave `explicit` informa il compilatore che non è possibile usare la conversione specificata per eseguire conversioni implicite. Per usufruire della comodità sintattica delle conversioni implicite prima dell'introduzione della parola chiave `explicit` è necessario accettare le conseguenze impreviste create talvolta dalla conversione implicita oppure usare funzioni di conversione denominate e meno convenienti come soluzione alternativa. A questo punto, l'uso della parola chiave `explicit` consente di creare conversioni convenienti che possono essere usate esclusivamente per eseguire cast espliciti oppure l'inizializzazione diretta, senza produrre il tipo di problemi esemplificati come problema Safe Bool.  
  
 È possibile applicare la parola chiave `explicit` ai costruttori di conversione fin da C++98 e alle funzioni di conversione fin da C++11. Nelle sezioni seguenti sono fornite altre informazioni sull'uso della parola chiave `explicit`.  
  
##  <a name="ConvCTOR"></a>Costruttori di conversione  
 I costruttori di conversione definiscono le conversioni da tipi definiti dall'utente o incorporati in un tipo definito dall'utente. L'esempio seguente dimostra un costruttore di conversione che consente di eseguire una conversione dal tipo incorporato `double` a un tipo definito dall'utente `Money`.  
  
```  
#include <iostream>  
  
class Money  
{  
public:  
    Money() : amount{ 0.0 } {};  
    Money(double _amount) : amount{ _amount } {};  
  
    double amount;  
};  
  
void display_balance(const Money balance)  
{  
    std::cout << "The balance is: " << balance.amount << std::endl;  
}  
  
int main(int argc, char* argv[])  
{  
    Money payable{ 79.99 };  
  
    display_balance(payable);  
    display_balance(49.95);  
    display_balance(9.99f);  
  
    return 0;  
}  
```  
  
 Notare che la prima chiamata alla funzione `display_balance`, che accetta un argomento di tipo `Money`, non richiede una conversione perché il relativo argomento è del tipo corretto. Tuttavia, nella seconda chiamata a `display_balance`, è necessaria una conversione perché il tipo dell'argomento, un `double` con un valore di `49.95`, non è ciò che la funzione previsto dalla. La funzione non può usare direttamente questo valore, ma poiché esiste una conversione dal tipo di argomento (`double`) al tipo di parametro corrispondente (`Money`), viene costruito un tipo di valore di tipo `Money` dall'argomento, usato per completare la chiamata di funzione. Nella terza chiamata a `display_balance`, si noti che l'argomento non è un `double`, ma è invece un `float` con un valore di `9.99`, e la chiamata di funzione può ancora essere completata perché il compilatore può eseguire una conversione standard, ovvero in questo caso , da `float` a `double`e quindi eseguire la conversione definita dall'utente da `double` a `Money` per completare la conversione necessaria.  
  
### <a name="declaring-conversion-constructors"></a>Dichiarazione di costruttori di conversione  
 Le regole seguenti si applicano alla dichiarazione di un costruttore di conversione:  
  
-   Il tipo di conversione di destinazione è il tipo definito dall'utente in corso di costruzione.  
  
-   I costruttori di conversione di solito accettano esattamente un solo argomento, che è del tipo di origine. Tuttavia un costruttore di conversione può specificare altri parametri se ciascun parametro aggiuntivo ha un valore predefinito. Il tipo di origine resta il tipo del primo parametro.  
  
-   I costruttori di conversione, come tutti i costruttori, non specificano un tipo restituito. La specifica di un tipo restituito nella dichiarazione costituisce un errore.  
  
-   I costruttori di conversione possono essere espliciti.  
  
### <a name="explicit-conversion-constructors"></a>Costruttori di conversione espliciti  
 Con la dichiarazione di un costruttore di conversione come `explicit`, è possibile usarlo solo per eseguire l'inizializzazione diretta di un oggetto oppure per eseguire un cast esplicito. In tal modo si impedisce alle funzioni che accettano un argomento del tipo di classe di accettare implicitamente anche gli argomenti del tipo di origine del costruttore di conversione e si impedisce anche di eseguire l'inizializzazione di copia per un tipo di classe da un valore del tipo di origine. L'esempio seguente dimostra come definire un costruttore di conversione esplicito e il conseguente effetto sul formato corretto dei codici.  
  
```  
#include <iostream>  
  
class Money  
{  
public:  
    Money() : amount{ 0.0 } {};  
    explicit Money(double _amount) : amount{ _amount } {};  
  
    double amount;  
};  
  
void display_balance(const Money balance)  
{  
    std::cout << "The balance is: " << balance.amount << std::endl;  
}  
  
int main(int argc, char* argv[])  
{  
    Money payable{ 79.99 };        // Legal: direct initialization is explicit.  
  
    display_balance(payable);      // Legal: no conversion required  
    display_balance(49.95);        // Error: no suitable conversion exists to convert from double to Money.  
    display_balance((Money)9.99f); // Legal: explicit cast to Money  
  
    return 0;  
}  
```  
  
 In questo esempio, notare che è ancora possibile usare il costruttore di conversione esplicito per eseguire l'inizializzazione diretta di `payable`. Se invece si stesse per eseguire l'inizializzazione di copia per `Money payable = 79.99;`, sarebbe un errore. La prima chiamata a `display_balance` non viene alterata perché l'argomento è del tipo corretto. La seconda chiamata a `display_balance` è un errore, perché il costruttore di conversione non può essere usato per eseguire conversioni implicite. La terza chiamata a `display_balance` è legale a causa del cast esplicito a `Money`, ma notare che il compilatore ha comunque contribuito a completare il cast inserendo un cast implicito da `float` a `double`.  
  
 Benché la comodità di consentire conversioni implicite sia allettante, ciò potrebbe introdurre bug difficili da risolvere. La regola empirica consiste nel rendere espliciti tutti i costruttori di conversione, tranne quando si è sicuri di volere che una specifica conversione avvenga in maniera implicita.  
  
##  <a name="ConvFunc"></a>Funzioni di conversione  
 Le funzioni di conversione consentono di definire le conversioni da un tipo definiti dall'utente verso altri tipi. Queste funzioni sono spesso denominate "operatori di cast" perché, assieme ai costruttori, vengono chiamate quando un valore viene sottoposto a cast di un tipo differente. L'esempio seguente dimostra una funzione di conversione che consente di eseguire una conversione dal tipo definito dall'utente `Money` a un tipo incorporato `double`.  
  
```  
#include <iostream>  
  
class Money  
{  
public:  
    Money() : amount{ 0.0 } {};  
    Money(double _amount) : amount{ _amount } {};  
  
    operator double() const { return amount; }  
private:  
    double amount;  
};  
  
void display_balance(const Money balance)  
{  
    std::cout << "The balance is: " << balance << std::endl;  
}  
  
```  
  
 Notare che la variabile membro `amount` viene impostata come privata e che una funzione di conversione pubblica nel tipo `double` viene introdotta solo per restituire il valore `amount`. Nella funzione `display_balance`, si ha una conversione implicita quando il valore `balance` viene trasmesso all'output standard usando l'operatore di inserimento del flusso `<<`. Poiché non è stato definito alcun operatore di inserimento del flusso per il tipo definito dall'utente `Money`, ma ne esiste uno per il tipo incorporato `double`, il compilatore può usare la funzione di conversione da `Money` a `double` per soddisfare l'operatore di inserimento del flusso.  
  
 Le funzioni di conversione vengono ereditate dalle classi derivate. Le funzioni di conversione in una classe derivata eseguono l'override solo di una funzione di conversione ereditata quando vengono convertite esattamente nello stesso tipo. Ad esempio, una conversione definita dall'utente della classe derivata `operator int` non esegue l'override di una funzione di conversione della classe di base `operator short` definita dall'utente (né incide su di essa), nonostante le conversioni standard definiscano una relazione di conversione tra `int` e `short`.  
  
### <a name="declaring-conversion-functions"></a>Dichiarazione delle funzioni di conversione  
 Le regole seguenti si applicano alla dichiarazione di una funzione di conversione:  
  
-   Il tipo di destinazione della conversione deve essere dichiarato prima della dichiarazione della funzione di conversione. Classi, strutture, enumerazioni e typedef non possono essere dichiarati nell'ambito della dichiarazione della funzione di conversione.  
  
    ```  
    operator struct String { char string_storage; }() // illegal  
    ```  
  
-   Le funzioni di conversione non accettano argomenti. La specifica di qualsiasi parametro nella dichiarazione costituisce un errore.  
  
-   Le funzioni di conversione hanno un tipo restituito che viene specificato dal nome della funzione di conversione, che è anche il nome del tipo di destinazione della conversione. La specifica di un tipo restituito nella dichiarazione costituisce un errore.  
  
-   Le funzioni di conversione possono essere virtuali.  
  
-   Le funzioni di conversione possono essere esplicite.  
  
### <a name="explicit-conversion-functions"></a>Funzioni esplicite di conversione  
 Quando una funzione di conversione è dichiarata come esplicita può essere usata solo per eseguire un cast esplicito. In tal modo si impedisce alle funzioni che accettano un argomento del tipo di destinazione della funzione di conversione di accettare implicitamente anche gli argomenti del tipo di classe e si impedisce anche di eseguire l'inizializzazione di copia per le istanze del tipo di destinazione da un valore del tipo di classe. L'esempio seguente dimostra come definire una funzione di conversione esplicita e il conseguente effetto sul formato corretto dei codici.  
  
```  
#include <iostream>  
  
class Money  
{  
public:  
    Money() : amount{ 0.0 } {};  
    Money(double _amount) : amount{ _amount } {};  
  
    explicit operator double() const { return amount; }  
private:  
    double amount;  
};  
  
void display_balance(const Money balance)  
{  
    std::cout << "The balance is: " << (double)balance << std::endl;  
}  
  
```  
  
 Qui la funzione di conversione `operator double` è stata resa esplicita ed è stato introdotto un cast esplicito sul tipo `double` nella funzione `display_balance` per eseguire la conversione. Se il cast fosse stato omesso, il compilatore non avrebbe potuto individuare un operatore di inserimento del flusso `<<` adeguato per il tipo `Money` e si sarebbe verificato un errore.  
  
