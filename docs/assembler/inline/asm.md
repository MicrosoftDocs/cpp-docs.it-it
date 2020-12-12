---
description: 'Ulteriori informazioni su: `__asm`'
title: __asm
ms.date: 10/09/2018
f1_keywords:
- __asm
- _asm
- __asm_cpp
helpviewer_keywords:
- __asm keyword [C++], vs. asm blocks
- __asm keyword [C++]
ms.assetid: 77ff3bc9-a492-4b5e-85e1-fa4e414e79cd
ms.openlocfilehash: 5fa4e64bdb9ae4fc01e6e379de3e8a6771959e80
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118056"
---
# `__asm`

**Specifico di Microsoft**

La **`__asm`** parola chiave richiama l'assembler inline e può essere visualizzata ovunque un'istruzione C o C++ sia valida. Non può essere visualizzata da sola. Deve essere seguita da un'istruzione dell'assembly, da un gruppo di istruzioni racchiuse tra parentesi graffe o almeno da una coppia di parentesi graffe vuote. Il termine " **`__asm`** blocco" si riferisce a qualsiasi istruzione o gruppo di istruzioni, indipendentemente dal fatto che sia racchiuso tra parentesi graffe.

> [!NOTE]
> Visual C++ supporto per la parola chiave di C++ standard **`asm`** è limitato al fatto che il compilatore non genererà un errore sulla parola chiave. Tuttavia, un **`asm`** blocco non genererà alcun codice significativo. Usare **`__asm`** anziché **`asm`** .

## <a name="grammar"></a>Grammatica

*blocco asm*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__asm`***assembly-istruzione* **`;`** <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__asm {`** elenco di istruzioni *assembly* **`}`** **`;`** <sub>consenso esplicito</sub>

*Assembly-Instruction-List*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assembly-istruzione* **`;`** <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assembly-istruzione* **`;`** elenco di istruzioni *assembly* **`;`** <sub>consenso esplicito</sub>

## <a name="remarks"></a>Commenti

Se utilizzata senza parentesi graffe, la **`__asm`** parola chiave indica che il resto della riga è un'istruzione del linguaggio assembly. Se utilizzata con le parentesi graffe, significa che ogni riga tra parentesi graffe è un'istruzione del linguaggio assembly. Per compatibilità con le versioni precedenti, **`_asm`** è un sinonimo di **`__asm`** .

Poiché la **`__asm`** parola chiave è un separatore di istruzione, è possibile inserire le istruzioni di assembly nella stessa riga.

Prima di Visual Studio 2005, l'istruzione

```cpp
__asm int 3
```

non ha causato la generazione del codice nativo quando viene compilato con **/CLR**; il compilatore ha convertito l'istruzione in un'istruzione di interruzioni CLR.

`__asm int 3` determina ora la generazione del codice nativo della funzione. Se si desidera che una funzione provochi un punto di rottura nel codice e se si desidera che tale funzione venga compilata in MSIL, utilizzare [__debugbreak](../../intrinsics/debugbreak.md).

Per compatibilità con le versioni precedenti, **`_asm`** è un sinonimo di, a **`__asm`** meno che non sia specificata l'opzione del compilatore [/za \( Disable Language Extensions)](../../build/reference/za-ze-disable-language-extensions.md) .

## <a name="example"></a>Esempio

Il frammento di codice seguente è un **`__asm`** blocco semplice racchiuso tra parentesi graffe:

```cpp
__asm {
   mov al, 2
   mov dx, 0xD007
   out dx, al
}
```

In alternativa, è possibile inserire **`__asm`** davanti a ogni istruzione dell'assembly:

```cpp
__asm mov al, 2
__asm mov dx, 0xD007
__asm out dx, al
```

Poiché la **`__asm`** parola chiave è un separatore di istruzione, è anche possibile inserire le istruzioni di assembly nella stessa riga:

```cpp
__asm mov al, 2   __asm mov dx, 0xD007   __asm out dx, al
```

Tutti e tre gli esempi generano lo stesso codice, ma il primo stile, che racchiude il **`__asm`** blocco tra parentesi graffe, presenta alcuni vantaggi. Le parentesi graffe separano chiaramente il codice dell'assembly dal codice C o C++ ed evitano la ripetizione inutile della **`__asm`** parola chiave. Le parentesi graffe possono anche impedire le ambiguità. Se si desidera inserire un'istruzione C o C++ sulla stessa riga di un **`__asm`** blocco, è necessario racchiudere il blocco tra parentesi graffe. Senza parentesi graffe, il compilatore non è in grado di riconoscere dove termina l'esecuzione del codice assembly e dove iniziano le istruzioni C o C++. Infine, poiché il testo tra parentesi graffe ha lo stesso formato del testo MASM ordinario, è possibile tagliarlo e incollarlo facilmente dai file di origine MASM esistenti.

A differenza delle parentesi graffe in C e C++, le parentesi graffe che racchiudono un **`__asm`** blocco non influiscono sull'ambito della variabile. È anche possibile annidare i **`__asm`** blocchi; l'annidamento non influisce sull'ambito della variabile.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Parole chiave](../../cpp/keywords-cpp.md)<br/>
[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
