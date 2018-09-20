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
ms.openlocfilehash: 7f4aee13808fd55c42319aab90c13af7922ed9d2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46394836"
---
# <a name="comptrreleaseandgetaddressof-method"></a>Metodo ComPtr::ReleaseAndGetAddressOf

Rilascia l'interfaccia associato a questo **ComPtr** e quindi recupera l'indirizzo del [PTR _](../windows/comptr-ptr-data-member.md) membro dei dati, che contiene un puntatore a interfaccia che è stata rilasciata.

## <a name="syntax"></a>Sintassi

```cpp
T** ReleaseAndGetAddressOf();
```

## <a name="return-value"></a>Valore restituito

L'indirizzo del [PTR _](../windows/comptr-ptr-data-member.md) membro dati di questo **ComPtr**.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ComPtr](../windows/comptr-class.md)<br/>
[Membro ComPtr::ptr_ Data](../windows/comptr-ptr-data-member.md)