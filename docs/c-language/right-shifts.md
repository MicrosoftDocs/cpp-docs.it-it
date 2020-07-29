---
title: Spostamenti a destra
ms.date: 11/04/2016
ms.assetid: c878e97d-ea3c-4c6b-90a8-b1b24b2d5b19
ms.openlocfilehash: 4b83aa231e6e7904fe5682b32a861ffe301b9747
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87199412"
---
# <a name="right-shifts"></a>Spostamenti a destra

Il risultato di uno spostamento a destra di un valore negativo tipo integrale con segno

Lo spostamento di un valore negativo a destra produce la metà del valore assoluto, arrotondato per difetto. Ad esempio, il **`signed short`** valore-253 (Hex 0xFF03, binary 11111111 00000011) spostato a destra di un bit produce-127 (Hex 0xFF81, binary 11111111 10000001). Un positivo 253 spostato a destra produce + 126.

Spostamenti a destra mantengono il bit del segno di tipi integrali con segno. Quando un intero con segno scorre a destra, il bit più significativo rimane impostato. Se, ad esempio, 0xF0000000 è un segno **`int`** , uno spostamento a destra genera 0xF8000000. Lo spostamento di un **`int`** diritto negativo 32 volte produce 0xFFFFFFFF.

Quando un intero senza segno scorre a destra, il bit più significativo viene cancellato. Ad esempio, se 0xF000 è senza segno, il risultato è 0x7800. Lo spostamento di un oggetto o di un **`unsigned`** **`int`** diritto positivo 32 volte produce 0x00000000.

## <a name="see-also"></a>Vedere anche

[Interi](../c-language/integers.md)
