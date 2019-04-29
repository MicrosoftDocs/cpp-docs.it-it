---
title: Errore irreversibile C1026
ms.date: 11/04/2016
f1_keywords:
- C1026
helpviewer_keywords:
- C1026
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
ms.openlocfilehash: b1a659967a9a62cb79e1084f7d1fa1729bae14da
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62347129"
---
# <a name="fatal-error-c1026"></a>Errore irreversibile C1026

overflow dello stack del parser. Programma troppo complesso

Lo spazio necessario per analizzare il programma ha causato un overflow dello stack del compilatore.

Ridurre la complessità delle espressioni in base:

- Riduzione di nidificazione `for` e `switch` istruzioni. Inserimento delle istruzioni più annidamento in funzioni separate.

- Suddivisione di espressioni lunghe che comportano operatori di virgole o chiamate di funzione.