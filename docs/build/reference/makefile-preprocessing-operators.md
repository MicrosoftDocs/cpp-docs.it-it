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
ms.openlocfilehash: 212f39ee62008b391977aaa91d5c8c4fadfd9730
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336464"
---
# <a name="makefile-preprocessing-operators"></a>Operatori di pre-elaborazione di makefile

Nelle espressioni della pre-elaborazione di makefile è possibile usare operatori che agiscono sui valori delle costanti, sui codici di uscita dei comandi, su stringhe, macro e percorsi del file system. Per valutare l'espressione, il preprocessore prima di tutto espande le macro ed esegue i comandi e quindi esegue le operazioni. Le operazioni vengono valutate per raggruppamento tra parentesi esplicito e quindi per la precedenza degli operatori. Il risultato è un valore costante.

L'operatore **DEFINED** è un operatore logico che agisce sul nome di una macro. L'espressione **DEFINED(**_nomemacro_**)** è true se *nomemacro* è definito, anche se non dispone di un valore assegnato. **DEFINED** in combinazione con **! SE** o **! ELSE IF** equivale a **! SEDEF** o **! ELSE IFDEF**. Tuttavia, a differenza di queste direttive, **DEFINED** può essere utilizzato in espressioni complesse.

L'operatore **EXIST** è un operatore logico che agisce su un percorso del file system. **EXIST(**_path_**)** è true se *path* esiste. Il risultato di **EXIST** può essere utilizzato nelle espressioni binarie. Se *path* contiene spazi, racchiuderlo tra virgolette doppie.

Per confrontare due stringhe,**==** utilizzare l'operatore di uguaglianza ( ) o l'operatore di disuguaglianza (**! )**. Racchiudere le stringhe tra virgolette doppie.

Le costanti integer possono utilizzare gli operatori unari**-** per la negazione numerica ( ), il complemento di uno (**~**) e la negazione logica (**!**).

Le espressioni possono usare gli operatori seguenti. Gli operatori con uguale precedenza vengono raggruppati e i gruppi vengono elencati in ordine di precedenza decrescente. Gli operatori unari si associano all'operando a destra. Gli operatori binari con uguale precedenza uguale si associano agli operandi da sinistra a destra.

|Operatore|Descrizione|
|--------------|-----------------|
|**DEFINED(** *nomemacro* **)**|Produce un valore logico per lo stato di definizione corrente di *nomemacro.*|
|**EXIST(** *percorso* **)**|Produce un valore logico per l'esistenza di un file nel *percorso*.|
|||
|**!**|NOT logico unario.|
|**~**|Unario il complemento.|
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
> L'operatore XOR**^** bit per bit ( ) corrisponde al **^^** carattere di escape e deve essere sottoposto a escape (come ) quando viene utilizzato in un'espressione.

## <a name="see-also"></a>Vedere anche

- [Espressioni nella pre-elaborazione di makefile](expressions-in-makefile-preprocessing.md)
