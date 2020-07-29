---
title: Identificatore di classi di archiviazione register
ms.date: 11/04/2016
helpviewer_keywords:
- register variables
- register storage class
ms.assetid: 7577bf48-88ec-4191-873c-ef4217a4034e
ms.openlocfilehash: 513213222ee2c598455709a0891977a0949c8555
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229558"
---
# <a name="register-storage-class-specifier"></a>Identificatore di classi di archiviazione register

**Specifico di Microsoft**

Il compilatore Microsoft C/C++ non soddisfa le richieste degli utenti relative alle variabili di registro. Per la portabilità, tuttavia, tutte le altre semantiche associate alla **`register`** parola chiave vengono rispettate dal compilatore. Non è ad esempio possibile applicare l'operatore unario address-of ( **&** ) a un oggetto Register né **`register`** usare la parola chiave nelle matrici.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Identificatori di classi di archiviazione per dichiarazioni di livello interno](../c-language/storage-class-specifiers-for-internal-level-declarations.md)
