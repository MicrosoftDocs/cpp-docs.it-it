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
ms.openlocfilehash: 9c1483d02bcb68d902cae527eb60e3ef9987607c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227582"
---
# <a name="__cdecl"></a>__cdecl

**`__cdecl`** Convenzione di chiamata predefinita per i programmi C e C++. Poiché lo stack viene pulito dal chiamante, può eseguire le `vararg` funzioni. La **`__cdecl`** convenzione di chiamata crea file eseguibili di dimensioni maggiori rispetto a [__stdcall](../cpp/stdcall.md), perché richiede che ogni chiamata di funzione includa il codice di pulizia dello stack. Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata. Il **`__cdecl`** modificatore è specifico di Microsoft.

|Elemento|Implementazione|
|-------------|--------------------|
|Ordine in cui gli argomenti vengono passati|Da destra a sinistra.|
|Responsabilità di manutenzione dello stack|La chiamata della funzione determina l'estrazione degli argomenti dallo stack.|
|Convenzione della decorazione dei nomi|Il carattere di sottolineatura (_) è anteposto ai nomi, tranne quando \_ vengono esportate _cdecl funzioni che utilizzano il collegamento C.|
|Convenzione della conversione maiuscolo/minuscolo e viceversa|Non viene effettuata alcuna conversione maiuscole/minuscole.|

> [!NOTE]
> Per informazioni correlate, vedere [nomi decorati](../build/reference/decorated-names.md).

Posizionare il **`__cdecl`** modificatore prima di una variabile o di un nome di funzione. Poiché le convenzioni di denominazione e di chiamata di C sono l'impostazione predefinita, l'unico caso in cui è necessario utilizzare **`__cdecl`** nel codice x86 è quando è stata specificata l' `/Gv` opzione del compilatore (vectorcall), `/Gz` (stdcall) o `/Gr` (fastcall). L'opzione del compilatore [/GD](../build/reference/gd-gr-gv-gz-calling-convention.md) impone la **`__cdecl`** convenzione di chiamata.

Nei processori ARM e x64, **`__cdecl`** viene accettato, ma in genere viene ignorato dal compilatore. Per convenzione su ARM e x64, gli argomenti vengono passati nei registri quando possibile e gli argomenti successivi vengono passati nello stack. Nel codice x64 usare **`__cdecl`** per eseguire l'override dell'opzione del compilatore **/GV** e usare la convenzione di chiamata predefinita x64.

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

Per compatibilità con le versioni precedenti, **cdecl** e **_cdecl** sono sinonimi di, a **`__cdecl`** meno che non sia specificata l'opzione del compilatore [/za \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

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
