---
title: Errore del compilatore C3715 | Documenti Microsoft
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
ms.openlocfilehash: 9412592ac177fb49f065975db469c9f77b98e8c8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3715"></a>Errore del compilatore C3715
'pointer': deve essere un puntatore a 'class'  
  
 È stato specificato un puntatore in [hook](../../cpp/hook.md) o [unhook](../../cpp/unhook.md) che non fa riferimento a una classe valida. Per correggere l'errore, verificare che il `__hook` e `__unhook` specifichino puntatori a classi valide.