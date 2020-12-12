---
description: 'Altre informazioni su: Register Storage-Class specifier'
title: Identificatore di classi di archiviazione register
ms.date: 11/04/2016
helpviewer_keywords:
- register variables
- register storage class
ms.assetid: 7577bf48-88ec-4191-873c-ef4217a4034e
ms.openlocfilehash: a7e062f72191f6ee6d678d18b902ea184d362714
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97120757"
---
# <a name="register-storage-class-specifier"></a>Identificatore di classi di archiviazione register

**Specifico di Microsoft**

Il compilatore Microsoft C/C++ non soddisfa le richieste degli utenti relative alle variabili di registro. Per la portabilità, tuttavia, tutte le altre semantiche associate alla **`register`** parola chiave vengono rispettate dal compilatore. Non è ad esempio possibile applicare l'operatore unario address-of ( **&** ) a un oggetto Register né **`register`** usare la parola chiave nelle matrici.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Identificatori di classi di archiviazione per dichiarazioni di Internal-Level](../c-language/storage-class-specifiers-for-internal-level-declarations.md)
