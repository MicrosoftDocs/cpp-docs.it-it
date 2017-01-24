---
title: "Suggerimenti per la scelta tra funzioni e macro | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.functions"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "funzioni [CRT], macro"
  - "macro, funzioni"
ms.assetid: 18a633d6-cf1c-470c-a649-fa7677473e2b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Suggerimenti per la scelta tra funzioni e macro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La maggior parte delle routine di libreria runtime di Microsoft sono funzioni compilate o assemblate, ma alcune routine sono implementate come macro.  Quando un file di intestazione dichiara sia una versione funzione che una macro di una routine, la definizione macro ha la precedenza, perché viene sempre dopo la dichiarazione di funzione.  Quando viene richiamata una routine che viene implementata sia come una funzione che come una macro, è possibile imporre al compilatore di utilizzare la versione in funzione in due modi:  
  
-   Racchiudere il nome della routine tra parentesi.  
  
    ```  
    #include <ctype.h>  
    a = _toupper(a);    // Use macro version of toupper.  
    a = (_toupper)(a);  // Force compiler to use   
                        // function version of toupper.  
    ```  
  
-   "Rimuovere la definizione" macro con la direttiva `#undef` :  
  
    ```  
    #include <ctype.h>  
    #undef _toupper  
    ```  
  
 Se è necessario scegliere tra l'implementazione in funzione e l'implementazione in macro di una routine di libreria, considerare i seguenti compromessi:  
  
-   **Velocità contro dimensione** Il vantaggio principale della macro è il tempo di esecuzione più veloce.  Durante la pre\-elaborazione, una macro viene espansa \(sostituita dalla relativa definizione\) in linea quando viene utilizzata.  Una definizione di funzione viene eseguita solo una volta indipendentemente dal numero di volte in cui viene chiamata.  Le macro possono aumentare la dimensione del codice ma non hanno l'overhead associato alle chiamate di funzione.  
  
-   **Function evaluation** Una funzione restituisce un indirizzo, una macro no.  Pertanto non è possibile utilizzare un nome di macro in contesti che richiedono un puntatore.  Ad esempio, è possibile dichiarare un puntatore a una funzione, ma non un puntatore a una macro.  
  
-   **Type\-checking** Quando si dichiara una funzione, il compilatore può controllare i tipi di argomento.  Poiché non è possibile dichiarare una macro, il compilatore non può controllare i tipi di argomenti della macro; sebbene possa verificare il numero di argomenti passati a una macro.  
  
## Vedere anche  
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)