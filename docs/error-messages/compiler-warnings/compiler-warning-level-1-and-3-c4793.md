---
title: Compilatore avviso (livello 1 e 3) C4793 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4793
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e3942d09e823fc6bd2f370a8c8ee72b8d00e9a98
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704932"
---
# <a name="compiler-warning-level-1-and-3-c4793"></a>Avviso del compilatore (livelli 1 e 3) C4793

> '*funzione*': funzione compilata come codice nativo: '*motivo*'

## <a name="remarks"></a>Note

Il compilatore non è possibile compilare *funzione* in codice gestito, anche se il [/clr](../../build/reference/clr-common-language-runtime-compilation.md) è specificata l'opzione del compilatore. Al contrario, il compilatore genera l'avviso C4793 e un messaggio esplicativo e quindi compila *funzione* in codice nativo. Contiene il messaggio di continuazione di *motivo* testo che spiega perché *funzione* non possono essere compilate a `MSIL`.

Si tratta di un avviso di livello 1 quando si specifica il **/clr: pure** opzione del compilatore.  Il **/clr: pure** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

Nella tabella seguente elenca tutti i messaggi di continuazione possibili.

|Messaggio ragione|Note|
|--------------------|-------------|
|Tipi di dati allineati non supportati nel codice gestito|CLR deve essere in grado di allocare i dati in base alle esigenze, che potrebbero non essere possibile se i dati sono allineati con le dichiarazioni, ad esempio [m128](../../cpp/m128.md) o [allineare](../../cpp/align-cpp.md).|
|Le funzioni che utilizzano ImageBase' non sono supportate nel codice gestito|`__ImageBase` è un simbolo speciale del linker che è in genere utilizzato solo dal codice nativo di basso livello per caricare una DLL.|
|varargs non sono supportate per il ' o clr' opzione del compilatore|Le funzioni native non è possibile chiamare funzioni gestite che hanno [elenchi di argomenti variabili](../../cpp/functions-with-variable-argument-lists-cpp.md) (varargs) perché le funzioni hanno requisiti di layout di stack diversi. Tuttavia, se si specifica il **/clr: pure** opzione del compilatore argomenti variabili, gli elenchi sono supportati perché l'assembly può contenere solo funzioni gestite. Per ulteriori informazioni, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).|
|Common Language Runtime a 64 bit non supporta dati dichiarati con il modificatore ptr32|Un puntatore deve essere le stesse dimensioni di un puntatore nativo sulla piattaforma corrente. Per ulteriori informazioni, vedere [ptr32, \_ptr64](../../cpp/ptr32-ptr64.md).|
|Il CLR a 32 bit non supporta dati dichiarati con il modificatore ptr64|Un puntatore deve essere le stesse dimensioni di un puntatore nativo sulla piattaforma corrente. Per ulteriori informazioni, vedere [ptr32, \_ptr64](../../cpp/ptr32-ptr64.md).|
|Uno o più intrinseci non sono supportato in codice gestito|Il nome della proprietà intrinseche non è disponibile al momento che viene generato il messaggio. Tuttavia, un intrinseco che causa in genere questo messaggio rappresenta un'istruzione di basso livello macchina.|
|Assembly nativo inline ( asm') non è supportato in codice gestito|[Il codice assembly inline](../../assembler/inline/asm.md) può contenere codice nativo arbitrario che non può essere gestiti.|
|Un thunk di funzione virtuale non clrcall deve essere compilato come nativi|Non -[clrcall](../../cpp/clrcall.md) thunk di funzione virtuale è necessario utilizzare un indirizzo non gestito.|
|Una funzione che usa setjmp' debba essere compilata come nativi|CLR deve essere in grado di controllare l'esecuzione del programma. Tuttavia, il [setjmp](../../cpp/using-setjmp-longjmp.md) funzione ignora l'esecuzione del programma regolare salvataggio e il ripristino delle informazioni di basso livello, ad esempio i registri e stato di esecuzione.|

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