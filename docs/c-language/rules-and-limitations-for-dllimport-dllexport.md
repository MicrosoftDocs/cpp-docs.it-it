---
title: Regole e limitazioni per dllimport/dllexport | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- dllexport attribute [C++], limitations and rules
- dllimport attribute [C++], limitations and rules
- dllexport attribute [C++]
ms.assetid: 274b735f-ab9c-4b07-8d0e-fdb65d664634
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 99029a41365236ea64722c5fd30c7ce09095028b
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="rules-and-limitations-for-dllimportdllexport"></a>Regole e limitazioni per dllimport/dllexport
**Sezione specifica Microsoft**  
  
-   Se si dichiara una funzione senza l'attributo **dllimport** o `dllexport`, la funzione non viene considerata parte dell'interfaccia DLL. Di conseguenza, la definizione della funzione deve essere presente in tale modulo o in un altro modulo dello stesso programma. Per rendere la funzione parte dell'interfaccia DLL, è necessario dichiararne la definizione nell'altro modulo come `dllexport`. In caso contrario, durante la compilazione del client verrà generato un errore del linker.  
  
-   Se le dichiarazioni **dllimport** e `dllexport` per la stessa funzione si trovano nello stesso modulo del programma, l'attributo `dllexport` ha la precedenza sull'attributo **dllimport**. Viene tuttavia generato un avviso del compilatore. Ad esempio:  
  
    ```  
    #define DllImport   __declspec( dllimport )  
    #define DllExport   __declspec( dllexport )  
  
       DllImport void func1( void );  
       DllExport void func1( void );   /* Warning; dllexport */  
                                       /* takes precedence. */  
  
    ```  
  
-   Non è possibile inizializzare un puntatore a dati statico con l'indirizzo di un oggetto dati dichiarato con l'attributo **dllimport**. Il codice seguente genera ad esempio errori:  
  
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
  
-   Se si inizializza un puntatore a una funzione statico con l'indirizzo di una funzione dichiarata con **dllimport**, il puntatore verrà impostato sull'indirizzo del thunk di importazione della DLL (uno stub di codice che trasferisce il controllo alla funzione) anziché sull'indirizzo della funzione. Questa assegnazione non genera un messaggio di errore:  
  
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
  
-   Poiché un programma che include l'attributo `dllexport` nella dichiarazione di un oggetto deve fornire la definizione di tale oggetto, è possibile inizializzare un puntatore a funzione statico globale o locale con l'indirizzo di una funzione `dllexport`. Analogamente, è possibile inizializzare un puntatore a dati statico globale o locale con l'indirizzo di un oggetto dati `dllexport`. Ad esempio:  
  
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
