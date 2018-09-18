---
title: Errore di compilazione PRJ0006 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0006
dev_langs:
- C++
helpviewer_keywords:
- PRJ0006
ms.assetid: ce092be4-1652-414f-8cb5-b97ef5841f89
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 264b2f90a2d778b1545117ce5c3b1272626ebad6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46073252"
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