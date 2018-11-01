---
title: Avviso del compilatore (livello 1) C4364
ms.date: 11/04/2016
f1_keywords:
- C4364
helpviewer_keywords:
- C4364
ms.assetid: 1477634c-d60f-4570-ad16-1aaeae24ac7f
ms.openlocfilehash: db2774b6a73a989b4e9250719f99122826b486fe
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50643599"
---
# <a name="compiler-warning-level-1-c4364"></a>Avviso del compilatore (livello 1) C4364

\#utilizzo per l'assembly 'file' visualizzato in precedenza al percorso (numero_riga) senza l'attributo as_friend; as_friend non applicato

Oggetto `#using` direttiva è stata ripetuta per un file di metadati specificato, ma la `as_friend` qualificatore non è stato usato nella prima occorrenza, il compilatore ignorerà la seconda `as_friend`.

Per altre informazioni, vedere [gli assembly Friend (C++)](../../dotnet/friend-assemblies-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente crea un componente.

```
// C4364.cpp
// compile with: /clr /LD
ref class A {};
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4364.

```
// C4364_b.cpp
// compile with: /clr /W1 /c
#using " C4364.dll"
#using " C4364.dll" as_friend   // C4364
```