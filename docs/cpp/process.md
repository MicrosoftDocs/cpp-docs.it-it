---
title: processo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- process_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], process
- process __declspec keyword
ms.assetid: 60eecc2f-4eef-4567-b9db-aaed34733023
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8aa1ba2676ebbd04d1fc1a59d210d69efeab6658
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="process"></a>processo
Specifica che il processo dell'applicazione gestita deve includere una sola copia di una variabile globale specifica, di una variabile membro statica o di una variabile locale statica condivisa tra tutti i domini dell'applicazione presenti nel processo. Questo è stato principalmente per essere utilizzato durante la compilazione con **/clr: pure**, che ora è deprecata e verrà rimossa in una versione futura del compilatore. Durante la compilazione con **/clr**, sono variabili globali e statiche per processo per impostazione predefinita (non è necessario utilizzare `__declspec(process)`.  
  
 Solo una variabile globale, una variabile membro statica o una variabile locale statica di tipo nativo può essere contrassegnata con `__declspec(process)`.  
  
  
 `process` è valido solo durante la compilazione con [/clr](../build/reference/clr-common-language-runtime-compilation.md).  
  
 Se si desidera che ogni dominio dell'applicazione per la propria copia di una variabile globale, utilizzare [appdomain](../cpp/appdomain.md).  
  
 Vedere [domini applicazione e Visual C++](../dotnet/application-domains-and-visual-cpp.md) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)