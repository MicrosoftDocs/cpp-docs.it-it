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
ms.openlocfilehash: 5953ad6bdf1d9d1b0070ce83dd1d764799b7440a
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75317565"
---
# <a name="safeseh-32-bit-masm"></a>. SAFESEH (MASM a 32 bit)

Registra una funzione come gestore di eccezioni strutturate. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **.**  *Identificatore* SAFESEH

## <a name="remarks"></a>Note

l' *identificatore* deve essere l'ID di una procedura [EXTRN](extrn.md) [o proc](proc.md) definita localmente. Un' [etichetta](label-masm.md) non è consentita. Il. Per la direttiva SAFESEH è richiesta l'opzione della riga di comando [/SAFESEH](ml-and-ml64-command-line-reference.md) ml. exe.

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

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
