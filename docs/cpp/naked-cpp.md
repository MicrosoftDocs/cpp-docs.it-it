---
title: naked (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- naked_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], naked
- naked __declspec keyword
ms.assetid: 69723241-05e1-439b-868e-20a83a16ab6d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1057754b5c98086de42daedd5e7aab70656eba69
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943249"
---
# <a name="naked-c"></a>naked (C++)
**Sezione specifica Microsoft**  
  
 Per le funzioni dichiarate con il **naked** attributo, il compilatore genera codice senza codice di prologo ed epilogo. È possibile utilizzare questa funzionalità per scrivere le proprie sequenze di codice di epilogo o di prologo utilizzando codice assembler inline. Le funzioni con attributo naked sono particolarmente utili nella scrittura di driver di dispositivi virtuali.  Si noti che il **naked** attributo è valido solo per x86 e ARM e non è disponibile in [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```  
__declspec(naked) declarator  
```  
  
## <a name="remarks"></a>Note  
 Poiché il **naked** attributo rilevante solo per la definizione di una funzione e non è un modificatore di tipo, le funzioni naked devono usare la sintassi degli attributi estesa e il [declspec](../cpp/declspec.md) (parola chiave).  
  

 Il compilatore non è possibile generare una funzione inline per una funzione contrassegnata con l'attributo naked, anche se la funzione viene anche contrassegnata con il [forceinline](inline-functions-cpp.md) (parola chiave).  

  
 Il compilatore genera un errore se il **naked** attributo viene applicato a qualsiasi elemento diverso dalla definizione di un metodo non membro.  
  
## <a name="examples"></a>Esempi  
 Questo codice definisce una funzione con il **naked** attributo:  
  
```  
__declspec( naked ) int func( formal_parameters ) {}  
```  
  
 O, in alternativa:  
  
```  
#define Naked __declspec( naked )  
Naked int func( formal_parameters ) {}  
```  
  
 Il **naked** attributo interessa solo la natura della generazione del codice del compilatore per le sequenze di prologo ed epilogo della funzione. Tale attributo non influisce sul codice generato per chiamare tali funzioni. Di conseguenza, il **naked** attributo non è considerato parte del tipo della funzione e i puntatori a funzione non può contenere il **naked** attributo. Inoltre, il **naked** attributo non può essere applicato a una definizione di dati. Questo esempio di codice, ad esempio, genera un errore:  
  
```  
__declspec( naked ) int i;  
// Error--naked attribute not permitted on data declarations.  
```  
  
 Il **naked** attributo è rilevante solo per la definizione della funzione e non può essere specificato nel prototipo della funzione. Ad esempio, questa dichiarazione genera un errore del compilatore:  
  
```  
__declspec( naked ) int func();  // Error--naked attribute not permitted on function declarations  
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Chiamate di funzioni naked](../cpp/naked-function-calls.md)