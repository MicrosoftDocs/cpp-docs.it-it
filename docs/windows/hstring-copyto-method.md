---
title: 'Metodo hstring:: CopyTo | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: a1fd2ef0-e175-4c18-927b-550e02a89e43
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4e2a4ce5a2952a990ee3a2d934d6207656a57376
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42592134"
---
# <a name="hstringcopyto-method"></a>Metodo HString::CopyTo

Copia l'oggetto corrente **HString** oggetto in un oggetto HSTRING.

## <a name="syntax"></a>Sintassi

```cpp
HRESULT CopyTo(
   _Out_ HSTRING *str
   ) const throw();
```

### <a name="parameters"></a>Parametri

*str*  
HSTRING che riceve la copia.

## <a name="remarks"></a>Note

Questo metodo chiama il [WindowsDuplicateString](http://msdn.microsoft.com/library/br224634.aspx) (funzione).

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HString](../windows/hstring-class.md)