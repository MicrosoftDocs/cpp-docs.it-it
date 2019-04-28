---
title: Errore degli strumenti del linker LNK1245
ms.date: 11/04/2016
f1_keywords:
- LNK1245
helpviewer_keywords:
- LNK1245
ms.assetid: 179c8165-ffbb-44cd-9f24-5250f29577cc
ms.openlocfilehash: 4cf9a6c4356872b727a10a360396e51e38928b29
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160562"
---
# <a name="linker-tools-error-lnk1245"></a>Errore degli strumenti del linker LNK1245

sottosistema non valido 'sottosistema' specificato. /SUBSYSTEM deve essere WINDOWS, WINDOWSCE o CONSOLE

[/CLR](../../build/reference/clr-common-language-runtime-compilation.md) è stato usato per compilare l'oggetto e una delle condizioni seguenti è true:

- È stato definito un punto di ingresso personalizzata ([/ENTRY](../../build/reference/entry-entry-point-symbol.md)), in modo che il linker non è in grado di dedurre un sottosistema.

- È stato passato un valore per il [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) opzione del linker che non è valida per gli oggetti /clr.

Per entrambi i casi, la soluzione consiste nello specificare un valore valido per l'opzione del linker /SUBSYSTEM.