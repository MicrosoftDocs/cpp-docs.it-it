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
ms.openlocfilehash: bf4e9cd4d4fde31f1809e7d583e662188558d5b3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
 Per ulteriori informazioni sulle sezioni crticial e spincounts, vedere il **InitializeCriticalSectionAndSpinCount** funzione nell'area di sincronizzazione della documentazione di Windows API.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CriticalSection](../windows/criticalsection-class.md)