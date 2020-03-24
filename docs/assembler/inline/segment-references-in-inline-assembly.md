---
title: Riferimenti di segmento in assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- references, inline assembly
- segment references in inline assembly
- inline assembly, segment references
- registers
- inline assembly, registers
- registers, inline assembly
ms.assetid: c63e6bb4-49d9-4fa1-bb22-eea21b5cbc0f
ms.openlocfilehash: 865fc5fac5f46cdc8c55966e9989227d1d671d6f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169253"
---
# <a name="segment-references-in-inline-assembly"></a>Riferimenti di segmento in assembly inline

**Sezione specifica Microsoft**

È necessario fare riferimento ai segmenti in base al registro anziché al nome (ad esempio, il nome segmento `_TEXT` non è valido). Gli override del segmento devono utilizzare il registro in modo esplicito, come in ES:[BX].

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
