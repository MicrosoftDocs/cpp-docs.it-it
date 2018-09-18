---
title: jitintrinsic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- jitintrinsic
- jitintrinsic_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], jitintrinsic
- jitintrinsic __declspec modifier
ms.assetid: 23dbe416-7ef6-442b-b16d-9a81aab04fa6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 888ec19eaedf881fed97a14a7f3f8b5ee673ce7a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46056287"
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