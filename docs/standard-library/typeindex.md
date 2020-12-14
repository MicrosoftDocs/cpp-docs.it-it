---
description: 'Altre informazioni su: &lt; typeindex&gt;'
title: '&lt;typeindex&gt;'
ms.date: 11/04/2016
f1_keywords:
- <typeindex>
ms.assetid: a9551137-f74b-4f02-af64-ff00214cea1f
ms.openlocfilehash: 0f5aee958aee01bcccc87145087001f093ab6749
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226441"
---
# <a name="lttypeindexgt"></a>&lt;typeindex&gt;

Includere l'intestazione standard \<typeindex> per definire una classe e una funzione che supportano l'indicizzazione di oggetti della classe [type_info](../cpp/type-info-class.md).

## <a name="syntax"></a>Sintassi

```cpp
#include <typeindex>
```

## <a name="remarks"></a>Osservazioni

La [struttura hash](../standard-library/hash-structure.md) definisce un oggetto `hash function` idoneo per il mapping di valori di tipo [type_index](../standard-library/type-index-class.md) a una distribuzione di valori di indice.

La classe `type_index` esegue il wrapping di un puntatore a un oggetto `type_info` per facilitare l'indicizzazione.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
