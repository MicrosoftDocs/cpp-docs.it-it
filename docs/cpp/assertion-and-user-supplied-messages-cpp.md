---
description: 'Altre informazioni su: asserzione e messaggi di User-Supplied (C++)'
title: Asserzione e messaggi forniti dall'utente (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- user-supplied messages [C++], run time
- user-supplied messages [C++], preprocessor time
- '#error%2C assert%2C static_assert [C++]'
- user-supplied messages [C++], compile time
ms.assetid: ebf7d885-61c8-4233-b0ae-1c9a38e0f385
ms.openlocfilehash: eb0dd5d94ffe49017ecb89f53063993bedd12382
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319572"
---
# <a name="assertion-and-user-supplied-messages-c"></a>Asserzione e messaggi forniti dall'utente (C++)

Il linguaggio C++ supporta tre meccanismi di gestione degli errori che consentono di eseguire il debug dell'applicazione: la [direttiva #error](../preprocessor/hash-error-directive-c-cpp.md), la parola chiave [static_assert](../cpp/static-assert.md) e la [macro ASSERT _assert _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md) macro. Tutti i tre meccanismi generano messaggi di errore e due eseguono anche il test di asserzioni software. Un'asserzione software specifica una condizione che si prevede abbia valore True in un particolare punto del programma. Se un'asserzione sull'ora di compilazione non riesce, il compilatore genera un messaggio di diagnostica e un errore di compilazione. Se un'asserzione di runtime non riesce, il sistema operativo genera un messaggio di diagnostica e chiude l'applicazione.

## <a name="remarks"></a>Commenti

La durata dell'applicazione è costituita dalla pre-elaborazione, dalla compilazione e dalla fase di esecuzione. Ciascun meccanismo di gestione degli errori accede a informazioni di debug disponibili durante una di queste fasi. Per eseguire il debug in modo efficace, selezionare il meccanismo che fornisce le informazioni corrette su quella fase:

- La [direttiva #error](../preprocessor/hash-error-directive-c-cpp.md) è attiva in fase di pre-elaborazione. Genera incondizionatamente un messaggio specificato dall'utente e determina l'esito negativo della compilazione con un errore. Il messaggio può contenere testo che viene modificato dalle direttive per il preprocessore, ma qualsiasi espressione risultante non viene valutata.

- La dichiarazione di [static_assert](../cpp/static-assert.md) è attiva in fase di compilazione. Esegue il test di un'asserzione software rappresentata da un'espressione integrale specificata dall'utente che può essere convertita in un valore booleano. Se l'espressione restituisce valori zero (false), il compilatore genera il messaggio specificato dall'utente e la compilazione ha esito negativo con un errore.

   La **`static_assert`** dichiarazione è particolarmente utile per il debug dei modelli perché gli argomenti di modello possono essere inclusi nell'espressione specificata dall'utente.

- La [macro ASSERT, _assert _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md) macro è attiva in fase di esecuzione. Restituisce un'espressione specificata dall'utente e se il risultato è zero, il sistema genera un messaggio di diagnostica e chiude l'applicazione. Molte altre macro, ad esempio[_ASSERT](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) e _ASSERTE, sono simili a questa macro, ma rilasciano messaggi di diagnostica diversi definiti dall'utente o dal sistema.

## <a name="see-also"></a>Vedi anche

[Direttiva #error (C/C++)](../preprocessor/hash-error-directive-c-cpp.md)<br/>
[Macro ASSERT, _assert, _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)<br/>
[_ASSERT, _ASSERTE _ASSERT_EXPR macro](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)<br/>
[static_assert](../cpp/static-assert.md)<br/>
[_STATIC_ASSERT macro](../c-runtime-library/reference/static-assert-macro.md)<br/>
[Modelli](../cpp/templates-cpp.md)
