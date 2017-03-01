---
title: Costanti dello spazio dei nomi Concurrency (AMP) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 13a8e8cd-2eec-4e60-a91d-5d271072747b
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 22ba62ab8b3b4f9d14953dbab3edd8228ea85193
ms.openlocfilehash: 852408f309c00aa284ce710a3612d0654ed7b768
ms.lasthandoff: 02/24/2017

---
# <a name="concurrency-namespace-constants-amp"></a>Costanti dello spazio dei nomi Concurrency (AMP)
|||  
|-|-|  
|[Costante HLSL_MAX_NUM_BUFFERS](#hlsl_max_num_buffers)|[MODULENAME_MAX_LENGTH (costante)](#modulename_max_length)|  
  
##  <a name="a-namehlslmaxnumbuffersa--hlslmaxnumbuffers-constant"></a><a name="hlsl_max_num_buffers"></a>Costante HLSL_MAX_NUM_BUFFERS  
 Il numero massimo di buffer consentiti da DirectX.  
  
```  
static const UINT HLSL_MAX_NUM_BUFFERS = 64 + 128;  
```  
  
##  <a name="a-namemodulenamemaxlengtha--modulenamemaxlength-constant"></a><a name="modulename_max_length"></a>MODULENAME_MAX_LENGTH (costante)  
 Archivia la lunghezza massima del nome del modulo. Questo valore deve essere lo stesso per il compilatore e il runtime.  
  
```  
static const UINT MODULENAME_MAX_LENGTH = 1024;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

