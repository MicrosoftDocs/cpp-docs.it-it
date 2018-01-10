---
title: Funzioni CRT non supportate da Windows Runtime | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- unsupported CRT functions, Windows Runtime
- Windows Runtime, unsupported CRT functions
ms.assetid: bb8386d6-0ef8-460c-88d8-addff009b6f1
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d3e5e2f8ffab670c6e6c5eb95d37b4daced5c6b3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="windows-runtime-unsupported-crt-functions"></a>Funzioni CRT non supportate da Windows Runtime
Molte API CRT (C Run-Time) non possono essere usate nelle app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] in esecuzione in Windows Runtime. Queste app vengono compilate usando il flag del compilatore /ZW. Per un elenco di funzioni CRT non supportate, vedere [CRT functions not supported by /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx) (Funzioni CRT non supportate da /ZW).  
  
 Tutte le API CRT sono descritte nella sezione [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md) della documentazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)