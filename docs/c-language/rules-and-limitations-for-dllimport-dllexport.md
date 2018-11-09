---
title: Regole e limitazioni per dllimport-dllexport
ms.date: 11/04/2016
helpviewer_keywords:
- dllexport attribute [C++], limitations and rules
- dllimport attribute [C++], limitations and rules
- dllexport attribute [C++]
ms.assetid: 274b735f-ab9c-4b07-8d0e-fdb65d664634
ms.openlocfilehash: 123ccf583fe5e07d9f2610ec621b48d8a8c39be8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50622028"
---
# <a name="rules-and-limitations-for-dllimportdllexport"></a>Regole e limitazioni per dllimport/dllexport

**Sezione specifica Microsoft**

- Se si dichiara una funzione senza l'attributo **dllimport** o `dllexport`, la funzione non viene considerata parte dell'interfaccia DLL. Di conseguenza, la definizione della funzione deve essere presente in tale modulo o in un altro modulo dello stesso programma. Per rendere la funzione parte dell'interfaccia DLL, è necessario dichiararne la definizione nell'altro modulo come `dllexport`. In caso contrario, durante la compilazione del client verrà generato un errore del linker.

- Se le dichiarazioni **dllimport** e `dllexport` per la stessa funzione si trovano nello stesso modulo del programma, l'attributo `dllexport` ha la precedenza sull'attributo **dllimport**. Viene tuttavia generato un avviso del compilatore. Ad esempio:

    ```
    #define DllImport   __declspec( dllimport )
    #define DllExport   __declspec( dllexport )

       DllImport void func1( void );
       DllExport void func1( void );   /* Warning; dllexport */
                                       /* takes precedence. */

    ```

- Non è possibile inizializzare un puntatore a dati statico con l'indirizzo di un oggetto dati dichiarato con l'attributo **dllimport**. Il codice seguente genera ad esempio errori:

    ```
    #define DllImport   __declspec( dllimport )
    #define DllExport   __declspec( dllexport )

       DllImport int i;
       .
       .
       .
       int *pi = &i;                           /* Error */

       void func2()
       {
          static int *pi = &i;                   /* Error */
       }

    ```

- Se si inizializza un puntatore a una funzione statico con l'indirizzo di una funzione dichiarata con **dllimport**, il puntatore verrà impostato sull'indirizzo del thunk di importazione della DLL (uno stub di codice che trasferisce il controllo alla funzione) anziché sull'indirizzo della funzione. Questa assegnazione non genera un messaggio di errore:

    ```
    #define DllImport   __declspec( dllimport )
    #define DllExport   __declspec( dllexport )

       DllImport void func1( void
       .
       .
       .
       static void ( *pf )( void ) = &func1;   /* No Error */

       void func2()
       {
          static void ( *pf )( void ) = &func1;  /* No Error */
       }

    ```

- Poiché un programma che include l'attributo `dllexport` nella dichiarazione di un oggetto deve fornire la definizione di tale oggetto, è possibile inizializzare un puntatore a funzione statico globale o locale con l'indirizzo di una funzione `dllexport`. Analogamente, è possibile inizializzare un puntatore a dati statico globale o locale con l'indirizzo di un oggetto dati `dllexport`. Ad esempio:

    ```
    #define DllImport   __declspec( dllimport )
    #define DllExport   __declspec( dllexport )

       DllImport void func1( void );
       DllImport int i;

       DllExport void func1( void );
       DllExport int i;
       .
       .
       .
       int *pi = &i;                            /* Okay */
       static void ( *pf )( void ) = &func1;    /* Okay */

       void func2()
       {
          static int *pi = i;                     /* Okay */
          static void ( *pf )( void ) = &func1;   /* Okay */
       }

    ```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Funzioni di importazione ed esportazione di DLL](../c-language/dll-import-and-export-functions.md)