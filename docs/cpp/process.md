---
title: process | Microsoft Docs
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2c50948d613a40a03d0249e1930943ef61c855b9
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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