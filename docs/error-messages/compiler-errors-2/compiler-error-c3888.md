---
description: 'Altre informazioni su: errore del compilatore C3888'
title: Errore del compilatore C3888
ms.date: 11/04/2016
f1_keywords:
- C3888
helpviewer_keywords:
- C3888
ms.assetid: 40820812-79c5-4dcd-a19d-b4164d25fc8a
ms.openlocfilehash: 5b47d78d0d6c75f4bdd266f95fff2ce4ab025d4f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97274320"
---
# <a name="compiler-error-c3888"></a>Errore del compilatore C3888

'name': l'espressione const associata a questo membro dati literal non è supportata da C++/CLI

Il membro dati *nome* dichiarato con la parola chiave [literal](../../extensions/literal-cpp-component-extensions.md) viene inizializzato con un valore non supportato dal compilatore. Il compilatore supporta solo tipi integrali, enum o string costanti. È probabile che l'errore **C3888** sia causato dall'inizializzazione del membro dati con una matrice di byte.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Verificare che il membro dati literal dichiarato sia di un tipo supportato.

## <a name="see-also"></a>Vedi anche

[literal](../../extensions/literal-cpp-component-extensions.md)
