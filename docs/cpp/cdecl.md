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
ms.openlocfilehash: b4a86c49880b0c40d402c7cec863f79e24bc4dc1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371559"
---
# <a name="__cdecl"></a>__cdecl

**__cdecl** è la convenzione di chiamata predefinita per i programmi C e C. Poiché lo stack viene pulito dal chiamante, può eseguire `vararg` funzioni. La convenzione **di __cdecl** di chiamata crea eseguibili più grandi di [__stdcall](../cpp/stdcall.md), perché richiede che ogni chiamata di funzione includa il codice di pulitura dello stack. Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata. Il **modificatore __cdecl** è specifico di Microsoft.The __cdecl modifier is Microsoft-specific.

|Elemento|Implementazione|
|-------------|--------------------|
|Ordine in cui gli argomenti vengono passati|Da destra a sinistra.|
|Responsabilità di manutenzione dello stack|La chiamata della funzione determina l'estrazione degli argomenti dallo stack.|
|Convenzione della decorazione dei nomi|Il carattere di sottolineatura (_) \_è preceduto dai nomi, tranne quando vengono esportate _cdecl funzioni che utilizzano il collegamento C.|
|Convenzione della conversione maiuscolo/minuscolo e viceversa|Non viene effettuata alcuna conversione maiuscole/minuscole.|

> [!NOTE]
> Per informazioni correlate, vedere [Nomi decorati](../build/reference/decorated-names.md).

Inserire il **modificatore __cdecl** prima di una variabile o di un nome di funzione. Poiché le convenzioni di denominazione e di chiamata C sono l'impostazione predefinita, `/Gv` l'unico `/Gz` utilizzo di **__cdecl** nel codice x86 è quando è stata specificata l'opzione del compilatore (vectorcall), (stdcall) o `/Gr` (fastcall). L'opzione del compilatore [/Gd](../build/reference/gd-gr-gv-gz-calling-convention.md) forza la convenzione di **chiamata __cdecl.**

Nei processori ARM e x64, **__cdecl** viene accettata ma in genere ignorata dal compilatore. Per convenzione su ARM e x64, gli argomenti vengono passati nei registri quando possibile e gli argomenti successivi vengono passati nello stack. Nel codice x64 utilizzare **__cdecl** per eseguire l'override dell'opzione del compilatore **/Gv** e la convenzione di chiamata x64 predefinita.

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

Per compatibilità con le versioni precedenti, **cdecl** e **_cdecl** sono un sinonimo di **__cdecl,** a meno che non venga specificata l'opzione del compilatore [ \(/-As Disable(](../build/reference/za-ze-disable-language-extensions.md)

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
