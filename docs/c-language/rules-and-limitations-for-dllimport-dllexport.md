---
title: Regole e limitazioni per dllimport-dllexport
ms.date: 11/04/2016
helpviewer_keywords:
- dllexport attribute [C++], limitations and rules
- dllimport attribute [C++], limitations and rules
- dllexport attribute [C++]
ms.assetid: 274b735f-ab9c-4b07-8d0e-fdb65d664634
ms.openlocfilehash: c2f121d978962fe7fc03aa453fb0a16650aa2727
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220873"
---
# <a name="rules-and-limitations-for-dllimportdllexport"></a>Regole e limitazioni per dllimport/dllexport

**Specifico di Microsoft**

- Se si dichiara una funzione senza l' **`dllimport`** `dllexport` attributo o, la funzione non viene considerata parte dell'interfaccia dll. Di conseguenza, la definizione della funzione deve essere presente in tale modulo o in un altro modulo dello stesso programma. Per rendere la funzione parte dell'interfaccia DLL, è necessario dichiararne la definizione nell'altro modulo come `dllexport`. In caso contrario, durante la compilazione del client verrà generato un errore del linker.

- Se un unico modulo nel programma contiene **`dllimport`** dichiarazioni e `dllexport` per la stessa funzione, l'attributo ha la `dllexport` precedenza sull' **`dllimport`** attributo. Viene tuttavia generato un avviso del compilatore. Ad esempio:

    ```
    #define DllImport   __declspec( dllimport )
    #define DllExport   __declspec( dllexport )

       DllImport void func1( void );
       DllExport void func1( void );   /* Warning; dllexport */
                                       /* takes precedence. */

    ```

- Non è possibile inizializzare un puntatore a dati statici con l'indirizzo di un oggetto dati dichiarato con l' **`dllimport`** attributo. Il codice seguente genera ad esempio errori:

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

- L'inizializzazione di un puntatore a funzione statico con l'indirizzo di una funzione dichiarata con **`dllimport`** imposta il puntatore sull'indirizzo del thunk di importazione della dll (uno stub di codice che trasferisce il controllo alla funzione) anziché l'indirizzo della funzione. Questa assegnazione non genera un messaggio di errore:

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Funzioni di importazione ed esportazione DLL](../c-language/dll-import-and-export-functions.md)
