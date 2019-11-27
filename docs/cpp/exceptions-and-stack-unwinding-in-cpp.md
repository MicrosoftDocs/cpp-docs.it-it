---
title: Eccezioni e rimozione dallo stack in C++
ms.date: 11/19/2019
ms.assetid: a1a57eae-5fc5-4c49-824f-3ce2eb8129ed
ms.openlocfilehash: 11657206e86dbc81eb62c1e11b49fd87777f11d8
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74246564"
---
# <a name="exceptions-and-stack-unwinding-in-c"></a>Eccezioni e rimozione dallo stack in C++

Nel meccanismo di eccezioni di C++, il controllo si sposta dall'istruzione throw alla prima istruzione catch che può gestire il tipo generato. Quando viene raggiunta l'istruzione catch, tutte le variabili automatiche che rientrano nell'ambito tra le istruzioni throw e catch vengono eliminate in un processo noto come *rimozione dello stack*. Nella rimozione dello stack, l'esecuzione procede come segue:

1. Il controllo raggiunge l'istruzione **try** per normale esecuzione sequenziale. La sezione sorvegliata nel blocco **try** viene eseguita.

1. Se non viene generata alcuna eccezione durante l'esecuzione della sezione protetta, le clausole **catch** che seguono il blocco **try** non vengono eseguite. L'esecuzione continua con l'istruzione successiva all'ultima clausola **catch** che segue il blocco **try** associato.

1. Se viene generata un'eccezione durante l'esecuzione della sezione protetta o nelle routine che la sezione sorvegliata chiama direttamente o indirettamente, viene creato un oggetto eccezione dall'oggetto creato dall'operando **throw** . Questo implica che è possibile che sia necessario un costruttore di copia. A questo punto, il compilatore cerca una clausola **catch** in un contesto di esecuzione superiore in grado di gestire un'eccezione del tipo generato o per un gestore **catch** in grado di gestire qualsiasi tipo di eccezione. I gestori **catch** vengono esaminati in ordine di aspetto dopo il blocco **try** . Se non viene trovato alcun gestore appropriato, viene esaminato il blocco **try** di inclusione dinamico successivo. Questo processo continua fino a quando non viene esaminato il blocco **try** di inclusione più esterno.

1. Se anche in questo modo non viene individuato alcun gestore appropriato o se si verifica un'eccezione durante il processo di rimozione, ma prima che il gestore ottenga il controllo, la funzione di runtime predefinita `terminate` viene chiamata. Se si verifica un'eccezione dopo la generazione dell'eccezione ma prima che la rimozione abbia inizio, viene chiamato `terminate`.

1. Se viene trovato un gestore **catch** corrispondente e viene intercettato per valore, il relativo parametro formale viene inizializzato copiando l'oggetto eccezione. Se le rilevazioni sono effettuate per riferimento, il parametro viene inizializzato in modo da fare riferimento all'oggetto eccezione. In seguito all'inizializzazione del parametro formale, ha inizio il processo di rimozione dello stack. Questa operazione comporta l'eliminazione di tutti gli oggetti automatici completamente costruiti, ma non ancora destructati, tra l'inizio del blocco **try** associato al gestore **catch** e il sito Throw dell'eccezione. La distruzione ha luogo in ordine inverso rispetto alla costruzione. Il gestore **catch** viene eseguito e il programma riprende l'esecuzione dopo l'ultimo gestore, ovvero in corrispondenza della prima istruzione o costrutto che non è un gestore **catch** . Il controllo può solo immettere un gestore **catch** tramite un'eccezione generata, mai tramite un'istruzione **goto** o un'etichetta **case** in un'istruzione **Switch** .

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
