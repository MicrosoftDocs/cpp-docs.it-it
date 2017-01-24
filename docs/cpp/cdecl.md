---
title: "__cdecl | Microsoft Docs"
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
  - "__cdecl"
  - "__cdecl_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__cdecl (parola chiave) [C++]"
ms.assetid: 1ff1d03e-fb4e-4562-8be1-74f1ad6427f1
caps.latest.revision: 16
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __cdecl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 `__cdecl` è la convenzione di chiamata predefinita per i programmi C\+\+ e C.  Poiché lo stack viene svuotato dal chiamante, è possibile eseguire le funzioni **vararg**.  La convenzione di chiamata `__cdecl` crea eseguibili di dimensioni maggiori rispetto a [\_\_stdcall](../cpp/stdcall.md), perché richiede che ogni chiamata di funzione includa codice di pulizia dello stack.  Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata.  
  
|Elemento|Implementazione|  
|--------------|---------------------|  
|Ordine in cui gli argomenti vengono passati|Da destra a sinistra.|  
|Responsabilità di manutenzione dello stack|La chiamata della funzione determina l'estrazione degli argomenti dallo stack.|  
|Convenzione della decorazione dei nomi|Il carattere di sottolineatura \(\_\) è anteposto ai nomi, tranne nell'esportazione di funzioni \_\_cdecl che utilizzano il collegamento C.|  
|Convenzione della conversione maiuscolo\/minuscolo e viceversa|Non viene effettuata alcuna conversione maiuscole\/minuscole.|  
  
> [!NOTE]
>  Per ulteriori informazioni, vedere [Nomi decorati](../build/reference/decorated-names.md).  
  
 Posizionare il modificatore `__cdecl` prima del nome di una variabile o di una funzione.  Poiché le convenzioni di denominazione e chiamata di C rappresentano le impostazioni predefinite, l'unica volta in cui è necessario utilizzare `__cdecl` nel codice x86 è quando è stata specificata l'opzione del compilatore **\/Gv** \(vectorcall\), **\/Gz** \(stdcall\) o **\/Gr** \(fastcall\).  L'opzione [\/Gd](../build/reference/gd-gr-gv-gz-calling-convention.md) del compilatore impone la convenzione di chiamata `__cdecl`.  
  
 Nei processori ARM e x64 `__cdecl` è accettato, ma in genere viene ignorato dal compilatore.  Per convenzione su ARM e x64, gli argomenti vengono passati nei registri quando possibile e gli argomenti successivi vengono passati nello stack.  Nel codice x64 utilizzare `__cdecl` per eseguire l'override dell'opzione del compilatore **\/Gv** e utilizzare la convenzione di chiamata predefinita di x64.  
  
 Per le funzioni di classi non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline.  Questo significa che per i metodi membri non statici della classe la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione.  Data la definizione di classe seguente  
  
```cpp  
struct CMyClass {  
   void __cdecl mymethod();  
};  
```  
  
 il codice seguente  
  
```cpp  
void CMyClass::mymethod() { return; }  
```  
  
 equivale a questo  
  
```cpp  
void __cdecl CMyClass::mymethod() { return; }  
```  
  
## Esempio  
 Nell'esempio seguente al compilatore viene richiesto di utilizzare le convenzioni di denominazione e chiamata di C per la funzione `system`.  
  
```cpp  
// Example of the __cdecl keyword on function  
int __cdecl system(const char *);  
// Example of the __cdecl keyword on function pointer  
typedef BOOL (__cdecl *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);  
```  
  
## Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)