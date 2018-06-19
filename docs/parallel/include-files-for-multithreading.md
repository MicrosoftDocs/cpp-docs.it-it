---
title: File di inclusione per il Multithreading | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- threading [C++], include files
- include files, multithreading
- multithreading [C++], include files
ms.assetid: 98d764f9-71f4-4da5-8f3a-8d2d26e96799
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 62b94f4a7a394b78cb7c6f23275709e4aeacc774
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33685801"
---
# <a name="include-files-for-multithreading"></a>File di inclusione per il multithreading
File di inclusione standard dichiarare le funzioni di libreria run-time C implementato nelle librerie. Se si utilizza il [ottimizzazione completa](../build/reference/ox-full-optimization.md) (/ Ox) o [fastcall convenzione di chiamata](../build/reference/gd-gr-gv-gz-calling-convention.md) (/ Gr) opzione, il compilatore presuppone che tutte le funzioni devono essere chiamate utilizzando la convenzione di chiamata sui registri. Le funzioni della libreria run-time sono state compilate utilizzando la convenzione di chiamata C, e le dichiarazioni nei file di inclusione standard indicano al compilatore di generare i riferimenti esterni corretti a tali funzioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)