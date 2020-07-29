---
title: __fastcall
ms.date: 12/17/2018
f1_keywords:
- __fastcall_cpp
- __fastcall
- _fastcall
helpviewer_keywords:
- __fastcall keyword [C++]
ms.assetid: bb5b9c8a-dfad-450c-9119-0ac2bc59544f
ms.openlocfilehash: 420552dd62c46ab5c2fa7e201387f258617f8453
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227478"
---
# <a name="__fastcall"></a>__fastcall

**Specifico di Microsoft**

La **`__fastcall`** convenzione di chiamata specifica che gli argomenti per le funzioni devono essere passati nei registri, quando possibile. Questa convenzione di chiamata si applica solo all'architettura x86. Nell'elenco seguente viene illustrata l'implementazione di questa convenzione di chiamata.

|Elemento|Implementazione|
|-------------|--------------------|
|Ordine in cui gli argomenti vengono passati|I primi due argomenti DWORD o quelli più piccoli, che sono presenti nell'elenco di argomenti da sinistra a destra, vengono passati nei registri EDX e ECX; tutti gli altri argomenti vengono passati nello stack da destra a sinistra.|
|Responsabilità di manutenzione dello stack|La funzione chiamata estrae gli argomenti dallo stack.|
|Convenzione della decorazione dei nomi|Il simbolo di chiocciola ( \@ ) è anteposto ai nomi; un simbolo di chiocciola seguito dal numero di byte (in decimali) nell'elenco di parametri è suffissato ai nomi.|
|Convenzione della conversione maiuscolo/minuscolo e viceversa|Non viene effettuata alcuna conversione maiuscole/minuscole.|

> [!NOTE]
> Nelle versioni future del compilatore è possibile che vengano utilizzati registri differenti per archiviare i parametri.

L'uso dell'opzione del compilatore [/gr](../build/reference/gd-gr-gv-gz-calling-convention.md) fa sì che ogni funzione nel modulo venga compilata come **`__fastcall`** se la funzione non venisse dichiarata usando un attributo in conflitto oppure il nome della funzione è `main` .

La **`__fastcall`** parola chiave viene accettata e ignorata dai compilatori destinati alle architetture ARM e x64; in un chip x64, per convenzione, i primi quattro argomenti vengono passati nei registri quando possibile e gli argomenti aggiuntivi vengono passati nello stack. Per altre informazioni, vedere [convenzione di chiamata x64](../build/x64-calling-convention.md). In un chip ARM possono essere passati fino a quattro argomenti Integer e otto argomenti a virgola mobile nei registri e argomenti aggiuntivi vengono passati nello stack.

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

Per compatibilità con le versioni precedenti, **_fastcall** è un sinonimo di, a **`__fastcall`** meno che non sia specificata l'opzione del compilatore [/za \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

## <a name="example"></a>Esempio

Nell'esempio seguente alla funzione `DeleteAggrWrapper` vengono passati argomenti nei registri:

```cpp
// Example of the __fastcall keyword
#define FASTCALL    __fastcall

void FASTCALL DeleteAggrWrapper(void* pWrapper);
// Example of the __ fastcall keyword on function pointer
typedef BOOL (__fastcall *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
