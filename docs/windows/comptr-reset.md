---
title: ComPtr::Reset | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
ms.assetid: aa6a46f7-f56b-4fd5-add0-7cea55f7abda
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ad9dd8bc8c180d8a1fd7bf90965349c620eab54b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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