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
ms.openlocfilehash: ea4c3ac2ad582e0fe364f2da26511a66e9dc376c
ms.sourcegitcommit: faa42c8a051e746d99dcebe70fd4bbaf3b023ace
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/15/2019
ms.locfileid: "57811953"
---
# <a name="linenumbers"></a>/LINENUMBERS

```
/LINENUMBERS
```

## <a name="remarks"></a>Note

Questa opzione consente di visualizzare i numeri di riga COFF. I numeri di riga presenti in un file oggetto se è stato compilato con Database di programma (/Zi), compatibile C7 (/ Z7), o solo i numeri di riga (/Zd). Un file eseguibile o DLL contiene i numeri di riga COFF se è stato collegato con genera informazioni di Debug (/debug).

Solo le [/HEADERS](headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati con la [/GL](gl-whole-program-optimization.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](dumpbin-options.md)
