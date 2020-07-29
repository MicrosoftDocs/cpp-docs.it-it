---
title: jitintrinsic
ms.date: 11/04/2016
f1_keywords:
- jitintrinsic
- jitintrinsic_cpp
helpviewer_keywords:
- __declspec keyword [C++], jitintrinsic
- jitintrinsic __declspec modifier
ms.assetid: 23dbe416-7ef6-442b-b16d-9a81aab04fa6
ms.openlocfilehash: cecadcad15ee65a44ad5a8245efdb69903c89459
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233704"
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

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
