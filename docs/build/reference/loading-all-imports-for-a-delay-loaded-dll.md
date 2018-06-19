---
title: Il caricamento di tutte le importazioni per una DLL a caricamento ritardato | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- __HrLoadAllImportsForDll linker option
ms.assetid: 975fcd97-1a56-4a16-9698-e1a249d2d592
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6f054479a6681ba6de57690295fe3ce9f6c83696
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374372"
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