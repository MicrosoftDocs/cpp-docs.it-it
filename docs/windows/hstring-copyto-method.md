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
ms.openlocfilehash: 28ec7e7840d3fd3a23e7b65fe6c46ce9cbc244c3
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40017578"
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