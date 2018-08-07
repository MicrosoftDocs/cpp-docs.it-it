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
ms.openlocfilehash: de0f68ee3e27f2ac3a7f87e64489a05a16dcdc91
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39571412"
---
# <a name="eventevent-constructor-windows-runtime-c-template-library"></a>Costruttore Event::Event (Libreria modelli C++ per Windows Runtime)
Inizializza una nuova istanza della classe evento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
explicit Event(  
   HANDLE h = HandleT::Traits::GetInvalidValue()  
);  
WRL_NOTHROW Event(  
   _Inout_ Event&& h  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *h*  
 Handle per un evento. Per impostazione predefinita *h* viene inizializzata **nullptr**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe di eventi (Libreria modelli C++ per Windows Runtime)](../windows/event-class-windows-runtime-cpp-template-library.md)