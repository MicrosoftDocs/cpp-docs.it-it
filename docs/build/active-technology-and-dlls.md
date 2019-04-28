---
title: Tecnologia Active e DLL
ms.date: 11/04/2016
helpviewer_keywords:
- in-process server DLLs
- Automation [C++], DLLs
- DLLs [C++], Active Technology
- Active technology [C++]
- MFC DLLs [C++], Active Technology
ms.assetid: 3ed27f8d-164a-4562-ad61-9f2333404cc7
ms.openlocfilehash: 9633d60520a2a634ffe78d0fb9d48f6dd2ca7333
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62195551"
---
# <a name="active-technology-and-dlls"></a>Tecnologia Active e DLL

Tecnologia Active consente ai server oggetto di essere completamente implementate all'interno di una DLL. Questo tipo di server è definito un server in-process. MFC non supporta i server in-process completamente per tutte le funzionalità di modifica visiva, soprattutto perché la tecnologia Active non fornisce un modo per un server di effettuare l'hook al ciclo di messaggi principale del contenitore. MFC richiede l'accesso al ciclo di messaggi dell'applicazione contenitore per gestire i tasti di scelta rapida e l'elaborazione di tempo di inattività.

Se si sta scrivendo un server di automazione e il server non dispone di alcuna interfaccia utente, è possibile rendere il server di un server in-process e inserirlo completamente in una DLL.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Server di automazione](../mfc/automation-servers.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](dlls-in-visual-cpp.md)
