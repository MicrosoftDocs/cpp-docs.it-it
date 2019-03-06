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
ms.openlocfilehash: 8669198ee62032e15e40c821ed2e4caccdebe519
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417489"
---
# <a name="linkermember"></a>/LINKERMEMBER

```
/LINKERMEMBER[:{1|2}]
```

## <a name="remarks"></a>Note

Questa opzione consente di visualizzare i simboli pubblici definiti in una libreria. Specificare l'1 argomento per visualizzare i simboli in base all'oggetto, insieme ai relativi offset. Specificare l'argomento 2 per visualizzare gli offset e i numeri di indice degli oggetti e quindi elencare i simboli in ordine alfabetico, insieme all'indice di oggetto per ognuno. Per ottenere entrambi gli output, specificare /LINKERMEMBER senza l'argomento del numero.

Solo le [/HEADERS](../../build/reference/headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)
