---
title: "__sptr, __uptr | Microsoft Docs"
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
  - "__uptr_cpp"
  - "__sptr"
  - "__uptr"
  - "__sptr_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__sptr (modificatore)"
  - "__uptr (modificatore)"
ms.assetid: c7f5f3b2-9106-4a0b-a6de-d1588ab153ed
caps.latest.revision: 7
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __sptr, __uptr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Utilizzare il modificatore `__uptr` o `__sptr` in una dichiarazione di puntatore a 32 bit per specificare come il compilatore converte un puntatore a 32 bit in uno a 64 bit.  Un puntatore a 32 bit viene convertito, ad esempio, quando viene assegnato a una variabile puntatore a 64 bit o è dereferenziato su una piattaforma a 64 bit.  
  
 La documentazione di Microsoft per il supporto delle piattaforme a 64 bit talvolta si riferisce al bit più significativo di un puntatore a 32 bit come il bit di segno.  Per impostazione predefinita, il compilatore utilizza l'estensione del segno per convertire un puntatore a 32 bit in un puntatore a 64 bit.  Pertanto i 32 bit meno significativi del puntatore a 64 bit vengono impostati sul valore del puntatore a 32 bit e i 32 bit più significativi vengono impostati sul valore di bit di segno del puntatore a 32 bit.  Questa conversione produce risultati corretti se il bit di segno è pari a 0, ma non se il bit di segno è pari a 1.  Ad esempio, l'indirizzo 0x7FFFFFFF a 32 bit produce l'indirizzo 0x000000007FFFFFFF equivalente a 64 bit, ma l'indirizzo 0x80000000 a 32 bit vien modificato in modo errato in 0xFFFFFFFF80000000.  
  
 Il modificatore `__sptr`, oppure puntatore con segno, indica che una conversione del puntatore imposta i bit più significativi di un puntatore a 64 bit sul bit del segno del puntatore a 32 bit.  Il modificatore `__uptr`, oppure il puntatore senza segno, indica che una conversione imposta i bit più significativi su zero.  Le dichiarazioni seguenti mostrano i modificatori `__uptr` e `__sptr` utilizzati con due puntatori non qualificati, due puntatori qualificati con il tipo [\_\_ptr32](../cpp/ptr32-ptr64.md) e un parametro della funzione.  
  
```  
int * __sptr psp;  
int * __uptr pup;  
int * __ptr32 __sptr psp32;  
int * __ptr32 __uptr pup32;  
void MyFunction(char * __uptr __ptr32 myValue);  
```  
  
 Utilizzare i modificatori `__uptr` e `__sptr` con dichiarazioni del puntatore.  Utilizzare i modificatori nella posizione di un [qualificatore di tipo di puntatore](../c-language/pointer-declarations.md), ossia il modificatore deve seguire l'asterisco.  Non è possibile utilizzare i modificatori con i [puntatori ai membri](../cpp/pointers-to-members.md).  I modificatori non influiscono sulle dichiarazioni di tipo non puntatore.  
  
 Se non si utilizza il modificatore `__uptr` o `__sptr` e si abilita [Avviso del compilatore \(livello 2\) C4826](../error-messages/compiler-warnings/compiler-warning-level-2-c4826.md), il compilatore genera un avviso quando un puntatore a 32 bit viene convertito a 64 bit.  
  
## Esempio  
 Nell'esempio seguente vengono dichiarati puntatori a 32 bit che utilizzano i modificatori `__uptr` e `__sptr`, viene assegnato ciascun puntatore a 32 bit a una variabile puntatore a 64 bit e viene visualizzato il valore esadecimale di ogni puntatore a 64 bit.  Nell'esempio viene eseguita la compilazione con il compilatore nativo a 64 bit e viene effettuata l'esecuzione su una piattaforma a 64 bit.  
  
```  
// sptr_uptr.cpp  
// processor: x64  
#include "stdio.h"  
  
// Warning C4826 is off by default.  
  
int main()  
{  
    void *        __ptr64 p64;  
    void *        __ptr32 p32d; //default signed pointer  
    void * __sptr __ptr32 p32s; //explicit signed pointer  
    void * __uptr __ptr32 p32u; //explicit unsigned pointer  
  
// Set the 32-bit pointers to a value whose sign bit is 1.  
    p32d = reinterpret_cast<void *>(0x87654321);  
    p32s = p32d;  
    p32u = p32d;  
  
// The printf() function automatically displays leading zeroes with each 32-bit pointer. These are unrelated   
// to the __sptr and __uptr modifiers.   
    printf("Display each 32-bit pointer (as an unsigned 64-bit pointer):\n");  
    printf("p32d:       %p\n", p32d);   
    printf("p32s:       %p\n", p32s);  
    printf("p32u:       %p\n", p32u);  
  
    printf("\nDisplay the 64-bit pointer created from each 32-bit pointer:\n");  
    p64 = p32d;   
    printf("p32d: p64 = %p\n", p64);  
    p64 = p32s;  
    printf("p32s: p64 = %p\n", p64);  
    p64 = p32u;  
    printf("p32u: p64 = %p\n", p64);  
    return 0;  
}  
```  
  
  **Viene visualizzato ciascun puntatore a 32 bit \(come un puntatore a 64 bit senza segno\):**  
**p32d:       0000000087654321**  
**p32s:       0000000087654321**  
**p32u:       0000000087654321**  
**Viene visualizzato il puntatore a 64 bit creato da ciascun puntatore a 32 bit:**  
**p32d: p64 \= FFFFFFFF87654321**  
**p32s: p64 \= FFFFFFFF87654321**  
**p32u: p64 \= 0000000087654321**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md)