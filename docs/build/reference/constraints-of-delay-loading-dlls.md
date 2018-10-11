---
title: Vincoli delle DLL a caricamento ritardato | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- constraints [C++], delayed loading of DLLs
- delayed loading of DLLs, constraints
- DLLs [C++], constraints
ms.assetid: 0097ff65-550f-4a4e-8ac3-39bf6404f926
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 497de9695e75810f2fe68101627f2ba3606aa048
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49082009"
---
# <a name="constraints-of-delay-loading-dlls"></a>Vincoli delle DLL a caricamento ritardato

Per il caricamento ritardato delle importazioni esistono dei vincoli.

- Le importazioni di dati non possono essere supportate. Una soluzione alternativa consiste nel gestire personalmente, in modo esplicito, l'importazione di dati mediante `LoadLibrary` (o `GetModuleHandle` quando si è certi che la DLL sia stata caricata dal supporto per il caricamento ritardato) e `GetProcAddress`.

- Il caricamento ritardato di Kernel32.dll non è supportato. Questa DLL è necessaria alle routine di supporto del caricamento ritardato per l'esecuzione delle relative attività.

- [Associazione](../../build/reference/binding-imports.md) della voce di punti che vengono inoltrati non è supportata.

- Se si verificano inizializzazioni per processo nel punto di ingresso della DLL a caricamento ritardato, il comportamento del caricamento ritardato di una DLL può essere diverso. Gli altri casi comprendono la statica (archiviazione thread-local), dichiarata usando [declspec](../../cpp/thread.md), che non è gestita quando la DLL viene caricata tramite `LoadLibrary`. La memoria locale di thread dinamica, che usa `TlsAlloc`, `TlsFree`, `TlsGetValue` e `TlsSetValue`, può essere comunque usata per DLL statiche e DLL a caricamento ritardato.

- I puntatori a funzione statici (globali) devono essere reinizializzati sulle funzioni importate dopo la prima chiamata alla funzione, in quanto durante il primo uso della funzione a puntatore verrà considerato come riferimento il thunk.

- Non è attualmente possibile ritardare il caricamento da una DLL delle sole routine specifiche con l'uso del normale meccanismo di importazione.

- Le convenzioni di chiamata personalizzate, come l'uso di flag su architetture x86, non sono supportate. I registri a virgola mobile, inoltre, non vengono salvati su nessuna piattaforma. Se nella routine di supporto o nelle routine di hook personalizzate vengono usati tipi a virgola mobile, è necessario salvare e ripristinare completamente lo stato della virgola mobile sui computer che usano convenzioni di chiamata del registro con parametri a virgola mobile. Il caricamento ritardato della DLL CRT deve essere eseguito con particolare attenzione nel caso in cui vengano effettuate chiamate alle funzioni CRT che accettano parametri a virgola mobile su uno stack NDP (numeric data processor) nella funzione di supporto.

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)<br/>
[LoadLibrary (funzione)](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibrarya)<br/>
[GetModuleHandle (funzione)](/windows/desktop/api/libloaderapi/nf-libloaderapi-getmodulehandlea)<br/>
[GetProcAddress (funzione)](/windows/desktop/api/libloaderapi/nf-libloaderapi-getprocaddress)<br/>
[Funzione TlsAlloc](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-tlsalloc)<br/>
[TlsFree (funzione)](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-tlsfree)<br/>
[TlsGetValue (funzione)](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue)<br/>
[TlsSetValue (funzione)](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-tlssetvalue)