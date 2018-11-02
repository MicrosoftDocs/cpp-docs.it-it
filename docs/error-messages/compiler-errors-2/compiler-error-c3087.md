---
title: Errore del compilatore C3087
ms.date: 11/04/2016
f1_keywords:
- C3087
helpviewer_keywords:
- C3087
ms.assetid: 4f5bdd52-a853-4f02-b160-6868e9190b9d
ms.openlocfilehash: 43044e0708ce9c30099c7d25935a8ff9605f45ca
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50489716"
---
# <a name="compiler-error-c3087"></a>Errore del compilatore C3087

'named_argument': la chiamata di 'attribute' inizializza già questo membro

È stato specificato un argomento denominato nello stesso blocco di attributi di un argomento senza nome per lo stesso valore. Specificare solo un argomento denominato o un argomento senza nome.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3087.

```
// C3087.cpp
// compile with: /c
[idl_quote("quote1", text="quote2")];   // C3087
[idl_quote(text="quote3")];   // OK
[idl_quote("quote4")];   // OK
```