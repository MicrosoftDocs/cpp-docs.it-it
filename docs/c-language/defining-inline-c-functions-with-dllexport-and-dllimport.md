---
description: 'Altre informazioni su: definizione di funzioni inline C con dllexport e dllimport'
title: Definizione di funzioni inline C con dllexport e dllimport
ms.date: 11/04/2016
helpviewer_keywords:
- inline functions [C++], with dllexport and dllimport
- dllimport attribute [C++], inline functions
- dllexport attribute [C++], inline functions
- dllexport attribute [C++]
ms.assetid: 41418f7c-1c11-470b-bb2e-1f8269a239f0
ms.openlocfilehash: 0ab176504b0fb75ca149ffa4b3a438960c22aad3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186922"
---
# <a name="defining-inline-c-functions-with-dllexport-and-dllimport"></a>Definizione di funzioni inline C con dllexport e dllimport

**Specifico di Microsoft**

È possibile definire come inline una funzione con l'attributo `dllexport`. In questo caso, sempre creata ed esportata un'istanza della funzione, indipendentemente dal fatto che il modulo nel programma faccia riferimento alla funzione. Si presuppone che la funzione venga importata da un altro programma.

È anche possibile definire come inline una funzione dichiarata con l' **`dllimport`** attributo. In questo caso, è possibile espandere la funzione (conformemente alle specifiche di opzione del compilatore /Ob inline), ma non può essere mai creata un'istanza. In particolare, se viene preso in considerazione l'indirizzo di una funzione inline importata, viene restituito l'indirizzo della funzione contenuta nella DLL. Questo comportamento corrisponde a recuperare l'indirizzo di una funzione importata non inline.

I dati e le stringhe locali statici nelle funzioni inline mantengono le stesse identità tra DLL e il client come in un programma singolo (ovvero, un file eseguibile senza un'interfaccia DLL).

Fare attenzione quando si forniscono funzioni inline importate. Ad esempio, se si aggiorna la DLL, non presupporre che il client utilizzerà la versione modificata della DLL. Per assicurarsi che si stia caricando la versione corretta della DLL, ricompilare anche il client della DLL.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Funzioni di importazione ed esportazione DLL](../c-language/dll-import-and-export-functions.md)
