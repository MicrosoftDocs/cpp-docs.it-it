---
title: Identificatori ed equivalenti di tipi di dati | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- type specifiers [C++], list
- widening integers
- data types [C++], equivalents
- sign-extending integral types
- zero-extending
- identifiers, data type
- data types [C++], specifiers
- simple types, names
- type names [C++], simple
ms.assetid: 0d4b515a-4f68-4786-83cf-a5d43c7cb6f3
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Human Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: de625abc04fcfde9d39205d024f09dc64d6c82ae
ms.lasthandoff: 04/04/2017

---
# <a name="data-type-specifiers-and-equivalents"></a>Identificatori ed equivalenti di tipi di dati
In questa documentazione vengono utilizzati in genere i formati degli identificatori di tipo elencati nella tabella seguente anziché i formati estesi e si presuppone che il tipo `char` sia signed per impostazione predefinita. Di conseguenza, in questa documentazione `char` equivale a **signed char**.  
  
### <a name="type-specifiers-and-equivalents"></a>Identificatori di tipo ed elementi equivalenti  
  
|Identificatore di tipo|Elemento o elementi equivalenti|  
|--------------------|---------------------|  
|**signed char**1|**char**|  
|**signed int**|**signed**, **int**|  
|**signed short int**|**short**, **signed short**|  
|**signed long int**|**long**, **signed long**|  
|**unsigned char**|—|  
|**unsigned int**|**unsigned**|  
|**unsigned short int**|**unsigned short**|  
|**unsigned long int**|**unsigned long**|  
|**float**|—|  
|**long double**2|—|  
  
 1   Quando si crea il tipo **char** senza segno per impostazione predefinita (specificando l'opzione del compilatore /J), non è possibile abbreviare **signed char** come **char**.  
  
 2   In sistemi operativi a 32 bit e a 64 bit il compilatore C Microsoft esegue il mapping di **long double** al tipo **double**.  
  
 **Sezione specifica Microsoft**  
  
 È possibile specificare l'opzione del compilatore /J per modificare il tipo predefinito **char** con segno in senza segno. Quando viene applicata questa opzione, **char** equivale a **unsigned char** ed è necessario usare la parola chiave **signed** per dichiarare un valore di carattere con segno. Se un valore **char** viene dichiarato esplicitamente, l'opzione /J non ha effetto e il valore assume la forma con segno quando esteso a un tipo **int**. Il tipo **char** viene esteso in base a zero quando esteso al tipo **int**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Identificatori di tipi C](../c-language/c-type-specifiers.md)
