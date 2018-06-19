---
title: VERSIONE (C/C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VERSION
dev_langs:
- C++
helpviewer_keywords:
- VERSION .def file statement
ms.assetid: 3533b97c-5183-45f9-9ca8-4e63462b5d26
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fcaf4e113af6182a2d3d735e4c668b62336e2c79
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32375022"
---
# <a name="version-cc"></a>VERSION (C/C++)
Indica un collegamento a inserire un numero nell'intestazione del file .exe o DLL.  
  
```  
VERSION major[.minor]  
```  
  
## <a name="remarks"></a>Note  
 Il *principali* e *secondaria* gli argomenti sono numeri decimali compresi nell'intervallo compreso tra 0 e 65.535. La versione predefinita è 0,0.  
  
 È un metodo equivalente per specificare un numero di versione con la [informazioni sulla versione](../../build/reference/version-version-information.md) (o versione) opzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)