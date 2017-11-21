---
title: Compilatore avviso (livello 1) C4683 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4683
dev_langs: C++
helpviewer_keywords: C4683
ms.assetid: e6e77364-dba1-46dd-ae1d-03da23070bce
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 120da429e4f296b6be1881da806434f7548383ac
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4683"></a>Avviso del compilatore (livello 1) C4683
**'**   
 ***funzione* ': origine evento è 'out', parametro, prestare attenzione nello stabilire associazioni a più gestori eventi**  
  
 Se più di un sink di evento sono in attesa di un'origine evento COM, il valore di un parametro out può essere ignorato.  
  
 Tenere presente che si verificherà una perdita di memoria nella situazione seguente:  
  
1.  Se un metodo non ha un parametro out allocato internamente, ad esempio BSTR *.  
  
2.  Se l'evento ha più di un gestore (è un evento multicast)  
  
 Il motivo per la perdita è che il parametro out viene impostato da più di un gestore, ma restituito al sito di chiamata solo se l'ultimo gestore.  
  
 L'esempio seguente genera l'errore C4683:  
  
```  
// C4683.cpp  
// compile with: /W1 /LD  
#define _ATL_ATTRIBUTES 1  
#include "atlbase.h"  
#include "atlcom.h"  
  
[ module(name="xx") ];  
  
[ object ]  
__interface I {  
   HRESULT f([out] int* pi);  
   // try the following line instead  
   // HRESULT f(int* pi);  
};  
  
[ coclass, event_source(com) ]  
struct E {  
   __event __interface I;   // C4683  
};  
```