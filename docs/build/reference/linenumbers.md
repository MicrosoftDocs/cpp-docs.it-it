---
description: 'Altre informazioni su: opzione/linenumbers'
title: /LINENUMBERS
ms.date: 11/04/2016
f1_keywords:
- /linenumbers
helpviewer_keywords:
- LINENUMBERS dumpbin option
- line numbers
- -LINENUMBERS dumpbin option
- /LINENUMBERS dumpbin option
ms.assetid: 1681d582-2c2f-484e-9920-109959549055
ms.openlocfilehash: 9df3d88476a82466f86ec23147c9f8f35f9b3f1d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191017"
---
# <a name="linenumbers"></a>/LINENUMBERS

```
/LINENUMBERS
```

## <a name="remarks"></a>Commenti

Questa opzione consente di visualizzare i numeri di riga COFF. I numeri di riga sono presenti in un file oggetto se è stato compilato con database di programma (/Zi), compatibile con C7 (/Z7) o solo numeri di riga (/ZD). Un file eseguibile o una DLL contiene numeri di riga COFF se è stato collegato a genera informazioni di debug (/DEBUG).

Solo l'opzione [/HEADERS](headers.md) DUMPBIN può essere usata nei file generati con l'opzione del compilatore [/GL](gl-whole-program-optimization.md).

## <a name="see-also"></a>Vedi anche

[Opzioni di DUMPBIN](dumpbin-options.md)
