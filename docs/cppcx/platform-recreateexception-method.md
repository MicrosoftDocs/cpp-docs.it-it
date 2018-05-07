---
title: 'Metodo platform:: recreateexception | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Exception
dev_langs:
- C++
helpviewer_keywords:
- Platform::Exception Class
ms.assetid: fa73d1ab-86e4-4d26-a7d9-81938c1c7e77
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0472d74be21048aeaf25ca92dbb5c1e98ca0ca90
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="platformrecreateexception-method"></a>Metodo Platform::ReCreateException
Questo metodo è solo per uso interno e non è destinata al codice utente. Usare invece il metodo Exception:: CreateException.

## <a name="syntax"></a>Sintassi

```cpp
static Exception^ ReCreateException(int hr)
```

### <a name="parameters"></a>Parametri
`hr`

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Restituisce un nuovo oggetto Platform::Exception^, in base all'HRESULT specificato.

