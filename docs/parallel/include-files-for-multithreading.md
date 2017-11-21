---
title: File di inclusione per il Multithreading | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- threading [C++], include files
- include files, multithreading
- multithreading [C++], include files
ms.assetid: 98d764f9-71f4-4da5-8f3a-8d2d26e96799
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: bcc8282680588585335eaa2c876128d2c2cf23a3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="include-files-for-multithreading"></a>File di inclusione per il multithreading
File di inclusione standard dichiarare le funzioni di libreria run-time C implementato nelle librerie. Se si utilizza il [ottimizzazione completa](../build/reference/ox-full-optimization.md) (/ Ox) o [fastcall convenzione di chiamata](../build/reference/gd-gr-gv-gz-calling-convention.md) (/ Gr) opzione, il compilatore presuppone che tutte le funzioni devono essere chiamate utilizzando la convenzione di chiamata sui registri. Le funzioni della libreria run-time sono state compilate utilizzando la convenzione di chiamata C, e le dichiarazioni nei file di inclusione standard indicano al compilatore di generare i riferimenti esterni corretti a tali funzioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)