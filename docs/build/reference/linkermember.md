---
description: Altre informazioni su:/LINKERMEMBER
title: /LINKERMEMBER
ms.date: 11/04/2016
f1_keywords:
- /linkermember
helpviewer_keywords:
- /LINKERMEMBER dumpbin option
- LINKERMEMBER dumpbin option
- -LINKERMEMBER dumpbin option
ms.assetid: c96868c1-d70e-4651-ae36-c55b58b16406
ms.openlocfilehash: 76c842bcc2299b4245847e7d4e9a64656e88d2d9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199389"
---
# <a name="linkermember"></a>/LINKERMEMBER

```
/LINKERMEMBER[:{1|2}]
```

## <a name="remarks"></a>Commenti

Questa opzione consente di visualizzare i simboli pubblici definiti in una libreria. Specificare l'argomento 1 per visualizzare i simboli nell'ordine degli oggetti, insieme ai relativi offset. Specificare l'argomento 2 per visualizzare gli offset e i numeri di indice degli oggetti, quindi elencare i simboli in ordine alfabetico, insieme all'indice dell'oggetto per ciascuno di essi. Per ottenere entrambi gli output, specificare/LINKERMEMBER senza l'argomento number.

Solo l'opzione [/HEADERS](headers.md) DUMPBIN può essere usata nei file generati con l'opzione del compilatore [/GL](gl-whole-program-optimization.md).

## <a name="see-also"></a>Vedi anche

[Opzioni di DUMPBIN](dumpbin-options.md)
