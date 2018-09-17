---
title: L'estrazione di un membro di una libreria | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- Lib
dev_langs:
- C++
helpviewer_keywords:
- LIB [C++], extracting library members
- EXTRACT library manager option
- libraries, extracting members
- -EXTRACT library manager option
- extracting library members
- /EXTRACT library manager option
ms.assetid: a2c5c2a1-9b7e-489a-a9a4-1dec694e1fc5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9207a77868b3257d09f0d9efe38e4765cb8f4906
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45726518"
---
# <a name="extracting-a-library-member"></a>Estrazione di membri dalle librerie

È possibile usare LIB per creare un file oggetto (obj) che contiene una copia di un membro di una libreria esistente. Per estrarre una copia di un membro, usare la sintassi seguente:

```
LIB library /EXTRACT:member /OUT:objectfile
```

Questo comando crea un file con estensione obj denominato *oggetto estratto sovrascriverà* che contiene una copia di un `member` di un *libreria*. Il `member` nome viene fatta distinzione tra maiuscole e minuscole. È possibile estrarre un solo membro in un unico comando. L'opzione /OUT è necessaria; non è senza nome output predefinito. Se un file denominato *oggetto estratto sovrascriverà* esiste già nella directory specificata (o nella directory corrente, se viene specificata alcuna directory con *oggetto estratto sovrascriverà*), estratta *oggetto estratto sovrascriverà*sostituisce il file esistente.

## <a name="see-also"></a>Vedere anche

[Riferimento a LIB](../../build/reference/lib-reference.md)