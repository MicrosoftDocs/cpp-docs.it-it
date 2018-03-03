---
title: Spostamenti a destra | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: c878e97d-ea3c-4c6b-90a8-b1b24b2d5b19
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 307cf91bf86f2912ad6cafa7e89f48e614c3865a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="right-shifts"></a>Spostamenti a destra
Il risultato di uno spostamento a destra di un valore negativo tipo integrale con segno  
  
 Lo spostamento di un valore negativo a destra produce la metà del valore assoluto, arrotondato per difetto. Ad esempio, un valore `short` signed di -253 (valore esadecimale 0xFF03, valore binario 11111111 00000011) spostato a destra di un solo bit produce -127 (valore esadecimale 0xFF81, valore binario 11111111 10000001). Un positivo 253 spostato a destra produce + 126.  
  
 Spostamenti a destra mantengono il bit del segno di tipi integrali con segno. Quando un intero con segno scorre a destra, il bit più significativo rimane impostato. Ad esempio, se 0xF0000000 è con segno`int`, uno spostamento a destra produce 0xF8000000. Lo scorrimento di un numero `int` negativo a destra 32 volte produce 0xFFFFFFFF.  
  
 Quando un intero senza segno scorre a destra, il bit più significativo viene cancellato. Ad esempio, se 0xF000 è senza segno, il risultato è 0x7800. Lo scorrimento di un numero `unsigned`  positivo `int` a destra 32 volte produce 0xFFFFFFFF.  
  
## <a name="see-also"></a>Vedere anche  
 [Valori Integer](../c-language/integers.md)