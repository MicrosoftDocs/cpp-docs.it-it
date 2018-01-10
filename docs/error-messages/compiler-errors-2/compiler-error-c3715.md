---
title: Errore del compilatore C3715 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3715
dev_langs: C++
helpviewer_keywords: C3715
ms.assetid: ee5dce88-ddc4-4bdb-9464-47467ce1674f
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ca60dcff0279982b01c70ee3c7603baf421bd434
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3715"></a>Errore del compilatore C3715
'pointer': deve essere un puntatore a 'class'  
  
 È stato specificato un puntatore in [hook](../../cpp/hook.md) o [unhook](../../cpp/unhook.md) che non fa riferimento a una classe valida. Per correggere l'errore, verificare che il `__hook` e `__unhook` specifichino puntatori a classi valide.