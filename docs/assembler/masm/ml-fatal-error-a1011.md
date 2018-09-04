---
title: Errore ML irreversibile A1011 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A1011
dev_langs:
- C++
helpviewer_keywords:
- A1011
ms.assetid: 7fbf092d-4189-4330-a884-dfa2268fc3dd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 32949773b869d189516a381ca7df941760a1e4e4
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43690808"
---
# <a name="ml-fatal-error-a1011"></a>Errore ML irreversibile A1011

**direttiva deve essere nel blocco di controllo**

L'assembler trovato una direttiva di alto livello in cui uno non stato previsto. È stato trovato uno delle direttive seguenti:

- [. ELSE](../../assembler/masm/dot-else.md) senza [. IF](../../assembler/masm/dot-if.md)

- [. ENDIF](../../assembler/masm/dot-endif.md) senza [. IF](../../assembler/masm/dot-if.md)

- [. ENDW](../../assembler/masm/dot-endw.md) senza [. PERIODO DI TEMPO](../../assembler/masm/dot-while.md)

- [. UNTILCXZ](../../assembler/masm/dot-untilcxz.md) senza [. RIPETERE L'OPERAZIONE](../../assembler/masm/dot-repeat.md)

- [. CONTINUARE](../../assembler/masm/dot-continue.md) senza [. Sebbene](../../assembler/masm/dot-while.md) o [. RIPETERE L'OPERAZIONE](../../assembler/masm/dot-repeat.md)

- [. INTERROMPERE](../../assembler/masm/dot-break.md) senza [. Sebbene](../../assembler/masm/dot-while.md) o [. RIPETERE L'OPERAZIONE](../../assembler/masm/dot-repeat.md)

- [. ELSE](../../assembler/masm/dot-else.md) seguenti `.ELSE`

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>