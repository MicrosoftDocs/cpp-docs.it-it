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
ms.openlocfilehash: 4cb7e5a3627d865e2f2193dee096c72cced75f5f
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57819818"
---
# <a name="allowbind"></a>/ALLOWBIND

Specifica se una DLL può essere associata.

```

/ALLOWBIND[:NO]
```

## <a name="remarks"></a>Note

Il **/ALLOWBIND** opzione imposta un bit nell'intestazione della DLL che indica a Bind.exe che l'immagine può essere associato. Associazione può consentire un'immagine da caricare più rapidamente quando il caricatore non occorre Riassegna ed eseguire la correzione dell'indirizzo per ogni DLL a cui viene fatto riferimento. È consigliabile non specificare un file DLL per essere associata se è stata firmata digitalmente, associazione rende la firma non valida. Associazione non ha alcun effetto se ASLR (ASLR) è abilitata per l'immagine usando **/DYNAMICBASE** nelle versioni di Windows che supporta ASLR.

Uso **/ALLOWBIND: No** per impedire l'associazione di DLL Bind.exe.

Per altre informazioni, vedere la [/ALLOWBIND](allowbind-prevent-dll-binding.md) l'opzione del linker.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](editbin-options.md)
