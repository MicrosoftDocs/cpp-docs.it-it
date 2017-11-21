---
title: Convenzioni di chiamata | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords: calling conventions
ms.assetid: 11b1e45c-8fd1-420b-bca0-a19e294c1d85
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 13003d247e1fb90ff078746af0cbbe2d7255ea18
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="calling-conventions"></a>Convenzioni di chiamata
Il compilatore Visual C/C++ fornisce numerose convenzioni per chiamare funzioni interne ed esterne. La comprensione di questi diversi approcci può facilitare il debug del programma e il collegamento del codice con le routine del linguaggio assembly.  
  
 In questo argomento vengono illustrate le differenze tra le convenzioni di chiamata, il modo in cui gli argomenti vengono passati e il modo in cui i valori vengono restituiti dalle funzioni. Vengono inoltre illustrate le chiamate di funzione naked, una funzionalità avanzata che consente di scrivere codice di epilogo e di prologo personalizzato.  
  
 Per informazioni sulle convenzioni di chiamata x64 processori, vedere [convenzione di chiamata](../build/calling-convention.md).  
  
## <a name="topics-in-this-section"></a>Argomenti contenuti in questa sezione  
  
-   [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md) (`__cdecl`, `__stdcall`, `__fastcall`e altri)  
  
-   [Esempio di chiamata: prototipo e chiamata di funzione](../cpp/calling-example-function-prototype-and-call.md)  
  
-   [Tramite le chiamate di funzione naked per scrivere codice personalizzato di prologo/epilogo](../cpp/naked-function-calls.md)  
  
-   [Coprocessore a virgola mobile e convenzioni di chiamata](../cpp/floating-point-coprocessor-and-calling-conventions.md)  
  
-   [Convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md)