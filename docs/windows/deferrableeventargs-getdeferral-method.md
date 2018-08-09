---
title: 'Metodo deferrableeventargs:: Getdeferral | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: ef6dc7c5-b0be-4b85-8507-d3fd97f2185d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 38958be32b03d0fe4a65a0dfe732d4a15c4ce633
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39645084"
---
# <a name="deferrableeventargsgetdeferral-method"></a>Metodo DeferrableEventArgs::GetDeferral
Ottiene un riferimento per la [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) oggetto che rappresenta un evento posticipato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
HRESULT GetDeferral([out, retval] Windows::Foundation::IDeferral** result)  
```  
  
### <a name="parameters"></a>Parametri  
 *Risultato*  
 Un puntatore che farà riferimento il [differimento](http://go.microsoft.com/fwlink/p/?linkid=526520) al completamento della chiamata dell'oggetto.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="remarks"></a>Note  
 Per un esempio di codice, vedere [classe DeferrableEventArgs](../windows/deferrableeventargs-class.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe DeferrableEventArgs](../windows/deferrableeventargs-class.md)