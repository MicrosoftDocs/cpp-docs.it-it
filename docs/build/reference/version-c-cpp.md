---
title: VERSIONE (C/C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: VERSION
dev_langs: C++
helpviewer_keywords: VERSION .def file statement
ms.assetid: 3533b97c-5183-45f9-9ca8-4e63462b5d26
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 63ea65a8e3732ee17cc30b3382aa7ebc56e48f59
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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