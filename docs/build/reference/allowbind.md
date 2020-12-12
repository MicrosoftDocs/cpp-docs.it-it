---
description: Altre informazioni su:/ALLOWBIND
title: /ALLOWBIND
ms.date: 11/04/2016
f1_keywords:
- /allowbind_bind
helpviewer_keywords:
- ALLOWBIND editbin option
- /ALLOWBIND editbin option
- -ALLOWBIND editbin option
ms.assetid: eaadbb8c-4339-4281-9a75-3a1ce2352ff8
ms.openlocfilehash: 54f3056240537d765a9212e774a9a313ded49dab
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179603"
---
# <a name="allowbind"></a>/ALLOWBIND

Specifica se una DLL può essere associata.

```

/ALLOWBIND[:NO]
```

## <a name="remarks"></a>Commenti

L'opzione **/ALLOWBIND** imposta un bit nell'intestazione di una dll che indica a Bind.exe che l'immagine può essere associata. Il binding può consentire il caricamento di un'immagine più veloce quando il caricatore non deve riassegnare ed eseguire la correzione degli indirizzi per ogni DLL a cui si fa riferimento. È possibile che non si desideri associare una DLL se è stata firmata digitalmente, ovvero l'associazione invalida la firma. L'associazione non produce alcun effetto se la sequenza di ASLR (Address Space Layout) viene abilitata per l'immagine tramite **/DynamicBase** nelle versioni di Windows che supportano ASLR.

Usare **/ALLOWBIND: No** per impedire a Bind.exe di associare la dll.

Per ulteriori informazioni, vedere l'opzione del linker [/ALLOWBIND](allowbind-prevent-dll-binding.md) .

## <a name="see-also"></a>Vedi anche

[Opzioni di EDITBIN)](editbin-options.md)
