---
title: 'Metodo hstring:: Getaddressof | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::GetAddressOf
dev_langs:
- C++
ms.assetid: 6050decf-5f99-49f0-9497-1c8192c485ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e327e2818903396c154be7406ec325695b6b6982
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42613365"
---
# <a name="hstringgetaddressof-method"></a>Metodo HString::GetAddressOf

Recupera un puntatore all'handle sottostante di HSTRING.

## <a name="syntax"></a>Sintassi

```cpp
HSTRING* GetAddressOf() throw()  
```

## <a name="return-value"></a>Valore restituito

Puntatore a handle sottostante di HSTRING.

## <a name="remarks"></a>Note

Dopo questa operazione, viene eliminato il valore di stringa dell'handle sottostante di HSTRING.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HString](../windows/hstring-class.md)