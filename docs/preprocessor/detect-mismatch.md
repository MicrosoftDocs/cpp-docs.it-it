---
title: detect_mismatch | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc-pragma.detect_mismatch
- detect_mismatch_CPP
dev_langs: C++
helpviewer_keywords:
- pragmas, detect_mismatch
- detect_mismatch pragma
ms.assetid: ddb13ac9-0e2f-40ce-be69-7e44c04f5a12
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d99efe6bca27cdbefa73057f843adbcd01cd1fdf
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="detectmismatch"></a>detect_mismatch
Inserisce un record in un oggetto. Il linker controlla tali record per potenziali dati non corrispondenti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma detect_mismatch( "name", "value"))  
```  
  
## <a name="remarks"></a>Note  
 Quando si collega il progetto, il linker genera un errore `LNK2038` se il progetto contiene due oggetti con lo stesso `name` ma ciascuno con un `value` diverso. Utilizzare questo pragma per impedire ai file oggetto incoerenti di collegarsi.  
  
 Sia il nome che il valore sono valori letterali stringa e obbediscono a regole per valori letterali stringa in relazione ai caratteri di escape e alla concatenazione. Viene fatta distinzione tra maiuscole e minuscole e non possono contenere una virgola, il segno di uguale, le virgolette o il carattere `null`.  
  
## <a name="example"></a>Esempio  
 In questo esempio vengono creati due file che includono numeri di versione diversi per la stessa etichetta della versione.  
  
```  
// pragma_directive_detect_mismatch_a.cpp  
#pragma detect_mismatch("myLib_version", "9")  
int main ()  
{  
   return 0;  
}  
  
// pragma_directive_detect_mismatch_b.cpp  
#pragma detect_mismatch("myLib_version", "1")  
```  
  
 Se si compilano entrambi i file tramite la riga di comando `cl pragma_directive_detect_mismatch_a.cpp pragma_directive_detect_mismatch_b.cpp`, verrà visualizzato l'errore `LNK2038`.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)