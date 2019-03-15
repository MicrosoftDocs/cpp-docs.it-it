---
title: Macro di comando e di opzione
ms.date: 11/04/2016
helpviewer_keywords:
- options macros
- command macros in NMAKE
- macros, options macros
- macros, command macros
ms.assetid: 50dff03c-0dc3-4a8a-9a17-57e0e4ea9bac
ms.openlocfilehash: c6dad7b50d265a1460a98747665d48051078163a
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827809"
---
# <a name="command-macros-and-options-macros"></a>Macro di comando e di opzione

Macro di comando sono predefinite per i prodotti Microsoft. Macro di opzioni rappresentano le opzioni per questi prodotti e non sono definite per impostazione predefinita. Entrambi vengono usati nelle regole di inferenza predefinite e possono essere utilizzati in blocchi di descrizione o le regole di inferenza dei tipi definiti dall'utente. Macro di comandi possono essere ridefinite per rappresentare una parte o totalmente una riga di comando, incluse le opzioni. Macro di opzioni generano una stringa null se non vengono definite.

|Prodotto Microsoft|Macro di comando|Definito come|Macro di opzioni|
|-----------------------|-------------------|----------------|-------------------|
|Macro Assembler|**AS**|ml|**AFLAGS**|
|Compilatore di base|**BC**|bc|**BFLAGS**|
|Compilatore C|**CC**|cl|**CFLAGS**|
|Compilatore C++|**CPP**|cl|**CPPFLAGS**|
|Compilatore C++|**CXX**|cl|**CXXFLAGS**|
|Compilatore di risorse|**RC**|rc|**RFLAGS**|

## <a name="see-also"></a>Vedere anche

[Macro speciali di NMAKE](special-nmake-macros.md)
