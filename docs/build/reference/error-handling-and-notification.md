---
title: Gestione e notifica degli errori
ms.date: 11/04/2016
helpviewer_keywords:
- error handling, and notification
ms.assetid: b621cf60-d869-451a-b05e-dc86d78addaa
ms.openlocfilehash: 29fe46e15712609ec0c4f268749aaefed103117e
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57812941"
---
# <a name="error-handling-and-notification"></a>Gestione e notifica degli errori

Per altre informazioni sulla gestione degli errori e la notifica, vedere [informazioni sulla funzione di Helper](understanding-the-helper-function.md).

Per altre informazioni sulle funzioni di hook, vedere [struttura e definizioni costanti](structure-and-constant-definitions.md).

Se il programma Usa le DLL a caricamento ritardato, è necessario gestire gli errori in modo affidabile poiché gli errori che si verificano durante l'esecuzione del programma comporterà le eccezioni non gestite. Gestione degli errori è costituito da due parti:

Ripristino tramite AMO.
Se il codice deve recuperare o fornire una libreria alternativa e/o routine in caso di errore, è possibile specificare una funzione hook per la funzione helper che può fornire o correggere l'errore. La routine di hook deve restituire un valore appropriato, in modo che l'elaborazione può continuare (HINSTANCE o FARPROC) oppure 0 per indicare che deve essere generata un'eccezione. Può anche generare la propria eccezione oppure **longjmp** all'esterno dell'hook. Sono disponibili gli hook di notifica e hook di errore.

Creazione di report tramite un'eccezione.
Se tutto ciò che è necessario per la gestione dell'errore per interrompere la procedura, non sono necessari hook, purché il codice utente può gestire l'eccezione.

Gli argomenti seguenti descrivono la notifica e la gestione degli errori:

- [Hook di notifica](notification-hooks.md)

- [Hook di errore](failure-hooks.md)

- [Eccezioni](exceptions-c-cpp.md)

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
