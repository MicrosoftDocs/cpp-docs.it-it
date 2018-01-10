---
title: 'Costruttore criticalsection:: Criticalsection | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::CriticalSection::CriticalSection
dev_langs: C++
helpviewer_keywords: CriticalSection, constructor
ms.assetid: 930b89be-4d74-46bd-8879-5dd4d15bcbd0
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 532a7b2e046bbdb64db118741a939dadb049f081
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="criticalsectioncriticalsection-constructor"></a>Costruttore CriticalSection::CriticalSection
Inizializza un oggetto di sincronizzazione che è simile a un oggetto mutex, ma può essere utilizzato da solo i thread di un singolo processo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
explicit CriticalSection(  
   ULONG spincount = 0  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `spincount`  
 Il conteggio di selezione per l'oggetto sezione critica. Il valore predefinito è 0.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni sulle sezioni critiche e spincounts, vedere il **InitializeCriticalSectionAndSpinCount** funzione nell'area di sincronizzazione della documentazione di Windows API.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CriticalSection](../windows/criticalsection-class.md)
