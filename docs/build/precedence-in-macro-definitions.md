---
title: Precedenza nelle definizioni di Macro | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- NMAKE program, precedence in macro definitions
- macros, precedence
ms.assetid: 0c13182d-83cb-4cbd-af2d-f4c916b62aeb
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 0a71f69f141e92e7134d6048de67301198a667c8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="precedence-in-macro-definitions"></a>Precedenza nelle definizioni delle macro
Se una macro ha più definizioni, viene utilizzata la definizione di precedenza più alta. Nell'elenco seguente viene illustrato l'ordine di precedenza, dal maggiore al minore:  
  
1.  Una macro definita nella riga di comando  
  
2.  Una macro definita in un makefile o file di inclusione  
  
3.  Una macro di variabili di ambiente ereditata  
  
4.  Una macro definita nel file Tools  
  
5.  Una macro predefinita, ad esempio [CC](../build/command-macros-and-options-macros.md) e [AS](../build/command-macros-and-options-macros.md)  
  
 Utilizzare /E le macro ereditate dalle variabili di ambiente per eseguire l'override delle macro di makefile con lo stesso nome. Utilizzare **! UNDEF** per eseguire l'override di una riga di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)