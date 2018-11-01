---
title: Operatori di pre-elaborazione di makefile
ms.date: 06/14/2018
helpviewer_keywords:
- operators [C++], makefile preprocessing
- EXIST operator
- preprocessing NMAKE makefile operators
- NMAKE program, operators
- DEFINED operator
- makefiles, preprocessing operators
ms.assetid: a46e4d39-afdb-43c1-ac3b-025d33e6ebdb
ms.openlocfilehash: a78abd3c71d6fec2b77dbb2c2e7b40f8f703626b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50650840"
---
# <a name="makefile-preprocessing-operators"></a>Operatori di pre-elaborazione di makefile

Nelle espressioni della pre-elaborazione di makefile è possibile usare operatori che agiscono sui valori delle costanti, sui codici di uscita dei comandi, su stringhe, macro e percorsi del file system. Per valutare l'espressione, il preprocessore prima di tutto espande le macro ed esegue i comandi e quindi esegue le operazioni. Le operazioni vengono valutate per raggruppamento tra parentesi esplicito e quindi per la precedenza degli operatori. Il risultato è un valore costante.

Il **DEFINED** è un operatore logico che agisce su un nome di macro. L'espressione **DEFINED (**_nomemacro_**)** vale se *nomemacro* è definito, anche se non è un valore assegnato. **DEFINED** in combinazione con **! IF** o **! Se INVECE** equivale a **! IFDEF** o **! IFDEF ELSE**. Tuttavia, a differenza di queste direttive **DEFINED** può essere utilizzato in espressioni complesse.

Il **EXIST** è un operatore logico che agisce su un percorso del file system. **EXIST (**_percorso_**)** è true se *percorso* esiste. Il risultato **EXIST** sono utilizzabili in espressioni binarie. Se *percorso* contiene spazi, racchiuderlo tra virgolette doppie.

Per confrontare due stringhe, usare l'uguaglianza (**==**) operatore o la disuguaglianza (**! =**) operatore. Racchiudere le stringhe tra virgolette doppie.

Costanti integer è possono usare gli operatori unari per la negazione numerica (**-**), uno complemento (**~**) e la negazione logica (**!**).

Le espressioni possono usare gli operatori seguenti. Gli operatori con uguale precedenza vengono raggruppati e i gruppi vengono elencati in ordine di precedenza decrescente. Gli operatori unari si associano all'operando a destra. Gli operatori binari con uguale precedenza uguale si associano agli operandi da sinistra a destra.

|Operatore|Descrizione|
|--------------|-----------------|
|**DEFINED (** *nomemacro* **)**|Produce un valore logico per lo stato di definizione corrente di *nomemacro*.|
|**EXIST (** *percorso* **)**|Produce un valore logico per l'esistenza di un file nel *percorso*.|
|||
|**\!**|NOT logico unario.|
|**~**|Complemento di uno unario.|
|**-**|Negazione unaria.|
|||
|**&#42;**|Moltiplicazione.|
|**/**|Divisione.|
|**%**|Modulo (resto).|
|||
|**+**|Addizione.|
|**-**|Sottrazione.|
|||
|**\<\<**|Spostamento a sinistra bit per bit.|
|**>>**|Spostamento a destra bit per bit.|
|||
|**\<=**|Minore o uguale a.|
|**>=**|Maggiore o uguale a.|
|**\<**|Minore di.|
|**>**|Maggiore di.|
|||
|**==**|Uguaglianza.|
|**\!=**|Disuguaglianza.|
|||
|**&**|AND bit per bit.|
|**^**|XOR bit per bi.|
|**&#124;**|OR bit per bit.|
|||
|**&&**|AND logico.|
|||
|**&#124;&#124;**|OR logico.|

> [!NOTE]
> L'operatore XOR bit per bit (**^**) corrisponde al carattere di escape e deve utilizzare caratteri di escape (come **^^**) quando viene usata in un'espressione.

## <a name="see-also"></a>Vedere anche

- [Espressioni nella pre-elaborazione di makefile](../build/expressions-in-makefile-preprocessing.md)