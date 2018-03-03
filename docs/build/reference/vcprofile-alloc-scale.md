---
title: VCPROFILE_ALLOC_SCALE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VCPROFILE_ALLOC_SCALE
dev_langs:
- C++
helpviewer_keywords:
- VCPROFILE_ALLOC_SCALE environment variable
ms.assetid: 5cb5ce27-f9b8-489b-b46c-d6e9bcab2d34
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b7b441f41106544633bd691c409fa04c989146f0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="vcprofileallocscale"></a>VCPROFILE_ALLOC_SCALE
Modificare la quantità di memoria allocata per conservare i dati di profilo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
VCPROFILE_ALLOC_SCALE=scale_value  
```  
  
#### <a name="parameters"></a>Parametri  
 `scale_value`  
 Il valore di scala per la quantità di memoria che si desidera per l'esecuzione di scenari di test.  Il valore predefinito è 1.  
  
## <a name="remarks"></a>Note  
 In rari casi, non sarà disponibile memoria sufficiente supportare la raccolta dei dati di profilo durante l'esecuzione di scenari di test.  In questi casi, è possibile aumentare la quantità di memoria con `VCPROFILE_ALLOC_SCALE`.  
  
 Se si riceve un messaggio di errore durante l'esecuzione di un test che indica la presenza di memoria insufficiente, assegnare un valore maggiore di `VCPROFILE_ALLOC_SCALE`, fino a quando non viene eseguito il test completato senza errori di memoria insufficiente.  
  
## <a name="example"></a>Esempio  
  
```  
set VCPROFILE_ALLOC_SCALE=2  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Variabili d'ambiente per le ottimizzazioni GPO](../../build/reference/environment-variables-for-profile-guided-optimizations.md)