---
description: 'Altre informazioni su: jitintrinsic'
title: jitintrinsic
ms.date: 11/04/2016
f1_keywords:
- jitintrinsic
- jitintrinsic_cpp
helpviewer_keywords:
- __declspec keyword [C++], jitintrinsic
- jitintrinsic __declspec modifier
ms.assetid: 23dbe416-7ef6-442b-b16d-9a81aab04fa6
ms.openlocfilehash: 29f4db3e946d2ccf0ec96bb0248e751bb9297db5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97292000"
---
# <a name="jitintrinsic"></a>jitintrinsic

Contrassegna la funzione come significativa in Common Language Runtime a 64 bit. Viene utilizzato in alcune funzioni in librerie fornite da Microsoft.

## <a name="syntax"></a>Sintassi

```
__declspec(jitintrinsic)
```

## <a name="remarks"></a>Osservazioni

**`jitintrinsic`** aggiunge un MODOPT ( <xref:System.Runtime.CompilerServices.IsJitIntrinsic> ) a una firma della funzione.

Gli utenti sono sconsigliati di utilizzare questo **`__declspec`** modificatore, in quanto possono verificarsi risultati imprevisti.

## <a name="see-also"></a>Vedi anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
