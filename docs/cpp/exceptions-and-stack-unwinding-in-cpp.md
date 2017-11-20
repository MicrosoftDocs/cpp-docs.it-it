---
title: Le eccezioni e rimozione dello Stack in C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
ms.assetid: a1a57eae-5fc5-4c49-824f-3ce2eb8129ed
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: eedfb9c453fbd48ef2c5868fb186156397eeb500
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="exceptions-and-stack-unwinding-in-c"></a>Eccezioni e rimozione dallo stack in C++
Nel meccanismo di eccezioni di C++, il controllo si sposta dall'istruzione throw alla prima istruzione catch che può gestire il tipo generato. Quando l'istruzione catch viene raggiunta, tutte le variabili automatiche incluse nell'ambito definito tra l'istruzione throw e catch istruzioni vengono eliminati definitivamente in un processo noto come *rimozione dello stack*. Nella rimozione dello stack, l'esecuzione procede come segue:  
  
1.  Il controllo raggiunge l'istruzione `try` tramite l'esecuzione sequenziale normale. La sezione protetta nel blocco `try` viene eseguita.  
  
2.  Se non viene generata alcuna eccezione durante l'esecuzione della sezione protetta, le clausole `catch` che seguono il blocco `try` non vengono eseguite. L'esecuzione continua con l'istruzione presente dopo l'ultima clausola `catch` che segue il blocco `try` associato.  
  
3.  Se viene generata un'eccezione durante l'esecuzione della sezione accessibile o in qualsiasi routine chiamata direttamente o indirettamente dalla sezione accessibile, l'oggetto creato dall'operando `throw` crea a sua volta un oggetto eccezione. Questo implica che potrebbe essere coinvolto un costruttore di copia. In questa fase, il compilatore cerca una clausola `catch` in un contesto di esecuzione più elevato e che sia in grado di gestire un'eccezione del tipo generato, in alternativa, cerca un gestore `catch` in grado di gestire qualsiasi tipo di eccezione. I gestori `catch` vengono esaminati in ordine di aspetto dopo il blocco `try`. Se non viene individuato alcun gestore appropriato, viene esaminato il blocco di inclusione dinamica `try` successivo. Questo processo continua fino a che il blocco di inclusione `try` più esterno non viene esaminato.  
  
4.  Se anche in questo modo non viene individuato alcun gestore appropriato o se si verifica un'eccezione durante il processo di rimozione, ma prima che il gestore ottenga il controllo, la funzione di runtime predefinita `terminate` viene chiamata. Se si verifica un'eccezione dopo la generazione dell'eccezione ma prima che la rimozione abbia inizio, viene chiamato `terminate`.  
  
5.  Se viene individuato un gestore `catch` corrispondente che effettua le rilevazioni per valore, il relativo parametro formale viene inizializzato copiando l'oggetto eccezione. Se le rilevazioni sono effettuate per riferimento, il parametro viene inizializzato in modo da fare riferimento all'oggetto eccezione. In seguito all'inizializzazione del parametro formale, ha inizio il processo di rimozione dello stack. Tale processo include la distruzione di tutti gli oggetti automatici la cui costruzione è stata completata, ma che non sono ancora stati distrutti, tra l'inizio del blocco `try` associato al gestore `catch` e il sito di generazione dell'eccezione. La distruzione ha luogo in ordine inverso rispetto alla costruzione. Viene eseguito il gestore `catch` e il programma riprende l'esecuzione dopo l'ultimo gestore, ovvero alla prima istruzione o costrutto che non è un gestore `catch`. Il controllo può immettere un gestore `catch` solo attraverso un'eccezione generata, mai tramite un'istruzione `goto` o un'etichetta `case` in un'istruzione `switch`.  
  
## <a name="stack-unwinding-example"></a>Esempio di rimozione dello stack  
 L'esempio seguente illustra le modalità di rimozione dello stack quando viene generata un'eccezione. L'esecuzione nel thread passa dall'istruzione throw in `C` all'istruzione catch in `main` e rimuove tutte le funzioni che incontra sul suo percorso. Si noti l'ordine in cui gli oggetti `Dummy` vengono creati e poi distrutti quando diventano esterni all'ambito. Si noti, inoltre, che nessuna funzione è completa, ad eccezione di `main`, che contiene l'istruzione catch. La funzione `A` non viene mai restituita dalla relativa chiamata a `B()` e `B` non viene mai restituita dalla relativa chiamata a `C()`. Si noti che, se dalla definizione del puntatore `Dummy` si rimuovono il commento e l'istruzione di eliminazione corrispondente e, successivamente, si esegue il programma, il puntatore non viene mai eliminato. Questo indica ciò che può verificarsi quando le funzioni non forniscono una garanzia di eccezione. Per ulteriori informazioni, consultare la sezione Progettazione delle eccezioni in Procedura. Se si inserisce un commento al di fuori dell'istruzione catch, è possibile osservare ciò che si verifica quando un programma termina a causa di un'eccezione non gestita.  
  
```  
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