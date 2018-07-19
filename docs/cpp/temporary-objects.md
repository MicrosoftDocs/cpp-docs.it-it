---
title: Gli oggetti temporanei | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- temporary objects
- objects [C++], temporary
ms.assetid: 4c8cec02-391e-4225-9bc6-06d150201412
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2d914b668140f1cbf372e29bcdd4f4b526397fb9
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943209"
---
# <a name="temporary-objects"></a>Oggetti temporanei
In alcuni casi, è necessario che il compilatore crei oggetti temporanei. Questi oggetti temporanei possono essere creati per i seguenti motivi:  
  
-   Per inizializzare un **const** riferimento con un inizializzatore di un tipo diverso da quello del tipo sottostante del riferimento in fase di inizializzazione.  
  
-   Per memorizzare il valore restituito di una funzione che restituisce un tipo definito dall'utente. Questi temporanei vengono creati solo se il programma non copia il valore restituito in un oggetto. Ad esempio:  
  
    ```cpp 
    UDT Func1();    //  Declare a function that returns a user-defined  
                    //   type.  
  
    ...  
  
    Func1();        //  Call Func1, but discard return value.  
                    //  A temporary object is created to store the return  
                    //   value.  
    ```  
  
     Poiché il valore restituito non viene copiato in un altro oggetto, viene creato un oggetto temporaneo. Un caso più comune in cui i temporanei vengono creati durante la valutazione di un'espressione in cui le funzioni degli operatori sottoposti a overload devono essere chiamate. Queste funzioni degli operatori sottoposti a overload restituiscono un tipo definito dall'utente che spesso non viene copiato in un altro oggetto.  
  
     Valutare l'espressione `ComplexResult = Complex1 + Complex2 + Complex3`. L'espressione `Complex1 + Complex2` viene valutata e il risultato viene archiviato in un oggetto temporaneo. Successivamente, l'espressione *temporaneo* `+ Complex3` viene valutata e il risultato viene copiato `ComplexResult` (presupponendo che l'operatore di assegnazione non sia sovraccarica).  
  
-   Per archiviare il risultato di un cast in un tipo definito dall'utente. Quando un oggetto di un tipo specificato viene convertito in modo esplicito nel tipo definito dall'utente, tale nuovo oggetto viene costruito come oggetto temporaneo.  
  
 Gli oggetti temporanei hanno una durata definita dal relativo punto di creazione e dal punto in cui vengono eliminati definitivamente. Qualsiasi espressione che crea più di un oggetto temporaneo infine li elimina nell'ordine inverso in cui sono stati creati. I punti in cui si verifica la distruzione sono riportati nella tabella seguente.  
  
### <a name="destruction-points-for-temporary-objects"></a>Punti di eliminazione degli oggetti temporanei  
  
|Temporaneo di motivo creato|Punto di distruzione|  
|------------------------------|-----------------------|  
|Risultato della valutazione dell'espressione|Tutti i temporanei creati come risultato di valutazione dell'espressione vengono eliminati definitivamente alla fine dell'istruzione di espressione (vale a dire, il punto e virgola), o alla fine delle espressioni di controllo per **per**, **se**, **Sebbene**, **scopo**, e **passare** istruzioni.|  
|L'inizializzazione **const** riferimenti|Se un inizializzatore non è un l-value dello stesso tipo del riferimento di cui si sta eseguendo l'inizializzazione, un temporaneo del tipo di oggetto sottostante viene creato e inizializzato con l'espressione di inizializzazione. Questo oggetto temporaneo viene eliminato definitivamente subito dopo che l'oggetto di riferimento a cui è associato viene eliminato definitivamente.|  
  
