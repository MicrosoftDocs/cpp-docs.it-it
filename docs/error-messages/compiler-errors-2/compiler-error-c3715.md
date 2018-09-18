---
title: Errore del compilatore C3715 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3715
dev_langs:
- C++
helpviewer_keywords:
- C3715
ms.assetid: ee5dce88-ddc4-4bdb-9464-47467ce1674f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 63ae3486b4db21a3aa241d5ebdbbfa0cdc6806f2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46026556"
---
# <a name="compiler-error-c3715"></a>Errore del compilatore C3715

'pointer': deve essere un puntatore a 'class'

È stato specificato un puntatore nella [hook](../../cpp/hook.md) oppure [unhook](../../cpp/unhook.md) che non fa riferimento a una classe valida. Per risolvere questo errore, verificare che il `__hook` e `__unhook` chiamate specificano i puntatori alle classi validi.