---
title: Identificatore di classi di archiviazione register
ms.date: 11/04/2016
helpviewer_keywords:
- register variables
- register storage class
ms.assetid: 7577bf48-88ec-4191-873c-ef4217a4034e
ms.openlocfilehash: 339a96e33e186ddcc0615f89ff68a7f87b0bfdc7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50668650"
---
# <a name="register-storage-class-specifier"></a>Identificatore di classi di archiviazione register

**Sezione specifica Microsoft**

Il compilatore Microsoft C/C++ non soddisfa le richieste degli utenti relative alle variabili di registro. Tuttavia, per motivi di portabilità qualsiasi altra semantica associata alla parola chiave **register** viene rispettata dal compilatore. Non è ad esempio possibile applicare l'operatore unario address-of (**&**) a un oggetto registro né usare la parola chiave **register** nelle matrici.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Identificatori di classi di archiviazione per dichiarazioni di livello interno](../c-language/storage-class-specifiers-for-internal-level-declarations.md)