---
title: Programmi multithread
ms.date: 11/04/2016
helpviewer_keywords:
- threading [C++], about threading
- multithreading [C++], about threads
ms.assetid: 02443596-f7e1-48d0-b3a4-39ee0e54e444
ms.openlocfilehash: fd10893ecd33d39b531b9451dec708ea31c121d4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62407822"
---
# <a name="multithread-programs"></a>Programmi multithread

Un thread è fondamentalmente un percorso di esecuzione tramite un programma. È anche la più piccola unità di esecuzione che consente di pianificare di Win32. Un thread è costituito da uno stack, lo stato di registri della CPU e una voce nell'elenco di esecuzione dell'utilità di pianificazione del sistema. Ogni thread condivide tutte le risorse del processo.

Un processo è costituito da uno o più thread e il codice, i dati e altre risorse di un programma in memoria. Le risorse tipico programma sono file aperti, i semafori e memoria allocata in modo dinamico. Un programma viene eseguito quando l'utilità di pianificazione di system offre uno dei thread del controllo di esecuzione. L'utilità di pianificazione determina quali thread deve essere eseguito e quando deve essere eseguito. Thread di priorità più bassa potrebbe essere necessario attendere thread ad alta priorità completare le attività. Nei computer multiprocessore, l'utilità di pianificazione è possibile spostare singoli thread a processori diversi per bilanciare il carico della CPU.

Ogni thread in un processo a opera in modo indipendente. A meno che non si renderle visibili tra loro, i thread vengono eseguiti singolarmente e sono a conoscenza di altri thread in un processo. Thread condividono risorse comuni, tuttavia, devono coordinare il lavoro utilizzando semafori o un altro metodo per la comunicazione interprocesso. Per altre informazioni sulla sincronizzazione dei thread, vedere [scrittura di un programma multithread Win32](writing-a-multithreaded-win32-program.md).

## <a name="see-also"></a>Vedere anche

[Multithreading con C e Win32](multithreading-with-c-and-win32.md)
