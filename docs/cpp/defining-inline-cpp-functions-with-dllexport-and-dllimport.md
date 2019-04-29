---
title: Definizione delle funzioni C++ inline con dllexport e dllimport
ms.date: 11/04/2016
helpviewer_keywords:
- inline functions [C++], defining
- functions [C++], defining inline
- dllimport attribute [C++], inline functions
- dllexport attribute [C++], inline functions
ms.assetid: 3b48678b-e7b8-4eda-bb46-b5d34dcf7817
ms.openlocfilehash: 39c1787321a37601cd8777ddb6c8296936eb89e9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399005"
---
# <a name="defining-inline-c-functions-with-dllexport-and-dllimport"></a>Definizione delle funzioni C++ inline con dllexport e dllimport

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

È possibile definire come inline una funzione con il **dllexport** attributo. In questo caso, sempre creata ed esportata un'istanza della funzione, indipendentemente dal fatto che il modulo nel programma faccia riferimento alla funzione. Si presuppone che la funzione venga importata da un altro programma.

È anche possibile definire come inline una funzione dichiarata con l'attributo **dllimport**. In questo caso, la funzione può essere espansa (conformemente alle specifiche /Ob), ma non può essere mai creata un'istanza. In particolare, se viene preso in considerazione l'indirizzo di una funzione inline importata, viene restituito l'indirizzo della funzione contenuta nella DLL. Questo comportamento corrisponde a recuperare l'indirizzo di una funzione importata non inline.

Queste regole vengono applicate alle funzioni inline le cui definizioni vengono visualizzate in una definizione di classe. Inoltre, i dati e le stringhe locali statici nelle funzioni inline mantengono le stesse identità tra la DLL e il client come se fossero in un programma singolo (ovvero, un file eseguibile senza un'interfaccia DLL).

Fare attenzione quando si forniscono funzioni inline importate. Ad esempio, se si aggiorna la DLL, non presupporre che il client utilizzerà la versione modificata della DLL. Per assicurarsi che si stia caricando la versione corretta della DLL, ricompilare anche il client della DLL.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[dllexport, dllimport](../cpp/dllexport-dllimport.md)