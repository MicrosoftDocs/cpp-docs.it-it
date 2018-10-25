---
title: Asserzione e messaggi forniti dall'utente (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- user-supplied messages [C++], run time
- user-supplied messages [C++], preprocessor time
- '#error%2C assert%2C static_assert [C++]'
- user-supplied messages [C++], compile time
ms.assetid: ebf7d885-61c8-4233-b0ae-1c9a38e0f385
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fdbf1ba3c4cfda4163076386def70c700c156aa7
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50057876"
---
# <a name="assertion-and-user-supplied-messages-c"></a>Asserzione e messaggi forniti dall'utente (C++)

I C++ supporta tre la gestione degli errori i meccanismi del linguaggio che consentono di eseguire il debug dell'applicazione: il [direttiva #error](../preprocessor/hash-error-directive-c-cpp.md), il [static_assert](../cpp/static-assert.md) (parola chiave) e il [Macro assert, Assert, _ wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md) macro. Tutti i tre meccanismi generano messaggi di errore e due eseguono anche il test di asserzioni software. Un'asserzione software specifica una condizione che si prevede abbia valore True in un particolare punto del programma. Se un'asserzione sull'ora di compilazione non riesce, il compilatore genera un messaggio di diagnostica e un errore di compilazione. Se un'asserzione di runtime non riesce, il sistema operativo genera un messaggio di diagnostica e chiude l'applicazione.

## <a name="remarks"></a>Note

La durata dell'applicazione è costituita dalla pre-elaborazione, dalla compilazione e dalla fase di esecuzione. Ciascun meccanismo di gestione degli errori accede a informazioni di debug disponibili durante una di queste fasi. Per eseguire il debug in modo efficace, selezionare il meccanismo che fornisce le informazioni corrette su quella fase:

- Il [#error direttiva](../preprocessor/hash-error-directive-c-cpp.md) è attiva in fase di pre-elaborazione. Genera incondizionatamente un messaggio specificato dall'utente e determina l'esito negativo della compilazione con un errore. Il messaggio può contenere testo che viene modificato dalle direttive per il preprocessore, ma qualsiasi espressione risultante non viene valutata.

- Il [static_assert](../cpp/static-assert.md) dichiarazione è attiva in fase di compilazione. Esegue il test di un'asserzione software rappresentata da un'espressione integrale specificata dall'utente che può essere convertita in un valore booleano. Se l'espressione restituisce valori zero (false), il compilatore genera il messaggio specificato dall'utente e la compilazione ha esito negativo con un errore.

   La dichiarazione `static_assert` è particolarmente utile per il debug di modelli perché argomenti di modello possono essere inclusi nell'espressione specificata dall'utente.

- Il [Macro assert, Assert, wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md) macro è attiva in fase di esecuzione. Restituisce un'espressione specificata dall'utente e se il risultato è zero, il sistema genera un messaggio di diagnostica e chiude l'applicazione. Molte altre macro, ad esempio[macro Assert](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) e sono simili a questa macro, ASSERTE, ma generano diversi messaggi di diagnostica di definito dal sistema o definite dall'utente.

## <a name="see-also"></a>Vedere anche

[Direttiva #error (C/C++)](../preprocessor/hash-error-directive-c-cpp.md)<br/>
[assert Macro, _assert, _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)<br/>
[Macro _ASSERT, _ASSERTE, _ASSERT_EXPR](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)<br/>
[static_assert](../cpp/static-assert.md)<br/>
[Macro _STATIC_ASSERT](../c-runtime-library/reference/static-assert-macro.md)<br/>
[Modelli](../cpp/templates-cpp.md)