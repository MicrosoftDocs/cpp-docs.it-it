---
title: "Spostamenti a destra | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: c878e97d-ea3c-4c6b-90a8-b1b24b2d5b19
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Spostamenti a destra
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il risultato di uno spostamento a destra di un valore negativo tipo integrale con segno  
  
 Lo spostamento di un valore negativo a destra produce la metà del valore assoluto, arrotondato per difetto.  Ad esempio, se è firmato `short` valore di \-253 \(0xFF03 esadecimale, binario 11111111 00000011\) spostato a destra di un bit produce \-127 \(0xFF81 esadecimale, binario 11111111 10000001\).  Un positivo 253 spostato a destra produce \+ 126.  
  
 Spostamenti a destra mantengono il bit del segno di tipi integrali con segno.  Quando un intero con segno scorre a destra, il bit più significativo rimane impostato.  Ad esempio, se 0xF0000000 è con segno`int`, uno spostamento a destra produce 0xF8000000.  Lo scorrimento di un numero `int` negativo a destra 32 volte produce 0xFFFFFFFF.  
  
 Quando un intero senza segno scorre a destra, il bit più significativo viene cancellato.  Ad esempio, se 0xF000 è senza segno, il risultato è 0x7800.  Lo scorrimento di un numero `unsigned` positivo `int` a destra 32 volte produce 0xFFFFFFFF.  
  
## Vedere anche  
 [Integer](../c-language/integers.md)