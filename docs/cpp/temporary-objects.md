---
title: Oggetti temporanei
ms.date: 11/04/2016
helpviewer_keywords:
- temporary objects
- objects [C++], temporary
ms.assetid: 4c8cec02-391e-4225-9bc6-06d150201412
ms.openlocfilehash: b298872a688c3b8e383a04ea4d82753859cbb2e6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80160749"
---
# <a name="temporary-objects"></a>Oggetti temporanei

In alcuni casi, è necessario che il compilatore crei oggetti temporanei. Questi oggetti temporanei possono essere creati per i seguenti motivi:

- Per inizializzare un riferimento **const** con un inizializzatore di un tipo diverso da quello del tipo sottostante del riferimento inizializzato.

- Per memorizzare il valore restituito di una funzione che restituisce un tipo definito dall'utente. Questi temporanei vengono creati solo se il programma non copia il valore restituito in un oggetto. Ad esempio:

    ```cpp
    UDT Func1();    //  Declare a function that returns a user-defined
                    //   type.

    ...

    Func1();        //  Call Func1, but discard return value.
                    //  A temporary object is created to store the return
                    //   value.
    ```

   Poiché il valore restituito non viene copiato in un altro oggetto, viene creato un oggetto temporaneo. Un caso più comune in cui i temporanei vengono creati durante la valutazione di un'espressione in cui le funzioni degli operatori sottoposti a overload devono essere chiamate. Queste funzioni degli operatori sottoposti a overload restituiscono un tipo definito dall'utente che spesso non viene copiato in un altro oggetto.

   Valutare l'espressione `ComplexResult = Complex1 + Complex2 + Complex3`. L'espressione `Complex1 + Complex2` viene valutata e il risultato viene archiviato in un oggetto temporaneo. Viene quindi valutata l'espressione *temporanea* `+ Complex3` e il risultato viene copiato in `ComplexResult` (presupponendo che l'operatore di assegnazione non venga sottoposto a overload).

- Per archiviare il risultato di un cast in un tipo definito dall'utente. Quando un oggetto di un tipo specificato viene convertito in modo esplicito nel tipo definito dall'utente, tale nuovo oggetto viene costruito come oggetto temporaneo.

Gli oggetti temporanei hanno una durata definita dal relativo punto di creazione e dal punto in cui vengono eliminati. Qualsiasi espressione che crea più di un oggetto temporaneo infine li elimina definitivamente nell'ordine inverso in cui sono stati creati. I punti in cui si verifica la distruzione sono riportati nella tabella seguente.

### <a name="destruction-points-for-temporary-objects"></a>Punti di eliminazione degli oggetti temporanei

|Temporaneo di motivo creato|Punto di distruzione|
|------------------------------|-----------------------|
|Risultato della valutazione dell'espressione|Tutti i temporaries creati come risultato della valutazione delle espressioni vengono eliminati definitivamente alla fine dell'istruzione di espressione (ovvero al punto e virgola) o alla fine delle espressioni di controllo per le istruzioni **for**, **if**, **while**, **do**e **Switch** .|
|Inizializzazione di riferimenti **const**|Se un inizializzatore non è un l-value dello stesso tipo del riferimento di cui si sta eseguendo l'inizializzazione, un temporaneo del tipo di oggetto sottostante viene creato e inizializzato con l'espressione di inizializzazione. Questo oggetto temporaneo viene eliminato immediatamente dopo che l'oggetto di riferimento a cui è associato viene eliminato.|
