---
title: Errore del compilatore C2099 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2099
dev_langs:
- C++
helpviewer_keywords:
- C2099
ms.assetid: 30e151ee-d458-4901-b0c0-d45054a913f5
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 74fdc75470600c29029c52e38ab2073e484dbde6
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2099"></a>Errore del compilatore C2099
l'inizializzatore non è una costante  
  
 Questo errore viene generato unicamente dal compilatore C e si verifica solo per variabili non automatiche.  Il compilatore inizializza le variabili non automatiche all'avvio del programma e i valori di inizializzazione devono essere costanti.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2099.  
  
```  
// C2099.c  
int j;  
int *p;  
j = *p;   // C2099 *p is not a constant  
```  
  
## <a name="example"></a>Esempio  
 L'errore C2099 può verificarsi anche perché il compilatore non è in grado di eseguire la riduzione delle costanti su un'espressione in **/fp: strict** perché le impostazioni di ambiente precisione della virgola mobile (vedere [controlfp_s](../../c-runtime-library/reference/controlfp-s.md) per altre informazioni) può differire dalla compilazione in fase di esecuzione.  
  
 Se la riduzione di costanti non riesce, il compilatore richiama l'inizializzazione dinamica, non consentita in C.  
  
 Per correggere questo errore, compilare il modulo come file cpp o semplificare l'espressione.  
  
 Per altre informazioni, vedere [/fp (Specifica il comportamento della virgola mobile)](../../build/reference/fp-specify-floating-point-behavior.md).  
  
 L'esempio seguente genera l'errore C2099.  
  
```  
// C2099_2.c  
// compile with: /fp:strict /c  
float X = 2.0 - 1.0;   // C2099  
float X2 = 1.0;   // OK  
```
