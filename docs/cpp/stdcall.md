---
title: stdcall | Microsoft Docs
ms.custom: ''
ms.date: 09/05/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __stdcall_cpp
dev_langs:
- C++
helpviewer_keywords:
- __stdcall keyword [C++]
ms.assetid: e212594b-1827-4d07-9527-7d412b300df8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bb65ff85346412587fab96934ca5438bb6a4dfe5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031379"
---
# <a name="stdcall"></a>__stdcall

**Sezione specifica Microsoft**

Il **stdcall** convenzione di chiamata viene usato per chiamare funzioni API Win32. Il chiamato pulisce lo stack, in modo che il compilatore rende `vararg` funzioni **cdecl**. Le funzioni che utilizzano questa convenzione di chiamata richiedono un prototipo di funzione.

## <a name="syntax"></a>Sintassi

> *tipo restituito*  **\_ \_stdcall** *-nome della funzione*[**(** *-elenco di argomenti* **)** ]

## <a name="remarks"></a>Note

Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata.

|Elemento|Implementazione|
|-------------|--------------------|
|Ordine in cui gli argomenti vengono passati|Da destra a sinistra.|
|Convenzione per il passaggio degli argomenti|Per valore, a meno che non venga passato un puntatore o un tipo di riferimento.|
|Responsabilità di manutenzione dello stack|La funzione chiamata determina l'estrazione dei propri argomenti dallo stack.|
|Convenzione della decorazione dei nomi|Un carattere di sottolineatura (_) viene aggiunto come prefisso del nome. Il nome è seguito dal simbolo @ seguito dal numero di byte (in decimale) nell'elenco di argomenti. Pertanto, la funzione dichiarata come `int func( int a, double b )` è decorata come segue: `_func@12`|
|Convenzione della conversione maiuscolo/minuscolo e viceversa|nessuno|

Il [/Gz](../build/reference/gd-gr-gv-gz-calling-convention.md) specifica l'opzione del compilatore **stdcall** per tutte le funzioni dichiarate in modo non esplicito con una convenzione di chiamata diversa.

Le funzioni dichiarate utilizzando il **stdcall** modificatore restituito valori in modo analogo alle funzioni dichiarate utilizzando [cdecl](../cpp/cdecl.md).

In ARM e x64 processori **stdcall** viene accettata e ignorata dal compilatore; su ARM e x64 architetture, per convenzione, gli argomenti vengono passati nei registri quando possibile e gli argomenti successivi vengono passati nello stack.

Per le funzioni di classi non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline. Questo significa che per i metodi membri non statici della classe la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione. Data questa definizione di classe,

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

## <a name="example"></a>Esempio

Nell'esempio seguente, usare **stdcall** comporta che tutti `WINAPI` tipi di funzione come una chiamata standard:

```cpp
// Example of the __stdcall keyword
#define WINAPI __stdcall
// Example of the __stdcall keyword on function pointer
typedef BOOL (__stdcall *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);
```

## <a name="see-also"></a>Vedere anche

[Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)