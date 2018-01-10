---
title: Compilatore avviso (livello 1) C4727 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4727
dev_langs: C++
helpviewer_keywords: C4727
ms.assetid: 991b0087-3a50-40f5-9cdb-cdc367cd472c
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 813c2ab18cc81c4477ae094e6c2aa771e3135b7a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4727"></a>Avviso del compilatore (livello 1) C4727
"PCH denominato file_pch con lo stesso timestamp trovato in file_obj_1 e file_obj_2.  Tramite il primo PCH.  
  
 Durante la compilazione di più moduli con avviso C4727 **/Yc**, e in cui il compilatore non è in grado di contrassegnare tutti i file obj con lo stesso timestamp pch.  
  
 Per risolvere, compilare un file di origine con **/Yc /c** (Crea file pch) e compilare gli altri separatamente con **/Yu /c** (Usa pch), quindi collegarli tra loro.  
  
 Pertanto, se è riportato di seguito e genera l'errore C4727:  
  
 **cl /clr /GL a.cpp cpp b. cpp c.cpp /Ycstdafx.h**  
  
 Si potrebbe eseguire le operazioni seguenti:  
  
 **cl /clr /GL a.cpp /Ycstdafx.h /c**  
  
 **cl /clr /GL cpp b. cpp c.cpp /Yustdafx.h /link. obj**  
  
 Per altre informazioni, vedere  
  
-   [/Yc (Crea File di intestazione precompilata)](../../build/reference/yc-create-precompiled-header-file.md)  
  
-   [/Yu (utilizza il File di intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md)