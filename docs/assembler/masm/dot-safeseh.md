---
description: Ulteriori informazioni su:. SAFESEH (MASM a 32 bit)
title: .SAFESEH
ms.date: 11/05/2019
f1_keywords:
- .SAFESEH
helpviewer_keywords:
- registering functions as exception handlers
- SAFESEH directive
- .SAFESEH directive
ms.assetid: 6eaac8c4-c46f-47ae-8a66-f5cfeb267e43
ms.openlocfilehash: f0b44477d20aa024689df5e2901cc3e179596a79
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97131209"
---
# <a name="safeseh-32-bit-masm"></a>. SAFESEH (MASM a 32 bit)

Registra una funzione come gestore di eccezioni strutturate. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **.** *Identificatore* SAFESEH

## <a name="remarks"></a>Commenti

l' *identificatore* deve essere l'ID di una procedura [EXTRN](extrn.md) [o proc](proc.md) definita localmente. Un' [etichetta](label-masm.md) non è consentita. Il. Per la direttiva SAFESEH è richiesta l'opzione della riga di comando [/safeseh](ml-and-ml64-command-line-reference.md) ml.exe.

Per ulteriori informazioni sui gestori di eccezioni strutturate, vedere [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md).

Ad esempio, per registrare un gestore eccezioni sicuro, creare un nuovo file MASM (come indicato di seguito), assemblarlo con/SAFESEH e aggiungerlo agli oggetti collegati.

```asm
.386
.model  flat
MyHandler   proto
.safeseh    MyHandler
end
```

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
