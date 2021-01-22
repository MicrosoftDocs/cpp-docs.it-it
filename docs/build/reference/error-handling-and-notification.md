---
title: Gestione e notifica degli errori
description: 'Altre informazioni su: gestione degli errori di caricamento ritardato DLL e notifica'
ms.date: 01/19/2021
helpviewer_keywords:
- error handling, and notification
ms.openlocfilehash: a0161814a07bd5bbedbaa6d13c7c32cd3aeab559
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98666953"
---
# <a name="error-handling-and-notification"></a>Gestione e notifica degli errori

Se il programma usa le dll a caricamento ritardato, deve gestire gli errori in tutta affidabilità, poiché gli errori che si verificano durante l'esecuzione del programma provocheranno eccezioni non gestite. La gestione degli errori è costituita da due parti: il recupero tramite un hook e la creazione di report tramite un'eccezione.

Per ulteriori informazioni sulla gestione e sulla notifica degli errori di caricamento ritardato della DLL, vedere [informazioni sulla funzione helper](understanding-the-helper-function.md).

Per ulteriori informazioni sulle funzioni hook, vedere la pagina relativa alle [definizioni di struttura e costante](structure-and-constant-definitions.md).

## <a name="recovery-through-a-hook"></a>Ripristino tramite hook

È possibile che il codice debba essere ripristinato in caso di errore o per fornire una libreria o una routine alternativa. È possibile specificare un hook per la funzione di supporto in grado di fornire il codice alternativo o risolvere il problema. La routine hook deve restituire un valore appropriato, in modo che l'elaborazione possa continuare ( `HINSTANCE` o `FARPROC` ). In alternativa, può restituire 0 per indicare che deve essere generata un'eccezione. Potrebbe anche generare un'eccezione o un'eccezione `longjmp` . Sono presenti hook di notifica e hook di errore.

## <a name="reporting-via-an-exception"></a>Creazione di report tramite un'eccezione

Se tutto ciò che è necessario per gestire l'errore è interrompere la procedura, non è necessario alcun hook, purché il codice utente possa gestire l'eccezione.

Gli articoli seguenti illustrano la gestione e la notifica degli errori:

- [Hook di notifica](notification-hooks.md)

- [Hook di errore](failure-hooks.md)

- [Codici di eccezione per caricamento ritardato DLL](exceptions-c-cpp.md)

## <a name="see-also"></a>Vedi anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
