---
title: Errore del compilatore di risorse RC2101 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- RC2101
dev_langs:
- C++
helpviewer_keywords:
- RC2101
ms.assetid: 580f9d74-162f-41e9-9438-ddbe3457c359
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d08e9ddb7b8cda127b1d05bfef52b52833534cb2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resource-compiler-error-rc2101"></a>Errore del compilatore di risorse RC2101
Direttiva non valida nel file RC pre-elaborato  
  
 Il file del compilatore di risorse contiene un **#pragma** direttiva.  
  
 Utilizzare il **#ifndef** direttiva del preprocessore con la costante RC_INVOKED che il compilatore di risorse definisce quando elabora un file di inclusione. Sul posto di **#pragma** direttiva in un blocco di codice che non viene elaborato quando viene definita la costante RC_INVOKED. Nel blocco di codice viene elaborato solo dal compilatore C/C++ e non dal compilatore di risorse. Esempio di codice seguente viene illustrata questa tecnica:  
  
```  
#ifndef RC_INVOKED  
#pragma pack(2)  // C/C++ only, ignored by Resource Compiler  
#endif  
```  
  
 Il **#pragma** direttiva per il preprocessore non ha significato un. File RC. Il **#include** direttiva per il preprocessore è usata spesso in un. File RC per includere un file di intestazione (un file di intestazione personalizzato basato sul progetto o un file di intestazione standard forniti da Microsoft con uno dei suoi prodotti). Alcuni di questi file di inclusione contengono il **#pragma** direttiva. Perché un file di intestazione può includere uno o più altri file di intestazione, il file che contiene una direttiva **#pragma** direttiva potrebbe non essere immediatamente evidente.  
  
 Il **#ifndef** RC_INVOKED consente il controllo dell'inclusione di file di intestazione nei file di intestazione basato su progetto.