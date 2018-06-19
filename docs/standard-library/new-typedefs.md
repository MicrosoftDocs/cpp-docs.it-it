---
title: Typedef &lt;new&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- new/std::new_handler
ms.assetid: aef01de1-06b5-4b6c-aebc-2c9f423d7e47
ms.openlocfilehash: 5ab0087a85cb2fce6fa300db136e7c60c66b0b5c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33852191"
---
# <a name="ltnewgt-typedefs"></a>Typedef &lt;new&gt;

||
|-|
|[new_handler](#new_handler)|

## <a name="new_handler"></a>  new_handler

Il tipo punta a una funzione appropriata per l'uso come nuovo gestore.

```cpp
typedef void (*new_handler)();
```

### <a name="remarks"></a>Note

Questo tipo di funzione del gestore viene chiamato da **operatornew** o `operator new[]` quando non è in grado di soddisfare una richiesta di memoria aggiuntiva.

### <a name="example"></a>Esempio

Vedere [set_new_handler](../standard-library/new-functions.md#set_new_handler) per un esempio d'uso di `new_handler` come valore restituito.

## <a name="see-also"></a>Vedere anche

[\<new>](../standard-library/new.md)<br/>
