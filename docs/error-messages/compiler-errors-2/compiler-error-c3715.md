---
title: Errore del compilatore C3715
ms.date: 11/04/2016
f1_keywords:
- C3715
helpviewer_keywords:
- C3715
ms.assetid: ee5dce88-ddc4-4bdb-9464-47467ce1674f
ms.openlocfilehash: 94a451bbe936507ac3b33747065a9b6aac9edd02
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62328328"
---
# <a name="compiler-error-c3715"></a>Errore del compilatore C3715

'pointer': deve essere un puntatore a 'class'

È stato specificato un puntatore nella [hook](../../cpp/hook.md) oppure [unhook](../../cpp/unhook.md) che non fa riferimento a una classe valida. Per risolvere questo errore, verificare che il `__hook` e `__unhook` chiamate specificano i puntatori alle classi validi.