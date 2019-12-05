---
title: __stdcall
ms.date: 10/10/2018
f1_keywords:
- __stdcall_cpp
- __stdcall
- _stdcall
helpviewer_keywords:
- __stdcall keyword [C++]
ms.assetid: e212594b-1827-4d07-9527-7d412b300df8
ms.openlocfilehash: df753241c093db75202a10b106631ce36cf73379
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857281"
---
# <a name="__stdcall"></a>__stdcall

La convenzione di chiamata **__stdcall** viene utilizzata per chiamare le funzioni dell'API Win32. Il chiamato pulisce lo stack, in modo che il compilatore renda le funzioni `vararg` **__cdecl**. Le funzioni che utilizzano questa convenzione di chiamata richiedono un prototipo di funzione. Il modificatore **__stdcall** è specifico di Microsoft.

## <a name="syntax"></a>Sintassi

> *return-type* **\_\_** *nome-funzione*stdcall [ **(** *argument-list* **)** ]

## <a name="remarks"></a>Note

Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata.

|Elemento|Implementazione|
|-------------|--------------------|
|Ordine in cui gli argomenti vengono passati|Da destra a sinistra.|
|Convenzione per il passaggio degli argomenti|Per valore, a meno che non venga passato un puntatore o un tipo di riferimento.|
|Responsabilità di manutenzione dello stack|La funzione chiamata determina l'estrazione dei propri argomenti dallo stack.|
|Convenzione della decorazione dei nomi|Un carattere di sottolineatura (_) viene aggiunto come prefisso del nome. Il nome è seguito dal simbolo @ seguito dal numero di byte (in decimale) nell'elenco di argomenti. Pertanto, la funzione dichiarata come `int func( int a, double b )` è decorata come segue: `_func@12`|
|Convenzione della conversione maiuscolo/minuscolo e viceversa|nessuna|

L'opzione del compilatore [/GZ](../build/reference/gd-gr-gv-gz-calling-convention.md) specifica **__stdcall** per tutte le funzioni non dichiarate in modo esplicito con una convenzione di chiamata diversa.

Per compatibilità con le versioni precedenti, **_stdcall** è un sinonimo di **__stdcall** a meno che non sia specificata l'opzione del compilatore [/za \(Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

Le funzioni dichiarate con il modificatore **__stdcall** restituiscono valori nello stesso modo delle funzioni dichiarate usando [__cdecl](../cpp/cdecl.md).

Nei processori ARM e x64, **__stdcall** viene accettata e ignorata dal compilatore; nelle architetture ARM e x64, per convenzione, gli argomenti vengono passati nei registri quando possibile e gli argomenti successivi vengono passati nello stack.

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

Nell'esempio seguente, l'uso di **__stdcall** restituisce tutti i `WINAPI` tipi di funzione gestiti come una chiamata standard:

```cpp
// Example of the __stdcall keyword
#define WINAPI __stdcall
// Example of the __stdcall keyword on function pointer
typedef BOOL (__stdcall *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);
```

## <a name="see-also"></a>Vedere anche

[Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)