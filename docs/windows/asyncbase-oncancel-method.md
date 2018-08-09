---
title: 'Metodo asyncbase:: OnCancel | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::OnCancel
dev_langs:
- C++
helpviewer_keywords:
- OnCancel method
ms.assetid: 4bd0b68e-a9df-4913-9f6c-e093ed55c3f9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b648718c715a43befbc5ead828c810dbfa92d120
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39646874"
---
# <a name="asyncbaseoncancel-method"></a>Metodo AsyncBase::OnCancel
Quando sottoposto a override in una classe derivata, Annulla un'operazione asincrona.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
virtual void OnCancel(  
   void  
) = 0;  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [AsyncBase (classe)](../windows/asyncbase-class.md)   
 [Metodo AsyncBase::Cancel](../windows/asyncbase-cancel-method.md)