---
title: ComPtr::Reset | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: aa6a46f7-f56b-4fd5-add0-7cea55f7abda
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dd2ce820367b15cb5dad8baf691a835499457a55
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33870767"
---
# <a name="comptrreset"></a>ComPtr::Reset
Rilascia tutti i riferimenti per il puntatore all'interfaccia associata a questo oggetto ComPtr.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned long Reset();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Numero di riferimenti rilasciati, se presenti.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)