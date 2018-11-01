---
title: Errore di compilazione progetto PRJ0006
ms.date: 11/04/2016
f1_keywords:
- PRJ0006
helpviewer_keywords:
- PRJ0006
ms.assetid: ce092be4-1652-414f-8cb5-b97ef5841f89
ms.openlocfilehash: d62c774411fda80a3e94044b3272567177328ff5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50451559"
---
# <a name="project-build-error-prj0006"></a>Errore di compilazione progetto PRJ0006

Impossibile aprire il file temporaneo 'file'. Assicurarsi che il file esista e che la directory non sia protetto da scrittura.

Visual C++ non è stato possibile creare un file temporaneo durante il processo di compilazione. Motivi sono:

- Nessuna directory temporanea.

- Directory temporanea di sola lettura.

- Spazio su disco.

- La cartella $ (IntDir) è una sola lettura o contiene i file temporanei che sono di sola lettura.

Questo errore si verifica anche in seguito all'errore PRJ0007: Impossibile creare la directory di output 'directory'. Errore PRJ0007 significa che non è stato possibile creare la directory $ (IntDir), la creazione di file temporanea ha esito negativo.

I file temporanei vengono creati ogni volta che specifica:

- Un file di risposta.

- Un'istruzione di compilazione personalizzata.

- Un evento di compilazione.