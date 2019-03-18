---
title: Avviso (livello 4) del compilatore C4800
ms.date: 03/14/2019
f1_keywords:
- C4800
helpviewer_keywords:
- C4800
ms.assetid: 4f409799-a250-45ed-bb5f-657691b0d9f7
ms.openlocfilehash: 46418063625e16385497740a4f7e3d837e923156
ms.sourcegitcommit: a901c4acbfc80ca10663d37c09921f04c5b6dd17
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/18/2019
ms.locfileid: "58142573"
---
# <a name="compiler-warning-level-4-c4800"></a>Avviso (livello 4) del compilatore C4800

::: moniker range=">= vs-2019"
Visual Studio 2019 e versioni successive:
> La conversione implicita da '*tipo*' in bool. Possibile perdita di informazioni
::: moniker-end

C4800 è un avviso di livello 3 in Visual Studio 2015 e versioni precedenti:
> «*tipo*': forzare il valore bool 'true' o 'false' (avviso di prestazioni)

Questo avviso viene generato quando un valore viene implicitamente convertito nel tipo `bool`. In genere, questo messaggio viene visualizzato mediante l'assegnazione `int` le variabili `bool` variabili in cui il `int` variabile contiene solo valori **true** e **false**e può essere ridichiarato come tipo `bool`. Se è non è possibile riscrivere l'espressione per l'uso di tipo `bool`, quindi è possibile aggiungere "`!=0`" per l'espressione, che fornisce il tipo dell'espressione `bool`. Esegue il cast dell'espressione nel tipo `bool` non disabilitare l'avviso, per impostazione predefinita.

::: moniker range=">= vs-2017"
Questo avviso non viene generato in Visual Studio 2017.
::: moniker-end

::: moniker range=">= vs-2019"
Questo avviso è disattivato per impostazione predefinita a partire da Visual Studio 2019. Uso __/w__*n*__4800__ abilitare C4800 come livello *n* warning, o [/Wall](../../build/reference/compiler-option-warning-level.md) per abilitare tutti gli avvisi che sono disattivati per impostazione predefinita. Per altre informazioni, vedere [del compilatore avvisi che sono disattivata per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).
::: moniker-end

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4800 e Mostra come risolverlo:

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