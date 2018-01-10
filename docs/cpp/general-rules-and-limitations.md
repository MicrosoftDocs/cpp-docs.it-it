---
title: Regole e limitazioni generali | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
ms.assetid: 6c48902d-4259-4761-95d4-e421d69aa050
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 51f92844e993671a3423c04523ccf4e03f7f7e48
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="general-rules-and-limitations"></a>Regole e limitazioni generali
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
  
-   Se dichiara una funzione o un oggetto senza il **dllimport** o `dllexport` attributo, la funzione o l'oggetto non viene considerato parte dell'interfaccia DLL. Di conseguenza, la definizione della funzione o dell'oggetto deve essere presente in tale modulo o in un altro modulo dello stesso programma. Per rendere la funzione o l'oggetto parte dell'interfaccia DLL, è necessario dichiararne la definizione nell'altro modulo come `dllexport`. In caso contrario, viene generato un errore del linker.  
  
     Se si dichiara una funzione o un oggetto con l'attributo `dllexport`, la relativa definizione deve trovarsi in un modulo dello stesso programma. In caso contrario, viene generato un errore del linker.  
  
-   Se un unico modulo nel programma contiene entrambe **dllimport** e `dllexport` dichiarazioni per la stessa funzione o oggetto, il `dllexport` attributo ha la precedenza sul **dllimport** attributo. Viene tuttavia generato un avviso del compilatore. Ad esempio:  
  
    ```  
    __declspec( dllimport ) int i;  
    __declspec( dllexport ) int i;   // Warning; inconsistent;  
                                     // dllexport takes precedence.  
    ```  
  
-   In C++, è possibile inizializzare un puntatore a dati locali dichiarati globalmente statico o con l'indirizzo di un oggetto dati dichiarato con la **dllimport** attributo, che genera un errore in C. Inoltre, è possibile inizializzare un puntatore a funzione locale statico con l'indirizzo di una funzione dichiarata con la **dllimport** attributo. In C tale assegnazione imposta il puntatore sull'indirizzo del thunk di importazione della DLL (uno stub di codice che trasferisce il controllo alla funzione) anziché sull'indirizzo della funzione. In C++ imposta il puntatore sull'indirizzo della funzione. Ad esempio:  
  
    ```  
    __declspec( dllimport ) void func1( void );  
    __declspec( dllimport ) int i;  
  
    int *pi = &i;                             // Error in C  
    static void ( *pf )( void ) = &func1;     // Address of thunk in C,  
                                              // function in C++  
  
    void func2()  
    {  
       static int *pi = &i;                  // Error in C  
       static void ( *pf )( void ) = &func1; // Address of thunk in C,  
                                             // function in C++  
    }  
    ```  
  
     Tuttavia, poiché un programma che include l'attributo `dllexport` nella dichiarazione di un oggetto deve fornire la definizione di tale oggetto in qualche punto del programma, è possibile inizializzare un puntatore a funzione statico globale o locale con l'indirizzo di una funzione `dllexport`. Analogamente, è possibile inizializzare un puntatore a dati statico globale o locale con l'indirizzo di un oggetto dati `dllexport`. Ad esempio, il seguente codice non genera errori in C o in C++:  
  
    ```  
    __declspec( dllexport ) void func1( void );  
    __declspec( dllexport ) int i;  
  
    int *pi = &i;                              // Okay  
    static void ( *pf )( void ) = &func1;      // Okay  
  
    void func2()  
    {  
        static int *pi = &i;                   // Okay  
        static void ( *pf )( void ) = &func1;  // Okay  
    }  
    ```  
  
-   Se si applica `dllexport` a una classe normale che dispone di una classe di base che non è contrassegnata come `dllexport`, il compilatore genererà l'avviso C4275.  
  
     Il compilatore genera lo stesso avviso se la classe base è una specializzazione di un modello di classe. Per risolvere questo problema, contrassegnare la classe base con `dllexport`. Il problema con una specializzazione di un modello di classe è la posizione di **dllexport**; non è consentito per contrassegnare il modello di classe. È invece possibile creare in modo esplicito un'istanza del modello di classe e contrassegnare questa creazione esplicita con `dllexport`. Ad esempio:  
  
    ```  
    template class __declspec(dllexport) B<int>;  
    class __declspec(dllexport) D : public B<int> {  
    // ...  
    ```  
  
     Questa soluzione alternativa non riesce se un argomento del modello è la classe di derivazione. Ad esempio:  
  
    ```  
    class __declspec(dllexport) D : public B<D> {  
    // ...  
    ```  
  
     Trattandosi di una situazione comune con i modelli, il compilatore modifica la semantica di `dllexport` quando viene applicato a una classe che include una o più classi base e quando una o più classi base sono una specializzazione del modello di classe. In questo caso, il compilatore applica in modo implicito `dllexport` alle specializzazioni dei modelli della classe. È possibile eseguire le operazioni seguenti e senza ricevere un avviso:  
  
    ```  
    class __declspec(dllexport) D : public B<D> {  
    // ...  
    ```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [dllexport, dllimport](../cpp/dllexport-dllimport.md)