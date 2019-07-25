---
title: Container Class::erase
ms.date: 11/04/2016
helpviewer_keywords:
- erase method
ms.assetid: abc091c5-5a80-4bd8-93a8-a2d9bde2efec
ms.openlocfilehash: 1463a854c314884f0b3b6bffa5d37dfb7fec4a6f
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68454518"
---
# <a name="container-classerase"></a>Container Class::erase

> [!NOTE]
> Questo argomento è disponibile nella documentazione C++ di Microsoft come esempio non funzionale dei contenitori usati nella libreria C++ standard. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

Cancella un elemento.

## <a name="syntax"></a>Sintassi

```

    iterator erase(
    iterator _Where);

iterator erase(
    iterator first,
    iterator last);
```

## <a name="remarks"></a>Note

La prima funzione membro rimuove l'elemento della sequenza controllata a cui punta *_Where*. La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [`first`, `last`). Entrambe restituiscono un iteratore che definisce il primo elemento rimanente oltre tutti gli elementi rimossi, [end](../standard-library/container-class-end.md) se tale elemento non esiste.

Le funzioni membro generano un'eccezione solo se un'operazione di copia genera un'eccezione.

## <a name="see-also"></a>Vedere anche

[Classe contenitore di esempio](../standard-library/sample-container-class.md)
