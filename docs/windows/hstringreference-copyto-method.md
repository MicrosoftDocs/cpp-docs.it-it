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
ms.openlocfilehash: bb3a23f53dee82dd83f7b1b096702788d69d1f8e
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40015888"
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
 Questo metodo chiama il [WindowsDuplicateString](http://msdn.microsoft.com/library/br224634.aspx) (funzione).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)