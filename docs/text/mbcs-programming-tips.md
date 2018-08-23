---
title: Suggerimenti sulla programmazione MBCS | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- _mbcs
dev_langs:
- C++
helpviewer_keywords:
- programming [C++], MBCS
- character sets [C++], multibyte
- MBCS [C++], programming
- multibyte characters [C++]
ms.assetid: d8ad36b8-917f-474e-8adb-69462adecd17
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d5beaab3fe1642b3988e9d0dcbf258eab02e26b7
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42610309"
---
# <a name="mbcs-programming-tips"></a>Suggerimenti sulla programmazione MBCS
Nello sviluppo di una nuova applicazione, si consiglia di utilizzare la codifica dei caratteri Unicode per tutte le stringhe che gli utenti finali potrebbero vedere. Il formato MBCS è una tecnologia legacy che è stata sostituita da Unicode. In questa sezione vengono forniti suggerimenti per gli sviluppatori che devono mantenere programmi esistenti che utilizzano il formato MBCS e dove non vi è possibilità di conversione in Unicode. Il Consiglio si applica alle applicazioni MFC e le applicazioni scritte senza MFC. Gli argomenti trattati includono:  
  
-   [Suggerimenti generali sulla programmazione MBCS](../text/general-mbcs-programming-advice.md)  
  
-   [Incremento e decremento dei puntatori](../text/incrementing-and-decrementing-pointers.md)  
  
-   [Indici di byte](../text/byte-indices.md)  
  
-   [Ultimo carattere di una stringa](../text/last-character-in-a-string.md)  
  
-   [Assegnazione di caratteri](../text/character-assignment.md)  
  
-   [Confronto tra caratteri](../text/character-comparison.md)  
  
-   [Overflow del buffer](../text/buffer-overflow.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per set di caratteri multibyte (MBCS, Multibyte Character Set)](../text/support-for-multibyte-character-sets-mbcss.md)