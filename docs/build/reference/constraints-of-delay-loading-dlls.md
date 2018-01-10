---
title: Vincoli delle DLL a caricamento ritardato | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- constraints [C++], delayed loading of DLLs
- delayed loading of DLLs, constraints
- DLLs [C++], constraints
ms.assetid: 0097ff65-550f-4a4e-8ac3-39bf6404f926
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cd3f641a3ac03705ff7f3765d995d5c40bccda7d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="constraints-of-delay-loading-dlls"></a>Vincoli delle DLL a caricamento ritardato
Per il caricamento ritardato delle importazioni esistono dei vincoli.  
  
-   Le importazioni di dati non possono essere supportate. Una soluzione alternativa consiste nel gestire personalmente, in modo esplicito, l'importazione di dati mediante `LoadLibrary` (o `GetModuleHandle` quando si è certi che la DLL sia stata caricata dal supporto per il caricamento ritardato) e `GetProcAddress`.  
  
-   Il caricamento ritardato di Kernel32.dll non è supportato. Questa DLL è necessaria alle routine di supporto del caricamento ritardato per l'esecuzione delle relative attività.  
  
-   [Associazione](../../build/reference/binding-imports.md) della voce punti che vengono inoltrati non è supportata.  
  
-   Se si verificano inizializzazioni per processo nel punto di ingresso della DLL a caricamento ritardato, il comportamento del caricamento ritardato di una DLL può essere diverso. Gli altri casi comprendono statica (archiviazione thread-local), dichiarato tramite [declspec](../../cpp/thread.md), che non è gestita quando la DLL viene caricata mediante `LoadLibrary`. La memoria locale di thread dinamica, che usa `TlsAlloc`, `TlsFree`, `TlsGetValue` e `TlsSetValue`, può essere comunque usata per DLL statiche e DLL a caricamento ritardato.  
  
-   I puntatori a funzione statici (globali) devono essere reinizializzati sulle funzioni importate dopo la prima chiamata alla funzione, in quanto durante il primo uso della funzione a puntatore verrà considerato come riferimento il thunk.  
  
-   Non è attualmente possibile ritardare il caricamento da una DLL delle sole routine specifiche con l'uso del normale meccanismo di importazione.  
  
-   Le convenzioni di chiamata personalizzate, come l'uso di flag su architetture x86, non sono supportate. I registri a virgola mobile, inoltre, non vengono salvati su nessuna piattaforma. Se nella routine di supporto o nelle routine di hook personalizzate vengono usati tipi a virgola mobile, è necessario salvare e ripristinare completamente lo stato della virgola mobile sui computer che usano convenzioni di chiamata del registro con parametri a virgola mobile. Il caricamento ritardato della DLL CRT deve essere eseguito con particolare attenzione nel caso in cui vengano effettuate chiamate alle funzioni CRT che accettano parametri a virgola mobile su uno stack NDP (numeric data processor) nella funzione di supporto.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)   
 [LoadLibrary (funzione)](http://msdn.microsoft.com/library/windows/desktop/ms684175.aspx)   
 [GetModuleHandle (funzione)](http://msdn.microsoft.com/library/windows/desktop/ms683199.aspx)   
 [GetProcAddress (funzione)](http://msdn.microsoft.com/library/windows/desktop/ms683212.aspx)   
 [Funzione TlsAlloc](http://msdn.microsoft.com/library/windows/desktop/ms686801.aspx)   
 [Funzione TlsFree](http://msdn.microsoft.com/library/windows/desktop/ms686804.aspx)   
 [Funzione TlsGetValue](http://msdn.microsoft.com/library/windows/desktop/ms686812.aspx)   
 [Funzione TlsSetValue](http://msdn.microsoft.com/library/windows/desktop/ms686818.aspx)