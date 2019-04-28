---
title: '&lt;typeindex&gt;'
ms.date: 11/04/2016
f1_keywords:
- <typeindex>
ms.assetid: a9551137-f74b-4f02-af64-ff00214cea1f
ms.openlocfilehash: e22ce63c01185112ed512217156470e6f2948cd5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62278917"
---
# <a name="lttypeindexgt"></a>&lt;typeindex&gt;

Includere l'intestazione standard \<typeindex> per definire una classe e una funzione in grado di supportare l'indicizzazione di oggetti della classe [type_info](../cpp/type-info-class.md).

## <a name="syntax"></a>Sintassi

```cpp
#include <typeindex>
```

## <a name="remarks"></a>Note

La [struttura hash](../standard-library/hash-structure.md) definisce un oggetto `hash function` idoneo per il mapping di valori di tipo [type_index](../standard-library/type-index-class.md) a una distribuzione di valori di indice.

La classe `type_index` esegue il wrapping di un puntatore a un oggetto `type_info` per facilitare l'indicizzazione.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
