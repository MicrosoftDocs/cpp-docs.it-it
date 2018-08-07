---
title: 'Operatore hstring:: Operator = | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::operator=
dev_langs:
- C++
ms.assetid: 8e68c1ff-bc57-4526-810e-af3c284b4e30
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9cc496f4f1c23508b2ebba2788910ff9c9ca2066
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39608599"
---
# <a name="hstringoperator-operator"></a>Operatore HString::Operator=
Sposta il valore di un'altra **HString** oggetto all'oggetto corrente **HString** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
HString& operator=(HString&& other) throw()  
```  
  
### <a name="parameters"></a>Parametri  
 *other*  
 Un oggetto esistente **HString** oggetto.  
  
## <a name="remarks"></a>Note  
 Il valore dell'oggetto esistente *altri* viene copiato l'oggetto corrente **HString** oggetto e quindi il *altri* oggetto viene eliminato definitivamente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HString](../windows/hstring-class.md)