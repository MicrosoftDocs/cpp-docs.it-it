---
description: 'Altre informazioni su: definizione di funzioni C++ inline con dllexport e dllimport'
title: Definizione delle funzioni C++ inline con dllexport e dllimport
ms.date: 11/04/2016
helpviewer_keywords:
- inline functions [C++], defining
- functions [C++], defining inline
- dllimport attribute [C++], inline functions
- dllexport attribute [C++], inline functions
ms.assetid: 3b48678b-e7b8-4eda-bb46-b5d34dcf7817
ms.openlocfilehash: 158fc5a8fa3805763b1a5abc731abc8905310a27
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339475"
---
# <a name="defining-inline-c-functions-with-dllexport-and-dllimport"></a>Definizione delle funzioni C++ inline con dllexport e dllimport

**Specifico di Microsoft**

È possibile definire come inline una funzione con l' **`dllexport`** attributo. In questo caso, sempre creata ed esportata un'istanza della funzione, indipendentemente dal fatto che il modulo nel programma faccia riferimento alla funzione. Si presuppone che la funzione venga importata da un altro programma.

È anche possibile definire come inline una funzione dichiarata con l' **`dllimport`** attributo. In questo caso, la funzione può essere espansa (conformemente alle specifiche /Ob), ma non può essere mai creata un'istanza. In particolare, se viene preso in considerazione l'indirizzo di una funzione inline importata, viene restituito l'indirizzo della funzione contenuta nella DLL. Questo comportamento corrisponde a recuperare l'indirizzo di una funzione importata non inline.

Queste regole vengono applicate alle funzioni inline le cui definizioni vengono visualizzate in una definizione di classe. Inoltre, i dati e le stringhe locali statici nelle funzioni inline mantengono le stesse identità tra la DLL e il client come se fossero in un programma singolo (ovvero, un file eseguibile senza un'interfaccia DLL).

Fare attenzione quando si forniscono funzioni inline importate. Ad esempio, se si aggiorna la DLL, non presupporre che il client utilizzerà la versione modificata della DLL. Per assicurarsi che si stia caricando la versione corretta della DLL, ricompilare anche il client della DLL.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[dllexport, dllimport](../cpp/dllexport-dllimport.md)
