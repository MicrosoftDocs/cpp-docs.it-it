---
title: Basati su puntatori (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
f1_keywords:
- __based
- __based_cpp
dev_langs:
- C++
helpviewer_keywords:
- __based keyword [C++]
- based pointers
- pointers, based
ms.assetid: 1e5f2e96-c52e-4738-8e14-87278681205e
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 629ff6c3f383973b758ddb4317e43a27de0b11d3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="based-pointers-c"></a>Puntatori based (C++)
**Sezione specifica Microsoft**  
  
 La parola chiave `__based` consente di dichiarare puntatori basati su puntatori (puntatori con offset rispetto ai puntatori esistenti).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
type __based( base ) declarator   
```  
  
## <a name="remarks"></a>Note  
 I puntatori basati sugli indirizzi di puntatori sono l'unico formato della parola chiave `__based` valida in compilazioni a 32 bit o a 64 bit. Per i compilatori C e C++ a 32 bit Microsoft un puntatore based è un offset a 32 bit di una base puntatore a 32 bit. Una restrizione analoga è presente per ambienti a 64 bit, in cui un puntatore based è un offset a 64 bit rispetto a una base a 64 bit.  
  
 Un utilizzo dei puntatori basati su puntatori è correlato agli identificatori persistenti che contengono puntatori. Un elenco collegato costituito da puntatori basati su un puntatore può essere salvato su disco e successivamente ricaricato in un'altra posizione della memoria, con i puntatori che rimangono validi. Ad esempio:  
  
```  
// based_pointers1.cpp  
// compile with: /c  
void *vpBuffer;  
struct llist_t {  
   void __based( vpBuffer ) *vpData;  
   struct llist_t __based( vpBuffer ) *llNext;  
};  
```  
  
 Il puntatore `vpBuffer` viene assegnato l'indirizzo di memoria allocata in un qualche punto successivo del programma. L'elenco collegato viene rilocato rispetto al valore `vpBuffer`.  
  
> [!NOTE]
>  Identificatori persistenti che contengono puntatori possono essere realizzati anche tramite [file mappati alla memoria](http://msdn.microsoft.com/library/windows/desktop/aa366556).  
  
 Quando si dereferenzia un puntatore based, la base deve essere specificata in modo esplicito o essere implicitamente nota tramite la dichiarazione.  
  
 Per garantire la compatibilità con le versioni precedenti, **based** è un sinonimo di `__based`.  
  
## <a name="example"></a>Esempio  
 Nel codice seguente viene illustrata la modifica di un puntatore based tramite la modifica della base relativa.  
  
```  
// based_pointers2.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int a1[] = { 1,2,3 };  
int a2[] = { 10,11,12 };  
int *pBased;  
  
typedef int __based(pBased) * pBasedPtr;  
  
using namespace std;  
int main() {  
   pBased = &a1[0];  
   pBasedPtr pb = 0;  
  
   cout << *pb << endl;  
   cout << *(pb+1) << endl;  
  
   pBased = &a2[0];  
  
   cout << *pb << endl;  
   cout << *(pb+1) << endl;  
}  
```  
  
```Output  
1  
2  
10  
11  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [alloc_text](../preprocessor/alloc-text.md)