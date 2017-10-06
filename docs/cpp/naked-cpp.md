---
title: naked (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- naked_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], naked
- naked __declspec keyword
ms.assetid: 69723241-05e1-439b-868e-20a83a16ab6d
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 8d22ae96facd89f16ebabb74ba46a9172cc4d2e9
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="naked-c"></a>naked (C++)
**Sezione specifica Microsoft**  
  
 Per le funzioni dichiarate con la `naked` attributo, il compilatore genera codice senza codice di prologo ed epilogo. È possibile utilizzare questa funzionalità per scrivere le proprie sequenze di codice di epilogo o di prologo utilizzando codice assembler inline. Le funzioni con attributo naked sono particolarmente utili nella scrittura di driver di dispositivi virtuali.  Si noti che il `naked` attributo è valido solo per x86 e ARM e non è disponibile in [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```  
__declspec(naked) declarator  
```  
  
## <a name="remarks"></a>Note  
 Poiché il `naked` è rilevante solo per la definizione di una funzione e non è un modificatore di tipo di attributo, le funzioni naked devono utilizzare la sintassi degli attributi estesa e [declspec](../cpp/declspec.md) (parola chiave).  
  

 Il compilatore non è possibile generare una funzione inline per una funzione contrassegnata con l'attributo naked, anche se la funzione viene anche contrassegnata con il [forceinline](inline-functions-cpp.md) (parola chiave).  

  
 Il compilatore genera un errore se il `naked` attributo viene applicato a qualsiasi elemento diverso dalla definizione di un metodo non membro.  
  
## <a name="examples"></a>Esempi  
 Questo codice definisce una funzione con il `naked` attributo:  
  
```  
__declspec( naked ) int func( formal_parameters ) {}  
```  
  
 O, in alternativa:  
  
```  
#define Naked __declspec( naked )  
Naked int func( formal_parameters ) {}  
```  
  
 L'attributo `naked` influisce solo sulla natura della generazione di codice del compilatore per le sequenze di prologo ed epilogo della funzione. Tale attributo non influisce sul codice generato per chiamare tali funzioni. Di conseguenza, l'attributo `naked` non è considerato come parte del tipo di funzione e i puntatori alla funzione non possono avere l'attributo `naked`. Inoltre, l'attributo `naked` non può essere applicato a una definizione dei dati. Ad esempio, in questo esempio di codice genera un errore:  
  
```  
__declspec( naked ) int i;       // Error--naked attribute not  
                                 // permitted on data declarations.  
```  
  
 L'attributo `naked` è rilevante solo per la definizione della funzione e non può essere specificato nel prototipo della funzione. Ad esempio, questa dichiarazione genera un errore del compilatore:  
  
```  
__declspec( naked ) int func();  // Error--naked attribute not   
                                 // permitted on function declarations  
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Chiamate di funzioni naked](../cpp/naked-function-calls.md)
