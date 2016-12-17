---
title: "Asserzione e messaggi forniti dall&#39;utente (C++) | Microsoft Docs"
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
helpviewer_keywords: 
  - "#error%2C assert%2C static_assert [C++]"
  - "messaggi forniti dall'utente [C++], fase di compilazione"
  - "messaggi forniti dall'utente [C++], tempo preprocessore"
  - "messaggi forniti dall'utente [C++], runtime"
ms.assetid: ebf7d885-61c8-4233-b0ae-1c9a38e0f385
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Asserzione e messaggi forniti dall&#39;utente (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il linguaggio C\+\+ supporta tre meccanismi di gestione degli errori che consentono di eseguire il debug dell'applicazione: la [direttiva \#error](../preprocessor/hash-error-directive-c-cpp.md), la parola chiave [static\_assert](../cpp/static-assert.md) e la macro [Macro assert, \_assert, \_wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md).  Tutti i tre meccanismi generano messaggi di errore e due eseguono anche il test di asserzioni software.  Un'asserzione software specifica una condizione che si prevede abbia valore True in un particolare punto del programma.  Se un'asserzione sull'ora di compilazione non riesce, il compilatore genera un messaggio di diagnostica e un errore di compilazione.  Se un'asserzione di runtime non riesce, il sistema operativo genera un messaggio di diagnostica e chiude l'applicazione.  
  
## Note  
 La durata dell'applicazione è costituita dalla pre\-elaborazione, dalla compilazione e dalla fase di esecuzione.  Ciascun meccanismo di gestione degli errori accede a informazioni di debug disponibili durante una di queste fasi.  Per eseguire il debug in modo efficace, selezionare il meccanismo che fornisce le informazioni corrette su quella fase:  
  
-   La [direttiva \#error](../preprocessor/hash-error-directive-c-cpp.md) è attiva nella fase di pre\-elaborazione.  Genera incondizionatamente un messaggio specificato dall'utente e determina l'esito negativo della compilazione con un errore.  Il messaggio può contenere testo che viene modificato dalle direttive per il preprocessore, ma qualsiasi espressione risultante non viene valutata.  
  
-   La dichiarazione [static\_assert](../cpp/static-assert.md) è attiva in fase di compilazione.  Esegue il test di un'asserzione software rappresentata da un'espressione integrale specificata dall'utente che può essere convertita in un valore booleano.  Se l'espressione restituisce valori zero \(false\), il compilatore genera il messaggio specificato dall'utente e la compilazione ha esito negativo con un errore.  
  
     La dichiarazione `static_assert` è particolarmente utile per il debug di modelli perché argomenti di modello possono essere inclusi nell'espressione specificata dall'utente.  
  
-   La macro [Macro assert, \_assert, \_wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md) è attiva in fase di esecuzione.  Restituisce un'espressione specificata dall'utente e se il risultato è zero, il sistema genera un messaggio di diagnostica e chiude l'applicazione.  Molte altre macro, come[\_ASSERT](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) e `_ASSERTE`, sono simili a questa macro, ma generano messaggi di diagnostica definiti dal sistema o definiti dall'utente diversi.  
  
## Vedere anche  
 [Direttiva \#error](../preprocessor/hash-error-directive-c-cpp.md)   
 [Macro assert, \_assert, \_wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)   
 [Macro \_ASSERT, \_ASSERTE, \_ASSERT\_EXPR](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)   
 [static\_assert](../cpp/static-assert.md)   
 [Macro \_STATIC\_ASSERT](../c-runtime-library/reference/static-assert-macro.md)   
 [Modelli](../cpp/templates-cpp.md)