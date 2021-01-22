---
description: 'Altre informazioni su: vincoli di caricamento ritardato delle dll'
title: Vincoli delle DLL a caricamento ritardato
ms.date: 01/19/2021
helpviewer_keywords:
- constraints [C++], delayed loading of DLLs
- delayed loading of DLLs, constraints
- DLLs [C++], constraints
ms.openlocfilehash: 0bc29695aa48fea08a0126d4b814329656a5d3bf
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98666979"
---
# <a name="constraints-of-delay-loading-dlls"></a>Vincoli delle DLL a caricamento ritardato

Il caricamento ritardato delle importazioni DLL presenta diversi vincoli.

- Non è possibile supportare le importazioni di dati. Una soluzione alternativa consiste nell'gestire in modo esplicito l'importazione dei dati usando `LoadLibrary` (oppure usando `GetModuleHandle` dopo aver caricato la dll dal supporto per il caricamento ritardato) e `GetProcAddress` .

- Il caricamento ritardato *`Kernel32.dll`* non è supportato. Per il corretto funzionamento delle routine di supporto del caricamento ritardato, è necessario caricare questa DLL.

- Il [Binding](binding-imports.md) dei punti di ingresso non è supportato.

- Un processo può avere un comportamento diverso se una DLL viene caricata in ritardo, anziché caricata all'avvio. Si può notare se sono presenti inizializzazioni per processo che si verificano nel punto di ingresso della DLL a caricamento ritardato. Altri casi includono TLS statico (archiviazione thread-local), dichiarata con [`__declspec(thread)`](../../cpp/thread.md) , che non viene gestita quando la dll viene caricata tramite `LoadLibrary` . La memoria locale di thread dinamica, che usa `TlsAlloc`, `TlsFree`, `TlsGetValue` e `TlsSetValue`, può essere comunque usata per DLL statiche e DLL a caricamento ritardato.

- Reinizializza i puntatori a funzioni globali statiche alle funzioni importate dopo la prima chiamata di ogni funzione. Questo è necessario perché il primo utilizzo di un puntatore a funzione punta al thunk, non alla funzione caricata.

- Attualmente non è possibile ritardare il caricamento di solo procedure specifiche da una DLL usando il meccanismo di importazione normale.

- Le convenzioni di chiamata personalizzate, ad esempio l'uso di codici di condizione nelle architetture x86, non sono supportate. Inoltre, i registri a virgola mobile non vengono salvati su alcuna piattaforma. Se la routine dell'helper personalizzata o le routine hook usano tipi a virgola mobile, è necessario salvare e ripristinare lo stato a virgola mobile completo nei computer che usano le convenzioni di chiamata del registro con i parametri a virgola mobile. Prestare attenzione al caricamento ritardato della DLL CRT, in particolare se si chiamano funzioni CRT che accettano parametri a virgola mobile in uno stack di elaborazione dati numerici (NDP) nella funzione Help.

## <a name="see-also"></a>Vedi anche

[Supporto del linker per le dll a caricamento ritardato](linker-support-for-delay-loaded-dlls.md)\
[`LoadLibrary` funzione](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryw)\
[`GetModuleHandle` funzione](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulehandlew)\
[`GetProcAddress` funzione](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress)\
[`TlsAlloc` funzione](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc)\
[`TlsFree` funzione](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsfree)\
[`TlsGetValue` funzione](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue)\
[Funzione `TlsSetValue`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlssetvalue)
