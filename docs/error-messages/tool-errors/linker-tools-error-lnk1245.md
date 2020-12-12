---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1245'
title: Errore degli strumenti del linker LNK1245
ms.date: 11/04/2016
f1_keywords:
- LNK1245
helpviewer_keywords:
- LNK1245
ms.assetid: 179c8165-ffbb-44cd-9f24-5250f29577cc
ms.openlocfilehash: 3903651992f8fb79c3a79e4f2afc9d84e70e8126
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193903"
---
# <a name="linker-tools-error-lnk1245"></a>Errore degli strumenti del linker LNK1245

il sottosistema specificato non è valido. /SUBSYSTEM deve essere WINDOWS, WindowsGroup o CONSOLE

[/CLR](../../build/reference/clr-common-language-runtime-compilation.md) è stato utilizzato per compilare l'oggetto e si è verificata una delle condizioni seguenti:

- È stato definito un punto di ingresso personalizzato ([/entry](../../build/reference/entry-entry-point-symbol.md)), in modo che il linker non sia in grado di dedurre un sottosistema.

- Un valore è stato passato all'opzione del linker [/Subsystem](../../build/reference/subsystem-specify-subsystem.md) che non è valida per gli oggetti/CLR.

Per entrambe le situazioni, la risoluzione consiste nel specificare un valore valido per l'opzione del linker/SUBSYSTEM.
