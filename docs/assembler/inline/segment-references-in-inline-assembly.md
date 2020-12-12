---
description: "Altre informazioni su: riferimenti ai segmenti nell'assembly inline"
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
ms.openlocfilehash: 9f9f37d7c45700358cc958f12d6f2d97da6bcf01
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97122083"
---
# <a name="segment-references-in-inline-assembly"></a>Riferimenti di segmento in assembly inline

**Specifico di Microsoft**

È necessario fare riferimento ai segmenti in base al registro anziché al nome (ad esempio, il nome segmento `_TEXT` non è valido). Gli override del segmento devono utilizzare il registro in modo esplicito, come in ES:[BX].

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Uso del linguaggio assembly nei blocchi di __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
