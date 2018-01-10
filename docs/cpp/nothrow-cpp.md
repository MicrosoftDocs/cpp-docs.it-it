---
title: nothrow (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: nothrow_cpp
dev_langs: C++
helpviewer_keywords:
- __declspec keyword [C++], nothrow
- nothrow __declspec keyword
ms.assetid: 0a475139-459c-4ec6-99e8-7ecd0d7f44a3
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a6200a8207fdf25b533c7db7e05247797592744e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nothrow-c"></a>nothrow (C++)
**Sezione specifica Microsoft**  
  
 Attributo esteso `__declspec` che può essere utilizzato nella dichiarazione di funzioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
return-type __declspec(nothrow) [call-convention] function-name ([argument-list])  
```  
  
## <a name="remarks"></a>Note  
 L'attributo indica al compilatore che la funzione dichiarata e le funzioni che tale funzione chiama non generano mai un'eccezione. Con il modello di gestione delle eccezioni sincrona, per impostazione predefinita il compilatore può ora eliminare i meccanismi che consentono di tenere traccia della durata di alcuni oggetti non rimovibili in tale funzione, riducendo notevolmente la dimensione del codice. Nella seguente direttiva per il preprocessore le dichiarazioni delle tre funzioni indicate di seguito sono equivalenti:  
  
```  
#define WINAPI __declspec(nothrow) __stdcall   
  
void WINAPI f1();  
void __declspec(nothrow) __stdcall f2();  
void __stdcall f3() throw();  
```  
  
 Se si utilizza `void __declspec(nothrow) __stdcall f2();`, è possibile utilizzare una definizione dell'API, come quella illustrata nell'istruzione `#define`, per specificare facilmente `nothrow` su un set di funzioni. La terza dichiarazione`, void __stdcall f3() throw();` è la sintassi definita dallo standard C++.  
  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)