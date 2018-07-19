---
title: Le eccezioni e rimozione dello Stack in C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: a1a57eae-5fc5-4c49-824f-3ce2eb8129ed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 32558413dd0dc6f7288493067d7373a14e520e29
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943849"
---
# <a name="exceptions-and-stack-unwinding-in-c"></a>Eccezioni e rimozione dallo stack in C++
Nel meccanismo di eccezioni di C++, il controllo si sposta dall'istruzione throw alla prima istruzione catch che può gestire il tipo generato. Quando l'istruzione catch viene raggiunta, tutte le variabili automatiche nell'ambito definito tra l'istruzione throw e catch istruzioni vengono eliminati definitivamente in un processo noto come *rimozione dello stack*. Nella rimozione dello stack, l'esecuzione procede come segue:  
  
1.  Il controllo raggiunge la **provare** istruzione tramite l'esecuzione sequenziale normale. La sezione protetta nel **provare** blocco viene eseguito.  
  
2.  Se viene generata alcuna eccezione durante l'esecuzione della sezione protetta, il **intercettare** clausole che seguono il **provare** blocchi non vengono eseguite. L'esecuzione continua in corrispondenza dell'istruzione dopo l'ultimo **intercettare** clausola seguente associato **provare** blocco.  
  
3.  Se viene generata un'eccezione durante l'esecuzione della sezione protetta o nelle routine che chiamate direttamente o indirettamente dalla sezione protetta, viene creato un oggetto eccezione dall'oggetto a cui viene creato per il **throw** operando. Questo implica che potrebbe essere coinvolto un costruttore di copia. A questo punto, il compilatore cerca un **intercettare** clausola in un contesto di esecuzione superiore in grado di gestire un'eccezione del tipo che viene generata un'eccezione o per un **catch** gestore in grado di gestire qualsiasi tipo di eccezione. Il **intercettare** gestori vengono esaminati nell'ordine di visualizzazione dopo il **provare** blocco. Se viene individuato alcun gestore appropriato, quindi in modo dinamico che li racchiude **provare** viene esaminato il blocco. Questo processo continua finché il più esterno di inclusione **provare** viene esaminato il blocco.  
  
4.  Se anche in questo modo non viene individuato alcun gestore appropriato o se si verifica un'eccezione durante il processo di rimozione, ma prima che il gestore ottenga il controllo, la funzione di runtime predefinita `terminate` viene chiamata. Se si verifica un'eccezione dopo la generazione dell'eccezione ma prima che la rimozione abbia inizio, viene chiamato `terminate`.  
  
5.  Se un oggetto corrispondente **catch** gestore viene trovato e rilevazioni per valore, il parametro formale viene inizializzato copiando l'oggetto eccezione. Se le rilevazioni sono effettuate per riferimento, il parametro viene inizializzato in modo da fare riferimento all'oggetto eccezione. In seguito all'inizializzazione del parametro formale, ha inizio il processo di rimozione dello stack. Ciò comporta la distruzione di tutti gli oggetti automatici che sono stati completamente costruito, ma non ancora eliminato, ovvero tra l'inizio del **provare** blocco di cui è associato il **catch** gestore e il generare sito dell'eccezione. La distruzione ha luogo in ordine inverso rispetto alla costruzione. Il **intercettare** gestore viene eseguito e il programma riprende l'esecuzione dopo l'ultimo gestore, vale a dire, alla prima istruzione o costrutto che non è un **catch** gestore. Controllo è possibile immettere solo un **intercettare** gestore tramite un'eccezione generata, mai tramite un **goto** istruzione o un **case** etichette in un **passare** istruzione.  
  
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