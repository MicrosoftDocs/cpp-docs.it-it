---
description: 'Altre informazioni su: implementation_only attributo Import'
title: implementation_only attributo Import
ms.date: 08/29/2019
f1_keywords:
- implementation_only
helpviewer_keywords:
- implementation_only attribute
ms.assetid: d8cabc86-4425-45a0-9587-d57536980088
ms.openlocfilehash: 8afeb9981c5931596fc500419755521a41a3d7c7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236542"
---
# <a name="implementation_only-import-attribute"></a>implementation_only attributo Import

**Sezione specifica C++**

Evita la generazione del file di `.tlh` intestazione della libreria dei tipi primario.

## <a name="syntax"></a>Sintassi

> **#import** **implementation_only** della *libreria di tipi*

## <a name="remarks"></a>Commenti

Questo file contiene tutte le dichiarazioni utilizzate per esporre il contenuto della libreria dei tipi. Il `.tli` file di intestazione, con le implementazioni delle funzioni membro wrapper, verrà generato e incluso nella compilazione.

Quando si specifica questo attributo, il contenuto dell' `.tli` intestazione si trova nello stesso spazio dei nomi di quello utilizzato normalmente nell' `.tlh` intestazione. Inoltre, le funzioni membro non vengono dichiarate come inline.

L'attributo **implementation_only** deve essere utilizzato insieme all'attributo [no_implementation](../preprocessor/no-implementation.md) come modo per mantenere le implementazioni dal file di intestazione precompilata (PCH). Un'istruzione `#import` con l'attributo `no_implementation` si trova nell'area di origine utilizzata per creare il PCH. Il PCH risultante viene utilizzato da una serie di file di origine. Un' `#import` istruzione con l'attributo **implementation_only** viene quindi usata all'esterno dell'area PCH. È necessario usare questa istruzione solo una volta in uno dei file di origine. Genera tutte le funzioni membro wrapper necessarie senza ricompilazione aggiuntiva per ogni file di origine.

> [!NOTE]
> L'attributo **implementation_only** in un' `#import` istruzione deve essere utilizzato insieme a un'altra `#import` istruzione, della stessa libreria dei tipi, con l' `no_implementation` attributo. In caso contrario, vengono generati errori del compilatore. Questo perché le definizioni di classe wrapper generate dall' `#import` istruzione con l' `no_implementation` attributo sono necessarie per compilare le implementazioni generate dall'attributo **implementation_only** .

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
