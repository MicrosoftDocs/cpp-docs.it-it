---
title: Compilatore avviso (livello 1) C4683 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4683
dev_langs:
- C++
helpviewer_keywords:
- C4683
ms.assetid: e6e77364-dba1-46dd-ae1d-03da23070bce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 418bf25d565c616d5bc4aaf58361c4f28df298ca
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4683"></a>Avviso del compilatore (livello 1) C4683
**'**   
 ***funzione* ': origine evento è un 'out'-parametro; prestare attenzione nello stabilire associazioni a più gestori eventi**  
  
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