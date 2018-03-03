---
title: Macro di comandi e opzioni | Documenti Microsoft
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
- options macros
- command macros in NMAKE
- macros, options macros
- macros, command macros
ms.assetid: 50dff03c-0dc3-4a8a-9a17-57e0e4ea9bac
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 06f5d48395c0395a85c90096bf2dbad8627ac41a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="command-macros-and-options-macros"></a>Macro di comando e di opzione
Macro di comandi sono predefinite per i prodotti Microsoft. Macro di opzioni rappresentano le opzioni per questi prodotti e non sono definite per impostazione predefinita. Entrambi vengono utilizzati nelle regole di inferenza predefiniti e può essere utilizzati in blocchi di descrizione o le regole di inferenza definite dall'utente. Macro di comandi possono essere ridefinite per rappresentare o parte di una riga di comando, incluse le opzioni. Macro di opzioni generano una stringa null se lasciato non definito.  
  
|Prodotto Microsoft|Macro di comando|Definito come|Macro di opzioni|  
|-----------------------|-------------------|----------------|-------------------|  
|Macro Assembler|**COME**|ml|**AFLAGS**|  
|Compilatore di base|**BC**|BC|**BFLAGS**|  
|Compilatore C|**CC**|CL|**CFLAGS**|  
|Compilatore C++|**CPP**|CL|**CPPFLAGS**|  
|Compilatore C++|**CXX**|CL|**CXXFLAGS**|  
|Compilatore di risorse|**RC**|RC|**RFLAGS**|  
  
## <a name="see-also"></a>Vedere anche  
 [Macro speciali di NMAKE](../build/special-nmake-macros.md)