---
title: Il caricamento di tutte le importazioni per una DLL a caricamento ritardato | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: __HrLoadAllImportsForDll linker option
ms.assetid: 975fcd97-1a56-4a16-9698-e1a249d2d592
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8afa206e62702407d9974802f9422c8597d772ce
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="loading-all-imports-for-a-delay-loaded-dll"></a>Caricamento di tutte le importazioni per una DLL a caricamento ritardato
Il **HrLoadAllImportsForDll** , la funzione definita in cpp, indica al linker di caricare tutte le importazioni da una DLL che è stata specificata con il [/delayload](../../build/reference/delayload-delay-load-import.md) l'opzione del linker.  
  
 Il caricamento di tutte le importazioni consente di inserire in un'unica posizione nel codice di gestione degli errori e non è necessario utilizzare eccezioni per le chiamate per le importazioni effettive. Inoltre, evita una situazione in cui l'applicazione non riesce parzialmente tramite un processo in seguito il codice helper relativo al mancato caricamento di un'importazione.  
  
 La chiamata **HrLoadAllImportsForDll** non modifica il comportamento dell'errore e di hook gestisce; vedere [Error Handling e notifica](../../build/reference/error-handling-and-notification.md) per ulteriori informazioni.  
  
 Il nome della DLL passato a **HrLoadAllImportsForDll** viene confrontato con il nome archiviato nella DLL e tra maiuscole e minuscole.  
  
 Nell'esempio seguente viene illustrato come chiamare **HrLoadAllImportsForDll**:  
  
```  
if (FAILED(__HrLoadAllImportsForDll("delay1.dll"))) {  
   printf ( "failed on snap load, exiting\n" );  
   exit(2);  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)