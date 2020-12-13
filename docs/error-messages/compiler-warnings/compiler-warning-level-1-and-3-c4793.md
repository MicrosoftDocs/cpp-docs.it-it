---
description: 'Altre informazioni su: avviso del compilatore (livello 1 e 3) C4793'
title: Avviso del compilatore (livelli 1 e 3) C4793
ms.date: 11/04/2016
f1_keywords:
- C4793
helpviewer_keywords:
- C6634
- C6635
- C6640
- C6630
- C6639
- C6636
- C6638
- C6631
- C6637
- C4793
ms.assetid: 819ada53-1d9c-49b8-a629-baf8c12314e6
ms.openlocfilehash: 00d8a8c3c0537b1960ee287b2ec5fea25491d87e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336031"
---
# <a name="compiler-warning-level-1-and-3-c4793"></a>Avviso del compilatore (livelli 1 e 3) C4793

> '*Function*': la funzione è compilata come codice nativo:'*reason*'

## <a name="remarks"></a>Commenti

Il compilatore non può compilare la *funzione* nel codice gestito, anche se è specificata l'opzione del compilatore [/CLR](../../build/reference/clr-common-language-runtime-compilation.md) . Al contrario, il compilatore genera un avviso C4793 e un messaggio di continuazione esplicativo e quindi compila la *funzione* in codice nativo. Il messaggio di continuazione contiene il testo del *motivo* che spiega perché la *funzione* non può essere compilata `MSIL` .

Si tratta di un avviso di livello 1 quando si specifica l'opzione del compilatore **/CLR: pure** .  L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

Nella tabella seguente sono elencati tutti i messaggi di continuazione possibili.

|Messaggio motivo|Commenti|
|--------------------|-------------|
|Tipi di dati allineati non supportati nel codice gestito|CLR deve essere in grado di allocare i dati in base alle esigenze, che potrebbero non essere possibili se i dati sono allineati con dichiarazioni quali [__m128](../../cpp/m128.md) o [align](../../cpp/align-cpp.md).|
|Le funzioni che utilizzano ' __ImageBase ' non sono supportate nel codice gestito|`__ImageBase` simbolo del linker speciale usato in genere solo dal codice nativo di basso livello per caricare una DLL.|
|varargs non è supportato dall'opzione del compilatore '/CLR '|Le funzioni native non possono chiamare funzioni gestite con [elenchi di argomenti variabili](../../cpp/functions-with-variable-argument-lists-cpp.md) (varargs) perché le funzioni presentano requisiti di layout dello stack diversi. Tuttavia, se si specifica l'opzione del compilatore **/CLR: pure** , gli elenchi di argomenti variabili sono supportati perché l'assembly può contenere solo funzioni gestite. Per altre informazioni, vedere [codice pure e verificabile (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).|
|CLR a 64 bit non supporta i dati dichiarati con il modificatore __ptr32|Un puntatore deve avere le stesse dimensioni di un puntatore nativo sulla piattaforma corrente. Per ulteriori informazioni, vedere [__ptr32, \_ _ptr64](../../cpp/ptr32-ptr64.md).|
|CLR a 32 bit non supporta i dati dichiarati con il modificatore __ptr64|Un puntatore deve avere le stesse dimensioni di un puntatore nativo sulla piattaforma corrente. Per ulteriori informazioni, vedere [__ptr32, \_ _ptr64](../../cpp/ptr32-ptr64.md).|
|Uno o più oggetti intrinseci non sono supportati nel codice gestito|Il nome della funzione intrinseca non è disponibile al momento della creazione del messaggio. Tuttavia, un intrinseco che causa questo messaggio rappresenta in genere un'istruzione del computer di basso livello.|
|Assembly nativo inline (' __asm ') non supportato nel codice gestito|Il [codice assembly inline](../../assembler/inline/asm.md) può contenere codice nativo arbitrario, che non può essere gestito.|
|Un thunk della funzione virtuale non __clrcall deve essere compilato come nativo|Un thunk di funzione virtuale non[__clrcall](../../cpp/clrcall.md) deve usare un indirizzo non gestito.|
|Una funzione che usa ' _setjmp ' deve essere compilata come nativa|CLR deve essere in grado di controllare l'esecuzione del programma. Tuttavia, la funzione [setjmp](../../cpp/using-setjmp-longjmp.md) ignora l'esecuzione regolare del programma salvando e ripristinando le informazioni di basso livello, ad esempio i registri e lo stato di esecuzione.|

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4793.

```cpp
// C4793.cpp
// compile with: /c /clr /W3
// processor: x86
int asmfunc(void) {   // C4793, compiled as unmanaged, native code
   __asm {
      mov eax, 0
   }
}
```

```Output
warning C4793: 'asmfunc' : function is compiled as native code:
        Inline native assembly ('__asm') is not supported in managed code
```

L'esempio seguente genera l'C4793.

```cpp
// C4793_b.cpp
// compile with: /c /clr /W3
#include <setjmp.h>
jmp_buf test_buf;

void f() {
   setjmp(test_buf);   // C4793 warning
}
```

```Output
warning C4793: 'f' : function is compiled as native code:
        A function using '_setjmp' must be compiled as native
```
