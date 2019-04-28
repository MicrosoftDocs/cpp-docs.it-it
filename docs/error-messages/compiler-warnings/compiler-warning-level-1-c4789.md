---
title: Avviso del compilatore (livello 1) C4789
ms.date: 03/25/2019
f1_keywords:
- C4789
helpviewer_keywords:
- C4789
ms.assetid: 5800c301-5afb-4af0-85c1-ceb54d775234
ms.openlocfilehash: 36a5032098c5caabb1b050833e487fd58679a782
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62187231"
---
# <a name="compiler-warning-level-1-c4789"></a>Avviso del compilatore (livello 1) C4789

> buffer '*identifier*' della dimensione *N* byte verranno eseguito l'overrun del; *M* byte verranno scritti a partire dall'offset *L*

## <a name="remarks"></a>Note

**L'errore C4789** avvisa sui sovraccarichi del buffer quando vengono usate funzioni di runtime (CRT) C specifiche. Anche possibile segnalare mancate corrispondenze tra le dimensioni quando vengono passati parametri o le assegnazioni vengono eseguite. L'avviso può verificarsi se le dimensioni dei dati sono noti in fase di compilazione. Questo avviso è relativo alle situazioni in cui potrebbe essere eluso il normale rilevamento di dimensioni non corrispondenti dei dati.

**L'errore C4789** genera un avviso quando i dati vengono copiati in un blocco di dati che è noto come insufficienti in fase di compilazione.

L'avviso viene generato se la copia viene utilizzato il formato intrinseco di una di queste funzioni CRT:

- [strcpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)

- [memset](../../c-runtime-library/reference/memset-wmemset.md)

- [memcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md), [wmemcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md)

L'avviso viene visualizzato anche quando si eseguire il cast di un parametro a un tipo di dati più grande e quindi effettuano un'assegnazione di copia da un riferimento lvalue.

Visual C++ può generare questo avviso per un percorso di codice che non viene mai eseguito. È possibile disabilitare temporaneamente l'avviso usando `#pragma`, come mostrato in questo esempio:

```cpp
#pragma warning( push )
#pragma warning( disable : 4789 )
// unused code that generates compiler warning C4789`
#pragma warning( pop )
```

Questo linguaggio impedisce a Visual C++ di generare l'avviso per quello specifico blocco di codice. `#pragma warning(push)` mantiene lo stato esistente prima che `#pragma warning(disable: 4789)` lo modifichi. `#pragma warning(pop)` ripristina lo stato di cui è stato eseguito il push ed elimina gli effetti di `#pragma warning(disable:4789)`. Per altre informazioni su di C++ direttiva per il preprocessore `#pragma`, vedere [avviso](../../preprocessor/warning.md) e [direttive Pragma e parola chiave pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4789.

```cpp
// C4789.cpp
// compile with: /Oi /W1 /c
#include <string.h>
#include <stdio.h>

int main()
{
    char a[20];
    strcpy(a, "0000000000000000000000000\n");   // C4789

    char buf2[20];
    memset(buf2, 'a', 21);   // C4789

    char c;
    wchar_t w = 0;
    memcpy(&c, &w, sizeof(wchar_t));
}
```

## <a name="example"></a>Esempio

Anche l'esempio seguente genera l'errore C4789.

```cpp
// C4789b.cpp
// compile with: /W1 /O2 /c
// processor: x86
short G;

void main()
{
   int * p = (int *)&G;
   *p = 3;   // C4789 - writes an int through a pointer to short
}
```