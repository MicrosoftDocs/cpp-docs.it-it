---
title: .SAFESEH | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .SAFESEH
dev_langs:
- C++
helpviewer_keywords:
- registering functions as exception handlers
- SAFESEH directive
- .SAFESEH directive
ms.assetid: 6eaac8c4-c46f-47ae-8a66-f5cfeb267e43
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d10f3c751fe05c118203bb5eeff6c5cba6ec1c8b
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43693168"
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
.model  flat
MyHandler   proto
.safeseh    MyHandler
end
```

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>