---
description: 'Altre informazioni su: gestione degli errori e notifica'
title: Gestione e notifica degli errori
ms.date: 11/04/2016
helpviewer_keywords:
- error handling, and notification
ms.assetid: b621cf60-d869-451a-b05e-dc86d78addaa
ms.openlocfilehash: 234d50d0b4a7e8b81874d1926ac056f8cba23376
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200988"
---
# <a name="error-handling-and-notification"></a>Gestione e notifica degli errori

Per ulteriori informazioni sulla gestione degli errori e sulla notifica, vedere [informazioni sulla funzione helper](understanding-the-helper-function.md).

Per ulteriori informazioni sulle funzioni hook, vedere la pagina relativa alle [definizioni di struttura e costante](structure-and-constant-definitions.md).

Se il programma utilizza DLL a caricamento ritardato, è necessario che gli errori vengano gestiti in solido poiché gli errori che si verificano durante l'esecuzione del programma comporteranno eccezioni non gestite. La gestione degli errori è costituita da due parti:

Ripristino tramite hook.
Se il codice deve ripristinare o fornire una libreria alternativa e/o una routine in caso di errore, è possibile fornire un hook alla funzione di supporto che può fornire o risolvere il problema. La routine hook deve restituire un valore appropriato, in modo che l'elaborazione possa continuare (HINSTANCE o FARPROC) o 0 per indicare che deve essere generata un'eccezione. Potrebbe anche generare la propria eccezione o **longjmp** fuori dall'hook. Sono presenti hook di notifica e hook di errore.

Creazione di report tramite un'eccezione.
Se tutto ciò che è necessario per gestire l'errore è interrompere la procedura, non è necessario alcun hook, purché il codice utente possa gestire l'eccezione.

Negli argomenti seguenti vengono illustrate la gestione e la notifica degli errori:

- [Hook di notifica](notification-hooks.md)

- [Hook di errore](failure-hooks.md)

- [Eccezioni](exceptions-c-cpp.md)

## <a name="see-also"></a>Vedi anche

[Supporto del linker per le DLL di Delay-Loaded](linker-support-for-delay-loaded-dlls.md)
