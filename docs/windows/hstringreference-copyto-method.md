---
title: 'Metodo hstringreference:: CopyTo | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: 179d9b14-1ced-4b16-b297-19ca1e92a462
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0299f469f9cd2757c72e05a8717171ec32aa2c6c
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43198524"
---
# <a name="hstringreferencecopyto-method"></a>Metodo HStringReference::CopyTo

Copia l'oggetto corrente **HStringReference** oggetto in un oggetto HSTRING.

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

Questo metodo chiama il [WindowsDuplicateString](https://msdn.microsoft.com/library/br224634.aspx) (funzione).

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HStringReference](../windows/hstringreference-class.md)