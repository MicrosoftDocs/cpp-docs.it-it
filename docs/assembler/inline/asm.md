---
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
ms.openlocfilehash: de28e4c0fad6b89a62b4479c5c32f0b8606cf3af
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169631"
---
# <a name="__asm"></a>__asm

**Sezione specifica Microsoft**

La parola chiave `__asm` consente di richiamare l'assembler inline e può essere visualizzata ovunque un'istruzione C o C++ sia valida. Non può essere visualizzata da sola. Deve essere seguita da un'istruzione dell'assembly, da un gruppo di istruzioni racchiuse tra parentesi graffe o almeno da una coppia di parentesi graffe vuote. Il termine "`__asm` block" qui si riferisce a qualsiasi istruzione o gruppo di istruzioni, racchiuso o meno tra parentesi graffe.

> [!NOTE]
> Il supporto di Visual C++ della parola chiave `asm` di C++ standard è limitato al fatto che il compilatore non genererà un errore sulla parola chiave. Tuttavia, un blocco `asm` non genererà alcun codice significativo. Usare `__asm` anziché `asm`.

## <a name="grammar"></a>Grammatica

*blocco asm*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__asm** *assembly-istruzione* **;** <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__asm {** *Assembly-Instruction-List* **}** **;** <sub>consenso esplicito</sub>

*Assembly-Instruction-List*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assembly-istruzione* **;** <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Assembly-Instruction* **;** *Assembly-Instruction-List* **;** <sub>consenso esplicito</sub>

## <a name="remarks"></a>Osservazioni

Se utilizzata senza parentesi graffe, la parola chiave `__asm` indica che il resto della riga è un'istruzione del linguaggio assembly. Se utilizzata con le parentesi graffe, significa che ogni riga tra parentesi graffe è un'istruzione del linguaggio assembly. Per la compatibilità con le versioni precedenti, `_asm` è un sinonimo di `__asm`.

Poiché la parola chiave `__asm` è un separatore di istruzione, è possibile inserire le istruzioni di assembly nella stessa riga.

Prima di Visual Studio 2005, l'istruzione

```cpp
__asm int 3
```

non ha causato la generazione del codice nativo quando viene compilato con **/CLR**; il compilatore ha convertito l'istruzione in un'istruzione di interruzioni CLR.

`__asm int 3` determina ora la generazione del codice nativo della funzione. Se si desidera che una funzione provochi un punto di rottura nel codice e se si desidera che tale funzione venga compilata in MSIL, utilizzare [__debugbreak](../../intrinsics/debugbreak.md).

Per compatibilità con le versioni precedenti, **_asm** è un sinonimo di **__asm** a meno che non sia specificata l'opzione del compilatore [/za \(Disable Language Extensions)](../../build/reference/za-ze-disable-language-extensions.md) .

## <a name="example"></a>Esempio

Il frammento di codice seguente è un blocco `__asm` semplice racchiuso tra parentesi graffe:

```cpp
__asm {
   mov al, 2
   mov dx, 0xD007
   out dx, al
}
```

In alternativa, è possibile inserire `__asm` davanti a ogni istruzione dell'assembly:

```cpp
__asm mov al, 2
__asm mov dx, 0xD007
__asm out dx, al
```

Poiché la parola chiave `__asm` è un separatore di istruzione, è anche possibile inserire le istruzioni di assembly nella stessa riga:

```cpp
__asm mov al, 2   __asm mov dx, 0xD007   __asm out dx, al
```

Tutti e tre gli esempi generano lo stesso codice, ma il primo stile, che racchiude il blocco `__asm` tra parentesi graffe, presenta alcuni vantaggi. Le parentesi graffe separano chiaramente il codice dell'assembly dal codice C o C++ ed evitano la ripetizione inutile della parola chiave `__asm`. Le parentesi graffe possono anche impedire le ambiguità. Se si desidera inserire l'istruzione C o C++ sulla stessa riga come blocco `__asm`, è necessario racchiudere il blocco tra parentesi graffe. Senza parentesi graffe, il compilatore non è in grado di riconoscere dove termina l'esecuzione del codice assembly e dove iniziano le istruzioni C o C++. Infine, poiché il testo tra parentesi graffe ha lo stesso formato del testo MASM ordinario, è possibile tagliarlo e incollarlo facilmente dai file di origine MASM esistenti.

A differenza delle parentesi graffe in C e C++, le parentesi graffe che racchiudono un blocco `__asm` non influiscono sull'ambito della variabile. È inoltre possibile annidare i blocchi `__asm`; l'annidamento non influisce sull'ambito della variabile.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Parole chiave](../../cpp/keywords-cpp.md)<br/>
[Assembler inline](../../assembler/inline/inline-assembler.md)<br/>
