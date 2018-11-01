---
title: Macro di comando e di opzione
ms.date: 11/04/2016
helpviewer_keywords:
- options macros
- command macros in NMAKE
- macros, options macros
- macros, command macros
ms.assetid: 50dff03c-0dc3-4a8a-9a17-57e0e4ea9bac
ms.openlocfilehash: f18cfd6ada235485a5fe47bdc94b49631b9abbbe
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50601305"
---
# <a name="command-macros-and-options-macros"></a>Macro di comando e di opzione

Macro di comando sono predefinite per i prodotti Microsoft. Macro di opzioni rappresentano le opzioni per questi prodotti e non sono definite per impostazione predefinita. Entrambi vengono usati nelle regole di inferenza predefinite e possono essere utilizzati in blocchi di descrizione o le regole di inferenza dei tipi definiti dall'utente. Macro di comandi possono essere ridefinite per rappresentare una parte o totalmente una riga di comando, incluse le opzioni. Macro di opzioni generano una stringa null se non vengono definite.

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