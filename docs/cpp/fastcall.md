---
title: "__fastcall | Microsoft Docs"
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
  - "__fastcall"
  - "__fastcall_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__fastcall (parola chiave) [C++]"
ms.assetid: bb5b9c8a-dfad-450c-9119-0ac2bc59544f
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __fastcall
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 La convenzione di chiamata `__fastcall` specifica che gli argomenti alle funzioni devono essere passati nei registri, quando possibile.  Questa convenzione di chiamata si applica solo all'architettura x86.  Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata.  
  
|Elemento|Implementazione|  
|--------------|---------------------|  
|Ordine in cui gli argomenti vengono passati|I primi due argomenti DWORD o quelli più piccoli, che sono presenti nell'elenco di argomenti da sinistra a destra, vengono passati nei registri EDX e ECX; tutti gli altri argomenti vengono passati nello stack da destra a sinistra.|  
|Responsabilità di manutenzione dello stack|La funzione chiamata estrae gli argomenti dallo stack.|  
|Convenzione della decorazione dei nomi|Un segno di chiocciola @ è anteposto ai nomi; un segno di chiocciola @ seguito dal numero di byte \(in decimali\) nell'elenco di parametri è posposto ai nomi.|  
|Convenzione della conversione maiuscolo\/minuscolo e viceversa|Non viene effettuata alcuna conversione maiuscole\/minuscole.|  
  
> [!NOTE]
>  Nelle versioni future del compilatore è possibile che vengano utilizzati registri differenti per archiviare i parametri.  
  
 Se si utilizza l'opzione del compilatore [\/Gr](../build/reference/gd-gr-gv-gz-calling-convention.md), ogni funzione nel modulo viene compilata come `__fastcall` a meno che la funzione non venga dichiarata utilizzando un attributo in conflitto o il nome della funzione sia `main`.  
  
 La parola chiave `__fastcall` viene accettata e ignorata dai compilatori destinati alle architetture ARM e x64; in un chip x64, per convenzione, i primi quattro argomenti vengono passati nei registri quando possibile e argomenti aggiuntivi vengono passati nello stack.  Per ulteriori informazioni, vedere [Cenni preliminari sulle convenzioni di chiamata x64](../build/overview-of-x64-calling-conventions.md).  In un chip ARM possono essere passati fino a quattro argomenti Integer e otto argomenti a virgola mobile nei registri e argomenti aggiuntivi vengono passati nello stack.  
  
 Per le funzioni di classi non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline.  Questo significa che per i metodi membri non statici della classe la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione.  Data la definizione di classe seguente  
  
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
  
## Esempio  
 Nell'esempio seguente alla funzione `DeleteAggrWrapper` vengono passati argomenti nei registri:  
  
```c  
// Example of the __fastcall keyword  
#define FASTCALL    __fastcall  
  
void FASTCALL DeleteAggrWrapper(void* pWrapper);  
// Example of the __ fastcall keyword on function pointer  
typedef BOOL (__fastcall *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);  
```  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)