---
title: attributo di importazione implementation_only
ms.date: 08/29/2019
f1_keywords:
- implementation_only
helpviewer_keywords:
- implementation_only attribute
ms.assetid: d8cabc86-4425-45a0-9587-d57536980088
ms.openlocfilehash: 08144b3c815350acfe6a856b36d2d88085d1c04d
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70218980"
---
# <a name="implementation_only-import-attribute"></a>attributo di importazione implementation_only

**C++Specifico**

Evita la generazione del file di `.tlh` intestazione della libreria dei tipi primario.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **implementation_only**

## <a name="remarks"></a>Note

Questo file contiene tutte le dichiarazioni utilizzate per esporre il contenuto della libreria dei tipi. Il `.tli` file di intestazione, con le implementazioni delle funzioni membro wrapper, verrà generato e incluso nella compilazione.

Quando si specifica questo attributo, il contenuto dell' `.tli` intestazione si trova nello stesso spazio dei nomi di quello utilizzato normalmente `.tlh` nell'intestazione. Inoltre, le funzioni membro non vengono dichiarate come inline.

L'attributo **implementation_only** deve essere usato in combinazione con l'attributo [no_implementation](../preprocessor/no-implementation.md) come modo per mantenere le implementazioni dal file di intestazione precompilata (PCH). Un'istruzione `#import` con l'attributo `no_implementation` si trova nell'area di origine utilizzata per creare il PCH. Il PCH risultante viene utilizzato da una serie di file di origine. Un' `#import` istruzione con l'attributo **implementation_only** viene quindi usata all'esterno dell'area PCH. È necessario usare questa istruzione solo una volta in uno dei file di origine. Genera tutte le funzioni membro wrapper necessarie senza ricompilazione aggiuntiva per ogni file di origine.

> [!NOTE]
> L'attributo **implementation_only** in un' `#import` istruzione deve essere utilizzato insieme a un'altra `#import` istruzione, della stessa libreria dei tipi, con l' `no_implementation` attributo. In caso contrario, vengono generati errori del compilatore. Questo perché le definizioni di classe wrapper generate `#import` dall'istruzione con `no_implementation` l'attributo sono necessarie per compilare le implementazioni generate dall'attributo **implementation_only** .

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
