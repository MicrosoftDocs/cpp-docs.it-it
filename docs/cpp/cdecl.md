---
title: __cdecl
ms.date: 10/09/2018
f1_keywords:
- __cdecl_cpp
- __cdecl
- _cdecl
- cdecl
helpviewer_keywords:
- __cdecl keyword [C++]
ms.assetid: 1ff1d03e-fb4e-4562-8be1-74f1ad6427f1
ms.openlocfilehash: f4cca797c0bff94a54b0f3302c6c475908870a99
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857619"
---
# <a name="__cdecl"></a>__cdecl

**__cdecl** è la convenzione di chiamata predefinita per i C++ programmi C e. Poiché lo stack viene pulito dal chiamante, può eseguire `vararg` funzioni. La convenzione di chiamata **__cdecl** crea file eseguibili di dimensioni maggiori rispetto a [__stdcall](../cpp/stdcall.md), perché richiede che ogni chiamata di funzione includa il codice di pulizia dello stack. Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata. Il modificatore **__cdecl** è specifico di Microsoft.

|Elemento|Implementazione|
|-------------|--------------------|
|Ordine in cui gli argomenti vengono passati|Da destra a sinistra.|
|Responsabilità di manutenzione dello stack|La chiamata della funzione determina l'estrazione degli argomenti dallo stack.|
|Convenzione della decorazione dei nomi|Il carattere di sottolineatura (_) è anteposto ai nomi, tranne quando \__cdecl le funzioni che utilizzano il collegamento C vengono esportate.|
|Convenzione della conversione maiuscolo/minuscolo e viceversa|Non viene effettuata alcuna conversione maiuscole/minuscole.|

> [!NOTE]
>  Per informazioni correlate, vedere [nomi decorati](../build/reference/decorated-names.md).

Posizionare il modificatore **__cdecl** prima di una variabile o di un nome di funzione. Poiché le convenzioni di denominazione e di chiamata di C sono l'impostazione predefinita, l'unico caso in cui è necessario usare **__cdecl** nel codice x86 è quando è stata specificata l'opzione del compilatore `/Gv` (vectorcall), `/Gz` (stdcall) o `/Gr` (fastcall). L'opzione del compilatore [/GD](../build/reference/gd-gr-gv-gz-calling-convention.md) impone la convenzione di chiamata **__cdecl** .

Nei processori ARM e x64, **__cdecl** viene accettato, ma in genere viene ignorato dal compilatore. Per convenzione su ARM e x64, gli argomenti vengono passati nei registri quando possibile e gli argomenti successivi vengono passati nello stack. Nel codice x64 usare **__cdecl** per eseguire l'override dell'opzione del compilatore **/GV** e usare la convenzione di chiamata predefinita x64.

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

Per compatibilità con le versioni precedenti, **cdecl** e **_cdecl** sono sinonimi di **__cdecl** a meno che non sia specificata l'opzione del compilatore [/za \(Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

## <a name="example"></a>Esempio

Nell'esempio seguente al compilatore viene richiesto di utilizzare le convenzioni di denominazione e chiamata di C per la funzione `system`.

```cpp
// Example of the __cdecl keyword on function
int __cdecl system(const char *);
// Example of the __cdecl keyword on function pointer
typedef BOOL (__cdecl *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);
```

## <a name="see-also"></a>Vedere anche

[Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)