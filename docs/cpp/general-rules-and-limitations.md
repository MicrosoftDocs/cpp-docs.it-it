---
title: "Regole e limitazioni generali | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: 6c48902d-4259-4761-95d4-e421d69aa050
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Regole e limitazioni generali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
  
-   Se si dichiara una funzione o un oggetto senza l'attributo **dllimport** o `dllexport`, la funzione o l'oggetto non viene considerato parte dell'interfaccia DLL.  Di conseguenza, la definizione della funzione o dell'oggetto deve essere presente in tale modulo o in un altro modulo dello stesso programma.  Per rendere la funzione o l'oggetto parte dell'interfaccia DLL, è necessario dichiararne la definizione nell'altro modulo come `dllexport`.  In caso contrario, viene generato un errore del linker.  
  
     Se si dichiara una funzione o un oggetto con l'attributo `dllexport`, la relativa definizione deve trovarsi in un modulo dello stesso programma.  In caso contrario, viene generato un errore del linker.  
  
-   Se un unico modulo nel programma contiene entrambe le dichiarazioni **dllimport** e `dllexport` per la stessa funzione o oggetto, l'attributo `dllexport` ha la precedenza sull'attributo **dllimport**.  Viene tuttavia generato un avviso del compilatore.  Ad esempio:  
  
    ```  
    __declspec( dllimport ) int i;  
    __declspec( dllexport ) int i;   // Warning; inconsistent;  
                                     // dllexport takes precedence.  
    ```  
  
-   In C\+\+ è possibile inizializzare un puntatore ai dati locale dichiarato a livello globale o statico oppure con l'indirizzo di un oggetto dati dichiarato con l'attributo **dllimport**, procedura che genera un errore in C.  Inoltre, è possibile inizializzare un puntatore a funzione locale statico con l'indirizzo di una funzione dichiarata con l'attributo **dllimport**.  In C tale assegnazione imposta il puntatore sull'indirizzo del thunk di importazione della DLL \(uno stub di codice che trasferisce il controllo alla funzione\) anziché sull'indirizzo della funzione.  In C\+\+ imposta il puntatore sull'indirizzo della funzione.  Ad esempio:  
  
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
  
     Tuttavia, poiché un programma che include l'attributo `dllexport` nella dichiarazione di un oggetto deve fornire la definizione di tale oggetto in qualche punto del programma, è possibile inizializzare un puntatore a funzione statico globale o locale con l'indirizzo di una funzione `dllexport`.  Analogamente, è possibile inizializzare un puntatore a dati statico globale o locale con l'indirizzo di un oggetto dati `dllexport`.  Ad esempio, il seguente codice non genera errori in C o in C\+\+:  
  
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
  
-   A causa di una modifica nel comportamento in Visual C\+\+ .NET, finalizzata a rendere l'applicazione di `dllexport` più coerente tra le classi normali e le specializzazioni dei modelli di classe, se si applica `dllexport` a una classe normale che ha una classe base non contrassegnata come `dllexport`, il compilatore genererà l'avviso C4275.  
  
     Il compilatore genera lo stesso avviso se la classe base è una specializzazione di un modello di classe.  Per risolvere questo problema, contrassegnare la classe base con `dllexport`.  Il problema con la specializzazione di un modello di classe è rappresentato da dove posizionare **\_\_declspec\(dllexport\)**; il modello di classe non può essere contrassegnato.  È invece possibile creare in modo esplicito un'istanza del modello di classe e contrassegnare questa creazione esplicita con `dllexport`.  Ad esempio:  
  
    ```  
    template class __declspec(dllexport) B<int>;  
    class __declspec(dllexport) D : public B<int> {  
    // ...  
    ```  
  
     Questa soluzione alternativa non riesce se un argomento del modello è la classe di derivazione.  Ad esempio:  
  
    ```  
    class __declspec(dllexport) D : public B<D> {  
    // ...  
    ```  
  
     Trattandosi di una situazione comune con i modelli, il compilatore modifica la semantica di `dllexport` quando viene applicato a una classe che include una o più classi base e quando una o più classi base sono una specializzazione del modello di classe.  In questo caso, il compilatore applica in modo implicito `dllexport` alle specializzazioni dei modelli della classe.  In Visual C\+\+ .NET un utente può eseguire le operazioni seguenti senza ricevere un avviso:  
  
    ```  
    class __declspec(dllexport) D : public B<D> {  
    // ...  
    ```  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [dllexport, dllimport](../cpp/dllexport-dllimport.md)