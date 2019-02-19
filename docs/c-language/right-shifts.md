---
title: Spostamenti a destra
ms.date: 11/04/2016
ms.assetid: c878e97d-ea3c-4c6b-90a8-b1b24b2d5b19
ms.openlocfilehash: c34373f69a41ad65031753cd352098dce7e98ef4
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56149479"
---
# <a name="right-shifts"></a>Spostamenti a destra

Il risultato di uno spostamento a destra di un valore negativo tipo integrale con segno

Lo spostamento di un valore negativo a destra produce la metà del valore assoluto, arrotondato per difetto. Ad esempio, un valore `short` signed di -253 (valore esadecimale 0xFF03, valore binario 11111111 00000011) spostato a destra di un solo bit produce -127 (valore esadecimale 0xFF81, valore binario 11111111 10000001). Un positivo 253 spostato a destra produce + 126.

Spostamenti a destra mantengono il bit del segno di tipi integrali con segno. Quando un intero con segno scorre a destra, il bit più significativo rimane impostato. Ad esempio, se 0xF0000000 è con segno`int`, uno spostamento a destra produce 0xF8000000. Lo scorrimento di un numero `int` negativo a destra 32 volte produce 0xFFFFFFFF.

Quando un intero senza segno scorre a destra, il bit più significativo viene cancellato. Ad esempio, se 0xF000 è senza segno, il risultato è 0x7800. Lo scorrimento di un numero `unsigned`  positivo `int` a destra 32 volte produce 0xFFFFFFFF.

## <a name="see-also"></a>Vedere anche

[Valori Integer](../c-language/integers.md)
