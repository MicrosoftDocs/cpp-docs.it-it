---
title: 'Metodo platform:: recreateexception | Documenti Microsoft'
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: VCCORLIB/Platform::Exception
dev_langs: C++
helpviewer_keywords: Platform::Exception Class
ms.assetid: fa73d1ab-86e4-4d26-a7d9-81938c1c7e77
caps.latest.revision: "6"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3aa5ed7cecab49f44eb44b43747b06e63adb8605
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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

