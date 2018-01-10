---
title: 'Metodo hstringreference:: CopyTo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
ms.assetid: 179d9b14-1ced-4b16-b297-19ca1e92a462
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5fb6ac1f645207c048e88078c7fcdc8297f8d1b7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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