---
title: Errore del compilatore C2030 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2030
dev_langs:
- C++
helpviewer_keywords:
- C2030
ms.assetid: 5806cead-64df-4eff-92de-52c9a3f5ee62
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b0c5849c372cc4c7ebf27dbe010e65d406ad1ab1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46032900"
---
# <a name="compiler-error-c2030"></a>Errore del compilatore C2030

un distruttore con accessibilità 'protected private' non può essere membro di una classe dichiarata 'sealed'

Una classe di Windows Runtime dichiarata `sealed` non può avere un distruttore privato protetto. Nei tipi sealed sono consentiti solo distruttori pubblici virtuali e privati non virtuali. Per altre informazioni, vedere [le classi e struct](../../cppcx/ref-classes-and-structs-c-cx.md).

Per correggere l'errore, modificare l'accessibilità del distruttore.