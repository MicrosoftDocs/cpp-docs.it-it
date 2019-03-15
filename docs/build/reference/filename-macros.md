---
title: Macro di nomi file
ms.date: 11/04/2016
helpviewer_keywords:
- macros, NMAKE
- filename macros in NMAKE
- NMAKE program, filename macros
ms.assetid: 20afd6b3-5b6c-4e33-9d01-309ce98ef9db
ms.openlocfilehash: 54527c6f06bee396fdc7419647c607f8979c6a38
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57826969"
---
# <a name="filename-macros"></a>Macro di nomi file

Macro di nomi file sono predefinite come i nomi file specificati nella dipendenza (specifiche non il nome del file su disco). Queste macro non sono necessario essere racchiuso tra parentesi quando viene richiamato. specificare un solo simbolo $, come illustrato.

|Macro|Significato|
|-----------|-------------|
|**$\@**|Nome completo del destinazione corrente (percorso, nome di base, estensione), come specificato.|
|**$$\@**|Nome completo del destinazione corrente (percorso, nome di base, estensione), come specificato. Valido solo come dipendente da una dipendenza.|
|**$&#42;**|Del destinazione corrente percorso e base nome senza l'estensione file.|
|**$&#42;&#42;**|Tutti i dipendenti della destinazione corrente.|
|**$?**|Tutti i dipendenti con un timestamp successivo a quello di destinazione corrente.|
|**$<**|File dipendente con un timestamp successivo a quello di destinazione corrente. Valido solo nei comandi nelle regole di inferenza.|

Per specificare una parte di una macro nome file predefinito, aggiungere un modificatore di macro e racchiudere tra parentesi la macro modificata.

|Modificatore|Parte del nome file risultante|
|--------------|-----------------------------|
|**D**|Unità e directory|
|**B**|Nome di base|
|**F**|Nome base e l'estensione|
|**R**|Unità più directory più nome di base|

## <a name="see-also"></a>Vedere anche

[Macro speciali di NMAKE](special-nmake-macros.md)
