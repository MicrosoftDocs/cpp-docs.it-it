---
title: Errore ML irreversibile A1007 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A1007
dev_langs:
- C++
helpviewer_keywords:
- A1007
ms.assetid: bcf9c826-beb3-4e93-91fe-1ffd34995fbf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 539ab431510d5dc721e6531c11069a87e27c287a
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43693601"
---
# <a name="ml-fatal-error-a1007"></a>Errore ML irreversibile A1007

**livello di nidificazione troppo profonda**

L'assembler raggiunto il limite di nidificazione. Il limite è 20 livelli altrimenti indicato.

Uno dei seguenti era eccessivamente annidato:

- Una direttiva di alto livello, ad esempio [. IF](../../assembler/masm/dot-if.md), [. Ripetere](../../assembler/masm/dot-repeat.md), o [. MENTRE](../../assembler/masm/dot-while.md).

- Una definizione della struttura.

- Una direttiva condizionale-assembly.

- Una definizione della procedura.

- Oggetto [PUSHCONTEXT](../../assembler/masm/pushcontext.md) (direttiva) (il limite è 10).

- Una definizione del segmento.

- Un file di inclusione.

- Una macro.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>