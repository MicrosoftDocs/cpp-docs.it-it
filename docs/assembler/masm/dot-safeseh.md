---
title: .SAFESEH
ms.date: 08/30/2018
f1_keywords:
- .SAFESEH
helpviewer_keywords:
- registering functions as exception handlers
- SAFESEH directive
- .SAFESEH directive
ms.assetid: 6eaac8c4-c46f-47ae-8a66-f5cfeb267e43
ms.openlocfilehash: adfb9106095de3d15bafb67172b001d0f4597418
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50649852"
---
# <a name="safeseh"></a>.SAFESEH

Registra una funzione come gestore di eccezioni strutturate.

## <a name="syntax"></a>Sintassi

> . Identificatore SAFESEH

## <a name="remarks"></a>Note

*Identificatore* deve essere l'ID per un controllo definito localmente [PROC](../../assembler/masm/proc.md) oppure [EXTRN](../../assembler/masm/extrn.md) durante il processo. Oggetto [etichetta](../../assembler/masm/label-masm.md) non è consentita. Il file con estensione SAFESEH (direttiva) richiede la [/safeseh](../../assembler/masm/ml-and-ml64-command-line-reference.md) ml.exe opzione della riga di comando.

Per altre informazioni sui gestori di eccezioni strutturate, vedere [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md).

Ad esempio, per registrare un gestore di eccezioni sicuri, creare un nuovo file MASM (come indicato di seguito), assemblare con /safeseh e aggiungerlo degli oggetti collegati.

```asm
.386
.model  flat
MyHandler   proto
.safeseh    MyHandler
end
```

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>