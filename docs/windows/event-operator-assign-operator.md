---
title: 'Event:: operator = (operatore) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Event::operator=
dev_langs:
- C++
helpviewer_keywords:
- operator= operator
ms.assetid: d8fe9820-8856-4899-9553-56226bdc4945
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2aaea1c1c0a036b7c6ba26a9f5df94a72e9ea582
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641795"
---
# <a name="eventoperator-operator"></a>Operatore Event::operator=
Assegna l'oggetto specificato **evento** riferimento all'oggetto corrente **evento** istanza.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
WRL_NOTHROW Event& operator=(  
   _Inout_ Event&& h  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *h*  
 Un riferimento rvalue a un **evento** istanza.  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto corrente **evento** istanza.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe di eventi (Libreria modelli C++ per Windows Runtime)](../windows/event-class-windows-runtime-cpp-template-library.md)