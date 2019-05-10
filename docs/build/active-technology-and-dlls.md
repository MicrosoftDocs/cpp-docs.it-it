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
ms.openlocfilehash: f67fb9548601ac705ceda08d20d3049f0bf1e0a5
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65221006"
---
# <a name="active-technology-and-dlls"></a>Tecnologia Active e DLL

Tecnologia Active consente ai server oggetto di essere completamente implementate all'interno di una DLL. Questo tipo di server è definito un server in-process. MFC non supporta i server in-process completamente per tutte le funzionalità di modifica visiva, soprattutto perché la tecnologia Active non fornisce un modo per un server di effettuare l'hook al ciclo di messaggi principale del contenitore. MFC richiede l'accesso al ciclo di messaggi dell'applicazione contenitore per gestire i tasti di scelta rapida e l'elaborazione di tempo di inattività.

Se si sta scrivendo un server di automazione e il server non dispone di alcuna interfaccia utente, è possibile rendere il server di un server in-process e inserirlo completamente in una DLL.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Server di automazione](../mfc/automation-servers.md)

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
