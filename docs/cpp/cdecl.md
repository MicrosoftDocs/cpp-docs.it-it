---
title: cdecl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: __cdecl_cpp
dev_langs: C++
helpviewer_keywords: __cdecl keyword [C++]
ms.assetid: 1ff1d03e-fb4e-4562-8be1-74f1ad6427f1
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d73de8b2a158c09ebd61306683f6fdc1ad0f514e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdecl"></a>__cdecl
**Sezione specifica Microsoft**  
  
 `__cdecl` è la convenzione di chiamata predefinita per i programmi C++ e C. Poiché lo stack viene svuotato dal chiamante, può eseguire **vararg** funzioni. Il `__cdecl` la convenzione di chiamata crea eseguibili di dimensioni maggiori rispetto a [stdcall](../cpp/stdcall.md), perché richiede che ogni chiamata di funzione includa codice di pulizia dello stack. Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata.  
  
|Elemento|Implementazione|  
|-------------|--------------------|  
|Ordine in cui gli argomenti vengono passati|Da destra a sinistra.|  
|Responsabilità di manutenzione dello stack|La chiamata della funzione determina l'estrazione degli argomenti dallo stack.|  
|Convenzione della decorazione dei nomi|Il carattere di sottolineatura (_) è anteposto ai nomi, tranne quando \_cdecl che utilizzano il collegamento C vengono esportate.|  
|Convenzione della conversione maiuscolo/minuscolo e viceversa|Non viene effettuata alcuna conversione maiuscole/minuscole.|  
  
> [!NOTE]
>  Per informazioni correlate, vedere [nomi decorati](../build/reference/decorated-names.md).  
  
 Posizionare il modificatore `__cdecl` prima del nome di una variabile o di una funzione. Poiché la denominazione e convenzioni di chiamata di C è l'impostazione predefinita, l'unica volta è necessario utilizzare `__cdecl` nel codice x86 è quando è stata specificata la **/Gv** (vectorcall), **/Gz** (stdcall) o  **/GR** l'opzione del compilatore (fastcall). Il [/Gd](../build/reference/gd-gr-gv-gz-calling-convention.md) opzione del compilatore impone il `__cdecl` convenzione di chiamata.  
  
 Nei processori ARM e x64 `__cdecl` è accettato, ma in genere viene ignorato dal compilatore. Per convenzione su ARM e x64, gli argomenti vengono passati nei registri quando possibile e gli argomenti successivi vengono passati nello stack. In x64 il codice, utilizzare `__cdecl` per eseguire l'override di **/Gv** opzione del compilatore e utilizzare la convenzione di chiamata predefinita di x64.  
  
 Per le funzioni di classi non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline. Questo significa che per i metodi membri non statici della classe la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione. Data la definizione di classe seguente  
  
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
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente al compilatore viene richiesto di utilizzare le convenzioni di denominazione e chiamata di C per la funzione `system`.  
  
```cpp  
// Example of the __cdecl keyword on function  
int __cdecl system(const char *);  
// Example of the __cdecl keyword on function pointer  
typedef BOOL (__cdecl *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)   
 [Parole chiave](../cpp/keywords-cpp.md)