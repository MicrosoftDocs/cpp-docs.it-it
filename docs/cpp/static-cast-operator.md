---
title: Operatore static_cast | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- static_cast_cpp
dev_langs:
- C++
helpviewer_keywords:
- static_cast keyword [C++]
ms.assetid: 1f7c0c1c-b288-476c-89d6-0e2ceda5c293
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5a0cd6ea7e2268940febca9e1e564f30d29dcff0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="staticcast-operator"></a>Operatore static_cast
Converte un *espressione* al tipo di *-id, tipo* solo in base ai tipi che sono presenti nell'espressione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
static_cast <type-id> ( expression )   
```  
  
## <a name="remarks"></a>Note  
 Nel linguaggio C++ standard non viene eseguito alcun controllo dei tipi in fase di esecuzione a garanzia della sicurezza della conversione. In C++/CX vengono eseguiti due controlli, uno in fase di compilazione, l'altro in fase di esecuzione. Per ulteriori informazioni, vedere [cast](casting.md).  
  
 L'operatore `static_cast` può essere utilizzato per operazioni quali la conversione di un puntatore a una classe base o a una classe derivata. Questi tipi di conversioni non sempre sono sicure.  
  
 In generale si utilizza `static_cast` quando si desidera convertire tipi di dati numerici, ad esempio tipi enum in int o tipi int in float e si è sicuri dei tipi di dati interessati dalla conversione. Le conversioni `static_cast` non sono sicure come le conversioni `dynamic_cast` perché, contrariamente a `static_cast`, `dynamic_cast` non prevede alcun controllo dei tipi in fase di esecuzione. Un `dynamic_cast` a un puntatore ambiguo non ha esito positivo, mentre un `static_cast` restituisce un valore come se tutto fosse corretto e questo fatto può essere rischioso. Sebbene le conversioni `dynamic_cast` siano più sicure, un `dynamic_cast` funziona solo sui puntatori o i riferimenti e il controllo dei tipi in fase di esecuzione rappresenta un sovraccarico. Per ulteriori informazioni, vedere [operatore dynamic_cast](../cpp/dynamic-cast-operator.md).  
  
 Nell'esempio seguente la riga `D* pd2 = static_cast<D*>(pb);` non è sicura perché `D` può contenere campi e metodi non presenti in `B`. Tuttavia, la riga `B* pb2 = static_cast<B*>(pd);` è una conversione sicura perché `D` contiene sempre tutti `B`.  
  
```  
// static_cast_Operator.cpp  
// compile with: /LD  
class B {};  
  
class D : public B {};  
  
void f(B* pb, D* pd) {  
   D* pd2 = static_cast<D*>(pb);   // Not safe, D can have fields  
                                   // and methods that are not in B.  
  
   B* pb2 = static_cast<B*>(pd);   // Safe conversion, D always  
                                   // contains all of B.  
}  
```  
  
 Al contrario [dynamic_cast](../cpp/dynamic-cast-operator.md), in cui viene effettuato alcun controllo di runtime di `static_cast` conversione di `pb`. L'oggetto a cui fa riferimento `pb` non può essere un oggetto di tipo `D`, nel qual caso l'utilizzo di `*pd2` può diventare molto rischioso. Ad esempio, la chiamata a una funzione membro della classe `D`, ma non della classe `B` potrebbe tradursi in una violazione di accesso.  
  
 Gli operatori `dynamic_cast` e `static_cast` spostano un puntatore attraverso una gerarchia di classi. Tuttavia, `static_cast` si basa esclusivamente sulle informazioni fornite nell'istruzione cast, pertanto potrebbe presentare delle vulnerabilità. Ad esempio:  
  
```  
// static_cast_Operator_2.cpp  
// compile with: /LD /GR  
class B {  
public:  
   virtual void Test(){}  
};  
class D : public B {};  
  
void f(B* pb) {  
   D* pd1 = dynamic_cast<D*>(pb);  
   D* pd2 = static_cast<D*>(pb);  
}  
```  
  
 Se `pb` punta veramente a un oggetto di tipo `D`, `pd1` e `pd2` otterranno lo stesso valore. Otterranno anche lo stesso valore se `pb == 0`.  
  
 Se `pb` punta a un oggetto di tipo `B` e non alla classe `D` completa, la conversione `dynamic_cast` disporrà di informazioni sufficienti per restituire zero. Tuttavia, `static_cast` si basa sull'asserzione del programmatore secondo cui `pb` punta a un oggetto di tipo `D` e restituisce semplicemente un puntatore a quell'oggetto `D` presunto.  
  
 Di conseguenza, `static_cast` può eseguire l'operazione inversa delle conversioni implicite, nel qual caso i risultati saranno indefiniti. Sarà compito del programmatore verificare che i risultati di una conversione `static_cast` siano sicuri.  
  
 Questo comportamento si applica anche a tipi diversi dai tipi di classe. Ad esempio, la conversione `static_cast` può anche essere utilizzata per convertire un tipo int in un tipo `char`. È tuttavia possibile che il tipo `char` risultante non disponga di bit sufficienti per contenere l'intero valore `int`. Nuovamente è compito del programmatore per verificare che i risultati di una `static_cast` conversione siano sicuri.  
  
 L'operatore `static_cast` può anche essere utilizzato per eseguire conversioni implicite, incluse le conversioni standard e le conversioni definite dell'utente. Ad esempio:  
  
```  
// static_cast_Operator_3.cpp  
// compile with: /LD /GR  
typedef unsigned char BYTE;  
  
void f() {  
   char ch;  
   int i = 65;  
   float f = 2.5;  
   double dbl;  
  
   ch = static_cast<char>(i);   // int to char  
   dbl = static_cast<double>(f);   // float to double  
   i = static_cast<BYTE>(ch);  
}  
```  
  
 L'operatore `static_cast` può convertire in modo esplicito un valore integrale in un tipo di enumerazione. Se il valore del tipo integrale non rientra nell'intervallo dei valori di enumerazione, il valore di enumerazione risultante sarà indefinito.  
  
 L'operatore `static_cast` converte un valore di puntatore null in un valore di puntatore null del tipo di destinazione.  
  
 Qualsiasi espressione può essere convertita in modo esplicito in un tipo void tramite l'operatore `static_cast`. Il tipo void di destinazione può includere facoltativamente l'attributo `const`, `volatile` o `__unaligned`.  
  
 L'operatore `static_cast` non può eseguire il cast dell'attributo `const`, `volatile` o `__unaligned`. Vedere [operatore di const_cast](../cpp/const-cast-operator.md) per informazioni sulla rimozione di questi attributi.  
  
 A causa dei rischi associati all'esecuzione di cast non verificati su un Garbage Collector di rilocazione, utilizzare `static_cast` solo per codice le cui prestazioni sono molto importanti e quando si è certi che l'operazione funzionerà correttamente. Se è necessario utilizzare `static_cast` in modalità di rilascio, sostituirlo con [safe_cast](../windows/safe-cast-cpp-component-extensions.md) nelle build di debug per garantire la corretta esecuzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di cast](../cpp/casting-operators.md)   
 [Parole chiave](../cpp/keywords-cpp.md)