---
title: Estrazione di membri dalle librerie
ms.date: 11/04/2016
f1_keywords:
- Lib
helpviewer_keywords:
- LIB [C++], extracting library members
- EXTRACT library manager option
- libraries, extracting members
- -EXTRACT library manager option
- extracting library members
- /EXTRACT library manager option
ms.assetid: a2c5c2a1-9b7e-489a-a9a4-1dec694e1fc5
ms.openlocfilehash: 6c577300f747d6f546b7caa3c66bddd6a516e16b
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57818063"
---
# <a name="extracting-a-library-member"></a>Estrazione di membri dalle librerie

È possibile usare LIB per creare un file oggetto (obj) che contiene una copia di un membro di una libreria esistente. Per estrarre una copia di un membro, usare la sintassi seguente:

```
LIB library /EXTRACT:member /OUT:objectfile
```

Questo comando crea un file con estensione obj denominato *oggetto estratto sovrascriverà* che contiene una copia di un `member` di un *libreria*. Il `member` nome viene fatta distinzione tra maiuscole e minuscole. È possibile estrarre un solo membro in un unico comando. L'opzione /OUT è necessaria; non è senza nome output predefinito. Se un file denominato *oggetto estratto sovrascriverà* esiste già nella directory specificata (o nella directory corrente, se viene specificata alcuna directory con *oggetto estratto sovrascriverà*), estratta *oggetto estratto sovrascriverà*sostituisce il file esistente.

## <a name="see-also"></a>Vedere anche

[Riferimento a LIB](lib-reference.md)
