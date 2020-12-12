---
description: 'Altre informazioni su: spostamenti a destra'
title: Spostamenti a destra
ms.date: 11/04/2016
ms.assetid: c878e97d-ea3c-4c6b-90a8-b1b24b2d5b19
ms.openlocfilehash: 5bc359357e8a3a2e00d0c75012e0e6044d8055f9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97292923"
---
# <a name="right-shifts"></a>Spostamenti a destra

Il risultato di uno spostamento a destra di un valore negativo tipo integrale con segno

Lo spostamento di un valore negativo a destra produce la metà del valore assoluto, arrotondato per difetto. Ad esempio, il **`signed short`** valore-253 (Hex 0xFF03, binary 11111111 00000011) spostato a destra di un bit produce-127 (Hex 0xFF81, binary 11111111 10000001). Un positivo 253 spostato a destra produce + 126.

Spostamenti a destra mantengono il bit del segno di tipi integrali con segno. Quando un intero con segno scorre a destra, il bit più significativo rimane impostato. Se, ad esempio, 0xF0000000 è un segno **`int`** , uno spostamento a destra genera 0xF8000000. Lo spostamento di un **`int`** diritto negativo 32 volte produce 0xFFFFFFFF.

Quando un intero senza segno scorre a destra, il bit più significativo viene cancellato. Ad esempio, se 0xF000 è senza segno, il risultato è 0x7800. Lo spostamento di un oggetto o di un **`unsigned`** **`int`** diritto positivo 32 volte produce 0x00000000.

## <a name="see-also"></a>Vedi anche

[Integer](../c-language/integers.md)
