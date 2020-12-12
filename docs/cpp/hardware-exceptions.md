---
description: 'Altre informazioni su: eccezioni hardware'
title: Eccezioni hardware
ms.date: 11/04/2016
helpviewer_keywords:
- exceptions [C++], hardware
- errors [C++], low-level
- errors [C++], hardware
- hardware exceptions [C++]
- low level errors
ms.assetid: 06ac6f01-a8cf-4426-bb12-1688315ae1cd
ms.openlocfilehash: 3fccda4f23aa260f737f81e877d2ea9d673ebafe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97268717"
---
# <a name="hardware-exceptions"></a>Eccezioni hardware

La maggior parte delle eccezioni standard riconosciute dal sistema operativo sono quelle definite a livello hardware. In Windows vengono riconosciute alcune eccezioni software di basso livello, ma queste sono generalmente gestite meglio dal sistema operativo.

In Windows il mapping degli errori hardware di processori diversi ai codici di eccezione viene eseguito in questa sezione. In alcuni casi, un processore può generare solo un subset di tali eccezioni. Le informazioni vengono sull'eccezione vengono pre-elaborate e viene generato il codice di eccezione appropriato.

Le eccezioni hardware riconosciute da Windows sono riepilogate nella tabella seguente:

|Codice eccezione|Causa dell'eccezione|
|--------------------|------------------------|
|STATUS_ACCESS_VIOLATION|Lettura o scrittura in una posizione di memoria inaccessibile.|
|STATUS_BREAKPOINT|Rilevamento di punti di interruzione definiti a livello hardware; utilizzato solo dai debugger.|
|STATUS_DATATYPE_MISALIGNMENT|Lettura o scrittura nei dati in un indirizzo allineato in modo non corretto. Le entità a 16 bit devono ad esempio essere allineate su limiti di 2 byte. (Non applicabile ai processori Intel 80 *x* 86).|
|STATUS_FLOAT_DIVIDE_BY_ZERO|Divisione del tipo a virgola mobile per 0,0.|
|STATUS_FLOAT_OVERFLOW|Superamento del massimo esponente positivo del tipo a virgola mobile.|
|STATUS_FLOAT_UNDERFLOW|Superamento del minimo esponente negativo del tipo a virgola mobile.|
|STATUS_FLOATING_RESEVERED_OPERAND|Utilizzo di un formato a virgola mobile riservato (utilizzo non valido del formato).|
|STATUS_ILLEGAL_INSTRUCTION|Tentativo di eseguire un codice di istruzione non definito dal processore.|
|STATUS_PRIVILEGED_INSTRUCTION|Esecuzione di un'istruzione non consentita nella modalità del computer corrente.|
|STATUS_INTEGER_DIVIDE_BY_ZERO|Divisione di un tipo Integer per 0.|
|STATUS_INTEGER_OVERFLOW|Tentativo di eseguire un'operazione che supera l'intervallo dei numeri interi.|
|STATUS_SINGLE_STEP|Esecuzione di un'istruzione in modalità di istruzione singola; utilizzato solo dai debugger.|

Molte eccezioni presenti nella tabella precedente devono essere gestite dai debugger, dal sistema operativo o da altro codice di basso livello. Ad eccezione degli errori correlati ai tipi Integer e a virgola mobile, tali errori non devono essere gestiti nel codice. Di conseguenza, in genere è necessario utilizzare il filtro di gestione delle eccezioni per ignorarle (valutandole 0). In caso contrario, è possibile impedire ai meccanismi di livello più basso di rispondere in modo appropriato. È possibile, tuttavia, adottare le precauzioni appropriate per l'effetto potenziale di questi errori di basso livello [scrivendo i gestori di terminazione](../cpp/writing-a-termination-handler.md).

## <a name="see-also"></a>Vedi anche

[Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
