---
title: /LINKERMEMBER
ms.date: 11/04/2016
f1_keywords:
- /linkermember
helpviewer_keywords:
- /LINKERMEMBER dumpbin option
- LINKERMEMBER dumpbin option
- -LINKERMEMBER dumpbin option
ms.assetid: c96868c1-d70e-4651-ae36-c55b58b16406
ms.openlocfilehash: a0456fd9ed1729b4a6cfa200a54ba211a64e94ea
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57813279"
---
# <a name="linkermember"></a>/LINKERMEMBER

```
/LINKERMEMBER[:{1|2}]
```

## <a name="remarks"></a>Note

Questa opzione consente di visualizzare i simboli pubblici definiti in una libreria. Specificare l'1 argomento per visualizzare i simboli in base all'oggetto, insieme ai relativi offset. Specificare l'argomento 2 per visualizzare gli offset e i numeri di indice degli oggetti e quindi elencare i simboli in ordine alfabetico, insieme all'indice di oggetto per ognuno. Per ottenere entrambi gli output, specificare /LINKERMEMBER senza l'argomento del numero.

Solo le [/HEADERS](headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati con la [/GL](gl-whole-program-optimization.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](dumpbin-options.md)
