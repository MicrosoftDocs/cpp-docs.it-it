---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0006'
title: Errore di compilazione progetto PRJ0006
ms.date: 11/04/2016
f1_keywords:
- PRJ0006
helpviewer_keywords:
- PRJ0006
ms.assetid: ce092be4-1652-414f-8cb5-b97ef5841f89
ms.openlocfilehash: a78646c843a6c6df3b4e2847076670492a9efb6b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343925"
---
# <a name="project-build-error-prj0006"></a>Errore di compilazione progetto PRJ0006

Non è stato possibile aprire il file temporaneo ' file '. Verificare che il file esista e che la directory non sia protetta da scrittura.

Visual C++ non è stato in grado di creare un file temporaneo durante il processo di compilazione. Alcuni possibili motivi sono:

- Nessuna directory temporanea.

- Directory temporanea di sola lettura.

- Spazio su disco insufficiente.

- La cartella $ (IntDir) è di sola lettura o contiene file temporanei di sola lettura.

Questo errore si verifica anche dopo l'errore PRJ0007: Impossibile creare la directory di output "directory". Errore PRJ0007 indica che non è stato possibile creare la directory $ (IntDir), che implica che anche la creazione di file temporanei avrà esito negativo.

I file temporanei vengono creati ogni volta che si specifica:

- Un file di risposta.

- Un'istruzione di compilazione personalizzata.

- Evento di compilazione.
