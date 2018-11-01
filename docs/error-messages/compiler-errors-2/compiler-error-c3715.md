---
title: Errore del compilatore C3715
ms.date: 11/04/2016
f1_keywords:
- C3715
helpviewer_keywords:
- C3715
ms.assetid: ee5dce88-ddc4-4bdb-9464-47467ce1674f
ms.openlocfilehash: 94a451bbe936507ac3b33747065a9b6aac9edd02
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50660616"
---
# <a name="compiler-error-c3715"></a>Errore del compilatore C3715

'pointer': deve essere un puntatore a 'class'

È stato specificato un puntatore nella [hook](../../cpp/hook.md) oppure [unhook](../../cpp/unhook.md) che non fa riferimento a una classe valida. Per risolvere questo errore, verificare che il `__hook` e `__unhook` chiamate specificano i puntatori alle classi validi.