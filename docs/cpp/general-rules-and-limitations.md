---
description: 'Altre informazioni su: regole e limitazioni generali'
title: Regole e limitazioni generali
ms.date: 11/04/2016
ms.assetid: 6c48902d-4259-4761-95d4-e421d69aa050
ms.openlocfilehash: 935befff4cce7f87217e1a05e8ca92835c82565d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332545"
---
# <a name="general-rules-and-limitations"></a>Regole e limitazioni generali

**Specifico di Microsoft**

- Se si dichiara una funzione o un oggetto senza **`dllimport`** l' **`dllexport`** attributo o, la funzione o l'oggetto non viene considerato parte dell'interfaccia dll. Di conseguenza, la definizione della funzione o dell'oggetto deve essere presente in tale modulo o in un altro modulo dello stesso programma. Per rendere la funzione o la parte dell'oggetto dell'interfaccia DLL, è necessario dichiarare la definizione della funzione o dell'oggetto nell'altro modulo come **`dllexport`** . In caso contrario, viene generato un errore del linker.

   Se si dichiara una funzione o un oggetto con l' **`dllexport`** attributo, la relativa definizione deve essere visualizzata in un modulo dello stesso programma. In caso contrario, viene generato un errore del linker.

- Se un unico modulo nel programma contiene entrambe le **`dllimport`** **`dllexport`** dichiarazioni e per la stessa funzione o oggetto, l'attributo ha la **`dllexport`** precedenza sull' **`dllimport`** attributo. Viene tuttavia generato un avviso del compilatore. Ad esempio:

    ```cpp
    __declspec( dllimport ) int i;
    __declspec( dllexport ) int i;   // Warning; inconsistent;
                                     // dllexport takes precedence.
    ```

- In C++ è possibile inizializzare un puntatore a dati locali dichiarati a livello globale o statico oppure con l'indirizzo di un oggetto dati dichiarato con l' **`dllimport`** attributo, che genera un errore in C. Inoltre, è possibile inizializzare un puntatore a funzione locale statico con l'indirizzo di una funzione dichiarata con l' **`dllimport`** attributo. In C tale assegnazione imposta il puntatore sull'indirizzo del thunk di importazione della DLL (uno stub di codice che trasferisce il controllo alla funzione) anziché sull'indirizzo della funzione. In C++ imposta il puntatore sull'indirizzo della funzione. Ad esempio:

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

   Tuttavia, poiché un programma che include l' **`dllexport`** attributo nella dichiarazione di un oggetto deve fornire la definizione di tale oggetto in un punto qualsiasi del programma, è possibile inizializzare un puntatore a funzione statica globale o locale con l'indirizzo di una **`dllexport`** funzione. Analogamente, è possibile inizializzare un puntatore a dati statici globale o locale con l'indirizzo di un **`dllexport`** oggetto dati. Ad esempio, il seguente codice non genera errori in C o in C++:

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

- Se si applica **`dllexport`** a una classe regolare con una classe di base non contrassegnata come **`dllexport`** , il compilatore genererà C4275.

   Il compilatore genera lo stesso avviso se la classe base è una specializzazione di un modello di classe. Per ovviare a questo problema, contrassegnare la classe base con **`dllexport`** . Il problema con una specializzazione di un modello di classe è la posizione in cui posizionare il **`__declspec(dllexport)`** . non è consentito contrassegnare il modello di classe. In alternativa, creare un'istanza esplicita del modello di classe e contrassegnare questa istanza esplicita con **`dllexport`** . Ad esempio:

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

   Poiché si tratta di un modello comune con i modelli, il compilatore ha modificato la semantica di **`dllexport`** quando viene applicata a una classe che dispone di una o più classi base e quando una o più classi base sono una specializzazione di un modello di classe. In questo caso, il compilatore si applica in modo implicito **`dllexport`** alle specializzazioni dei modelli di classe. È possibile eseguire le operazioni seguenti senza ricevere un avviso:

    ```cpp
    class __declspec(dllexport) D : public B<D> {
    // ...
    ```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[dllexport, dllimport](../cpp/dllexport-dllimport.md)
