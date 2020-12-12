---
description: 'Altre informazioni su: operatori di pre-elaborazione di makefile'
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
ms.openlocfilehash: 7cf68511eec26a9049a4b44f62126a28ddbf0282
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190783"
---
# <a name="makefile-preprocessing-operators"></a>Operatori di pre-elaborazione di makefile

Nelle espressioni della pre-elaborazione di makefile è possibile usare operatori che agiscono sui valori delle costanti, sui codici di uscita dei comandi, su stringhe, macro e percorsi del file system. Per valutare l'espressione, il preprocessore prima di tutto espande le macro ed esegue i comandi e quindi esegue le operazioni. Le operazioni vengono valutate per raggruppamento tra parentesi esplicito e quindi per la precedenza degli operatori. Il risultato è un valore costante.

L'operatore **definito** è un operatore logico che agisce su un nome di macro. L'espressione **definita (**_macroname_**)** è true se è definito *macroname* , anche se non ha un valore assegnato. **Definito** insieme a **. SE** o **! ALTRIMENTI, se** è equivalente a **! IFDEF** o **! ALTRIMENTI IFDEF**. Tuttavia, a differenza di queste direttive, **defined** può essere utilizzato in espressioni complesse.

L'operatore **exist** è un operatore logico che agisce su un percorso di file System. **Exist (**_percorso_**)** è true se il *percorso* esiste. Il risultato di **exist** può essere utilizzato in espressioni binarie. Se il *percorso* contiene spazi, racchiuderlo tra virgolette doppie.

Per confrontare due stringhe, usare l'operatore di uguaglianza ( **==** ) o l'operatore di disuguaglianza (**! =**). Racchiudere le stringhe tra virgolette doppie.

Le costanti integer possono usare gli operatori unari per la negazione numerica ( **-** ), il complemento di uno ( **~** ) e la negazione logica (**!**).

Le espressioni possono usare gli operatori seguenti. Gli operatori con uguale precedenza vengono raggruppati e i gruppi vengono elencati in ordine di precedenza decrescente. Gli operatori unari si associano all'operando a destra. Gli operatori binari con uguale precedenza uguale si associano agli operandi da sinistra a destra.

|Operatore|Descrizione|
|--------------|-----------------|
|**Definito (** *macroname* **)**|Produce un valore logico per lo stato di definizione corrente di *macroname*.|
|**Exist (** *percorso* **)**|Produce un valore logico per l'esistenza di un file nel *percorso*.|
|||
|**!**|NOT logico unario.|
|**~**|Complemento a uno unario.|
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
|**!=**|Disuguaglianza.|
|||
|**&**|AND bit per bit.|
|**^**|XOR bit per bit.|
|**&#124;**|OR bit per bit.|
|||
|**&&**|AND logico.|
|||
|**&#124;&#124;**|OR logico.|

> [!NOTE]
> L'operatore XOR bit per bit ( **^** ) è uguale al carattere di escape e deve essere preceduto da un carattere di escape (come **^^** ) quando viene usato in un'espressione.

## <a name="see-also"></a>Vedi anche

- [Espressioni nella pre-elaborazione di makefile](expressions-in-makefile-preprocessing.md)
