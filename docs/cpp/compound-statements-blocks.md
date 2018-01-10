---
title: Istruzioni composte (blocchi) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- '}'
- '{'
dev_langs: C++
helpviewer_keywords:
- blocks, about blocks
- compound statements
ms.assetid: 23855939-7430-498e-8936-0c70055ea701
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 36dc3c25d5f8bbd37ebfaa3458c07f6948492817
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compound-statements-blocks"></a>Istruzioni composte (blocchi)
Un'istruzione composta è costituita da zero o più istruzioni racchiuse tra parentesi graffe (**{}**). Un'istruzione composta può essere utilizzata ovunque sia prevista un'istruzione. Le istruzioni composte vengono in genere definite blocchi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
{ [ statement-list ] }  
```  
  
## <a name="remarks"></a>Note  
 Nell'esempio seguente viene utilizzata un'istruzione composta come il *istruzione* in parte il **se** istruzione (vedere [if istruzione](../cpp/if-else-statement-cpp.md) per informazioni dettagliate sulla sintassi):  
  
```  
if( Amount > 100 )  
{  
    cout << "Amount was too large to handle\n";  
    Alert();  
}  
else  
{
    Balance -= Amount;  
}
```  
  
> [!NOTE]
>  Poiché una dichiarazione di un'istruzione, può essere una delle istruzioni in una dichiarazione di *elenco di istruzioni*. Di conseguenza, i nomi dichiarati in un'istruzione composta, ma non esplicitamente dichiarati come statici, hanno ambito e, per gli oggetti, durata locale. Vedere [ambito](../cpp/scope-visual-cpp.md) per informazioni dettagliate sul trattamento dei nomi con ambito locale.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica delle istruzioni C++](../cpp/overview-of-cpp-statements.md)