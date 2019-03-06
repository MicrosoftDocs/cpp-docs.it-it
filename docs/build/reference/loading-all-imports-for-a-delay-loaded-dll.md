---
title: Caricamento di tutte le importazioni per una DLL a caricamento ritardato
ms.date: 11/04/2016
helpviewer_keywords:
- __HrLoadAllImportsForDll linker option
ms.assetid: 975fcd97-1a56-4a16-9698-e1a249d2d592
ms.openlocfilehash: a144f3d4e0d6dbf306938dcc3fddd4faca73c17c
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57421168"
---
# <a name="loading-all-imports-for-a-delay-loaded-dll"></a>Caricamento di tutte le importazioni per una DLL a caricamento ritardato

Il **HrLoadAllImportsForDll** , la funzione definita in cpp, indica al linker per caricare tutte le importazioni da una DLL che è stata specificata con il [/DELAYLOAD fa](../../build/reference/delayload-delay-load-import.md) l'opzione del linker.

Il caricamento di tutte le importazioni consente di inserire in un'unica posizione nel codice di gestione degli errori e non è necessario utilizzare intorno alle chiamate effettive per le importazioni di gestione delle eccezioni. Inoltre evita una situazione in cui l'applicazione ha esito negativo parzialmente tramite un processo in seguito il codice helper relativo al mancato caricamento di un'importazione.

La chiamata **HrLoadAllImportsForDll** non modifica il comportamento di errore e hook gestisce; vedere [gestione degli errori e notifica](../../build/reference/error-handling-and-notification.md) per altre informazioni.

Il nome della DLL passato a **HrLoadAllImportsForDll** viene confrontato con il nome archiviato all'interno della DLL stessa e tra maiuscole e minuscole.

Nell'esempio seguente viene illustrato come chiamare **HrLoadAllImportsForDll**:

```
if (FAILED(__HrLoadAllImportsForDll("delay1.dll"))) {
   printf ( "failed on snap load, exiting\n" );
   exit(2);
}
```

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)
