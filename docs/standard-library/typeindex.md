---
title: '&lt;typeindex&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- <typeindex>
dev_langs:
- C++
ms.assetid: a9551137-f74b-4f02-af64-ff00214cea1f
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 63eae51554003a2c12caf2522a912adc9b96ec02
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
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
