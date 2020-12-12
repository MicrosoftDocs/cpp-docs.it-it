---
description: 'Altre informazioni su: archiviazione di valori letterali stringa'
title: Archiviazione di valori letterali stringa
ms.date: 11/04/2016
helpviewer_keywords:
- string literals, storage
ms.assetid: ba5e4d2c-d456-44b3-a8ca-354af547ac50
ms.openlocfilehash: 5139d480af6b808b5b2e008500794d95d63a9980
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205265"
---
# <a name="storage-of-string-literals"></a>Archiviazione di valori letterali stringa

I caratteri di una stringa letterale vengono archiviati in ordine in posizioni di memoria contigue. Una sequenza di escape, ad esempio **\\\\** o **\\ "**, all'interno di un valore letterale stringa viene conteggiata come un singolo carattere. Un carattere null (rappresentato dalla sequenza di escape **\0**) viene automaticamente aggiunto a ogni stringa letterale e ne contrassegna la fine. Questo errore si verifica durante la fase 7 della [conversione](../preprocessor/phases-of-translation.md) . Si noti che il compilatore non può archiviare due stringhe identiche in due indirizzi diversi. [/GF](../build/reference/gf-eliminate-duplicate-strings.md) induce il compilatore a inserire una sola copia di stringhe identiche nel file eseguibile.

## <a name="remarks"></a>Commenti

**Specifico di Microsoft**

Le stringhe hanno una durata di archiviazione statica. Per altre informazioni sulla durata dell'archiviazione, vedere [Classi di archiviazione](../c-language/c-storage-classes.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Valori letterali stringa C](../c-language/c-string-literals.md)
