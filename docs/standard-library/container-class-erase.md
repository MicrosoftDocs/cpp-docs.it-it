---
title: Container Class::erase | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- erase method
ms.assetid: abc091c5-5a80-4bd8-93a8-a2d9bde2efec
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d5a817ed259f5bd264d82fc948afa4cdcd70be2e
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="container-classerase"></a>Container Class::erase

> [!NOTE]
> Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

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

La prima funzione membro rimuove l'elemento della sequenza controllata a cui puntata *WHERE*. La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [`first`, `last`). Entrambe restituiscono un iteratore che definisce il primo elemento rimanente oltre tutti gli elementi rimossi, [end](../standard-library/container-class-end.md) se tale elemento non esiste.

Le funzioni membro generano un'eccezione solo se un'operazione di copia genera un'eccezione.

## <a name="see-also"></a>Vedere anche

[Classe contenitore di esempio](../standard-library/sample-container-class.md)<br/>
