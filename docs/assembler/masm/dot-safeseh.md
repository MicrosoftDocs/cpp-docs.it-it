---
title: .SAFESEH
ms.date: 11/05/2019
f1_keywords:
- .SAFESEH
helpviewer_keywords:
- registering functions as exception handlers
- SAFESEH directive
- .SAFESEH directive
ms.assetid: 6eaac8c4-c46f-47ae-8a66-f5cfeb267e43
ms.openlocfilehash: df9798800da293e5e0b4f545a8442380b7ff9408
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74397989"
---
# <a name="safeseh-32-bit-masm"></a>. SAFESEH (MASM a 32 bit)

Registra una funzione come gestore di eccezioni strutturate. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **.**  *Identificatore* SAFESEH

## <a name="remarks"></a>Note

l' *identificatore* deve essere l'ID di una procedura [EXTRN](../../assembler/masm/extrn.md) [o proc](../../assembler/masm/proc.md) definita localmente. Un' [etichetta](../../assembler/masm/label-masm.md) non è consentita. Il. Per la direttiva SAFESEH è richiesta l'opzione della riga di comando [/SAFESEH](../../assembler/masm/ml-and-ml64-command-line-reference.md) ml. exe.

Per ulteriori informazioni sui gestori di eccezioni strutturate, vedere [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md).

Ad esempio, per registrare un gestore eccezioni sicuro, creare un nuovo file MASM (come indicato di seguito), assemblarlo con/SAFESEH e aggiungerlo agli oggetti collegati.

```asm
.386
.model  flat
MyHandler   proto
.safeseh    MyHandler
end
```

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
