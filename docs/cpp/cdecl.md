---
title: cdecl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __cdecl_cpp
dev_langs:
- C++
helpviewer_keywords:
- __cdecl keyword [C++]
ms.assetid: 1ff1d03e-fb4e-4562-8be1-74f1ad6427f1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c0a9e4db3e1fcbd24358d6dedd2d4ada80672c2a
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39406546"
---
# <a name="cdecl"></a>__cdecl
**Sezione specifica Microsoft**  
  
 **cdecl** è l'impostazione predefinita la convenzione di chiamata per programmi C e C++. Poiché lo stack viene svuotato dal chiamante, l'attività possa eseguire `vararg` funzioni. Il **cdecl** convenzione di chiamata crea eseguibili di dimensioni maggiori rispetto [stdcall](../cpp/stdcall.md), perché richiede che ogni chiamata di funzione per includere il codice di pulizia dello stack. Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata.  
  
|Elemento|Implementazione|  
|-------------|--------------------|  
|Ordine in cui gli argomenti vengono passati|Da destra a sinistra.|  
|Responsabilità di manutenzione dello stack|La chiamata della funzione determina l'estrazione degli argomenti dallo stack.|  
|Convenzione della decorazione dei nomi|Carattere di sottolineatura (_) è anteposto ai nomi, tranne quando \_cdecl che utilizzano il collegamento C vengono esportate.|  
|Convenzione della conversione maiuscolo/minuscolo e viceversa|Non viene effettuata alcuna conversione maiuscole/minuscole.|  
  
> [!NOTE]
>  Per informazioni correlate, vedere [nomi decorati](../build/reference/decorated-names.md).  
  
 Sul posto di **cdecl** modificatore prima di una variabile o un nome di funzione. Poiché la denominazione e convenzioni di chiamata di C sono l'impostazione predefinita, l'unica volta è necessario utilizzare **cdecl** nel codice x86 è quando è stata specificata la `/Gv` (vectorcall), `/Gz` (stdcall) o `/Gr` (fastcall) opzione del compilatore. Il [/Gd](../build/reference/gd-gr-gv-gz-calling-convention.md) compilatore opzione forza il **cdecl** convenzione di chiamata.  
  
 In ARM e x64, processori **cdecl** è accettato, ma in genere viene ignorato dal compilatore. Per convenzione su ARM e x64, gli argomenti vengono passati nei registri quando possibile e gli argomenti successivi vengono passati nello stack. In x64 del codice, usare **cdecl** per eseguire l'override di **/Gv** opzione del compilatore e usare la convenzione di chiamata x64 predefinita.  
  
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