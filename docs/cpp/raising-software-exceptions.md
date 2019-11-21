---
title: Generazione di eccezioni software
ms.date: 11/04/2016
helpviewer_keywords:
- run-time errors, treating as exceptions
- exception handling [C++], errors as exceptions
- exceptions [C++], flagging errors as exceptions
- errors [C++], treating as exceptions
- exception handling [C++], detecting errors
- structured exception handling [C++], errors as exceptions
- exceptions [C++], software
- RaiseException function
- software exceptions [C++]
- formats [C++], exception codes
ms.assetid: be1376c3-c46a-4f52-ad1d-c2362840746a
ms.openlocfilehash: 7c58ae2e2b6635345a162d11d2b75a9865d37751
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74246412"
---
# <a name="raising-software-exceptions"></a>Generazione di eccezioni software

Alcuni degli errori di programma più comuni non sono contrassegnati come eccezioni dal sistema. Ad esempio, se si tenta di allocare un blocco di memoria ma non vi è memoria sufficiente, il runtime o la funzione API non genera un'eccezione ma restituisce un codice di errore.

However, you can treat any condition as an exception by detecting that condition in your code and then reporting it by calling the [RaiseException](/windows/win32/api/errhandlingapi/nf-errhandlingapi-raiseexception) function. Contrassegnando gli errori in questo modo, è possibile offrire i vantaggi di gestione delle eccezioni strutturate a qualsiasi tipo di errore di runtime.

Per utilizzare la gestione delle eccezioni strutturata con errori:

- Definire il proprio codice di eccezione per l'evento.

- Call `RaiseException` when you detect a problem.

- Utilizzare i filtri per la gestione delle eccezioni per esegue il test del codice di eccezione definito.

The \<winerror.h> file shows the format for exception codes. Per assicurarsi di non definire un codice che sia in conflitto con il codice di eccezione esistente, impostare il terzo bit più significativo su 1. I quattro bit più significativi dovrebbe essere impostati come illustrato nella tabella seguente.

|BITS|Impostazione binaria consigliata|Descrizione|
|----------|--------------------------------|-----------------|
|31-30|11|Questi due bit descrivono lo stato di base del codice: 11 = errore, 00 = esito positivo, 01 = messaggio informativo, 10 = avviso.|
|29|1|Bit client. Impostare su 1 per i codici definiti dall'utente.|
|28|0|Bit riservati. Lasciare impostato su 0.|

È possibile impostare i primi due bit su un'impostazione diversa dall'11 binario se si desidera, sebbene l'impostazione "errore" sia appropriata per la maggior parte delle eccezioni. È importante ricordare che è possibile impostare i bit 29 e 28 come illustrato nella tabella precedente.

The resulting error code should therefore have the highest four bits set to hexadecimal E. For example, the following definitions define exception codes that do not conflict with any Windows exception codes. È possibile, tuttavia, che sia necessario verificare quali codici vengono utilizzati dalle DLL di terze parti.

```cpp
#define STATUS_INSUFFICIENT_MEM       0xE0000001
#define STATUS_FILE_BAD_FORMAT        0xE0000002
```

Dopo aver definito un codice di eccezione, è possibile utilizzarlo per generare un'eccezione. For example, the following code raises the `STATUS_INSUFFICIENT_MEM` exception in response to a memory allocation problem:

```cpp
lpstr = _malloc( nBufferSize );
if (lpstr == NULL)
    RaiseException( STATUS_INSUFFICIENT_MEM, 0, 0, 0);
```

Se si desidera semplicemente generare un'eccezione, è possibile impostare gli ultimi tre parametri su 0. Gli ultimi tre parametri sono utili per comunicare le informazioni aggiuntive e impostare un contrassegno che impedisce ai gestori di proseguire l'esecuzione. See the [RaiseException](/windows/win32/api/errhandlingapi/nf-errhandlingapi-raiseexception) function in the Windows SDK for more information.

Nei filtri di gestione delle eccezioni, è quindi possibile eseguire il test dei codici definiti. Esempio:

```cpp
__try {
    ...
}
__except (GetExceptionCode() == STATUS_INSUFFICIENT_MEM ||
        GetExceptionCode() == STATUS_FILE_BAD_FORMAT )
```

## <a name="see-also"></a>Vedere anche

[Writing an exception handler](../cpp/writing-an-exception-handler.md)<br/>
[Structured exception handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)