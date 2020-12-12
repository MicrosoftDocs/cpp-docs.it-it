---
description: 'Ulteriori informazioni su: Metodo Platform:: recreateexception'
title: 'Metodo Platform:: recreateexception'
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Exception
helpviewer_keywords:
- Platform::Exception Class
ms.assetid: fa73d1ab-86e4-4d26-a7d9-81938c1c7e77
ms.openlocfilehash: 273f60055e4cf5a940558ba5dcaa4aa6a7c70bca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97308055"
---
# <a name="platformrecreateexception-method"></a>Metodo Platform::ReCreateException

Questo metodo è solo per uso interno e non è destinata al codice utente. Usa invece il metodo Exception::CreateException.

## <a name="syntax"></a>Sintassi

```cpp
static Exception^ ReCreateException(int hr)
```

### <a name="parameters"></a>Parametri

*h*

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Restituisce un nuovo oggetto Platform::Exception^, in base all'HRESULT specificato.
