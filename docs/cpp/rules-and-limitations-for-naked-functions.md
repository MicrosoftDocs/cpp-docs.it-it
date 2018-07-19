---
title: Regole e limitazioni per funzioni Naked | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- naked functions [C++]
ms.assetid: ff203858-2dd3-4a76-8a57-d0d06817adef
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c1a6f88717b8fb371c343d17a9b38608876cd900
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943305"
---
# <a name="rules-and-limitations-for-naked-functions"></a>Regole e limitazioni per le funzioni naked
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Le seguenti regole e limitazioni si applicano alle funzioni naked:  
  
-   Il **restituire** istruzione non è consentita.  
  
-   I costrutti di gestione delle eccezioni C++ e di gestione strutturata delle eccezioni non sono consentiti in quanto è necessario rimuoverli nello stack frame.  
  
-   Per lo stesso motivo, qualsiasi formato di `setjmp` non è consentito.  
  
-   L'utilizzo della funzione `_alloca` non è consentito.  
  
-   Per assicurarsi che nessun codice di inizializzazione per le variabili locali venga visualizzato prima della sequenza di prologo, le variabili locali inizializzate non sono consentite nell'ambito della funzione. In particolare, la dichiarazione di oggetti C++ non è consentita nell'ambito della funzione. Possono esserci, tuttavia, dati inizializzati in un ambito annidato.  
  
-   L'ottimizzazione del puntatore ai frame (l'opzione del compilatore /Oy) non è consigliata, ma viene eliminata automaticamente per una funzione naked.  
  
-   Non è possibile dichiarare gli oggetti di classe C++ nell'ambito lessicale della funzione. È possibile, tuttavia, dichiarare gli oggetti in un blocco annidato.  
  
-   Il **naked** parola chiave viene ignorato durante la compilazione con [/clr](../build/reference/clr-common-language-runtime-compilation.md).  
  
-   Per la [fastcall](../cpp/fastcall.md) funzioni naked, ogni volta che si è un riferimento nel codice C/C++ a uno degli argomenti di registro, il codice di prologo deve archiviare i valori di tale registro nel percorso dello stack per tale variabile. Ad esempio:  
  
```cpp 
// nkdfastcl.cpp  
// compile with: /c  
// processor: x86  
__declspec(naked) int __fastcall  power(int i, int j) {  
   // calculates i^j, assumes that j >= 0  
  
   // prolog  
   __asm {  
      push ebp  
      mov ebp, esp  
      sub esp, __LOCAL_SIZE  
     // store ECX and EDX into stack locations allocated for i and j  
     mov i, ecx  
     mov j, edx  
   }  
  
   {  
      int k = 1;   // return value  
      while (j-- > 0)   
         k *= i;  
      __asm {   
         mov eax, k   
      };  
   }  
  
   // epilog  
   __asm {  
      mov esp, ebp  
      pop ebp  
      ret  
   }  
}  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamate di funzioni naked](../cpp/naked-function-calls.md)