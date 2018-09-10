---
title: 'Metodo platform:: recreateexception | Microsoft Docs'
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 28434f6c8c35f2cd4cfc15953f761d28037626e6
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44109719"
---
# <a name="platformrecreateexception-method"></a>Metodo Platform::ReCreateException

Questo metodo è solo per uso interno e non è destinata al codice utente. Usare invece il metodo Exception:: CreateException.

## <a name="syntax"></a>Sintassi

```cpp
static Exception^ ReCreateException(int hr)
```

### <a name="parameters"></a>Parametri

*risorse umane*

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Restituisce un nuovo oggetto Platform::Exception^, in base all'HRESULT specificato.
