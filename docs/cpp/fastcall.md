---
title: fastcall | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: __fastcall_cpp
dev_langs: C++
helpviewer_keywords: __fastcall keyword [C++]
ms.assetid: bb5b9c8a-dfad-450c-9119-0ac2bc59544f
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ba2178c2dc06001476d8e9ff4b9aef239aa13fea
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="fastcall"></a>__fastcall
**Sezione specifica Microsoft**  
  
 La convenzione di chiamata `__fastcall` specifica che gli argomenti alle funzioni devono essere passati nei registri, quando possibile. Questa convenzione di chiamata si applica solo all'architettura x86. Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata.  
  
|Elemento|Implementazione|  
|-------------|--------------------|  
|Ordine in cui gli argomenti vengono passati|I primi due argomenti DWORD o quelli più piccoli, che sono presenti nell'elenco di argomenti da sinistra a destra, vengono passati nei registri EDX e ECX; tutti gli altri argomenti vengono passati nello stack da destra a sinistra.|  
|Responsabilità di manutenzione dello stack|La funzione chiamata estrae gli argomenti dallo stack.|  
|Convenzione della decorazione dei nomi|Un segno di chiocciola @ è anteposto ai nomi; un segno di chiocciola @ seguito dal numero di byte (in decimali) nell'elenco di parametri è posposto ai nomi.|  
|Convenzione della conversione maiuscolo/minuscolo e viceversa|Non viene effettuata alcuna conversione maiuscole/minuscole.|  
  
> [!NOTE]
>  Nelle versioni future del compilatore è possibile che vengano utilizzati registri differenti per archiviare i parametri.  
  
 Utilizzo di [/Gr](../build/reference/gd-gr-gv-gz-calling-convention.md) l'opzione del compilatore, ogni funzione nel modulo viene compilata come `__fastcall` a meno che la funzione viene dichiarata utilizzando un attributo in conflitto, o il nome della funzione `main`.  
  
 La parola chiave `__fastcall` viene accettata e ignorata dai compilatori destinati alle architetture ARM e x64; in un chip x64, per convenzione, i primi quattro argomenti vengono passati nei registri quando possibile e argomenti aggiuntivi vengono passati nello stack. Per ulteriori informazioni, vedere [Panoramica x64 convenzioni di chiamata](../build/overview-of-x64-calling-conventions.md). In un chip ARM possono essere passati fino a quattro argomenti Integer e otto argomenti a virgola mobile nei registri e argomenti aggiuntivi vengono passati nello stack.  
  
 Per le funzioni di classi non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline. Questo significa che per i metodi membri non statici della classe la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione. Data la definizione di classe seguente  
  
```cpp  
struct CMyClass {  
   void __fastcall mymethod();  
};  
```  
  
 il codice seguente  
  
```cpp  
void CMyClass::mymethod() { return; }  
```  
  
 equivale a questo  
  
```cpp  
void __fastcall CMyClass::mymethod() { return; }  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente alla funzione `DeleteAggrWrapper` vengono passati argomenti nei registri:  
  
```cpp  
// Example of the __fastcall keyword  
#define FASTCALL    __fastcall  
  
void FASTCALL DeleteAggrWrapper(void* pWrapper);  
// Example of the __ fastcall keyword on function pointer  
typedef BOOL (__fastcall *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)   
 [Parole chiave](../cpp/keywords-cpp.md)