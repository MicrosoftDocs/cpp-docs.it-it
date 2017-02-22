---
title: "__stdcall | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__stdcall_cpp"
  - "__stdcall"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__stdcall (parola chiave) [C++]"
ms.assetid: e212594b-1827-4d07-9527-7d412b300df8
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# __stdcall
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 La convenzione di chiamata `__stdcall` viene utilizzata per chiamare le funzioni dell'API Win32.  Il chiamato pulisce lo stack, il compilatore di conseguenza rende le funzioni **vararg** `__cdecl`.  Le funzioni che utilizzano questa convenzione di chiamata richiedono un prototipo di funzione.  
  
## Sintassi  
  
```  
  
return-type __stdcall function-name[(argument-list)]  
```  
  
## Note  
 Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata.  
  
|Elemento|Implementazione|  
|--------------|---------------------|  
|Ordine in cui gli argomenti vengono passati|Da destra a sinistra.|  
|Convenzione per il passaggio degli argomenti|Per valore, a meno che non venga passato un puntatore o un tipo di riferimento.|  
|Responsabilità di manutenzione dello stack|La funzione chiamata determina l'estrazione dei propri argomenti dallo stack.|  
|Convenzione della decorazione dei nomi|Un carattere di sottolineatura \(\_\) viene aggiunto come prefisso del nome.  Il nome è seguito dal simbolo @ seguito dal numero di byte \(in decimale\) nell'elenco di argomenti.  Pertanto, la funzione dichiarata come `int func( int a, double b )` è decorata come segue: `_func@12`|  
|Convenzione della conversione maiuscolo\/minuscolo e viceversa|Nessuno|  
  
 L'opzione del compilatore [\/Gz](../build/reference/gd-gr-gv-gz-calling-convention.md) specifica `__stdcall` per tutte le funzioni non dichiarate in modo esplicito con una convenzione di chiamata diversa.  
  
 Le funzioni dichiarate utilizzando il modificatore `__stdcall` restituiscono valori in modo analogo alle funzioni dichiarate utilizzando [\_\_cdecl](../cpp/cdecl.md).  
  
 Nei processori ARM e x64, `__stdcall` viene accettata e ignorata dal compilatore; nelle architetture ARM e x64, per convenzione, gli argomenti vengono passati in registri quando possibile, mentre gli argomenti successivi vengono passati nello stack.  
  
 Per le funzioni di classi non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline.  Questo significa che per i metodi membri non statici della classe la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione.  Data questa definizione di classe,  
  
```cpp  
struct CMyClass {  
   void __stdcall mymethod();  
};  
```  
  
 this  
  
```cpp  
void CMyClass::mymethod() { return; }  
```  
  
 equivale a questo  
  
```cpp  
void __stdcall CMyClass::mymethod() { return; }  
```  
  
## Esempio  
 Nell'esempio seguente l'utilizzo dei risultati di \_\_**stdcall** attiva la gestione di tutti i tipi di funzione `WINAPI` come una chiamata standard:  
  
```c  
// Example of the __stdcall keyword  
#define WINAPI __stdcall  
// Example of the __stdcall keyword on function pointer  
typedef BOOL (__stdcall *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);  
```  
  
## Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)