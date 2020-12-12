---
description: 'Altre informazioni su: VERSION (C/C++)'
title: VERSION (C/C++)
ms.date: 11/04/2016
f1_keywords:
- VERSION
helpviewer_keywords:
- VERSION .def file statement
ms.assetid: 3533b97c-5183-45f9-9ca8-4e63462b5d26
ms.openlocfilehash: 1a63435c752220ab9fef54628ab101a14ef58582
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176392"
---
# <a name="version-cc"></a>VERSION (C/C++)

Indica al collegamento di inserire un numero nell'intestazione del file exe o DLL.

```
VERSION major[.minor]
```

## <a name="remarks"></a>Commenti

Gli argomenti *principale* e *secondario* sono numeri decimali nell'intervallo compreso tra 0 e 65.535. Il valore predefinito è la versione 0,0.

Un modo equivalente per specificare un numero di versione è con l'opzione delle [informazioni sulla versione](version-version-information.md) (/Version).

## <a name="see-also"></a>Vedi anche

[Regole per Module-Definition istruzioni](rules-for-module-definition-statements.md)
