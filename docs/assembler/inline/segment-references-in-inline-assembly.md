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
ms.openlocfilehash: 5c07fa897da23a55f376a20e7588c8c8c269d1a6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62167374"
---
# <a name="segment-references-in-inline-assembly"></a>Riferimenti di segmento in assembly inline

**Sezione specifica Microsoft**

È necessario fare riferimento ai segmenti in base al registro anziché al nome (ad esempio, il nome segmento `_TEXT` non è valido). Gli override del segmento devono utilizzare il registro in modo esplicito, come in ES:[BX].

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>