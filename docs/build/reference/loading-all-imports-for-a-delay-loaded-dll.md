---
description: 'Altre informazioni su: caricamento di tutte le importazioni per una DLL di Delay-Loaded'
title: Caricamento di tutte le importazioni per una DLL a caricamento ritardato
ms.date: 11/04/2016
helpviewer_keywords:
- __HrLoadAllImportsForDll linker option
ms.assetid: 975fcd97-1a56-4a16-9698-e1a249d2d592
ms.openlocfilehash: 0f1334f30568e4722bd97579145ddcae9851b901
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190921"
---
# <a name="loading-all-imports-for-a-delay-loaded-dll"></a>Caricamento di tutte le importazioni per una DLL a caricamento ritardato

La funzione **__HrLoadAllImportsForDll** , definita in delayhlp. cpp, indica al linker di caricare tutte le importazioni da una DLL specificata con l'opzione del linker [/DELAYLOAD](delayload-delay-load-import.md) .

Il caricamento di tutte le importazioni consente di inserire la gestione degli errori in un'unica posizione nel codice e non è necessario utilizzare la gestione delle eccezioni per le chiamate effettive alle importazioni. Viene inoltre evitata una situazione in cui l'applicazione ha esito negativo parzialmente tramite un processo, a causa del mancato caricamento di un'importazione da parte del codice di supporto.

La chiamata di **__HrLoadAllImportsForDll** non comporta la modifica del comportamento degli hook e della gestione degli errori. Per ulteriori informazioni, vedere la pagina relativa alla [gestione degli errori e alla notifica](error-handling-and-notification.md) .

Il nome della DLL passato a **__HrLoadAllImportsForDll** viene confrontato con il nome archiviato nella dll e fa distinzione tra maiuscole e minuscole.

Nell'esempio seguente viene illustrato come chiamare **__HrLoadAllImportsForDll**:

```
if (FAILED(__HrLoadAllImportsForDll("delay1.dll"))) {
   printf ( "failed on snap load, exiting\n" );
   exit(2);
}
```

## <a name="see-also"></a>Vedi anche

[Supporto del linker per le DLL di Delay-Loaded](linker-support-for-delay-loaded-dlls.md)
