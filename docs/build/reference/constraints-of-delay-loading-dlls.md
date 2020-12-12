---
description: 'Altre informazioni su: vincoli di caricamento ritardato delle dll'
title: Vincoli delle DLL a caricamento ritardato
ms.date: 11/04/2016
helpviewer_keywords:
- constraints [C++], delayed loading of DLLs
- delayed loading of DLLs, constraints
- DLLs [C++], constraints
ms.assetid: 0097ff65-550f-4a4e-8ac3-39bf6404f926
ms.openlocfilehash: 45f54ca57b57bc689752a8aa80f4c03bbe096817
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197010"
---
# <a name="constraints-of-delay-loading-dlls"></a>Vincoli delle DLL a caricamento ritardato

Per il caricamento ritardato delle importazioni esistono dei vincoli.

- Le importazioni di dati non possono essere supportate. Una soluzione alternativa consiste nel gestire personalmente, in modo esplicito, l'importazione di dati mediante `LoadLibrary` (o `GetModuleHandle` quando si è certi che la DLL sia stata caricata dal supporto per il caricamento ritardato) e `GetProcAddress`.

- Il caricamento ritardato di Kernel32.dll non è supportato. Questa DLL è necessaria alle routine di supporto del caricamento ritardato per l'esecuzione delle relative attività.

- Il [Binding](binding-imports.md) dei punti di ingresso che vengono trasmessi non è supportato.

- Se si verificano inizializzazioni per processo nel punto di ingresso della DLL a caricamento ritardato, il comportamento del caricamento ritardato di una DLL può essere diverso. Altri casi includono TLS statico (archiviazione thread-local), dichiarati tramite [__declspec (thread)](../../cpp/thread.md), che non viene gestita quando la dll viene caricata tramite `LoadLibrary` . La memoria locale di thread dinamica, che usa `TlsAlloc`, `TlsFree`, `TlsGetValue` e `TlsSetValue`, può essere comunque usata per DLL statiche e DLL a caricamento ritardato.

- I puntatori a funzione statici (globali) devono essere reinizializzati sulle funzioni importate dopo la prima chiamata alla funzione, in quanto durante il primo uso della funzione a puntatore verrà considerato come riferimento il thunk.

- Non è attualmente possibile ritardare il caricamento da una DLL delle sole routine specifiche con l'uso del normale meccanismo di importazione.

- Le convenzioni di chiamata personalizzate, come l'uso di flag su architetture x86, non sono supportate. I registri a virgola mobile, inoltre, non vengono salvati su nessuna piattaforma. Se nella routine di supporto o nelle routine di hook personalizzate vengono usati tipi a virgola mobile, è necessario salvare e ripristinare completamente lo stato della virgola mobile sui computer che usano convenzioni di chiamata del registro con parametri a virgola mobile. Il caricamento ritardato della DLL CRT deve essere eseguito con particolare attenzione nel caso in cui vengano effettuate chiamate alle funzioni CRT che accettano parametri a virgola mobile su uno stack NDP (numeric data processor) nella funzione di supporto.

## <a name="see-also"></a>Vedi anche

[Supporto del linker per le DLL di Delay-Loaded](linker-support-for-delay-loaded-dlls.md)<br/>
[LoadLibrary (funzione)](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryw)<br/>
[GetModuleHandle (funzione)](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulehandlew)<br/>
[GetProcAddress (funzione)](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress)<br/>
[TlsAlloc (funzione)](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc)<br/>
[TlsFree (funzione)](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsfree)<br/>
[TlsGetValue (funzione)](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue)<br/>
[TlsSetValue (funzione)](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlssetvalue)
