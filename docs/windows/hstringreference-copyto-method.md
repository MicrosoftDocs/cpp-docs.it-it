---
title: 'Metodo hstringreference:: CopyTo | Documenti Microsoft'
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
ms.openlocfilehash: f65c08cad438328eb1a0e15495774dbde6845f4d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33874707"
---
# <a name="hstringreferencecopyto-method"></a>Metodo HStringReference::CopyTo
Copie di HStringReference corrente dell'oggetto a un oggetto HSTRING.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
HRESULT CopyTo(  
   _Out_ HSTRING *str  
   ) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `str`  
 HSTRING che riceve la copia.  
  
## <a name="remarks"></a>Note  
 Questo metodo chiama il [WindowsDuplicateString](http://msdn.microsoft.com/library/br224634.aspx) (funzione).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)