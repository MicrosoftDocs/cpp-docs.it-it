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
ms.openlocfilehash: 417aea13518621f775cafa176ff7d74f9704d511
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62178293"
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