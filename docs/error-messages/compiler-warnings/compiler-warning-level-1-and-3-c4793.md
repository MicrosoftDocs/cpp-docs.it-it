---
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
ms.openlocfilehash: e7ca3b10e09b0d6818fbc7f5607ebc9c95c7f15c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50623249"
---
# <a name="compiler-warning-level-1-and-3-c4793"></a>Avviso del compilatore (livelli 1 e 3) C4793

> «*funzione*': funzione compilata come codice nativo: '*motivo*»

## <a name="remarks"></a>Note

Il compilatore non è possibile compilare *funzione* nel codice gestito, anche se il [/clr](../../build/reference/clr-common-language-runtime-compilation.md) è specificata l'opzione del compilatore. Al contrario, il compilatore genera l'avviso C4793 e un messaggio esplicativo e verrà quindi compilato *funzione* nel codice nativo. Il messaggio di continuazione contiene il *motivo* testo che spiega il motivo per cui *funzione* non possono essere compilate per `MSIL`.

Si tratta di un avviso di livello 1 quando si specifica la **/clr: pure** opzione del compilatore.  Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

Nella tabella seguente elenca tutti i messaggi possibili continuazione.

|Messaggio motivo|Note|
|--------------------|-------------|
|Tipi di dati allineati non supportati nel codice gestito|CLR deve essere in grado di allocare i dati in base alle esigenze, che potrebbero non essere possibile se i dati sono allineati, ad esempio con le dichiarazioni [__m128](../../cpp/m128.md) oppure [allineare](../../cpp/align-cpp.md).|
|Le funzioni che usano ImageBase' non sono supportate nel codice gestito|`__ImageBase` è un simbolo speciale del linker in genere utilizzato solo dal codice nativo di basso livello per caricare una DLL.|
|varargs non sono supportati dal ' o clr' opzione del compilatore|Le funzioni native non è possibile chiamare funzioni gestite che hanno [elenchi di argomenti variabili](../../cpp/functions-with-variable-argument-lists-cpp.md) (varargs) perché le funzioni hanno requisiti di layout di stack diversi. Tuttavia, se si specifica la **/clr: pure** l'opzione del compilatore, gli elenchi sono supportati perché l'assembly può contenere solo funzioni gestite di argomenti variabili. Per altre informazioni, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).|
|Common Language Runtime a 64 bit non supporta dati dichiarati con il modificatore __ptr32|Un puntatore deve essere le stesse dimensioni di un puntatore nativo nella piattaforma corrente. Per altre informazioni, vedere [__ptr32, \__ptr64](../../cpp/ptr32-ptr64.md).|
|Il CLR a 32 bit non supporta dati dichiarati con il modificatore __ptr64|Un puntatore deve essere le stesse dimensioni di un puntatore nativo nella piattaforma corrente. Per altre informazioni, vedere [__ptr32, \__ptr64](../../cpp/ptr32-ptr64.md).|
|Uno o più funzioni intrinseche non sono supportata in codice gestito|Il nome della proprietà intrinseche non è disponibile al momento che viene generato il messaggio. Tuttavia, intrinseco che causa in genere questo messaggio rappresenta un'istruzione di basso livello macchina.|
|Assembly nativo inline ( asm') non è supportato in codice gestito|[Il codice assembly inline](../../assembler/inline/asm.md) può contenere codice nativo arbitraria, che non può essere gestiti.|
|Un thunk della funzione virtuale non clrcall devono essere compilati come nativi|Non -[clrcall](../../cpp/clrcall.md) thunk della funzione virtuale deve usare un indirizzo non gestito.|
|Una funzione con setjmp' debba essere compilata come nativi|CLR deve essere in grado di controllare l'esecuzione del programma. Tuttavia, il [setjmp](../../cpp/using-setjmp-longjmp.md) funzione consente di ignorare l'esecuzione del programma regolari salvando e il ripristino delle informazioni di basso livello, ad esempio i registri e dello stato di esecuzione.|

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4793.

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

L'esempio seguente genera l'errore C4793.

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