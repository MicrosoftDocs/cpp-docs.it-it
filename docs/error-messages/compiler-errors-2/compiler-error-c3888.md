---
title: Errore del compilatore C3888
ms.date: 11/04/2016
f1_keywords:
- C3888
helpviewer_keywords:
- C3888
ms.assetid: 40820812-79c5-4dcd-a19d-b4164d25fc8a
ms.openlocfilehash: e4d52946126e7be6c6f2aef34b5eb5a93a0babad
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59033641"
---
# <a name="compiler-error-c3888"></a>Errore del compilatore C3888

'name': l'espressione const associata a questo membro dati literal non è supportata da C++/CLI

Il membro dati *nome* dichiarato con la parola chiave [literal](../../extensions/literal-cpp-component-extensions.md) viene inizializzato con un valore non supportato dal compilatore. Il compilatore supporta solo tipi integrali, enum o string costanti. È probabile che l'errore **C3888** sia causato dall'inizializzazione del membro dati con una matrice di byte.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Verificare che il membro dati literal dichiarato sia di un tipo supportato.

## <a name="see-also"></a>Vedere anche

[literal](../../extensions/literal-cpp-component-extensions.md)