---
title: Avviso del compilatore (livello 4) C4800
ms.date: 03/14/2019
f1_keywords:
- C4800
helpviewer_keywords:
- C4800
ms.assetid: 4f409799-a250-45ed-bb5f-657691b0d9f7
ms.openlocfilehash: bcc98b9bb24f77e39a31332b8fbe2f7dcc5a7638
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924606"
---
# <a name="compiler-warning-level-4-c4800"></a>Avviso del compilatore (livello 4) C4800

::: moniker range=">= msvc-160"
Visual Studio 2019 e versioni successive:
> Conversione implicita da' *Type* ' a bool. Possibile perdita di informazioni
::: moniker-end

C4800 è un avviso di livello 3 in Visual Studio 2015 e versioni precedenti:
> ' *Type* ': forzando il valore su bool ' true ' o ' false ' (avviso di prestazioni)

Questo avviso viene generato quando un valore viene convertito in modo implicito nel tipo **`bool`** . In genere, questo messaggio viene causato dall'assegnazione di **`int`** variabili a **`bool`** variabili in cui la **`int`** variabile contiene solo valori **`true`** e e **`false`** può essere ridichiarata come tipo **`bool`** . Se non è possibile riscrivere l'espressione per usare il tipo **`bool`** , è possibile aggiungere " `!=0` " all'espressione, che fornisce il tipo di espressione **`bool`** . Eseguendo il cast dell'espressione al tipo **`bool`** , l'avviso non viene disabilitato, che è da progettazione.

::: moniker range=">= msvc-150"
Questo avviso non viene generato in Visual Studio 2017.
::: moniker-end

::: moniker range=">= msvc-160"
Questo avviso è disattivato per impostazione predefinita a partire da Visual Studio 2019. Usare __/w__*n*__4800__ per abilitare C4800 come avviso di livello *n* oppure [/Wall](../../build/reference/compiler-option-warning-level.md) per abilitare tutti gli avvisi che sono disattivati per impostazione predefinita. Per ulteriori informazioni, vedere [avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).
::: moniker-end

## <a name="example"></a>Esempio

L'esempio seguente genera C4800 e Mostra come risolverlo:

```cpp
// C4800.cpp
// compile with: /W4 /w44800
int main() {
   int i = 0;

   // To fix, instead try:
   // bool i = 0;

   bool j = i;   // C4800
   j++;
}
```
