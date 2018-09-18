---
title: Regole e limitazioni generali | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 6c48902d-4259-4761-95d4-e421d69aa050
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9a2a21de2cade8eb0d8776b340123df3535c36f4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46034395"
---
# <a name="general-rules-and-limitations"></a>Regole e limitazioni generali

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

- Se si dichiara una funzione o un oggetto senza il **dllimport** oppure **dllexport** attributo, la funzione o l'oggetto non viene considerata parte dell'interfaccia DLL. Di conseguenza, la definizione della funzione o dell'oggetto deve essere presente in tale modulo o in un altro modulo dello stesso programma. Per rendere la funzione o oggetto parte dell'interfaccia DLL, è necessario dichiararne la definizione della funzione o dell'oggetto in altro modulo come **dllexport**. In caso contrario, viene generato un errore del linker.

     Se si dichiara una funzione o un oggetto con il **dllexport** dell'attributo, la relativa definizione deve trovarsi in un modulo dello stesso programma. In caso contrario, viene generato un errore del linker.

- Se un unico modulo nel programma contiene entrambe **dllimport** e **dllexport** dichiarazioni per la stessa funzione o oggetto, il **dllexport** attributo ha la precedenza tramite il **dllimport** attributo. Viene tuttavia generato un avviso del compilatore. Ad esempio:

    ```cpp
    __declspec( dllimport ) int i;
    __declspec( dllexport ) int i;   // Warning; inconsistent;
                                     // dllexport takes precedence.
    ```

- In C++, è possibile inizializzare un puntatore a dati locale dichiarato a livello globale o statico o con l'indirizzo di un oggetto dati dichiarato con la **dllimport** attributo, che genera un errore in C. Inoltre, è possibile inizializzare un puntatore a funzione locale statico con l'indirizzo di una funzione dichiarata con la **dllimport** attributo. In C tale assegnazione imposta il puntatore sull'indirizzo del thunk di importazione della DLL (uno stub di codice che trasferisce il controllo alla funzione) anziché sull'indirizzo della funzione. In C++ imposta il puntatore sull'indirizzo della funzione. Ad esempio:

    ```cpp
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

     Tuttavia, poiché un programma che include il **dllexport** attributo nella dichiarazione di un oggetto deve fornire la definizione di tale oggetto in qualche punto del programma, è possibile inizializzare un puntatore a funzione statico globale o locale con l'indirizzo di un **dllexport** (funzione). Analogamente, è possibile inizializzare un puntatore a dati statico globale o locale con l'indirizzo di un **dllexport** oggetto dati. Ad esempio, il seguente codice non genera errori in C o in C++:

    ```cpp
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

- Se si applicano **dllexport** a una classe normale che dispone di una classe di base che non è contrassegnata come **dllexport**, il compilatore genererà l'avviso C4275.

     Il compilatore genera lo stesso avviso se la classe base è una specializzazione di un modello di classe. Per risolvere questo problema, contrassegnare la classe di base con **dllexport**. Il problema con una specializzazione di un modello di classe è dove posizionare il **dllexport**; non è consentito per contrassegnare il modello di classe. In alternativa, in modo esplicito creare un'istanza del modello di classe e contrassegnare questa creazione esplicita con **dllexport**. Ad esempio:

    ```cpp
    template class __declspec(dllexport) B<int>;
    class __declspec(dllexport) D : public B<int> {
    // ...
    ```

     Questa soluzione alternativa non riesce se un argomento del modello è la classe di derivazione. Ad esempio:

    ```cpp
    class __declspec(dllexport) D : public B<D> {
    // ...
    ```

     Poiché si tratta di un modello comune con i modelli, il compilatore modifica la semantica **dllexport** quando viene applicato a una classe che dispone di uno o più classi base e quando uno o più delle classi di base è una specializzazione di un modello di classe . In questo caso, il compilatore applica in modo implicito **dllexport** alle specializzazioni dei modelli di classe. È possibile eseguire le operazioni seguenti e senza ricevere un avviso:

    ```cpp
    class __declspec(dllexport) D : public B<D> {
    // ...
    ```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[dllexport, dllimport](../cpp/dllexport-dllimport.md)