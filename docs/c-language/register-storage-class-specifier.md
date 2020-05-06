---
title: Identificatore di classi di archiviazione register
ms.date: 11/04/2016
helpviewer_keywords:
- register variables
- register storage class
ms.assetid: 7577bf48-88ec-4191-873c-ef4217a4034e
ms.openlocfilehash: 0fac6db2254a909d0ec558a7e76f7ccf32aa7ac3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62325247"
---
# <a name="register-storage-class-specifier"></a>Identificatore di classi di archiviazione register

**Specifico di Microsoft**

Il compilatore Microsoft C/C++ non soddisfa le richieste degli utenti relative alle variabili di registro. Tuttavia, per motivi di portabilità qualsiasi altra semantica associata alla parola chiave **register** viene rispettata dal compilatore. Non è ad esempio possibile applicare l'operatore unario address-of**&**() a un oggetto Register né usare la parola chiave **Register** nelle matrici.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Identificatori di classi di archiviazione per dichiarazioni di livello interno](../c-language/storage-class-specifiers-for-internal-level-declarations.md)
