---
title: C3446 errore del compilatore | Documenti Microsoft
ms.custom: ''
ms.date: 07/21/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3446
dev_langs:
- C++
helpviewer_keywords:
- C3445
ms.assetid: 33064548-24e4-46f1-beb1-476e3c3b3fbf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7a7715ebbc094c2c3c91aa3a0bb42f7df97bef08
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33257000"
---
# <a name="compiler-error-c3446"></a>C3446 errore del compilatore  
  
>'*classe*': non è consentito un inizializzatore di membro predefinito per un membro di una classe di valore  
  
In Visual Studio 2015 e versioni precedenti il compilatore consentiva, ma ignorava, un inizializzatore di membro predefinito per un membro di una classe di valori. L'inizializzazione predefinita di una classe di valori inizializza sempre a zero i membri e un costruttore predefinito non è consentito. In Visual Studio 2017 gli inizializzatori di membri predefiniti generano un errore del compilatore, come illustra l'esempio seguente:

## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3446 in Visual Studio 2017 e versioni successive:  
  
```cpp  
// C3446.cpp  
value struct V
{
       int i = 0; // error C3446: 'V::i': a default member initializer  
                  // is not allowed for a member of a value class
       int j {0}; // C3446           
};
```  
  
Per correggere l'errore, rimuovere l'inizializzatore:  
  
```cpp  
// C3446b.cpp  
value struct V
{
       int i;  
       int j;
};
```  
  
