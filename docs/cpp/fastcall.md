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
ms.openlocfilehash: 3e7cd4b1202ee717abf9a9767785ed8abe96bd69
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62154321"
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
> Nelle versioni future del compilatore è possibile che vengano utilizzati registri differenti per archiviare i parametri.

Usando il [/Gr](../build/reference/gd-gr-gv-gz-calling-convention.md) l'opzione del compilatore, ogni funzione nel modulo viene compilata come **fastcall** a meno che la funzione viene dichiarata utilizzando un attributo in conflitto, o il nome della funzione `main` .

Il **fastcall** (parola chiave) viene accettata e ignorata dai compilatori destinati a ARM e x64 architetture; su una x64 del chip, per convenzione, i primi quattro argomenti vengono passati nei registri quando possibile e argomenti aggiuntivi vengono passati nello stack. Per altre informazioni, vedere [x64 convenzione di chiamata](../build/x64-calling-convention.md). In un chip ARM possono essere passati fino a quattro argomenti Integer e otto argomenti a virgola mobile nei registri e argomenti aggiuntivi vengono passati nello stack.

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

Per garantire la compatibilità con le versioni precedenti, **fastcall** è un sinonimo **fastcall** , a meno che l'opzione del compilatore [/Za \(Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md) è specificato.

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

[Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)