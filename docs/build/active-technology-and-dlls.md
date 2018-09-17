---
title: Tecnologia Active e DLL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- in-process server DLLs
- Automation [C++], DLLs
- DLLs [C++], Active Technology
- Active technology [C++]
- MFC DLLs [C++], Active Technology
ms.assetid: 3ed27f8d-164a-4562-ad61-9f2333404cc7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: efa9a5cf17a4578fc7be9cbadc51605ee32c1650
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45706251"
---
# <a name="active-technology-and-dlls"></a>Tecnologia Active e DLL

Tecnologia Active consente ai server oggetto di essere completamente implementate all'interno di una DLL. Questo tipo di server è definito un server in-process. MFC non supporta i server in-process completamente per tutte le funzionalità di modifica visiva, soprattutto perché la tecnologia Active non fornisce un modo per un server di effettuare l'hook al ciclo di messaggi principale del contenitore. MFC richiede l'accesso al ciclo di messaggi dell'applicazione contenitore per gestire i tasti di scelta rapida e l'elaborazione di tempo di inattività.

Se si sta scrivendo un server di automazione e il server non dispone di alcuna interfaccia utente, è possibile rendere il server di un server in-process e inserirlo completamente in una DLL.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Server di automazione](../mfc/automation-servers.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)