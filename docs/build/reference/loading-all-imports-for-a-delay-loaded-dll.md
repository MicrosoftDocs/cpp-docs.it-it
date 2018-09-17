---
title: Il caricamento di tutte le importazioni per una DLL a caricamento ritardato | Microsoft Docs
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
ms.openlocfilehash: 29ef1c576af7930e157dafd0f57bf0b8dff49fa6
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45715585"
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