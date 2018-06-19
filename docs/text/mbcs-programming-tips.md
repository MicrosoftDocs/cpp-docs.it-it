---
title: Suggerimenti sulla programmazione MBCS | Documenti Microsoft
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
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7eb6e298961580c959235a97f37793df41d1124f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33855279"
---
# <a name="mbcs-programming-tips"></a>Suggerimenti sulla programmazione MBCS
Nello sviluppo di una nuova applicazione, si consiglia di utilizzare la codifica dei caratteri Unicode per tutte le stringhe che gli utenti finali potrebbero vedere. Il formato MBCS è una tecnologia legacy che è stata sostituita da Unicode. In questa sezione vengono forniti suggerimenti per gli sviluppatori che devono mantenere programmi esistenti che utilizzano il formato MBCS e dove non vi è possibilità di conversione in Unicode. L'avviso si applica a applicazioni MFC e le applicazioni scritte senza MFC. Gli argomenti trattati includono:  
  
-   [Suggerimenti generali sulla programmazione MBCS](../text/general-mbcs-programming-advice.md)  
  
-   [Incremento e decremento dei puntatori](../text/incrementing-and-decrementing-pointers.md)  
  
-   [Indici di byte](../text/byte-indices.md)  
  
-   [Ultimo carattere di una stringa](../text/last-character-in-a-string.md)  
  
-   [Assegnazione di caratteri](../text/character-assignment.md)  
  
-   [Confronto tra caratteri](../text/character-comparison.md)  
  
-   [Overflow del buffer](../text/buffer-overflow.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per set di caratteri multibyte (MBCS, Multibyte Character Set)](../text/support-for-multibyte-character-sets-mbcss.md)