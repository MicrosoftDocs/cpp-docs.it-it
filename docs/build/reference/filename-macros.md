---
description: 'Altre informazioni su: macro filename'
title: Macro di nomi file
ms.date: 11/04/2016
helpviewer_keywords:
- macros, NMAKE
- filename macros in NMAKE
- NMAKE program, filename macros
ms.assetid: 20afd6b3-5b6c-4e33-9d01-309ce98ef9db
ms.openlocfilehash: 2b10d021d27eedf008a143472715ee8e0cbecde5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200572"
---
# <a name="filename-macros"></a>Macro di nomi file

Le macro del nome file sono predefinite come nomi file specificati nella dipendenza (non le specifiche del nome file completo sul disco). Queste macro non devono essere racchiuse tra parentesi quando vengono richiamate; specificare solo $ come illustrato.

|Macro|Significato|
|-----------|-------------|
|**$\@**|Nome completo della destinazione corrente (percorso, nome di base, estensione), come attualmente specificato.|
|**$$\@**|Nome completo della destinazione corrente (percorso, nome di base, estensione), come attualmente specificato. Valido solo come dipendente in una dipendenza.|
|**$&#42;**|Il percorso e il nome di base della destinazione corrente meno l'estensione di file.|
|**$&#42;&#42;**|Tutti i dipendenti della destinazione corrente.|
|**$?**|Tutti i dipendenti con un timestamp successivo rispetto alla destinazione corrente.|
|**$<**|File dipendente con un timestamp successivo rispetto alla destinazione corrente. Valido solo nei comandi nelle regole di inferenza.|

Per specificare parte di una macro di nome file predefinita, aggiungere un modificatore di macro e racchiudere la macro modificata tra parentesi.

|Modificatore|Parte del nome file risultante|
|--------------|-----------------------------|
|**D**|Directory più unità|
|**B**|Nome di base|
|**F**|Nome di base e estensione|
|**R**|Nome di unità più directory e nome base|

## <a name="see-also"></a>Vedi anche

[Macro speciali di NMAKE](special-nmake-macros.md)
