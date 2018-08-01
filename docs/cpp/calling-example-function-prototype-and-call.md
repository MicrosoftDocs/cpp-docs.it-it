---
title: 'Esempio di chiamata: Funzione prototipo e chiamata | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- calling conventions, examples [C++]
- examples [C++], calling conventions
ms.assetid: e4275d1f-df2e-4bfc-a162-eb43ec69554a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9f9ee05b55a0945d18e78dc67df5653c06c8a1bc
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39404382"
---
# <a name="calling-example-function-prototype-and-call"></a>Esempio di chiamata - Prototipo e chiamata di funzione
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Nell'esempio seguente vengono illustrati i risultati dell'effettuare una chiamata di funzione utilizzando varie convenzioni di chiamata.  
  
 Questo esempio è basato sulla seguente struttura di funzione. Sostituire `calltype` con la convenzione di chiamata appropriata.  
  
```  
void    calltype MyFunc( char c, short s, int i, double f );  
.  
.  
.  
void    MyFunc( char c, short s, int i, double f )  
    {  
    .  
    .  
    .  
    }  
.  
.  
.  
MyFunc ('x', 12, 8192, 2.7183);  
```  
  
 Per altre informazioni, vedere [risultati della chiamata di esempio](../cpp/results-of-calling-example.md).  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)