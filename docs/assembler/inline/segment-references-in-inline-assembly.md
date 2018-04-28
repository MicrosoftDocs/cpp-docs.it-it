---
title: Segmentare i riferimenti in Assembly Inline | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- references, inline assembly
- segment references in inline assembly
- inline assembly, segment references
- registers
- inline assembly, registers
- registers, inline assembly
ms.assetid: c63e6bb4-49d9-4fa1-bb22-eea21b5cbc0f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f7add95852f751ed29dad8e0ba9577abd55fabaf
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="segment-references-in-inline-assembly"></a>Riferimenti di segmento in assembly inline
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 È necessario fare riferimento ai segmenti in base al registro anziché al nome (ad esempio, il nome segmento `_TEXT` non è valido). Gli override del segmento devono utilizzare il registro in modo esplicito, come in ES:[BX].  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)