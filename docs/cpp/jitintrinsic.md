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
ms.openlocfilehash: 9e726413f0bbfbd9d6affa348777c995c51283a5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62245518"
---
# <a name="jitintrinsic"></a>jitintrinsic

Contrassegna la funzione come significativa in Common Language Runtime a 64 bit. Viene utilizzato in alcune funzioni in librerie fornite da Microsoft.

## <a name="syntax"></a>Sintassi

```
__declspec(jitintrinsic)
```

## <a name="remarks"></a>Note

**jitintrinsic** un oggetto modopt (<xref:System.Runtime.CompilerServices.IsJitIntrinsic>) per una firma della funzione.

Si consiglia di non utilizzo questo **declspec** modificatore, come risultati imprevisti può verificarsi.

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)