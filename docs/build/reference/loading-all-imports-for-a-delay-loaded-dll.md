---
description: Altre informazioni sul caricamento di tutte le importazioni per una DLL a caricamento ritardato
title: Carica tutte le importazioni per una DLL a caricamento ritardato
ms.date: 01/19/2021
helpviewer_keywords:
- __HrLoadAllImportsForDll linker option
ms.openlocfilehash: b197c50d3b6b68d77dbfccda99e3c2986c515204
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667208"
---
# <a name="load-all-imports-for-a-delay-loaded-dll"></a>Carica tutte le importazioni per una DLL a caricamento ritardato

La `__HrLoadAllImportsForDll` funzione, definita in *`delayhlp.cpp`* , indica al linker di caricare tutte le importazioni da una DLL specificata con l' [`/delayload`](delayload-delay-load-import.md) opzione del linker.

Il caricamento di tutte le importazioni consente di inserire la gestione degli errori in un'unica posizione nel codice e non è necessario utilizzare la gestione delle eccezioni per le chiamate effettive alle importazioni. Viene inoltre evitata una situazione in cui l'applicazione ha esito negativo in un processo, a causa del mancato caricamento di un'importazione da parte del codice di supporto.

`__HrLoadAllImportsForDll`La chiamata di non comporta la modifica del comportamento degli hook e della gestione degli errori. Per ulteriori informazioni, vedere la pagina [relativa alla gestione degli errori e alla notifica](error-handling-and-notification.md).

Il nome della DLL passato a `__HrLoadAllImportsForDll` viene confrontato con il nome archiviato nella dll e fa distinzione tra maiuscole e minuscole.

Nell'esempio seguente viene illustrato come chiamare `__HrLoadAllImportsForDll` :

```C
if (FAILED(__HrLoadAllImportsForDll("delay1.dll"))) {
   printf ( "failed on snap load, exiting\n" );
   exit(2);
}
```

## <a name="see-also"></a>Vedi anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
