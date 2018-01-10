---
title: Errore del compilatore C3409 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3409
dev_langs: C++
helpviewer_keywords: C3409
ms.assetid: e372d9fa-230c-4b28-b6d3-6ad81ccf9dbb
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 22b179a74701cb79100285aeb426bb28531730b6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3409"></a>Errore del compilatore C3409
blocco attributi vuoto non consentito  
  
 Le parentesi quadre sono state interpretate dal compilatore come un [attributo](../../windows/cpp-attributes-reference.md) blocco, ma nessun attributo trovato.  
  
 Il compilatore può generare questo errore quando si utilizzano le parentesi quadre come parte della definizione di un'espressione lambda. Questo errore si verifica quando il compilatore non è possibile determinare se le parentesi quadre fanno parte della definizione di un'espressione lambda o di un blocco di attributi. Per altre informazioni sulle espressioni lambda, vedere [Espressioni lambda in C++](../../cpp/lambda-expressions-in-cpp.md).  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Se le parentesi quadre fanno parte di un blocco di attributi:  
  
    1.  Specificare uno o più attributi nel blocco di attributi.  
  
    2.  Rimuovere il blocco di attributi.  
  
2.  Se le parentesi quadre fanno parte di un'espressione lambda:  
  
    1.  Assicurarsi che l'espressione lambda segue le regole di sintassi valida.  
  
         Per ulteriori informazioni sulla sintassi dell'espressione lambda, vedere [sintassi delle espressioni Lambda](../../cpp/lambda-expression-syntax.md).  
  
    2.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3409.  
  
```  
// C3409.cpp  
// compile with: /c  
#include <windows.h>  
[]   // C3409  
class a {};  
  
// OK  
[object, uuid("00000000-0000-0000-0000-000000000000")]  
__interface x {};  
  
[coclass, uuid("00000000-0000-0000-0000-000000000001")]  
class b : public x {};  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente genera l'errore C3409 perché un'espressione lambda Usa il `mutable` specifica, ma non fornisce un elenco di parametri. Il compilatore non è possibile determinare se le parentesi quadre fanno parte della definizione di un'espressione lambda o di un blocco di attributi.  
  
```  
// C3409b.cpp  
  
int main()  
{  
   [] mutable {}();  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [attributo](../../windows/cpp-attributes-reference.md)   
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)   
 [Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)