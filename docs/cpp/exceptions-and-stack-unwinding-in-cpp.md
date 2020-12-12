---
description: 'Altre informazioni su: eccezioni e rimozione dello stack in C++'
title: Eccezioni e rimozione dallo stack in C++
ms.date: 11/19/2019
ms.assetid: a1a57eae-5fc5-4c49-824f-3ce2eb8129ed
ms.openlocfilehash: 4f9c5faff4dafcae41831eb4b24345134912b073
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164783"
---
# <a name="exceptions-and-stack-unwinding-in-c"></a>Eccezioni e rimozione dallo stack in C++

Nel meccanismo di eccezioni di C++, il controllo si sposta dall'istruzione throw alla prima istruzione catch che può gestire il tipo generato. Quando viene raggiunta l'istruzione catch, tutte le variabili automatiche che rientrano nell'ambito tra le istruzioni throw e catch vengono eliminate in un processo noto come *rimozione dello stack*. Nella rimozione dello stack, l'esecuzione procede come segue:

1. Il controllo raggiunge l' **`try`** istruzione in base all'esecuzione sequenziale normale. La sezione sorvegliata nel **`try`** blocco viene eseguita.

1. Se non viene generata alcuna eccezione durante l'esecuzione della sezione protetta, le **`catch`** clausole che seguono il **`try`** blocco non vengono eseguite. L'esecuzione continua in corrispondenza dell'istruzione successiva all'ultima **`catch`** clausola che segue il **`try`** blocco associato.

1. Se viene generata un'eccezione durante l'esecuzione della sezione protetta o nelle routine che la sezione sorvegliata chiama direttamente o indirettamente, viene creato un oggetto eccezione dall'oggetto creato dall' **`throw`** operando. Questo implica che è possibile che sia necessario un costruttore di copia. A questo punto, il compilatore cerca una **`catch`** clausola in un contesto di esecuzione superiore in grado di gestire un'eccezione del tipo generato o per un **`catch`** gestore in grado di gestire qualsiasi tipo di eccezione. I **`catch`** gestori vengono esaminati in ordine di visualizzazione dopo il **`try`** blocco. Se non viene trovato alcun gestore appropriato, viene esaminato il blocco di inclusione dinamica successivo **`try`** . Questo processo continua fino a quando non viene esaminato il blocco di inclusione più esterno **`try`** .

1. Se anche in questo modo non viene individuato alcun gestore appropriato o se si verifica un'eccezione durante il processo di rimozione, ma prima che il gestore ottenga il controllo, la funzione di runtime predefinita `terminate` viene chiamata. Se si verifica un'eccezione dopo la generazione dell'eccezione ma prima che la rimozione abbia inizio, viene chiamato `terminate`.

1. Se **`catch`** viene trovato un gestore corrispondente e viene intercettato per valore, il relativo parametro formale viene inizializzato copiando l'oggetto eccezione. Se le rilevazioni sono effettuate per riferimento, il parametro viene inizializzato in modo da fare riferimento all'oggetto eccezione. In seguito all'inizializzazione del parametro formale, ha inizio il processo di rimozione dello stack. Questa operazione comporta l'eliminazione di tutti gli oggetti automatici completamente costruiti, ma non ancora destructati, tra l'inizio del **`try`** blocco associato al **`catch`** gestore e il sito di generazione dell'eccezione. La distruzione ha luogo in ordine inverso rispetto alla costruzione. Il **`catch`** gestore viene eseguito e il programma riprende l'esecuzione dopo l'ultimo gestore, ovvero in corrispondenza della prima istruzione o costrutto che non è un **`catch`** gestore. Il controllo può solo immettere un **`catch`** gestore tramite un'eccezione generata, mai tramite un' **`goto`** istruzione o un' **`case`** etichetta in un' **`switch`** istruzione.

## <a name="stack-unwinding-example"></a>Esempio di rimozione dello stack

L'esempio seguente illustra le modalità di rimozione dello stack quando viene generata un'eccezione. L'esecuzione nel thread passa dall'istruzione throw in `C` all'istruzione catch in `main` e rimuove tutte le funzioni che incontra sul suo percorso. Si noti l'ordine in cui gli oggetti `Dummy` vengono creati e poi distrutti quando diventano esterni all'ambito. Si noti, inoltre, che nessuna funzione è completa, ad eccezione di `main`, che contiene l'istruzione catch. La funzione `A` non viene mai restituita dalla relativa chiamata a `B()` e `B` non viene mai restituita dalla relativa chiamata a `C()`. Si noti che, se dalla definizione del puntatore `Dummy` si rimuovono il commento e l'istruzione di eliminazione corrispondente e, successivamente, si esegue il programma, il puntatore non viene mai eliminato. Questo indica ciò che può verificarsi quando le funzioni non forniscono una garanzia di eccezione. Per ulteriori informazioni, consultare la sezione Progettazione delle eccezioni in Procedura. Se si inserisce un commento al di fuori dell'istruzione catch, è possibile osservare ciò che si verifica quando un programma termina a causa di un'eccezione non gestita.

```cpp
#include <string>
#include <iostream>
using namespace std;

class MyException{};
class Dummy
{
    public:
    Dummy(string s) : MyName(s) { PrintMsg("Created Dummy:"); }
    Dummy(const Dummy& other) : MyName(other.MyName){ PrintMsg("Copy created Dummy:"); }
    ~Dummy(){ PrintMsg("Destroyed Dummy:"); }
    void PrintMsg(string s) { cout << s  << MyName <<  endl; }
    string MyName;
    int level;
};

void C(Dummy d, int i)
{
    cout << "Entering FunctionC" << endl;
    d.MyName = " C";
    throw MyException();

    cout << "Exiting FunctionC" << endl;
}

void B(Dummy d, int i)
{
    cout << "Entering FunctionB" << endl;
    d.MyName = "B";
    C(d, i + 1);
    cout << "Exiting FunctionB" << endl;
}

void A(Dummy d, int i)
{
    cout << "Entering FunctionA" << endl;
    d.MyName = " A" ;
  //  Dummy* pd = new Dummy("new Dummy"); //Not exception safe!!!
    B(d, i + 1);
 //   delete pd;
    cout << "Exiting FunctionA" << endl;
}

int main()
{
    cout << "Entering main" << endl;
    try
    {
        Dummy d(" M");
        A(d,1);
    }
    catch (MyException& e)
    {
        cout << "Caught an exception of type: " << typeid(e).name() << endl;
    }

    cout << "Exiting main." << endl;
    char c;
    cin >> c;
}

/* Output:
    Entering main
    Created Dummy: M
    Copy created Dummy: M
    Entering FunctionA
    Copy created Dummy: A
    Entering FunctionB
    Copy created Dummy: B
    Entering FunctionC
    Destroyed Dummy: C
    Destroyed Dummy: B
    Destroyed Dummy: A
    Destroyed Dummy: M
    Caught an exception of type: class MyException
    Exiting main.

*/
```
