---
title: fastcall | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __fastcall_cpp
dev_langs:
- C++
helpviewer_keywords:
- __fastcall keyword [C++]
ms.assetid: bb5b9c8a-dfad-450c-9119-0ac2bc59544f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f50239d42c164e2f9c6876e26389eb60e710ed34
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37940095"
---
# <a name="fastcall"></a>__fastcall
**Sezione specifica Microsoft**  
  
 Il **fastcall** convenzione di chiamata specifica che gli argomenti alle funzioni devono essere passati nei registri, quando possibile. Questa convenzione di chiamata si applica solo all'architettura x86. Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata.  
  
|Elemento|Implementazione|  
|-------------|--------------------|  
|Ordine in cui gli argomenti vengono passati|I primi due argomenti DWORD o quelli più piccoli, che sono presenti nell'elenco di argomenti da sinistra a destra, vengono passati nei registri EDX e ECX; tutti gli altri argomenti vengono passati nello stack da destra a sinistra.|  
|Responsabilità di manutenzione dello stack|La funzione chiamata estrae gli argomenti dallo stack.|  
|Convenzione della decorazione dei nomi|Simbolo di chiocciola (\@) è anteposto ai nomi; un simbolo seguito dal numero di byte (in decimale) nel parametro di elenco è Posposto ai nomi.|  
|Convenzione della conversione maiuscolo/minuscolo e viceversa|Non viene effettuata alcuna conversione maiuscole/minuscole.|  
  
> [!NOTE]
>  Nelle versioni future del compilatore è possibile che vengano utilizzati registri differenti per archiviare i parametri.  
  
 Usando il [/Gr](../build/reference/gd-gr-gv-gz-calling-convention.md) l'opzione del compilatore, ogni funzione nel modulo viene compilata come **fastcall** a meno che la funzione viene dichiarata utilizzando un attributo in conflitto, o il nome della funzione `main` .  
  
 Il **fastcall** (parola chiave) viene accettata e ignorata dai compilatori destinati a ARM e x64 architetture; su una x64 del chip, per convenzione, i primi quattro argomenti vengono passati nei registri quando possibile e argomenti aggiuntivi vengono passati nello stack. Per altre informazioni, vedere [Panoramica di x64 convenzioni di chiamata](../build/overview-of-x64-calling-conventions.md). In un chip ARM possono essere passati fino a quattro argomenti Integer e otto argomenti a virgola mobile nei registri e argomenti aggiuntivi vengono passati nello stack.  
  
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
