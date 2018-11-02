---
title: /ALLOWBIND
ms.date: 11/04/2016
f1_keywords:
- /allowbind
helpviewer_keywords:
- ALLOWBIND editbin option
- /ALLOWBIND editbin option
- -ALLOWBIND editbin option
ms.assetid: eaadbb8c-4339-4281-9a75-3a1ce2352ff8
ms.openlocfilehash: 3d38b2a70fc3510b2c26942dc3e5e6fdd76a28e8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50550527"
---
# <a name="allowbind"></a>/ALLOWBIND

Specifica se una DLL può essere associata.

```

/ALLOWBIND[:NO]
```

## <a name="remarks"></a>Note

Il **/ALLOWBIND** opzione imposta un bit nell'intestazione della DLL che indica a Bind.exe che l'immagine può essere associato. Associazione può consentire un'immagine da caricare più rapidamente quando il caricatore non occorre Riassegna ed eseguire la correzione dell'indirizzo per ogni DLL a cui viene fatto riferimento. È consigliabile non specificare un file DLL per essere associata se è stata firmata digitalmente, associazione rende la firma non valida. Associazione non ha alcun effetto se ASLR (ASLR) è abilitata per l'immagine usando **/DYNAMICBASE** nelle versioni di Windows che supporta ASLR.

Uso **/ALLOWBIND: No** per impedire l'associazione di DLL Bind.exe.

Per altre informazioni, vedere la [/ALLOWBIND](../../build/reference/allowbind-prevent-dll-binding.md) l'opzione del linker.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](../../build/reference/editbin-options.md)