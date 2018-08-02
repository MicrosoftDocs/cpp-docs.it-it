---
title: 'Metodo comptr:: Releaseandgetaddressof | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf
dev_langs:
- C++
helpviewer_keywords:
- ReleaseAndGetAddressOf method
ms.assetid: 3751dcb4-d50e-432c-89e4-e736be34d434
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9d55241ddefce0e4fcd7f72698779d6e4ec97e20
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39464993"
---
# <a name="comptrreleaseandgetaddressof-method"></a>Metodo ComPtr::ReleaseAndGetAddressOf
Rilascia l'interfaccia associato a questo **ComPtr** e quindi recupera l'indirizzo del [PTR _](../windows/comptr-ptr-data-member.md) membro dei dati, che contiene un puntatore a interfaccia che è stata rilasciata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
T** ReleaseAndGetAddressOf();  
```  
  
## <a name="return-value"></a>Valore restituito  
 L'indirizzo del [PTR _](../windows/comptr-ptr-data-member.md) membro dati di questo **ComPtr**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [ComPtr (classe)](../windows/comptr-class.md)   
 [Membro ComPtr::ptr_ Data](../windows/comptr-ptr-data-member.md)