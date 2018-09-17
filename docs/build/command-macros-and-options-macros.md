---
title: Macro di comando e opzioni | Microsoft Docs
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
ms.openlocfilehash: 7c66295a42fff6a2e6dde5205fb5d9139e6eceb6
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45705536"
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