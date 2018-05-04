---
title: Macro di comandi e opzioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- options macros
- command macros in NMAKE
- macros, options macros
- macros, command macros
ms.assetid: 50dff03c-0dc3-4a8a-9a17-57e0e4ea9bac
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ab8b1d61c2c4f6ae9125b8eefaf05f791f57b259
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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