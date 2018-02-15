---
title: 'Metodo platform:: recreateexception | Documenti Microsoft'
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Exception
dev_langs:
- C++
helpviewer_keywords:
- Platform::Exception Class
ms.assetid: fa73d1ab-86e4-4d26-a7d9-81938c1c7e77
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5c898c18ce3bd8dfbaaa46eddde5732d9a3f63ea
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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

