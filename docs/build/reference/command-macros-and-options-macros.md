---
title: Macro di comando e di opzione
description: Descrive le macro NMAKE predefinite per gli strumenti di compilazione e le relative opzioni.
ms.date: 11/20/2019
helpviewer_keywords:
- options macros
- command macros in NMAKE
- macros, options macros
- macros, command macros
ms.assetid: 50dff03c-0dc3-4a8a-9a17-57e0e4ea9bac
no-loc:
- AS
- AFLAGS
- CC
- CFLAGS
- CPP
- CPPFLAGS
- CXX
- CXXFLAGS
- RC
- RFLAGS
- ias
- ml
- ml64
- cl
- rc
ms.openlocfilehash: d5c4477fd97e2a6c48dbac4d0ce83f7fd5f12ad6
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303176"
---
# <a name="command-macros-and-options-macros"></a>Macro di comando e di opzione

Le macro di comando sono predefinite per i prodotti Microsoft. Le macro delle opzioni rappresentano le opzioni per questi prodotti e non sono definite per impostazione predefinita. Entrambi vengono utilizzati in regole inferenza predefinite e possono essere utilizzati nei blocchi di descrizione o nelle regole di inferenza definite dall'utente. È possibile ridefinire le macro di comando per rappresentare parte o tutta la riga di comando, incluse le opzioni. Le macro di opzioni generano una stringa null se non è definito.

|Prodotto Microsoft|Macro comando|Definito come|Opzioni (macro)|
|-----------------------|-------------------|----------------|-------------------|
|Assembler macro|**AS**|ml, iaso ml64|**AFLAGS**|
|Compilatore C|**CC**|cl|**CFLAGS**|
|Compilatore C++|**CPP**|cl|**CPPFLAGS**|
|Compilatore C++|**CXX**|cl|**CXXFLAGS**|
|Compilatore di risorse|**RC**|rc|**RFLAGS**|

## <a name="see-also"></a>Vedere anche

[Macro speciali di NMAKE](special-nmake-macros.md)
