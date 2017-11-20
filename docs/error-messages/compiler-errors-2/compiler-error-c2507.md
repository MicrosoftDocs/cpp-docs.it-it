---
title: Errore del compilatore C2507 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2507
dev_langs: C++
helpviewer_keywords: C2507
ms.assetid: f102aff5-de7d-4c3f-9cac-2ddf9ce02b14
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 6320fd9b6642d6be36d59151dd9c3260917d1b61
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2507"></a>Errore del compilatore C2507
'identifier': troppi modificatori virtual nella classe di base  
  
 Una classe o struttura è dichiarato come `virtual` più volte. Un solo `virtual` modificatore può essere visualizzati per ogni classe in un elenco delle classi base.  
  
 L'esempio seguente genera l'errore C2507:  
  
```  
// C2507.cpp  
// compile with: /c  
class A {};  
class B : virtual virtual public A {};   // C2507  
class C : virtual public A {};   // OK  
```