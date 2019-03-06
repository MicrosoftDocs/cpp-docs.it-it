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
ms.openlocfilehash: aec21026ded821f9a87e7c0c2aeefd13a927a401
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417307"
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
