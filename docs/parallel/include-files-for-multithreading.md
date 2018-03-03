---
title: File di inclusione per il Multithreading | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- threading [C++], include files
- include files, multithreading
- multithreading [C++], include files
ms.assetid: 98d764f9-71f4-4da5-8f3a-8d2d26e96799
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0f71b52bca5f636d80f2d55cc5e9ffc3e217d90a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="include-files-for-multithreading"></a>File di inclusione per il multithreading
File di inclusione standard dichiarare le funzioni di libreria run-time C implementato nelle librerie. Se si utilizza il [ottimizzazione completa](../build/reference/ox-full-optimization.md) (/ Ox) o [fastcall convenzione di chiamata](../build/reference/gd-gr-gv-gz-calling-convention.md) (/ Gr) opzione, il compilatore presuppone che tutte le funzioni devono essere chiamate utilizzando la convenzione di chiamata sui registri. Le funzioni della libreria run-time sono state compilate utilizzando la convenzione di chiamata C, e le dichiarazioni nei file di inclusione standard indicano al compilatore di generare i riferimenti esterni corretti a tali funzioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)