---
title: 'Costruttore Event:: event (libreria modelli C++ per Windows Runtime) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Event::Event
dev_langs:
- C++
ms.assetid: 21495297-9612-4095-9256-16e168cc0021
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8c2683d2e1875e7d68d27f7bde515b7a4ca70da0
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39649728"
---
# <a name="eventevent-constructor-windows-runtime-c-template-library"></a>Costruttore Event::Event (Libreria modelli C++ per Windows Runtime)
Inizializza una nuova istanza di **evento** classe.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
explicit Event(  
   HANDLE h = HandleT::Traits::GetInvalidValue()  
);  
WRL_NOTHROW Event(  
   _Inout_ Event&& h  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *h*  
 Handle per un evento. Per impostazione predefinita *h* viene inizializzata **nullptr**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe di eventi (Libreria modelli C++ per Windows Runtime)](../windows/event-class-windows-runtime-cpp-template-library.md)