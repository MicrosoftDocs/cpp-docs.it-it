---
title: LIBRARY
ms.date: 11/04/2016
f1_keywords:
- LIBRARY
helpviewer_keywords:
- LIBRARY .def file statement
ms.assetid: 1d7ccc92-e088-4ef7-9ef0-25c3862cc051
ms.openlocfilehash: f8e5fbc50551b0a44b91787f99999301a8245069
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50582467"
---
# <a name="library"></a>LIBRARY

Indica a LINK per creare una DLL. Allo stesso tempo, verrà creata una libreria di importazione, a meno che non viene usato un file. exp nella compilazione.

```
LIBRARY [library][BASE=address]
```

## <a name="remarks"></a>Note

Il *libreria* argomento specifica il nome della DLL. È anche possibile usare la [/out](../../build/reference/out-output-file-name.md) l'opzione del linker per specificare il nome della DLL output.

La BASE =*indirizzo* argomento consente di impostare l'indirizzo di base che usa il sistema operativo per caricare la DLL. Questo argomento sovrascrive la posizione predefinita della 0x10000000 DLL. Vedere la descrizione della [/base](../../build/reference/base-base-address.md) opzione per informazioni dettagliate sugli indirizzi di base.

Ricordarsi di usare la [/DLL](../../build/reference/dll-build-a-dll.md) l'opzione del linker quando si compila una DLL.

## <a name="see-also"></a>Vedere anche

[Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)