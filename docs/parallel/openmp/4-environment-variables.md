---
title: 4. Variabili di ambiente
ms.date: 11/04/2016
ms.assetid: 4ec7ed81-e9ca-46a1-84f8-8f9ce4587346
ms.openlocfilehash: 0dec302762ad22fc3c7f6691ef63df1b07d5940d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50456602"
---
# <a name="4-environment-variables"></a>4. Variabili di ambiente

In questo capitolo vengono descritte le variabili di ambiente OpenMP C e C++ API (o equivalente meccanismi specifici della piattaforma) che controllano l'esecuzione del codice parallelo.  I nomi delle variabili di ambiente devono essere maiuscoli. I valori ad essi assegnati sono maiuscole e minuscole e possono avere spazi vuoti iniziali e finali.  Le modifiche ai valori dopo l'avvio del programma vengono ignorate.

Le variabili di ambiente sono i seguenti:

- **OMP_SCHEDULE** imposta la dimensione di blocco e tipo di pianificazione in fase di esecuzione.

- **OMP_NUM_THREADS** imposta il numero di thread da usare durante l'esecuzione.

- **OMP_DYNAMIC** Abilita o disabilita la regolazione dinamica del numero di thread.

- **OMP_NESTED** Abilita o disabilita il parallelismo annidato.

Gli esempi in questo capitolo viene illustrato solo come queste variabili possono essere impostate in ambienti shell (csh) Unix C. In Korn shell e gli ambienti di DOS le azioni sono simili, come indicato di seguito:

csh: setenv OMP_SCHEDULE "dinamico"

ksh: esportare OMP_SCHEDULE = "dinamico"

DOS: impostare OMP_SCHEDULE = "dinamico"