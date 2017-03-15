---
title: "Errore del compilatore C3409 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3409"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3409"
ms.assetid: e372d9fa-230c-4b28-b6d3-6ad81ccf9dbb
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore del compilatore C3409
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

blocco attributi vuoto non consentito  
  
 Le parentesi quadre sono state interpretate come blocco di [attributi](../../windows/cpp-attributes-reference.md) nella compilazione, ma non sono stati trovati attributi.  
  
 È possibile che il compilatore generi questo errore quando si utilizzano parentesi quadre come parte della definizione di un'espressione lambda.  Questo errore si verifica quando il compilatore non è in grado di determinare se le parentesi quadre fanno parte della definizione di un'espressione lambda o di un blocco di attributi.  Per ulteriori informazioni sulle espressioni lambda, vedere [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md).  
  
### Per correggere l'errore  
  
1.  Se le parentesi quadre fanno parte di un blocco di attributi:  
  
    1.  Specificare uno o più attributi nel blocco di attributi.  
  
    2.  Rimuovere il blocco di attributi.  
  
2.  Se le parentesi quadre fanno parte di un'espressione lambda:  
  
    1.  Verificare che l'espressione lambda utilizzi le regole di sintassi valide.  
  
         Per ulteriori informazioni sulla sintassi delle espressioni lambda, vedere [Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md).  
  
## Esempio  
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
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3409 perché un'espressione lambda utilizza la specifica `mutable`, ma non fornisce un elenco di parametri.  Il compilatore non è in grado di determinare se le parentesi quadre fanno parte della definizione di un'espressione lambda o di un blocco di attributi.  
  
```  
// C3409b.cpp  
  
int main()  
{  
   [] mutable {}();  
}  
```  
  
## Vedere anche  
 [attributo](../../windows/cpp-attributes-reference.md)   
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)   
 [Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)