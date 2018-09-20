---
title: 4. Le variabili di ambiente | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 4ec7ed81-e9ca-46a1-84f8-8f9ce4587346
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: aec56dad334dcd27de2068e660ff8ec5a6e72f90
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415493"
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