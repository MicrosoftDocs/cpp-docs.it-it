---
title: Strumenti del linker LNK1245 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1245
dev_langs:
- C++
helpviewer_keywords:
- LNK1245
ms.assetid: 179c8165-ffbb-44cd-9f24-5250f29577cc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ef7bace5cec937399d7a2ed440e21b9b751f4141
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46041792"
---
# <a name="linker-tools-error-lnk1245"></a>Errore degli strumenti del linker LNK1245

sottosistema non valido 'sottosistema' specificato. /SUBSYSTEM deve essere WINDOWS, WINDOWSCE o CONSOLE

[/CLR](../../build/reference/clr-common-language-runtime-compilation.md) è stato usato per compilare l'oggetto e una delle condizioni seguenti è true:

- È stato definito un punto di ingresso personalizzata ([/ENTRY](../../build/reference/entry-entry-point-symbol.md)), in modo che il linker non è in grado di dedurre un sottosistema.

- È stato passato un valore per il [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) opzione del linker che non è valida per gli oggetti /clr.

Per entrambi i casi, la soluzione consiste nello specificare un valore valido per l'opzione del linker /SUBSYSTEM.