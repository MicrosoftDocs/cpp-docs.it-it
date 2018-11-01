---
title: Errore irreversibile C1026
ms.date: 11/04/2016
f1_keywords:
- C1026
helpviewer_keywords:
- C1026
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
ms.openlocfilehash: b1a659967a9a62cb79e1084f7d1fa1729bae14da
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50666188"
---
# <a name="fatal-error-c1026"></a>Errore irreversibile C1026

overflow dello stack del parser. Programma troppo complesso

Lo spazio necessario per analizzare il programma ha causato un overflow dello stack del compilatore.

Ridurre la complessità delle espressioni in base:

- Riduzione di nidificazione `for` e `switch` istruzioni. Inserimento delle istruzioni più annidamento in funzioni separate.

- Suddivisione di espressioni lunghe che comportano operatori di virgole o chiamate di funzione.