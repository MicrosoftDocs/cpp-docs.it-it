---
title: "Puntatori based (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__based"
  - "__based_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__based (parola chiave) [C++]"
  - "puntatori based"
  - "puntatori, based"
ms.assetid: 1e5f2e96-c52e-4738-8e14-87278681205e
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Puntatori based (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 La parola chiave `__based` consente di dichiarare puntatori basati su puntatori \(puntatori con offset rispetto ai puntatori esistenti\).  
  
## Sintassi  
  
```  
  
type __based( base ) declarator   
```  
  
## Note  
 I puntatori basati sugli indirizzi di puntatori sono l'unico formato della parola chiave `__based` valida in compilazioni a 32 bit o a 64 bit.  Per i compilatori C e C\+\+ a 32 bit Microsoft un puntatore based è un offset a 32 bit di una base puntatore a 32 bit.  Una restrizione analoga è presente per ambienti a 64 bit, in cui un puntatore based è un offset a 64 bit rispetto a una base a 64 bit.  
  
 Un utilizzo dei puntatori basati su puntatori è correlato agli identificatori persistenti che contengono puntatori.  Un elenco collegato costituito da puntatori basati su un puntatore può essere salvato su disco e successivamente ricaricato in un'altra posizione della memoria, con i puntatori che rimangono validi.  Ad esempio:  
  
```  
// based_pointers1.cpp  
// compile with: /c  
void *vpBuffer;  
struct llist_t {  
   void __based( vpBuffer ) *vpData;  
   struct llist_t __based( vpBuffer ) *llNext;  
};  
```  
  
 Il puntatore `vpBuffer` viene assegnato l'indirizzo di memoria allocata in un qualche punto successivo del programma.  L'elenco collegato viene rilocato rispetto al valore `vpBuffer`.  
  
> [!NOTE]
>  Il mantenimento di identificatori che contengono puntatori può inoltre essere eseguito tramite [file mappati alla memoria](http://msdn.microsoft.com/library/windows/desktop/aa366556).  
  
 Quando si dereferenzia un puntatore based, la base deve essere specificata in modo esplicito o essere implicitamente nota tramite la dichiarazione.  
  
 Per la compatibilità con le versioni precedenti, **\_based** è un sinonimo per `__based`.  
  
## Esempio  
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
  
  **1**  
**2**  
**10**  
**11**   
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [alloc\_text](../preprocessor/alloc-text.md)