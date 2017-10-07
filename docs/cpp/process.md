---
title: processo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- process_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], process
- process __declspec keyword
ms.assetid: 60eecc2f-4eef-4567-b9db-aaed34733023
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: d4f2500adaaa7941444b22d7ce548370fc370533
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="process"></a>processo
Specifica che il processo dell'applicazione gestita deve includere una sola copia di una variabile globale specifica, di una variabile membro statica o di una variabile locale statica condivisa tra tutti i domini dell'applicazione presenti nel processo. Questa viene usata principalmente da utilizzare durante la compilazione con **/clr: pure**, perché in **/clr: pure** sono variabili globali e statiche per ogni dominio applicazione, per impostazione predefinita. Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015. Durante la compilazione con **/clr**, sono variabili globali e statiche per processo per impostazione predefinita (non è necessario utilizzare `__declspec(process)`.  
  
 Solo una variabile globale, una variabile membro statica o una variabile locale statica di tipo nativo può essere contrassegnata con `__declspec(process)`.  
  
 Durante la compilazione con **/clr: pure**, le variabili contrassegnate come processo devono inoltre essere dichiarate come `const`. In questo modo le variabili in base al processo non vengono modificate in un dominio dell'applicazione e restituiscono risultati imprevisti in un altro dominio della stessa. Il principale utilizzo previsto di `__declspec(process)` consiste nell'abilitare l'inizializzazione in fase di compilazione di una variabile globale, una variabile membro statica o una variabile locale statica in **/clr: pure**.  
  
 `process`è valido solo durante la compilazione con [/clr](../build/reference/clr-common-language-runtime-compilation.md) o **/clr: pure** e non è valido durante la compilazione con **/CLR: safe**.  
  
 Se si desidera che ogni dominio dell'applicazione per la propria copia di una variabile globale, utilizzare [appdomain](../cpp/appdomain.md).  
  
 Vedere [domini applicazione e Visual C++](../dotnet/application-domains-and-visual-cpp.md) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)
