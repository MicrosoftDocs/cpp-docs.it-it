---
title: Eccezioni (estensioni del componente C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- structured exception handling, managed exceptions
- Exception class, managed applications
- exception handling
- C++ exception handling
- exception handling, types of
- managed exceptions
- System::Exception class in managed applications
ms.assetid: ccb11fe8-6938-41ac-b477-a183e85865b9
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: aa42bfc67a94ed4e25045dc6656651a7b9bd645e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="exception-handling--c-component-extensions"></a>Gestione delle eccezioni (Estensioni del componente C++)
Le applicazioni compilate con il **/ZW** l'opzione del compilatore o **/clr** entrambi utilizzano l'opzione del compilatore *eccezioni* per gestire gli errori imprevisti durante l'esecuzione del programma. Negli argomenti seguenti viene illustrata la gestione delle eccezioni nelle applicazioni C++/CLI o C++/CX.  
  
## <a name="in-this-section"></a>Contenuto della sezione  
 [Concetti di base per l'uso delle eccezioni gestite](../dotnet/basic-concepts-in-using-managed-exceptions.md)  
 Descrive la generazione di eccezioni e l'utilizzo `try` / `catch` blocchi.  
  
 [Differenze nel comportamento in /CLR gestione delle eccezioni](../dotnet/differences-in-exception-handling-behavior-under-clr.md)  
 Vengono illustrate le differenze rispetto al comportamento standard di gestione delle eccezioni C++.  
  
 [finally](../dotnet/finally.md)  
 Viene illustrato come utilizzare la parola chiave finally.  
  
 [Procedura: Definire e installare un gestore eccezioni globale](../dotnet/how-to-define-and-install-a-global-exception-handler.md)  
 Viene illustrato come acquisire le eccezioni non gestite.  
  
 [Procedura: Rilevare eccezioni nel codice nativo generate da MSIL](../dotnet/how-to-catch-exceptions-in-native-code-thrown-from-msil.md)  
 Viene illustrato come rilevare le eccezioni C++ e CLR nel codice nativo.  
  
 [Procedura: Definire e installare un gestore eccezioni globale](../dotnet/how-to-define-and-install-a-global-exception-handler.md)  
 Viene illustrato come rilevare tutte le eccezioni non gestite.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)  
 Viene descritta la gestione delle eccezioni in C++.  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)