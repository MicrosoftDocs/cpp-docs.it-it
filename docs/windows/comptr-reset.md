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
ms.openlocfilehash: 1227a2d8c38fd26b82e09d58326cc3790a4e7b14
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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