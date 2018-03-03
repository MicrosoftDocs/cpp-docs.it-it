---
title: Errore del compilatore di risorse RW2001 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- RW2001
dev_langs:
- C++
helpviewer_keywords:
- RW2001
ms.assetid: 963bdc7d-6ebe-4378-8bbc-47dfcf5d330c
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1a14cd36ab87297cf5bc0aa547bdea5ef23260e8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resource-compiler-error-rw2001"></a>Errore del compilatore di risorse RW2001
Direttiva non valida nel file RC pre-elaborato  
  
 Il file RC contiene un **#pragma** direttiva.  
  
 Utilizzare il **#ifndef** direttiva del preprocessore con il **RC_INVOKED** costante che il compilatore di risorse definisce quando elabora un file di inclusione. Sul posto di **#pragma** direttiva in un blocco di codice che non è elaborato quando il **RC_INVOKED** viene definita una costante. Nel blocco di codice viene elaborato solo dal compilatore C/C++ e non dal compilatore di risorse. Esempio di codice seguente viene illustrata questa tecnica:  
  
```  
#ifndef RC_INVOKED  
#pragma pack(2)  // C/C++ only, ignored by Resource Compiler  
#endif  
```  
  
 Il **#pragma** direttiva per il preprocessore non ha significato un. File RC. Il **#include** direttiva per il preprocessore è usata spesso in un. File RC per includere un file di intestazione (un file di intestazione personalizzato basato sul progetto o un file di intestazione standard forniti da Microsoft con uno dei suoi prodotti). Alcuni di questi file di inclusione contengono il **#pragma** direttiva. Perché un file di intestazione può includere uno o più altri file di intestazione, il file che contiene una direttiva **#pragma** direttiva potrebbe non essere immediatamente evidente.  
  
 Il **#ifndef RC_INVOKED** consente il controllo dell'inclusione di file di intestazione nei file di intestazione basato su progetto.