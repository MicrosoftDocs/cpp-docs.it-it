---
title: NOME (C/C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- name
dev_langs:
- C++
helpviewer_keywords:
- NAME .def file statement
ms.assetid: 5c9b6bd8-9275-46a5-afba-f17a5936dc26
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a94b82a65cf68d9802d7bf9620e4128ab6b35071
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32371814"
---
# <a name="name-cc"></a>NAME (C/C++)
Specifica un nome per il file di output principale.  
  
```  
NAME [application][BASE=address]  
```  
  
## <a name="remarks"></a>Note  
 È un metodo equivalente per specificare un nome di file di output con il [/out](../../build/reference/out-output-file-name.md) l'opzione del linker e un metodo equivalente per impostare l'indirizzo di base è il [/base](../../build/reference/base-base-address.md) l'opzione del linker. Se vengono specificati entrambi, / in uscita **nome**.  
  
 Se si compila una DLL, nome influiranno solo il nome della DLL.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)