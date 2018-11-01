---
title: Errore del compilatore C3888
ms.date: 11/04/2016
f1_keywords:
- C3888
helpviewer_keywords:
- C3888
ms.assetid: 40820812-79c5-4dcd-a19d-b4164d25fc8a
ms.openlocfilehash: 067412e59041cb98b68cb373c4671c243ab8a0ec
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50479066"
---
# <a name="compiler-error-c3888"></a>Errore del compilatore C3888

'name': l'espressione const associata a questo membro dati literal non è supportata da C++/CLI

Il membro dati *nome* dichiarato con la parola chiave [literal](../../windows/literal-cpp-component-extensions.md) viene inizializzato con un valore non supportato dal compilatore. Il compilatore supporta solo tipi integrali, enum o string costanti. È probabile che l'errore **C3888** sia causato dall'inizializzazione del membro dati con una matrice di byte.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Verificare che il membro dati literal dichiarato sia di un tipo supportato.

## <a name="see-also"></a>Vedere anche

[literal](../../windows/literal-cpp-component-extensions.md)