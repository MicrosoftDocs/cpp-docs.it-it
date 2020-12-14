---
description: 'Altre informazioni su: errore irreversibile C1510'
title: Errore irreversibile C1510
ms.date: 04/11/2017
f1_keywords:
- C1510
helpviewer_keywords:
- C1510
ms.assetid: 150c827f-9514-41a9-8d7e-82f820749bcb
ms.openlocfilehash: 3112874f033fdeed4cc4290b2469105a275baed8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276322"
---
# <a name="fatal-error-c1510"></a>Errore irreversibile C1510

Impossibile aprire il file clui.dll della risorsa di lingua

Il compilatore non è in grado di caricare la DLL di risorse della lingua.

Questo problema è dovuto a due cause comuni. Quando si usa il compilatore e gli strumenti a 32 bit, è possibile che venga visualizzato questo errore per progetti di grandi dimensioni che usano più di 2 GB di memoria durante un collegamento. Una possibile soluzione nei sistemi Windows a 64 bit consiste nell'usare il compilatore nativo o incrociato a 64 bit e gli strumenti per generare il codice. In questo modo si sfrutta lo spazio di memoria più grande disponibile per le app a 64 bit. Se è necessario usare un compilatore a 32 bit perché è in esecuzione in un sistema a 32 bit, in alcuni casi è possibile aumentare la quantità di memoria disponibile per il linker a 3 GB. Per altre informazioni, vedere [ottimizzazione da 4 gigabyte: bcdedit e Boot.ini](/windows/win32/memory/4-gigabyte-tuning) e il comando [bcdedit/set increaseuserva](/windows-hardware/drivers/devtest/bcdedit--set) .

L'altra cause comune è un'installazione di Visual Studio interruppe o incompleta. In questo caso, eseguire di nuovo il programma di installazione per ripristinare o reinstallare Visual Studio.
