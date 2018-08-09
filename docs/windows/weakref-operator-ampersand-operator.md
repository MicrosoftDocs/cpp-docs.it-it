---
title: 'Weakref:: operator&amp; operatore | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef::operator&
dev_langs:
- C++
helpviewer_keywords:
- operator& operator
ms.assetid: 900afb73-3801-4d08-9b41-2e6a62011ccd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 125ffe998e7c3f225f72e3fb47df4ef3525c37f9
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39649048"
---
# <a name="weakrefoperatoramp-operator"></a>Weakref:: operator&amp; operatore
Restituisce un `ComPtrRef` oggetto che rappresenta l'oggetto corrente **WeakRef** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
Details::ComPtrRef<WeakRef> operator&() throw()  
```  
  
## <a name="return-value"></a>Valore restituito  
 Oggetto `ComPtrRef` oggetto che rappresenta l'oggetto corrente **WeakRef** oggetto.  
  
## <a name="remarks"></a>Note  
 Si tratta di un operatore di helper interna che non deve essere usato nel codice.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)