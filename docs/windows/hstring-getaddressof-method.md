---
title: 'Metodo hstring:: Getaddressof | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::HString::GetAddressOf
dev_langs: C++
ms.assetid: 6050decf-5f99-49f0-9497-1c8192c485ae
caps.latest.revision: "2"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 0432a8f5966f6544808ffa4668777d2900ee5066
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="hstringgetaddressof-method"></a>Metodo HString::GetAddressOf
Recupera un puntatore all'handle HSTRING sottostante.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HSTRING* GetAddressOf() throw()  
```  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore all'handle HSTRING sottostante.  
  
## <a name="remarks"></a>Note  
 Dopo questa operazione, il valore di stringa dell'handle HSTRING sottostante viene eliminato definitivamente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HString](../windows/hstring-class.md)