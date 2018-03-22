---
title: PogoSafeMode | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- PogoSafeMode
ms.assetid: 2daeeff7-44cb-417f-90eb-6b9edf658533
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5f40dad6feff9e49deeb495e8acbf2584dea3e41
ms.sourcegitcommit: 5cd2e3e51ecc8d9fc0d889555b4bfa193ba1d6a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2018
---
# <a name="pogosafemode"></a>PogoSafeMode
Specificare se utilizzare la modalità veloce o in modalità provvisoria per la profilatura dell'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
PogoSafeMode  
```  
  
## <a name="remarks"></a>Note  
 Ottimizzazione guidata da profilo (PGO) è disponibili due modalità possibili durante la fase di analisi: modalità veloce e la modalità provvisoria. Quando l'analisi è in modalità veloce, utilizza il **INC** istruzione per aumentare i contatori di dati. Il **INC** istruzione è più veloce, ma non è thread-safe. Quando l'analisi è in modalità provvisoria, utilizza il **LOCK INC** istruzione per aumentare i contatori di dati. Il **LOCK INC** istruzione ha la stessa funzionalità di **INC** istruzione ed è thread-safe, ma risulta più lenta il **INC** istruzione.  
  
 Per impostazione predefinita, profilazione opera in modalità veloce. `PogoSafeMode` è necessario solo se si desidera utilizzare la modalità provvisoria.  
  
 Per eseguire la profilazione in modalità provvisoria, è necessario utilizzare la variabile di ambiente `PogoSafeMode` o l'opzione del linker **- PogoSafeMode**, a seconda del sistema. Se si sta eseguendo la profilatura di un x64 computer, è necessario utilizzare l'opzione del linker. Se si sta eseguendo la profilatura di x86 computer, è necessario definire la variabile di ambiente a qualsiasi valore prima di iniziare il processo di ottimizzazione.  
  
## <a name="example"></a>Esempio  
  
```  
set PogoSafeMode=1  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Variabili di ambiente per le ottimizzazioni PGO](../../build/reference/environment-variables-for-profile-guided-optimizations.md)   
 [Ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md)