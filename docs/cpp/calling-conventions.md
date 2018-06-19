---
title: Convenzioni di chiamata | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- calling conventions
ms.assetid: 11b1e45c-8fd1-420b-bca0-a19e294c1d85
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e9e65dfd7f7cff25debd8eb0d00a7e3bb0397692
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32410892"
---
# <a name="calling-conventions"></a>Convenzioni di chiamata
Il compilatore Visual C/C++ fornisce numerose convenzioni per chiamare funzioni interne ed esterne. La comprensione di questi diversi approcci può facilitare il debug del programma e il collegamento del codice con le routine del linguaggio assembly.  
  
 In questo argomento vengono illustrate le differenze tra le convenzioni di chiamata, il modo in cui gli argomenti vengono passati e il modo in cui i valori vengono restituiti dalle funzioni. Vengono inoltre illustrate le chiamate di funzione naked, una funzionalità avanzata che consente di scrivere codice di epilogo e di prologo personalizzato.  
  
 Per informazioni sulle convenzioni di chiamata x64 processori, vedere [convenzione di chiamata](../build/calling-convention.md).  
  
## <a name="topics-in-this-section"></a>Argomenti contenuti in questa sezione  
  
-   [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md) (`__cdecl`, `__stdcall`, `__fastcall`e altri)  
  
-   [Esempio di chiamata: prototipo e chiamata di funzione](../cpp/calling-example-function-prototype-and-call.md)  
  
-   [Tramite le chiamate di funzione naked per scrivere codice di prologo/epilogo personalizzate](../cpp/naked-function-calls.md)  
  
-   [Coprocessore a virgola mobile e convenzioni di chiamata](../cpp/floating-point-coprocessor-and-calling-conventions.md)  
  
-   [Convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md)