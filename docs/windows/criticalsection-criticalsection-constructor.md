---
title: 'Costruttore criticalsection:: Criticalsection | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection::CriticalSection
dev_langs:
- C++
helpviewer_keywords:
- CriticalSection, constructor
ms.assetid: 930b89be-4d74-46bd-8879-5dd4d15bcbd0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f87f95a0683f6b4440d2be8b770902a7e4ecde59
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39644294"
---
# <a name="criticalsectioncriticalsection-constructor"></a>Costruttore CriticalSection::CriticalSection
Inizializza un oggetto di sincronizzazione che è simile a un oggetto mutex, ma può essere utilizzato da solo i thread di un singolo processo.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
explicit CriticalSection(  
   ULONG spincount = 0  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *spinCount*  
 Il conteggio di selezione per l'oggetto sezione critica. Il valore predefinito è 0.  
  
## <a name="remarks"></a>Note  
 Per altre informazioni sulle sezioni critiche e spincounts, vedere la `InitializeCriticalSectionAndSpinCount` funzionare nel **sincronizzazione** sezione della documentazione di Windows API.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CriticalSection](../windows/criticalsection-class.md)