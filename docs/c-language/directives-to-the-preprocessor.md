---
title: Direttive al preprocessore | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: adc6251e-cf6b-4508-bdbb-55f446c838d3
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 39f1e29a2bc8b72d5b2467c248a4d12b63baa26b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="directives-to-the-preprocessor"></a>Direttive al preprocessore
Una "direttiva" indica al preprocessore C di eseguire un'azione specifica nel testo del programma prima della compilazione. Le [direttive per il preprocessore](../preprocessor/preprocessor-directives.md) sono descritte dettagliatamente nel *Riferimento al preprocessore*. In questo esempio viene utilizzata la direttiva per il preprocessore `#define`:  
  
```  
#define MAX 100  
```  
  
 Questa istruzione indica al compilatore di sostituire tutte le occorrenze di `MAX` con `100` prima della compilazione. Le direttive per il preprocessore del compilatore C sono:  
  
|#define|#endif|#ifdef|#line|  
|--------------|-------------|-------------|------------|  
|`#elif`|`#error`|**#ifndef**|**#pragma**|  
|`#else`|`#if`|`#include`|`#undef`|  
  
## <a name="see-also"></a>Vedere anche  
 [File e programmi di origine](../c-language/source-files-and-source-programs.md)