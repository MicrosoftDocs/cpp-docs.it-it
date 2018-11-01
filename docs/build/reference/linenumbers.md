---
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
ms.openlocfilehash: af6e3c7c3693bd95924a86640399b15eb3378ed7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50663749"
---
# <a name="linenumbers"></a>/LINENUMBERS

```
/LINENUMBERS
```

## <a name="remarks"></a>Note

Questa opzione consente di visualizzare i numeri di riga COFF. I numeri di riga presenti in un file oggetto se è stato compilato con Database di programma (/Zi), compatibile C7 (/ Z7), o solo i numeri di riga (/Zd). Un file eseguibile o DLL contiene i numeri di riga COFF se è stato collegato con genera informazioni di Debug (/debug).

Solo le [/HEADERS](../../build/reference/headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)